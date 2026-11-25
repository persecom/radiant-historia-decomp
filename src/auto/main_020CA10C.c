/* 1 function from 0x020CA10C to 0x020CB1F4 (main), found by ds-decomp. */
#include "common.h"

extern u16 data_021626a8;
extern u8 *data_02160234;
extern u8 *data_0216020c;
extern u8 *data_02160204;
extern u16 data_021628f8;
extern u8 data_02160a80[16];
extern u8 *func_020f0aa4(s32);
extern void func_020f0154(s32);
extern void func_020f0898(s32, s32, s32, s32, s32);
extern void func_020eaa10(s32);
extern void func_02108680(void *, s32, s32);
extern void func_020cb1fc(void);
extern void func_0210d27c(s32);
void func_020ca10c(void) {
    u8 *r9 = data_02160234;

    if ((data_021626a8 & 1) || (data_021626a8 & 8) || data_021628f8 != 0) {
        if (*(u16 *)(r9 + 0x8c) != 0x10) {
            *(u16 *)(r9 + 0xb0) = 0x10;
        }
    }

    switch (*(u16 *)(r9 + 0x8c)) {
    case 0:
        *(u16 *)(r9 + 0x8c) = 6;
        break;
    case 4: {
        u8 *cur;
        *(s32 *)(r9 + 0x94) = 0x96000;
        *(s32 *)(r9 + 0x98) = 0x99000;
        *(s32 *)(r9 + 0x9c) = -0xed000;
        *(s32 *)(r9 + 0xa0) = 0x75000;
        *(s32 *)(r9 + 0xa4) = 0x96000;
        *(s32 *)(data_0216020c + 0x84) = 0x15;
        *(s32 *)(data_0216020c + 0x80) = 0xb4;
        *(s32 *)(data_0216020c + 0xac) = 0;
        *(s32 *)(data_0216020c + 0xb4) = 0;
        if (func_020f0aa4(1000) == NULL) {
            func_020f0154(0x10000);
            func_020f0898(*(s32 *)(r9 + 0x94), *(s32 *)(r9 + 0x98), *(s32 *)(r9 + 0x9c), 0x10000, 1000);
        }
        **(s32 ***)(*(u8 **)func_020f0aa4(1000) + 0x100) = 0x8c000;
        *(u16 *)(r9 + 0x8e) = 0;
        *(u16 *)(r9 + 0x8c) = 5;
        func_020eaa10(1);
        cur = *(u8 **)(data_02160204 + 0x3c);
        while (cur != NULL) {
            if (*(u32 *)(cur + 4) == 1) break;
            cur = *(u8 **)(cur + 0x38);
        }
        *(s32 *)(cur + 0x1c) = *(s32 *)(r9 + 0xa0);
        *(s32 *)(cur + 0x20) = *(s32 *)(r9 + 0xa4);
        func_02108680(*(void **)cur, 5, 1);
        cur = *(u8 **)(data_02160204 + 0x3c);
        while (cur != NULL) {
            if (*(u32 *)(cur + 4) == 1) break;
            cur = *(u8 **)(cur + 0x38);
        }
        *(u32 *)(cur + 0x18) |= 1;
        cur = *(u8 **)(data_02160204 + 0x3c);
        while (cur != NULL) {
            if (*(u32 *)(cur + 4) == 2) break;
            cur = *(u8 **)(cur + 0x38);
        }
        *(u32 *)(cur + 0x18) &= ~1;
        break;
    }
    case 5: {
        u8 *obj;
        func_020cb1fc();
        obj = func_020f0aa4(1000);
        *(u32 *)(obj + 0x14) |= 0x11;
        {
            u8 *p = *(u8 **)obj;
            *(s32 *)(p + 0x6c) = *(s32 *)(r9 + 0x94);
            *(s32 *)(p + 0x70) = *(s32 *)(r9 + 0x98);
            *(s32 *)(p + 0x74) = *(s32 *)(r9 + 0x9c);
            *(s32 *)(p + 0xf4) = 1;
        }
        if (*(s16 *)(r9 + 0x8e) == 0x12) {
            obj = func_020f0aa4(1000);
            *(u32 *)(obj + 0x14) &= ~0x11;
            if (*(u16 *)(r9 + 0xb0) == 0) {
                *(u16 *)(r9 + 0x8c) = 6;
            } else {
                u8 *cur;
                *(u16 *)(r9 + 0x8c) = *(u16 *)(r9 + 0xb0);
                cur = *(u8 **)(data_02160204 + 0x3c);
                while (cur != NULL) {
                    if (*(u32 *)(cur + 4) == 1) break;
                    cur = *(u8 **)(cur + 0x38);
                }
                *(u32 *)(cur + 0x18) &= ~1;
                cur = *(u8 **)(data_02160204 + 0x3c);
                while (cur != NULL) {
                    if (*(u32 *)(cur + 4) == 2) break;
                    cur = *(u8 **)(cur + 0x38);
                }
                *(u32 *)(cur + 0x18) &= ~1;
            }
        }
        *(s16 *)(r9 + 0xac) += 1;
        if (*(s16 *)(r9 + 0xac) == 1) {
            func_0210d27c(0x22);
        }
        break;
    }
    case 6: {
        u8 *cur;
        *(s32 *)(r9 + 0x94) = 0x268000;
        *(s32 *)(r9 + 0x98) = 0x96000;
        *(s32 *)(r9 + 0x9c) = 0x19e000;
        *(s32 *)(r9 + 0xa0) = 0x81000;
        *(s32 *)(r9 + 0xa4) = 0x7a000;
        *(s32 *)(data_0216020c + 0x84) = 0xe;
        *(s32 *)(data_0216020c + 0x80) = 0x10e;
        if (func_020f0aa4(1000) == NULL) {
            func_020f0154(0x10000);
            func_020f0898(*(s32 *)(r9 + 0x94), *(s32 *)(r9 + 0x98), *(s32 *)(r9 + 0x9c), 0x10000, 1000);
        }
        **(s32 ***)(*(u8 **)func_020f0aa4(1000) + 0x100) = 0;
        *(u16 *)(r9 + 0x8e) = 0;
        *(u16 *)(r9 + 0x8c) = 7;
        func_020eaa10(0);
        cur = *(u8 **)(data_02160204 + 0x3c);
        while (cur != NULL) {
            if (*(u32 *)(cur + 4) == 1) break;
            cur = *(u8 **)(cur + 0x38);
        }
        *(s32 *)(cur + 0x1c) = *(s32 *)(r9 + 0xa0);
        *(s32 *)(cur + 0x20) = *(s32 *)(r9 + 0xa4);
        func_02108680(*(void **)cur, 6, 1);
        cur = *(u8 **)(data_02160204 + 0x3c);
        while (cur != NULL) {
            if (*(u32 *)(cur + 4) == 1) break;
            cur = *(u8 **)(cur + 0x38);
        }
        *(u32 *)(cur + 0x18) |= 1;
        cur = *(u8 **)(data_02160204 + 0x3c);
        while (cur != NULL) {
            if (*(u32 *)(cur + 4) == 2) break;
            cur = *(u8 **)(cur + 0x38);
        }
        *(u32 *)(cur + 0x18) &= ~1;
        break;
    }
    case 7: {
        u8 *obj;
        func_020cb1fc();
        obj = func_020f0aa4(1000);
        *(u32 *)(obj + 0x14) |= 0x11;
        {
            u8 *p = *(u8 **)obj;
            *(s32 *)(p + 0x6c) = *(s32 *)(r9 + 0x94);
            *(s32 *)(p + 0x70) = *(s32 *)(r9 + 0x98);
            *(s32 *)(p + 0x74) = *(s32 *)(r9 + 0x9c);
            *(s32 *)(p + 0xf4) = 1;
        }
        if (*(s16 *)(r9 + 0x8e) == 0x12) {
            obj = func_020f0aa4(1000);
            *(u32 *)(obj + 0x14) &= ~0x11;
            if (*(u16 *)(r9 + 0xb0) == 0) {
                *(u16 *)(r9 + 0x8c) = 8;
            } else {
                u8 *cur;
                *(u16 *)(r9 + 0x8c) = *(u16 *)(r9 + 0xb0);
                cur = *(u8 **)(data_02160204 + 0x3c);
                while (cur != NULL) {
                    if (*(u32 *)(cur + 4) == 1) break;
                    cur = *(u8 **)(cur + 0x38);
                }
                *(u32 *)(cur + 0x18) &= ~1;
                cur = *(u8 **)(data_02160204 + 0x3c);
                while (cur != NULL) {
                    if (*(u32 *)(cur + 4) == 2) break;
                    cur = *(u8 **)(cur + 0x38);
                }
                *(u32 *)(cur + 0x18) &= ~1;
            }
        }
        *(s16 *)(r9 + 0xac) += 1;
        if (*(s16 *)(r9 + 0xac) == 1) {
            func_0210d27c(0x22);
        }
        break;
    }
    case 8: {
        u8 *cur;
        *(s32 *)(r9 + 0x94) = 0xdf000;
        *(s32 *)(r9 + 0x98) = 0x147000;
        *(s32 *)(r9 + 0x9c) = -0x81000;
        *(s32 *)(r9 + 0xa0) = 0x5a000;
        *(s32 *)(r9 + 0xa4) = 0x6c000;
        *(s32 *)(data_0216020c + 0x84) = 0x24;
        *(s32 *)(data_0216020c + 0x80) = 0xb4;
        if (func_020f0aa4(1001) == NULL) {
            func_020f0154(0x10001);
            func_020f0898(*(s32 *)(r9 + 0x94), *(s32 *)(r9 + 0x98), *(s32 *)(r9 + 0x9c), 0x10001, 1001);
        }
        **(s32 ***)(*(u8 **)func_020f0aa4(1001) + 0x100) = 0x28000;
        *(u16 *)(r9 + 0x8e) = 0;
        *(u16 *)(r9 + 0x8c) = 9;
        func_020eaa10(1);
        cur = *(u8 **)(data_02160204 + 0x3c);
        while (cur != NULL) {
            if (*(u32 *)(cur + 4) == 2) break;
            cur = *(u8 **)(cur + 0x38);
        }
        *(s32 *)(cur + 0x1c) = *(s32 *)(r9 + 0xa0);
        *(s32 *)(cur + 0x20) = *(s32 *)(r9 + 0xa4);
        func_02108680(*(void **)cur, 6, 1);
        cur = *(u8 **)(data_02160204 + 0x3c);
        while (cur != NULL) {
            if (*(u32 *)(cur + 4) == 1) break;
            cur = *(u8 **)(cur + 0x38);
        }
        *(u32 *)(cur + 0x18) &= ~1;
        cur = *(u8 **)(data_02160204 + 0x3c);
        while (cur != NULL) {
            if (*(u32 *)(cur + 4) == 2) break;
            cur = *(u8 **)(cur + 0x38);
        }
        *(u32 *)(cur + 0x18) |= 1;
        break;
    }
    case 9: {
        u8 *obj;
        func_020cb1fc();
        obj = func_020f0aa4(1001);
        *(u32 *)(obj + 0x14) |= 0x11;
        {
            u8 *p = *(u8 **)obj;
            *(s32 *)(p + 0x6c) = *(s32 *)(r9 + 0x94);
            *(s32 *)(p + 0x70) = *(s32 *)(r9 + 0x98);
            *(s32 *)(p + 0x74) = *(s32 *)(r9 + 0x9c);
            *(s32 *)(p + 0xf4) = 1;
        }
        if (*(s16 *)(r9 + 0x8e) == 0x12) {
            obj = func_020f0aa4(1001);
            *(u32 *)(obj + 0x14) &= ~0x11;
            if (*(u16 *)(r9 + 0xb0) == 0) {
                *(u16 *)(r9 + 0x8c) = 10;
            } else {
                u8 *cur;
                *(u16 *)(r9 + 0x8c) = *(u16 *)(r9 + 0xb0);
                cur = *(u8 **)(data_02160204 + 0x3c);
                while (cur != NULL) {
                    if (*(u32 *)(cur + 4) == 1) break;
                    cur = *(u8 **)(cur + 0x38);
                }
                *(u32 *)(cur + 0x18) &= ~1;
                cur = *(u8 **)(data_02160204 + 0x3c);
                while (cur != NULL) {
                    if (*(u32 *)(cur + 4) == 2) break;
                    cur = *(u8 **)(cur + 0x38);
                }
                *(u32 *)(cur + 0x18) &= ~1;
            }
        }
        *(s16 *)(r9 + 0xac) += 1;
        break;
    }
    }
}
