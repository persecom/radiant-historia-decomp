/* 1 function from 0x020B1790 to 0x020B2520 (main), found by ds-decomp. */
#include "common.h"

extern u8 *func_020b3fd8(void);
extern u8 *func_020b4044(void);
extern u8 *func_020ade60(s32);
extern void func_020b40a4(s32, s32 *, s32 *);
extern void func_020adfe8(u32, s32);
extern u8 *func_020b3880(void);
extern void func_020ae9cc(s32, s32);
extern u8 *func_020b4008(s32);
extern u8 *func_020b3890(void);
extern u32 func_02022068(u16);
extern void func_02076380(void *);
extern void func_020ae004(s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_020ae0f0(s32, s32, s32, s32, s32, s32);
extern s32 func_020a30d4(u16);
extern void func_020a3128(s32);
extern void func_020ae7e0(s32, s32, s32);
extern s32 func_020b3d88(void);
extern void func_020ae3f8(s32, s32, s32, s32, s32, s32);
void func_020b1790(u8 *arg0, s32 arg1) {
    s32 sp2c = 0;
    s32 sp28 = 0;
    s32 flags = 0;
    s32 is_special = 0;
    s32 sp48 = 0;
    s32 sp44 = 0;
    u8 *s38 = func_020b3fd8();
    u8 *s3c = func_020b4044();
    u8 *s34 = func_020ade60(2);
    s32 count;
    s32 r7 = 4;
    s32 r6;

    func_020b40a4(*(s32 *)(s38 + 0x2aa4), &sp48, &sp44);
    count = sp48 - sp44;

    if (s34[0xd] == 1) {
        is_special = 1;
    }
    if (is_special != 0) {
        func_020adfe8(s34[0xc], 4);
        r7++;
    }

    for (r6 = 0; r6 < 5; r6++) {
        s32 idx = *(s32 *)(s38 + 0x2a98);
        u8 *item;
        s32 disabled;
        s32 selected;
        s32 price;
        if (idx < 0 || count <= r6) {
            if (func_020b3880()[0x3442] != 2) {
                func_020ae9cc(r6, 0);
            }
            continue;
        }
        item = func_020b4008(idx + r6);
        if (item == NULL) {
            if (func_020b3880()[0x3442] != 2) {
                func_020ae9cc(r6, 0);
            }
            continue;
        }
        if (*(u16 *)(s3c + 4) == *(u16 *)(item + 4)) {
            flags |= 2;
        }
        if (arg1 == 0) {
            if (*(s32 *)(func_020b3890() + 0x258) - *(s32 *)item < 0 ||
                func_02022068(*(u16 *)(item + 4)) >= 0x63) {
                flags |= 1;
            }
        }
        disabled = flags & 1;
        selected = flags & 2;
        if (disabled) {
            func_02076380(selected ? *(void **)(arg0 + 0x54) : *(void **)(arg0 + 0x50));
        } else {
            func_02076380(selected ? *(void **)(arg0 + 0x3c) : *(void **)(arg0 + 0x38));
        }
        func_020ae004(0x67, 0, 0, 6, 0xf, 0x12, (s16)(r6 * 0x12 + 0x36), 6, 0xf);
        func_020ae004(0x67, 6, 0, 1, 0xf, 0x18, (s16)(r6 * 0x12 + 0x36), 0xbc, 0xf);
        func_020ae004(0x67, 0x1a, 0, 6, 0xf, 0xd4, (s16)(r6 * 0x12 + 0x36), 6, 0xf);
        if (is_special != 0) {
            func_020adfe8(s34[0xc], r7);
            r7++;
        }
        price = *(s32 *)item;
        if (disabled) {
            func_02076380(*(void **)(arg0 + 0x68));
        } else if (selected) {
            func_02076380(*(void **)(arg0 + 0x60));
        } else {
            func_02076380(*(void **)(arg0 + 0x64));
        }
        func_020ae0f0(price, 0x68, 0xc7, (s16)(r6 * 0x12 + 0x38), 8, 10);
        func_020ae004(0x68, 0x50, 0, 8, 10, 0xd0, (s16)(r6 * 0x12 + 0x38), 8, 10);
        func_020a3128(func_020a30d4(*(u16 *)(item + 4)));
        func_020ae004(0x68, 0, 0, 0x10, 0x10, 0x13, (s16)(r6 * 0x12 + 0x35), 0x10, 0x10);
        if (is_special == 0 && func_020b3880()[0x3442] != 2) {
            s32 col;
            if (disabled) {
                col = 0x17;
            } else if (selected) {
                col = 0x13;
            } else {
                col = 0x14;
            }
            func_020ae7e0(r6, col, 0);
        }
        flags = 0;
    }

    if (func_020b3d88() != 0) {
        func_02076380(*(void **)(arg0 + 0xd4));
        func_020ae004(0x65, 0, 0, 6, 0x13, 9, 4, 6, 0x13);
        func_020ae004(0x65, 6, 0, 1, 0x13, 0xf, 4, 0x72, 0x13);
        func_020ae004(0x65, 8, 0, 6, 0x13, 0x81, 4, 6, 0x13);
        if (is_special != 0) {
            func_020adfe8(s34[0xc], r7);
            r7++;
        }
        func_02076380(*(void **)(arg0 + 0x2c));
        func_020ae004(0x66, 0, 0, 6, 0xe, 0x1b, 6, 6, 0xe);
        func_020ae004(0x66, 6, 0, 1, 0x13, 0x21, 6, 0x4e, 0x13);
        func_020ae004(0x66, 0x3a, 0, 6, 0xe, 0x6f, 6, 6, 0xe);
        if (is_special != 0) {
            func_020adfe8(s34[0xc], r7);
        }
        func_02076380(*(s32 *)(arg0 + 0x6bc) == 4 ? *(void **)(arg0 + 0xdc) : *(void **)(arg0 + 0xd8));
        func_020ae004(0x66, 0, 0, 0x10, 0xe, 0xb, 6, 0x10, 0xe);
        func_02076380(*(s32 *)(arg0 + 0x6bc) == 5 ? *(void **)(arg0 + 0xdc) : *(void **)(arg0 + 0xd8));
        func_020ae004(0x66, 0x10, 0, 0x10, 0xe, 0x75, 6, 0x10, 0xe);
        if (is_special == 0) {
            func_020ae3f8(4, 0x18, 2, 0x1e, 7, 0x67);
        }
    }

    if (s38[0x2ab0] & 8) {
        if (*(s32 *)(s38 + 0x2aa4) == 3) {
            if (arg1 == 1) {
                func_02076380(*(void **)(arg0 + 0xb0));
                func_020ae004(0x66, 0, 0, 0x10, 0x16, 0xc, 6, 0x10, 0x16);
                func_020ae004(0x66, 0x10, 0, 1, 0x11, 0x1c, 6, 0x11, 0x11);
                func_020ae004(0x66, 0x34, 0, 6, 0x11, 0x2d, 6, 6, 0x11);
                func_02076380(*(void **)(arg0 + 0xb4));
                func_020ae004(0x67, 0, 0, 0x1e, 0xd, 0x10, 8, 0x1e, 0xd);
                func_02076380(*(void **)(arg0 + 0x5c));
            } else {
                func_02076380(*(void **)(arg0 + 0x5c));
            }
        } else {
            func_02076380(*(void **)(arg0 + 0x58));
        }
        func_020ae004(0x66, 0, 0, 0x12, 0x12, 0xc, 0x1c, 0x12, 0x12);
        sp28 += 0x14;
    }
}
