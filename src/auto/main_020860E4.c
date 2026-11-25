/* 1 function from 0x020860E4 to 0x02087754 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_0216010c;
extern u16 data_02162908[4];
extern u16 data_021626a8, data_021626a6;
extern u8 func_02085110(u32);
extern u32 func_02085128(u32);
extern s32 func_020851bc(s32,s32,s32,s32,u8);
extern s32 func_020851f8(s32,s32,s32,s32,u8);
extern void func_020895a0(s32,s32,s32,s32,s32,s32,s32,s32,s32);
extern s32 func_02089ae4(s32,s32,s32,s32);
extern void func_02080c68(void);
extern void func_02080b58(u8);
extern void func_0210d27c(s32);
extern void func_02086030(void);
extern void func_02092010(s32,u16);
extern void func_02089284(s32,s32);
extern void func_020a994c(void *);
void func_020860e4(void) {
    u8 **pp = &data_0216010c;
    u8 one = 1;
    u8 *st = *(u8 **)(*pp + 0x44);
    s16 six = 6;
    s32 zero = 0;
    u8 sound = 2;
    u8 *g;
    s32 i;
    s32 handled;
    switch (st[0]) {
    case 0:
        st[0] = one;
        g = *pp;
        g[0x50dc] = 0;
        g = *pp;
        if ((s16)g[0x614] > 0)
            for (i = 0; i < (s16)g[0x614]; i = (s16)(i + 1))
                func_020895a0((u16)i, 0xc000, (i * 19 + 34) << 12, 90, 4,
                              (u16)(func_02085110((u8)i) + 1), 0, 0, 0);
        break;
    case 1:
        func_02080c68();
        if (data_02162908[2]) {
            s16 j;
            *(s16 *)(*pp + 0x5382) &= ~2;
            if (func_02089ae4(197, 137, 52, 16) == 1) {
                handled = one;
                *(s16 *)(*pp + 0x5382) |= 2;
            }
            for (j = 0; j < (s16)(*pp)[0x614]; j = (s16)(j + 1)) {
                s16 delta;
                if (func_02089ae4(8, (s16)(j * 19 + 33), 127, 17) == 1) {
                    delta = (s16)((*pp)[0x50dc] - j);
                    if (delta == 0) {
                        if (*(s16 *)(*pp + 0x52e6) & 2) *(s16 *)(*pp + 0x5382) |= 2;
                    } else {
                        u8 d = (u8)delta;
                        (*pp)[0x50dc] = (u8)((*pp)[0x50dc] - d);
                        *(s16 *)(*pp + 0x52e6) &= ~2;
                        func_0210d27c(sound);
                        func_02080b58((u8)func_02085128((*pp)[0x50dc]));
                        handled = one;
                    }
                }
            }
            *(s16 *)(*pp + 0x51ae) &= ~2;
            if (!handled && func_02089ae4(232, 2, 20, 20) == 1)
                *(s16 *)(*pp + 0x51ae) |= 2;
        } else {
            u8 old;
            *(s16 *)(*pp + 0x52e6) |= 2;
            if ((data_021626a8 & 1) || (*(s16 *)(*pp + 0x5382) & 2)) {
                st[0] = 0;
                func_0210d27c(11);
                *(s16 *)(*pp + 0x5382) |= 4;
                return;
            }
            if ((data_021626a8 & 2) || (*(s16 *)(*pp + 0x51ae) & 2)) {
                func_02086030();
                func_0210d27c(5);
                *(s16 *)(*pp + 0x51ae) |= 4;
                *(s16 *)(*pp + 0x51ae) &= ~2;
                func_02092010(2, (u16)((s8)(*pp)[0x50d1] * 2 + (s8)(*pp)[0x50d2]));
                return;
            }
            old = (u8)func_02085128((*pp)[0x50dc]);
            if (data_021626a6 & 0x80) {
                (*pp)[0x50dc] = (u8)func_020851bc((*pp)[0x50dc], 1, (s16)((*pp)[0x614] - 1), 0, 0);
                if (old == (u8)func_02085128((*pp)[0x50dc])) return;
                func_02080b58((u8)func_02085128((*pp)[0x50dc]));
                func_0210d27c(zero);
                return;
            }
            if (data_021626a6 & 0x40) {
                (*pp)[0x50dc] = (u8)func_020851f8((*pp)[0x50dc], 1, (s16)((*pp)[0x614] - 1), 0, 0);
                if (old == (u8)func_02085128((*pp)[0x50dc])) return;
                func_02080b58((u8)func_02085128((*pp)[0x50dc]));
                func_0210d27c(zero);
                return;
            }
        }
        break;
    case 2:
        func_02089284((s8)func_02085110((*pp)[0x50dc]), one);
        st[0] = 4;
        (*pp)[0x50d6] = 0;
        (*pp)[0x50d7] = 0;
        *(s16 *)(*pp + 0x5382) &= ~2;
        *(s16 *)(*pp + 0x5382) &= ~4;
        *(s16 *)(*pp + 0x5382) &= ~1;
        func_020a994c(*pp + 0x254);
        break;
    case 3: break;
    case 4: {
        s16 j;
        g = *pp;
        if ((s8)g[0x556d] != (u8)func_02085128(g[0x50dc])) {
            func_02080b58((u8)func_02085128(g[0x50dc]));
            sound = 5;
            func_02080c68();
            if (data_02162908[2]) {
                s16 count = 6;
                *(s16 *)(g + 0x5382) &= ~2;
                if ((s16)g[0x50d4] < count) count = g[0x50d4];
                handled = zero;
                for (j = 0; j < count; j = (s16)(j + 1)) {
                    if (func_02089ae4(8, (s16)(j * 22 + 37), 156, 18) == 1) {
                        s16 delta = (s16)(g[0x50d6] - j);
                        if (delta == 0) {
                            if (*(s16 *)(g + 0x52e6) & 2) *(s16 *)(g + 0x5382) |= 2;
                        } else {
                            u8 d = (u8)delta;
                            g[0x50d6] = (u8)(g[0x50d6] - d);
                            g[0x50d7] = (u8)(g[0x50d7] - d);
                            *(s16 *)(g + 0x52e6) &= ~2;
                            func_0210d27c(sound);
                            handled = one;
                        }
                    }
                }
                *(s16 *)(g + 0x534e) &= ~2;
                if (!handled) {
                    if (func_02089ae4(10, 15, 14, 14) == 1) {
                        if (g[0x614] <= 1) return;
                        handled = one;
                        *(s16 *)(g + 0x534e) |= 2;
                    }
                }
                *(s16 *)(g + 0x531a) &= ~2;
                if (!handled) {
                    if (func_02089ae4(87, 15, 14, 14) == 1) {
                        if (g[0x614] <= 1) return;
                        handled = one;
                        *(s16 *)(g + 0x531a) |= 2;
                    }
                }
                *(s16 *)(g + 0x5300) &= ~2;
                if (!handled) {
                    if (func_02089ae4(168, 37, 14, 14) == 1) {
                        if ((s16)g[0x50d4] <= 5) return;
                        if ((u8)(g[0x50d7] - g[0x50d6]) == 0) return;
                        handled = one;
                        *(s16 *)(g + 0x5300) |= 2;
                        g[0x50d7] = (u8)func_020851f8(g[0x50d7], 1, (s16)(g[0x50d4] - 6), g[0x50d6], one);
                        func_0210d27c(sound);
                    }
                }
                *(s16 *)(g + 0x5300) &= ~2;
                *(s16 *)(g + 0x5334) &= ~2;
                if (!handled) {
                    if (func_02089ae4(170, (s16)(g[0x50da] - 52), 80, 14) == 1) {
                        if ((s16)g[0x50d4] <= 5) return;
                        handled = one;
                        *(s16 *)(g + 0x5334) |= 2;
                        g[0x50d7] = (u8)func_020851bc(g[0x50d7], 1, (s16)(g[0x50d4] - 6 + g[0x50d6]), 0, one);
                        func_0210d27c(sound);
                    }
                }
            }
        }
        break;
    }
    case 5: break;
    case 6: break;
    case 7: break;
    case 8: break;
    case 9: (void)six; break;
    }
}
