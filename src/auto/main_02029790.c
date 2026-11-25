/* 1 function from 0x02029790 to 0x0202A5A4 (main), found by ds-decomp. */
#include "common.h"

extern s32 func_0202c658(s32);
extern s32 func_0202c820(u8);
extern u8 *func_0202c7d8(s32);
extern int func_0202bf4c(u16, u8);
extern u8 *func_0202c920(u32);
extern u8 *func_0202e548(u8);
extern u8 **data_02160244;
s32 func_02029790(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16 count = 0;
    u8 pos;
    u16 i;
    u8 *unit;
    u8 *v;

    switch (arg0) {
    case 1:
        pos = func_0202c658(arg3);
        if (arg1 == pos / 3 + 1) {
            count++;
        }
        if (arg2 == pos % 3 + 1) {
            count++;
        }
        if (count == 2) {
            return 1;
        }
        return 0;

    case 2:
        pos = func_0202c658(arg3);
        if (arg1 == pos / 3 + 1) {
            count++;
        }
        if (arg2 == pos % 3 + 1) {
            count++;
        }
        if (count == 2) {
            return 0;
        }
        return 1;

    case 3:
        pos = func_0202c658(arg3);
        if (arg1 == pos / 3 + 1) {
            return 1;
        }
        break;

    case 4:
        pos = func_0202c658(arg3);
        if (arg1 != pos / 3 + 1) {
            return 1;
        }
        break;

    case 5:
        pos = func_0202c658(arg3);
        switch (pos / 3 + 1) {
        case 1:
            return 1;
        case 3:
            return 0;
        case 2:
            if (func_0202c820(0)) count++;
            if (func_0202c820(1)) count++;
            if (func_0202c820(2)) count++;
            if (count == 0) {
                return 1;
            }
            break;
        }
        break;

    case 6:
        pos = func_0202c658(arg3);
        switch (pos / 3 + 1) {
        case 1:
            return 0;
        case 2:
            for (i = 0; i < 6; i++) {
                if (pos != i && func_0202c820(i)) {
                    count++;
                }
            }
            if (count != 0) {
                return 1;
            }
            break;
        case 3:
            for (i = 0; i < 9; i++) {
                if (pos != i && func_0202c820(i)) {
                    count++;
                }
            }
            if (count != 0) {
                return 1;
            }
            break;
        }
        break;

    case 7:
        pos = func_0202c658(arg3);
        switch (pos / 3 + 1) {
        case 1:
            return 0;
        case 3:
            return 1;
        case 2:
            for (i = 0; i < 6; i++) {
                if (pos != i && func_0202c820(i)) {
                    count++;
                }
            }
            if (count != 0) {
                return 1;
            }
            break;
        }
        break;

    case 8:
        pos = func_0202c658(arg3);
        switch (pos / 3 + 1) {
        case 1:
            for (i = 0; i < 9; i++) {
                if (pos != i && func_0202c820(i)) {
                    count++;
                }
            }
            if (count != 0) {
                return 1;
            }
            break;
        case 2:
            for (i = 3; i < 9; i++) {
                if (pos != i && func_0202c820(i)) {
                    count++;
                }
            }
            if (count != 0) {
                return 1;
            }
            break;
        case 3:
            return 0;
        }
        break;

    case 9:
    case 10:
        pos = func_0202c658(arg3);
        switch (pos % 3 + 1) {
        case 1:
            if (func_0202c820(0)) count++;
            if (func_0202c820(3)) count++;
            if (func_0202c820(6)) count++;
            break;
        case 2:
            if (func_0202c820(1)) count++;
            if (func_0202c820(4)) count++;
            if (func_0202c820(7)) count++;
            break;
        case 3:
            if (func_0202c820(2)) count++;
            if (func_0202c820(5)) count++;
            if (func_0202c820(8)) count++;
            break;
        }
        count--;
        if (arg0 == 9 && count >= arg1) {
            return 1;
        }
        if (arg0 == 10 && count <= arg1) {
            return 1;
        }
        break;

    case 11:
    case 12:
        pos = func_0202c658(arg3);
        switch (pos / 3 + 1) {
        case 1:
            if (func_0202c820(0)) count++;
            if (func_0202c820(1)) count++;
            if (func_0202c820(2)) count++;
            break;
        case 2:
            if (func_0202c820(3)) count++;
            if (func_0202c820(4)) count++;
            if (func_0202c820(5)) count++;
            break;
        case 3:
            if (func_0202c820(6)) count++;
            if (func_0202c820(7)) count++;
            if (func_0202c820(8)) count++;
            break;
        }
        count--;
        if (arg0 == 11 && count >= arg1) {
            return 1;
        }
        if (arg0 == 12 && count <= arg1) {
            return 1;
        }
        break;

    case 13:
    case 14:
        pos = func_0202c658(arg3);
        if (pos / 3 == (pos + 1) / 3 && func_0202c820(pos + 1)) count++;
        if (pos / 3 == (pos - 1) / 3 && func_0202c820(pos - 1)) count++;
        if (pos % 3 == (pos + 3) % 3 && func_0202c820(pos + 3)) count++;
        if (pos % 3 == (pos - 3) % 3 && func_0202c820(pos - 3)) count++;
        if (arg0 == 13 && count >= arg1) {
            return 1;
        }
        if (arg0 == 14 && count <= arg1) {
            return 1;
        }
        break;

    case 15:
        for (i = 0; i < 9; i++) {
            if (func_0202c7d8((s8)(u8)i) != NULL) {
                count++;
            }
        }
        if (count < arg1) {
            break;
        }
        return 1;

    case 16:
        if (func_0202bf4c((u16)arg1, (u8)arg2) == 0) {
            break;
        }
        return 1;

    case 17:
        if (func_0202bf4c((u16)arg1, (u8)arg2) != 0) {
            break;
        }
        return 1;

    case 18:
        for (i = 0; i < 9; i++) {
            if (data_02160244[i + 2][0x1c] & 1) {
                return 1;
            }
        }
        break;

    case 19: {
        s32 result = 1;
        for (i = 0; i < 9; i++) {
            if (data_02160244[i + 2][0x1c] & 1) {
                result = 0;
            }
        }
        return result;
    }

    case 20:
        v = func_0202c920((u8)((arg1 - 1) * 3 + (arg2 - 1)));
        if (v == (u8 *)arg3 || v == NULL) {
            break;
        }
        return 1;

    case 21:
        v = func_0202c920((u8)((arg1 - 1) * 3 + (arg2 - 1)));
        if (v == (u8 *)arg3) {
            break;
        }
        if (v != NULL) {
            break;
        }
        return 1;

    case 22:
        v = func_0202c920((u8)((arg1 - 1) * 3 + (arg2 - 1)));
        if (v == NULL) {
            break;
        }
        return 1;

    case 23:
        v = func_0202c920((u8)((arg1 - 1) * 3 + (arg2 - 1)));
        if (v != NULL) {
            break;
        }
        return 1;

    case 24:
        for (i = 0; i < 3; i++) {
            v = func_0202c920((u8)(i + (arg1 - 1) * 3));
            if (v != (u8 *)arg3 && v != NULL) {
                return 1;
            }
        }
        break;

    case 25:
        for (i = 0; i < 3; i++) {
            v = func_0202c920((u8)(i + (arg1 - 1) * 3));
            if (v != (u8 *)arg3 && v != NULL) {
                return 0;
            }
        }
        return 1;

    case 26:
        for (i = 0; i < 3; i++) {
            v = func_0202c920((u8)(i + (arg1 - 1) * 3));
            if (v != NULL) {
                return 1;
            }
        }
        break;

    case 27:
        for (i = 0; i < 3; i++) {
            v = func_0202c920((u8)(i + (arg1 - 1) * 3));
            if (v != NULL) {
                return 0;
            }
        }
        return 1;

    case 28:
        for (i = 0; i < 3; i++) {
            v = func_0202c920((u8)((arg2 - 1) + i * 3));
            if (v != (u8 *)arg3 && v != NULL) {
                return 1;
            }
        }
        break;

    case 29:
        for (i = 0; i < 3; i++) {
            v = func_0202c920((u8)((arg2 - 1) + i * 3));
            if (v != (u8 *)arg3 && v != NULL) {
                return 0;
            }
        }
        return 1;

    case 30:
        for (i = 0; i < 3; i++) {
            v = func_0202c920((u8)((arg2 - 1) + i * 3));
            if (v != NULL) {
                return 1;
            }
        }
        break;

    case 31:
        for (i = 0; i < 3; i++) {
            v = func_0202c920((u8)((arg2 - 1) + i * 3));
            if (v != NULL) {
                return 0;
            }
        }
        return 1;

    case 32:
        pos = func_0202c658(arg3);
        if (arg2 == pos % 3 + 1) {
            return 1;
        }
        break;

    case 33:
        pos = func_0202c658(arg3);
        if (arg2 != pos % 3 + 1) {
            return 1;
        }
        break;

    case 34:
        unit = func_0202e548((u8)func_0202c658(arg3));
        if (unit != NULL && (unit[0x1c] & 1)) {
            return 1;
        }
        break;

    case 35:
        unit = func_0202e548((u8)func_0202c658(arg3));
        if (unit != NULL && !(unit[0x1c] & 1)) {
            return 1;
        }
        break;

    case 36:
        for (i = 0; i < 9; i++) {
            unit = data_02160244[i + 2];
            if (unit[0x1c] & 1) {
                v = *(u8 **)(unit + 0x10);
                if (v != NULL && v != (u8 *)arg3) {
                    return 1;
                }
            }
        }
        break;

    case 37:
        for (i = 0; i < 9; i++) {
            unit = data_02160244[i + 2];
            if (unit[0x1c] & 1) {
                v = *(u8 **)(unit + 0x10);
                if (v != NULL && v != (u8 *)arg3) {
                    return 0;
                }
            }
        }
        return 1;

    case 38:
        for (i = 0; i < 9; i++) {
            if (func_0202c7d8((s8)(u8)i) != NULL) {
                count++;
            }
        }
        if (count > arg1) {
            break;
        }
        return 1;

    case 39:
        for (i = 0; i < 9; i++) {
            unit = func_0202e548((u8)i);
            if (*(u32 *)(unit + 0x10) == 0 && unit[0x1c] != 0) {
                count++;
            }
        }
        if (count == 0) {
            break;
        }
        return 1;

    case 40:
        for (i = 0; i < 9; i++) {
            unit = func_0202e548((u8)i);
            if (*(u32 *)(unit + 0x10) == 0 && unit[0x1c] != 0) {
                count++;
            }
        }
        if (count == 0) {
            return 1;
        }
        return 0;
    }
    return 0;
}
