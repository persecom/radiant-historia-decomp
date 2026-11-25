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
extern void func_020ae004(s32, s32, s32, s32, s32, s16, s16, s16, s16);
extern void func_020ae0f0(s32, s32, s16, s16, s32, s32);
extern s32 func_020a30d4(u16);
extern void func_020a3128(s32);
extern void func_020ae7e0(s32, s32, s32);
extern s32 func_020b3d88(void);
extern void func_020ae3f8(s32, s32, s32, s32, s32, s32);
void func_020b1790(u8 *arg0, s32 arg1) {
    s32 scroll = 0;
    s32 tabx = 0;
    s32 flags = 0;
    s32 is_special = 0;
    s32 end = 0;
    s32 start = 0;
    u8 *shop = func_020b3fd8();
    u8 *current = func_020b4044();
    u8 *special = func_020ade60(2);
    u8 *list;
    s32 count;
    s32 textrow;
    s32 i;
    s32 rowheight;
    s32 thumb;
    void *texture;
    u8 *category;

    func_020b40a4(*(s32 *)(shop + 0x2aa4), &end, &start);
    count = end - start;
    textrow = 4;
    if (special[0xd] == 1) {
        is_special = 1;
    }
    if (is_special != 0) {
        func_020adfe8(special[0xc], 4);
        textrow++;
    }

    list = shop + 0x2000;
    rowheight = 0xf;
    for (i = 0; i < 5; i++) {
        s32 idx = *(s32 *)(list + 0xa98);
        u8 *item;
        s32 disabled;
        s32 rowy;
        s32 pricey;
        s32 price;
        s32 dy;

        if (idx < 0 || count <= i) {
            if (func_020b3880()[0x3442] != 2) {
clear_row:
                func_020ae9cc(i, 0);
            }
            continue;
        }
        item = func_020b4008(idx + i);
        if (item == NULL) {
            if (func_020b3880()[0x3442] != 2) {
                goto clear_row;
            }
            continue;
        }

        if (*(u16 *)(current + 4) == *(u16 *)(item + 4)) {
            flags |= 2;
        }
        if (arg1 == 0) {
            if (*(s32 *)(func_020b3890() + 0x258) - *(s32 *)item < 0 ||
                func_02022068(*(u16 *)(item + 4)) >= 0x63) {
                flags |= 1;
            }
        }
        if ((disabled = flags & 1) != 0) {
            if ((flags &= 2) != 0) {
                func_02076380(*(void **)(arg0 + 0x54));
            } else {
                func_02076380(*(void **)(arg0 + 0x50));
            }
        } else {
            if ((flags &= 2) != 0) {
                func_02076380(*(void **)(arg0 + 0x3c));
            } else {
                func_02076380(*(void **)(arg0 + 0x38));
            }
        }
        dy = i * 0x12;
        rowy = dy + 0x36;
        func_020ae004(0x67, 0, 0, 6, rowheight, 0x12, (s16)rowy, 6, rowheight);
        func_020ae004(0x67, 6, 0, 1, rowheight, 0x18, (s16)rowy, 0xbc, rowheight);
        func_020ae004(0x67, 0x1a, 0, 6, rowheight, 0xd4, (s16)rowy, 6, rowheight);
        if (is_special != 0) {
            func_020adfe8(special[0xc], textrow);
            textrow++;
        }
        price = *(s32 *)item;
        if (disabled != 0) {
            func_02076380(*(void **)(arg0 + 0x68));
        } else if (flags != 0) {
            func_02076380(*(void **)(arg0 + 0x60));
        } else {
            func_02076380(*(void **)(arg0 + 0x64));
        }
        pricey = dy + 0x38;
        func_020ae0f0(price, 0x68, 0xc7, (s16)pricey, 8, 10);
        func_020ae004(0x68, 0x50, 0, 8, 10, 0xd0, (s16)pricey, 8, 10);
        func_020a3128(func_020a30d4(*(u16 *)(item + 4)));
        func_020ae004(0x68, 0, 0, 0x10, 0x10, 0x13, (s16)(dy + 0x35), 0x10, 0x10);
        if (is_special == 0 && func_020b3880()[0x3442] != 2) {
            if (disabled != 0) {
                func_020ae7e0(i, 0x17, 0);
            } else if (flags != 0) {
                func_020ae7e0(i, 0x13, 0);
            } else {
                func_020ae7e0(i, 0x14, 0);
            }
        }
        flags = 0;
    }

    if (func_020b3d88() != 0) {
        func_02076380(*(void **)(arg0 + 0xd4));
        func_020ae004(0x65, 0, 0, 6, 0x13, 9, 4, 6, 0x13);
        func_020ae004(0x65, 6, 0, 1, 0x13, 0xf, 4, 0x72, 0x13);
        func_020ae004(0x65, 8, 0, 6, 0x13, 0x81, 4, 6, 0x13);
        if (is_special != 0) {
            func_020adfe8(special[0xc], textrow);
            textrow++;
        }
        func_02076380(*(void **)(arg0 + 0x2c));
        func_020ae004(0x66, 0, 0, 6, 0xe, 0x1b, 6, 6, 0xe);
        func_020ae004(0x66, 6, 0, 1, 0x13, 0x21, 6, 0x4e, 0x13);
        func_020ae004(0x66, 0x3a, 0, 6, 0xe, 0x6f, 6, 6, 0xe);
        if (is_special != 0) {
            func_020adfe8(special[0xc], textrow);
        }
        if (*(s32 *)(arg0 + 0x6bc) == 4) {
            func_02076380(*(void **)(arg0 + 0xdc));
        } else {
            func_02076380(*(void **)(arg0 + 0xd8));
        }
        func_020ae004(0x66, 0, 0, 0x10, 0xe, 0xb, 6, 0x10, 0xe);
        if (*(s32 *)(arg0 + 0x6bc) == 5) {
            func_02076380(*(void **)(arg0 + 0xdc));
        } else {
            func_02076380(*(void **)(arg0 + 0xd8));
        }
        func_020ae004(0x66, 0x10, 0, 0x10, 0xe, 0x75, 6, 0x10, 0xe);
        if (is_special == 0) {
            func_020ae3f8(4, 0x18, 2, 0x1e, 7, 0x67);
        }
    }

    category = shop + 0x2000;
    if (category[0xab0] & 8) {
        if (*(s32 *)(category + 0xaa4) == 3) {
            if (arg1 == 1) {
                func_02076380(*(void **)(arg0 + 0xb0));
                func_020ae004(0x66, 0, 0, 0x10, 0x16, 0xc, 6, 0x10, 0x16);
                func_020ae004(0x66, 0x10, 0, 1, 0x11, 0x1c, 6, 0x11, 0x11);
                func_020ae004(0x66, 0x34, 0, 6, 0x11, 0x2d, 6, 6, 0x11);
                func_02076380(*(void **)(arg0 + 0xb4));
                func_020ae004(0x67, 0, 0, 0x1e, 0xd, 0x10, 8, 0x1e, 0xd);
            }
            texture = *(void **)(arg0 + 0x5c);
        } else {
            texture = *(void **)(arg0 + 0x58);
        }
        func_02076380(texture);
        func_020ae004(0x66, 0, 0, 0x12, 0x12, 0xc, 0x1c, 0x12, 0x12);
        tabx += 0x14;
    }

    category = shop + 0x2000;
    if (category[0xab0] & 1) {
        if (*(s32 *)(category + 0xaa4) == 0) {
            if (arg1 == 1) {
                func_02076380(*(void **)(arg0 + 0xb0));
                func_020ae004(0x66, 0, 0, 0x10, 0x16, (s16)(tabx + 0xc), 6, 0x10, 0x16);
                func_020ae004(0x66, 0x10, 0, 1, 0x11, (s16)(tabx + 0x1c), 6, 0x11, 0x11);
                func_020ae004(0x66, 0x34, 0, 6, 0x11, (s16)(tabx + 0x2d), 6, 6, 0x11);
                func_02076380(*(void **)(arg0 + 0xb4));
                func_020ae004(0x67, 0, 0xd, 0x1e, 0xd, (s16)(tabx + 0x10), 8, 0x1e, 0xd);
            }
            texture = *(void **)(arg0 + 0x5c);
        } else {
            texture = *(void **)(arg0 + 0x58);
        }
        func_02076380(texture);
        func_020ae004(0x66, 0x12, 0, 0x12, 0x12, (s16)(tabx + 0xc), 0x1c, 0x12, 0x12);
        tabx += 0x14;
    }

    category = shop + 0x2000;
    if (category[0xab0] & 2) {
        if (*(s32 *)(category + 0xaa4) == 1) {
            if (arg1 == 1) {
                func_02076380(*(void **)(arg0 + 0xb0));
                func_020ae004(0x66, 0, 0, 0x10, 0x16, (s16)(tabx + 0xc), 6, 0x10, 0x16);
                func_020ae004(0x66, 0x10, 0, 1, 0x11, (s16)(tabx + 0x1c), 6, 0x11, 0x11);
                func_020ae004(0x66, 0x34, 0, 6, 0x11, (s16)(tabx + 0x2d), 6, 6, 0x11);
                func_02076380(*(void **)(arg0 + 0xb4));
                func_020ae004(0x67, 0, 0x1a, 0x1e, 0xd, (s16)(tabx + 0x10), 8, 0x1e, 0xd);
            }
            texture = *(void **)(arg0 + 0x5c);
        } else {
            texture = *(void **)(arg0 + 0x58);
        }
        func_02076380(texture);
        func_020ae004(0x66, 0x24, 0, 0x12, 0x12, (s16)(tabx + 0xc), 0x1c, 0x12, 0x12);
        tabx += 0x14;
    }

    category = shop + 0x2000;
    if (category[0xab0] & 4) {
        if (*(s32 *)(category + 0xaa4) == 2) {
            if (arg1 == 1) {
                func_02076380(*(void **)(arg0 + 0xb0));
                func_020ae004(0x66, 0, 0, 0x10, 0x16, (s16)(tabx + 0xc), 6, 0x10, 0x16);
                func_020ae004(0x66, 0x10, 0, 1, 0x11, (s16)(tabx + 0x1c), 6, 0x25, 0x11);
                func_020ae004(0x66, 0x34, 0, 6, 0x11, (s16)(tabx + 0x41), 6, 6, 0x11);
                func_02076380(*(void **)(arg0 + 0xb4));
                func_020ae004(0x67, 0, 0x27, 0x33, 0xd, (s16)(tabx + 0x10), 8, 0x33, 0xd);
            }
            texture = *(void **)(arg0 + 0x5c);
        } else {
            texture = *(void **)(arg0 + 0x58);
        }
        func_02076380(texture);
        func_020ae004(0x66, 0, 0x13, 0x12, 0x12, (s16)(tabx + 0xc), 0x1c, 0x12, 0x12);
    }

    if (*(s32 *)(arg0 + 0x6bc) == 0xf) {
        func_02076380(*(void **)(arg0 + 0x80));
    } else {
        func_02076380(*(void **)(arg0 + 0x7c));
    }
    func_020ae004(0x67, 0, 0x10, 0xe, 0xe, 0xe2, 0x36, 0xe, 0xe);
    if (*(s32 *)(arg0 + 0x6bc) == 0x10) {
        func_02076380(*(void **)(arg0 + 0x80));
    } else {
        func_02076380(*(void **)(arg0 + 0x7c));
    }
    func_020ae004(0x67, 0x10, 0x10, 0xe, 0xe, 0xe2, 0x85, 0xe, 0xe);
    if (*(s32 *)(arg0 + 0x6bc) == 0x11) {
        func_02076380(*(void **)(arg0 + 0x88));
    } else {
        func_02076380(*(void **)(arg0 + 0x84));
    }
    if (end - start > 5) {
        s32 excess = end - start - 5;
        thumb = 0x35 - excess * 4;
        if (thumb <= 0) {
            thumb = 1;
        }
        scroll = (0x41 - (thumb + 0xc)) * (*(s32 *)(shop + 0x2a98) - start) / excess;
    } else {
        thumb = 0x35;
    }
    func_020ae004(0x67, 0, 0, 0xe, 6, 0xe2, (s16)(scroll + 0x44), 0xe, 6);
    func_020ae004(0x67, 0, 6, 0xe, 1, 0xe2, (s16)(scroll + 0x4a), 0xe, (s16)thumb);
    func_020ae004(0x67, 0, 0xa, 0xe, 6, 0xe2, (s16)(scroll + 0x4a + thumb), 0xe, 6);
    func_020adfe8(0x1f, 0);
}
