/* 1 function from 0x02029790 to 0x0202A5A4 (main), found by ds-decomp. */
#include "common.h"

extern s32 func_0202c658(s32);
extern s32 func_0202c820(u8);
s32 func_02029790(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 pos;
    u16 count;
    u16 i;

    switch (arg0) {
    case 1:
        count = 0;
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
        count = 0;
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
            count = 0;
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
            count = 0;
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
            count = 0;
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
            count = 0;
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
            count = 0;
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
            count = 0;
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
        count = 0;
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
        count = 0;
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
        count = 0;
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

    case 40:
        return 1;
    }
    return 0;
}
