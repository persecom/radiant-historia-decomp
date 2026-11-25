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
typedef struct { s32 x, y, z; } Vec3_ca10c;
typedef void (*Fn0898)(Vec3_ca10c, s32, s32);
#define CALL0898(base, id) ((Fn0898)func_020f0898)(*(Vec3_ca10c *)((base) + 0x94), (id), 1000)
extern void func_020f0898(s32, s32, s32, s32, s32);
extern void func_020eaa10(s32);
extern void func_02108680(void *, s32, s32);
extern void func_020cb1fc(void);
extern void func_0210d27c(s32);
extern void func_020bec04(s32);
extern void func_020bebc8(s32);
extern void func_020bdcc0(s32);
extern void func_020bdd84(s32);
extern void func_020cea64(s32);
extern s32 data_02162814, data_02162884;
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
        if (*(s16 *)(r9 + 0xac) == 1) func_0210d27c(0x22);
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
        if (*(s16 *)(r9 + 0xac) == 1) func_0210d27c(0x22);
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
    case 10: {
        u8 *cur;
        *(s32 *)(r9 + 0x94) = 0x100000;
        *(s32 *)(r9 + 0x98) = 0xc0000;
        *(s32 *)(r9 + 0x9c) = 0x9f000;
        *(s32 *)(r9 + 0xa0) = 0x24000;
        *(s32 *)(r9 + 0xa4) = 0x49000;
        *(s32 *)(data_0216020c + 0x84) = 0x20;
        *(s32 *)(data_0216020c + 0x80) = 0xb4;
        if (func_020f0aa4(1001) == NULL) {
            func_020f0154(0x10002);
            func_020f0898(*(s32 *)(r9 + 0x94), *(s32 *)(r9 + 0x98), *(s32 *)(r9 + 0x9c), 0x10002, 1001);
        }
        **(s32 ***)(*(u8 **)func_020f0aa4(1001) + 0x100) = 0;
        *(u16 *)(r9 + 0x8e) = 0;
        *(u16 *)(r9 + 0x8c) = 11;
        func_020eaa10(1);
        cur = *(u8 **)(data_02160204 + 0x3c);
        while (cur != NULL) {
            if (*(u32 *)(cur + 4) == 2) break;
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
        *(u32 *)(cur + 0x18) &= ~1;
        cur = *(u8 **)(data_02160204 + 0x3c);
        while (cur != NULL) {
            if (*(u32 *)(cur + 4) == 2) break;
            cur = *(u8 **)(cur + 0x38);
        }
        *(u32 *)(cur + 0x18) |= 1;
        break;
    }
    case 11: {
        u8 *obj;
        func_020cb1fc();
        obj = func_020f0aa4(1001);
        *(u32 *)(obj + 0x14) |= 0x51;
        {
            u8 *p = *(u8 **)obj;
            *(u16 *)(p + 0x94) = 0x2761;
            *(u16 *)(p + 0x96) = 0x2761;
            *(s32 *)(p + 0xf4) = 0x10002;
            *(s32 *)(p + 0xf8) = 0x10002;
            *(s32 *)(p + 0x6c) = *(s32 *)(r9 + 0x94);
            *(s32 *)(p + 0x70) = *(s32 *)(r9 + 0x98);
            *(s32 *)(p + 0x74) = *(s32 *)(r9 + 0x9c);
        }
        if (*(s16 *)(r9 + 0x8e) == 0x12) {
            obj = func_020f0aa4(1001);
            *(u32 *)(obj + 0x14) &= ~0x51;
            if (*(u16 *)(r9 + 0xb0) == 0) {
                *(u16 *)(r9 + 0x8c) = 12;
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
        if (*(s16 *)(r9 + 0xac) == 1) func_0210d27c(0x75);
        break;
    }
    case 12: {
        u8 *cur;
        *(s32 *)(r9 + 0x94) = 0xd1000;
        *(s32 *)(r9 + 0x98) = 0xd2000;
        *(s32 *)(r9 + 0x9c) = -0x1d3000;
        *(s32 *)(r9 + 0xa0) = 0x6b000;
        *(s32 *)(r9 + 0xa4) = 0x75000;
        *(s32 *)(data_0216020c + 0x84) = 0x18;
        *(s32 *)(data_0216020c + 0x80) = 0xcc;
        if (func_020f0aa4(1001) == NULL) {
            func_020f0154(0x10002);
            func_020f0898(*(s32 *)(r9 + 0x94), *(s32 *)(r9 + 0x98), *(s32 *)(r9 + 0x9c), 0x10002, 1001);
        }
        **(s32 ***)(*(u8 **)func_020f0aa4(1001) + 0x100) = 0xc8000;
        *(u16 *)(r9 + 0x8e) = 0;
        *(u16 *)(r9 + 0x8c) = 13;
        func_020eaa10(1);
        cur = *(u8 **)(data_02160204 + 0x3c);
        while (cur != NULL) {
            if (*(u32 *)(cur + 4) == 2) break;
            cur = *(u8 **)(cur + 0x38);
        }
        *(s32 *)(cur + 0x1c) = *(s32 *)(r9 + 0xa0);
        *(s32 *)(cur + 0x20) = *(s32 *)(r9 + 0xa4);
        func_02108680(*(void **)cur, 9, 1);
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
    case 13: {
        u8 *obj;
        func_020cb1fc();
        obj = func_020f0aa4(1001);
        *(u32 *)(obj + 0x14) |= 0x51;
        {
            u8 *p = *(u8 **)obj;
            *(u16 *)(p + 0x94) = 0x2761;
            *(u16 *)(p + 0x96) = 0x2761;
            *(s32 *)(p + 0xf4) = 0x10002;
            *(s32 *)(p + 0xf8) = 0x10002;
            *(s32 *)(p + 0x6c) = *(s32 *)(r9 + 0x94);
            *(s32 *)(p + 0x70) = *(s32 *)(r9 + 0x98);
            *(s32 *)(p + 0x74) = *(s32 *)(r9 + 0x9c);
        }
        if (*(s16 *)(r9 + 0x8e) == 0x12) {
            obj = func_020f0aa4(1001);
            *(u32 *)(obj + 0x14) &= ~0x51;
            if (*(u16 *)(r9 + 0xb0) == 0) {
                *(u16 *)(r9 + 0x8c) = 14;
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
        if (*(s16 *)(r9 + 0xac) == 1) func_0210d27c(0x75);
        break;
    }
    case 14: {
        u8 *cur;
        *(s32 *)(r9 + 0x94) = 0xd1000;
        *(s32 *)(r9 + 0x98) = 0x163000;
        *(s32 *)(r9 + 0x9c) = -0xa8000;
        *(s32 *)(data_0216020c + 0x84) = 0x18;
        *(s32 *)(data_0216020c + 0x80) = 0xb4;
        if (func_020f0aa4(1003) == NULL) {
            func_020f0154(0x10003);
            func_020f0898(*(s32 *)(r9 + 0x94), *(s32 *)(r9 + 0x98), *(s32 *)(r9 + 0x9c), 0x10003, 1003);
        }
        *(s32 *)(data_0216020c + 0xac) = 0;
        *(s32 *)(data_0216020c + 0xb4) = 0xe6000;
        *(u16 *)(r9 + 0x8e) = 0;
        *(u16 *)(r9 + 0x8c) = 15;
        *(u16 *)(r9 + 0xac) = 0;
        *(u16 *)(r9 + 0xae) = 0;
        break;
    }
    case 15: {
        s32 v = *(s16 *)(r9 + 0x8e);
        u8 *obj;
        v += 1;
        if (v > 0x28) v = 0x28;
        *(s16 *)(r9 + 0x8e) = v;
        func_020bec04((u16)*(s32 *)(data_0216020c + 0x84));
        func_020bebc8((u16)*(s32 *)(data_0216020c + 0x80));
        v = *(s16 *)(r9 + 0x8e);
        if (v <= 8) {
            data_02162884 = v * 2 - 0x10;
        } else if (v <= 0x20) {
            data_02162884 = 0;
        } else {
            data_02162884 = (v - 0x20) * 2;
        }
        if (v > 0x20) data_021626a8 = (v - 0x20) * 2;
        *(s32 *)(r9 + 0x9c) = 0x1000 - ((v * 0xbe) / 10) * 0x1000;
        obj = func_020f0aa4(1003);
        *(u32 *)(obj + 0x14) |= 0x11;
        {
            u8 *q = *(u8 **)obj;
            *(s32 *)(q + 0x6c) = *(s32 *)(r9 + 0x94);
            *(s32 *)(q + 0x70) = *(s32 *)(r9 + 0x98);
            *(s32 *)(q + 0x74) = *(s32 *)(r9 + 0x9c);
            *(s32 *)(q + 0xf4) = 0x10003;
        }
        if (v == 0x28) {
            obj = func_020f0aa4(1003);
            *(u32 *)(obj + 0x14) &= ~0x11;
            *(u16 *)(r9 + 0x8c) = 0x10;
            *(s16 *)(r9 + 0xac) += 1;
            if (*(s16 *)(r9 + 0xac) == 1 && *(s16 *)(r9 + 0xae) < 3) func_0210d27c(0x22);
        }
        if (*(s16 *)(r9 + 0xac) == 1 && *(s16 *)(r9 + 0xae) == 3) func_0210d27c(0x75);
        if (*(s16 *)(r9 + 0xac) > 6) {
            *(s16 *)(r9 + 0xac) = 0;
            *(s16 *)(r9 + 0xae) += 1;
        }
        break;
    }
    case 16:
        if (*(s16 *)(r9 + 0xac) > 6) *(s16 *)(r9 + 0xac) = 0;
        break;
    }

    {
        s32 c;
        if (*(s32 *)0xfffffbc8 < 0x10) {
            c = *(s32 *)0xfffffbc8 + 1;
            if (c > 0x10) c = 0x10;
            *(s32 *)0xfffffbc8 = c;
        }
        if (*(s32 *)data_02160204 < 0x10) {
            c = *(s32 *)data_02160204 + 1;
            if (c > 0x10) c = 0x10;
            *(s32 *)data_02160204 = c;
        }
        if (*(s32 *)data_02160204 == 0x10 && *(s32 *)0xfffffbc8 == 0x10) {
            u8 *p3 = data_02160204;
            *(s32 *)(data_02160234 + 0x90) = 1;
            *(u8 *)(p3 + 0x120) = 1;
            switch (*(u8 *)(p3 + 0x11f)) {
            case 1:
                func_020bdcc0(2);
                func_020bdd84(2);
                *(u8 *)(p3 + 0xd8) = 2;
                *(u8 *)(p3 + 0x11d) |= 1;
                break;
            case 2:
                func_020cea64(0);
                *(u8 *)(p3 + 0xd8) = 0x1d;
                if (func_020f0aa4(1003) != NULL) {
                    u8 *q = func_020f0aa4(1003);
                    *(s32 *)(q + 0xa0) = *(s32 *)(q + 0xac);
                    *(s32 *)(q + 0xa4) = *(s32 *)(q + 0xb4);
                    *(s32 *)(q + 0xa8) = *(s32 *)(q + 0xb0);
                }
                break;
            case 3:
                *(u8 *)(p3 + 0xd8) = 2;
                *(u8 *)(p3 + 0x11e) = 2;
                break;
            }
        }
    }
}
