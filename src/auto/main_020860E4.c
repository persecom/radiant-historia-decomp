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
    extern s32 func_02087754(s32);
    extern s32 func_020877b4(s32, s16);
    extern s32 func_02087cf4(s32, s16);
    extern void func_02080d30(void);
    extern void func_020a8810(void *, u32);
    s32 sound = 2;
    u8 *g = data_0216010c;
    s32 one = 1;
    u8 *st = *(u8 **)(g + 0x44);
    s32 handled = 0;
    s32 six = 6;
    s32 i;
    switch (st[0]) {
    case 0:
        st[0] = one; data_0216010c[0x50dc] = handled;
        for (i = 0; i < data_0216010c[0x614]; i = (s16)(i + 1))
            func_020895a0((u16)i, 0xc000, (i * 19 + 34) << 12, 90, 4,
                          (u16)(func_02085110((u8)i) + 1), 0, 0, 0);
        break;
    case 1:
        func_02080c68();
        if (data_02162908[2]) {
            *(s16 *)(data_0216010c + 0x5382) &= ~2;
            if (func_02089ae4(197, 137, 52, 16) == 1) {
                handled = one; *(s16 *)(data_0216010c + 0x5382) |= 2;
            }
            for (i = 0; i < data_0216010c[0x614]; i = (s16)(i + 1)) {
                if (func_02089ae4(8, (s16)(i * 19 + 33), 127, 17) == 1) {
                    s16 delta;
                    g = data_0216010c;
                    delta = (s16)(g[0x50dc] - i);
                    if (delta == 0) {
                        if (*(s16 *)(g + 0x52e6) & 2) *(s16 *)(g + 0x5382) |= 2;
                    } else {
                        g[0x50dc] -= (u8)delta;
                        *(s16 *)(data_0216010c + 0x52e6) &= ~2;
                        func_0210d27c(sound);
                        func_02080b58((u8)func_02085128(data_0216010c[0x50dc]));
                    }
                    handled = one;
                }
            }
            *(s16 *)(data_0216010c + 0x51ae) &= ~2;
            if (!handled && func_02089ae4(232, 2, 20, 20) == 1)
                *(s16 *)(data_0216010c + 0x51ae) |= 2;
        } else {
            u8 old;
            *(s16 *)(data_0216010c + 0x52e6) |= 2;
            if ((data_021626a8 & 1) || (*(s16 *)(data_0216010c + 0x5382) & 2)) {
                st[0] = sound; func_0210d27c(11);
                *(s16 *)(data_0216010c + 0x5382) |= 4; return;
            }
            if ((data_021626a8 & 2) || (*(s16 *)(data_0216010c + 0x51ae) & 2)) {
                func_02086030(); func_0210d27c(5);
                *(s16 *)(data_0216010c + 0x51ae) |= 4;
                *(s16 *)(data_0216010c + 0x51ae) &= ~2;
                g = data_0216010c;
                func_02092010(2, (u16)((s8)g[0x50d1] * 2 + (s8)g[0x50d2]));
                return;
            }
            old = (u8)func_02085128(data_0216010c[0x50dc]);
            if (data_021626a6 & 0x80) {
                g = data_0216010c;
                data_0216010c[0x50dc] = (u8)func_020851bc(g[0x50dc], 1, (s16)(g[0x614] - 1), 0, sound);
                if (old == func_02085128(data_0216010c[0x50dc])) return;
                func_02080b58((u8)func_02085128(data_0216010c[0x50dc]));
                func_0210d27c(sound); return;
            }
            if (data_021626a6 & 0x40) {
                g = data_0216010c;
                data_0216010c[0x50dc] = (u8)func_020851f8(g[0x50dc], 1, 0, (s16)(g[0x614] - 1), sound);
                if (old == func_02085128(data_0216010c[0x50dc])) return;
                func_02080b58((u8)func_02085128(data_0216010c[0x50dc]));
                func_0210d27c(sound);
            }
        }
        break;
    case 2:
        func_02089284((s8)func_02085110(g[0x50dc]), one);
        st[0] = 4; data_0216010c[0x50d6] = handled; data_0216010c[0x50d7] = handled;
        *(s16 *)(data_0216010c + 0x5382) &= ~2;
        *(s16 *)(data_0216010c + 0x5382) &= ~4;
        *(s16 *)(data_0216010c + 0x5382) &= ~1;
        func_020a994c(data_0216010c + 0x254);
        break;
    case 4: {
        s32 zero = handled;
        s32 five = 5;
        s32 width = 156;
        if ((s8)g[0x556d] != func_02085128(g[0x50dc]))
            func_02080b58((u8)func_02085128(g[0x50dc]));
        func_02080c68();
        if (data_02162908[2]) {
            g = data_0216010c;
            *(s16 *)(g + 0x5382) &= ~2;
            if (*(s16 *)(data_0216010c + 0x50d4) < 6)
                six = (u8)*(s16 *)(data_0216010c + 0x50d4);
            for (i = 0; i < 6; i = (s16)(i + 1)) {
                if (i < six && func_02089ae4(8, (s16)(i * 22 + 37), width, 18) == 1) {
                    s16 delta;
                    g = data_0216010c;
                    delta = (s16)(g[0x50d6] - i);
                    if (delta == 0) {
                        if (*(s16 *)(g + 0x52e6) & 2) *(s16 *)(g + 0x5382) |= 2;
                    } else {
                        g[0x50d6] -= (u8)delta;
                        data_0216010c[0x50d7] -= (u8)delta;
                        *(s16 *)(data_0216010c + 0x52e6) &= ~2;
                        func_0210d27c(sound);
                    }
                    handled = one;
                }
            }
            *(s16 *)(data_0216010c + 0x534e) &= ~2;
            if (!handled && func_02089ae4(10, 15, 14, 14) == 1) {
                if (data_0216010c[0x614] == 1) return;
                handled = one; *(s16 *)(data_0216010c + 0x534e) |= 2;
            }
            *(s16 *)(data_0216010c + 0x531a) &= ~2;
            if (!handled && func_02089ae4(87, 15, 14, 14) == 1) {
                if (data_0216010c[0x614] == 1) return;
                handled = one; *(s16 *)(data_0216010c + 0x531a) |= 2;
            }
            *(s16 *)(data_0216010c + 0x5300) &= ~2;
            if (!handled) {
                if (func_02089ae4(168, 37, 14, 14) == 1) {
                    g = data_0216010c;
                    if (*(s16 *)(g + 0x50d4) <= five) return;
                    if (g[0x50d7] - g[0x50d6] == 0) return;
                    handled = one; *(s16 *)(g + 0x5300) |= 2;
                    g = data_0216010c;
                    data_0216010c[0x50d7] = (u8)func_020851f8(g[0x50d7], 1, g[0x50d6],
                        (s16)(*(s16 *)(g + 0x50d4) - 6), 1);
                    func_0210d27c(2);
                }
            } else *(s16 *)(data_0216010c + 0x5300) &= ~2;
            *(s16 *)(data_0216010c + 0x5334) &= ~2;
            if (!handled) {
                if (func_02089ae4(168, 150, 14, 14) == 1) {
                    g = data_0216010c;
                    if (*(s16 *)(g + 0x50d4) <= five) return;
                    handled = one; *(s16 *)(g + 0x5334) |= 2;
                    g = data_0216010c;
                    data_0216010c[0x50d7] = (u8)func_020851bc(g[0x50d7], 1,
                        (s16)(*(s16 *)(g + 0x50d4) - 6 + g[0x50d6]), 0, 1);
                    func_0210d27c(2);
                }
            } else *(s16 *)(data_0216010c + 0x5334) &= ~2;
            *(s16 *)(data_0216010c + 0x5368) &= ~2;
            if (!handled) {
                s32 pos, moved;
                if (func_02089ae4(170, 52, 14, (s16)(*(s16 *)(data_0216010c + 0x50da) - 52)) == 1) {
                    g = data_0216010c;
                    if (*(s16 *)(g + 0x50d4) <= five) return;
                    handled = one;
                    moved = func_020851f8(g[0x50d7], 1, g[0x50d6], (s16)(*(s16 *)(g + 0x50d4) - 6), 1);
                    goto scroll_moved;
                } else {
                    g = data_0216010c;
                    pos = *(s16 *)(g + 0x50da) + g[0x50d8];
                    if (func_02089ae4(170, (s16)pos, 14, (s16)(147 - pos)) == 1) {
                        g = data_0216010c;
                        if (*(s16 *)(g + 0x50d4) <= five) return;
                        handled = one;
                        moved = func_020851bc(g[0x50d7], 1,
                            (s16)(*(s16 *)(g + 0x50d4) - 6 + g[0x50d6]), 0, 1);
scroll_moved:
                        data_0216010c[0x50d7] = (u8)moved;
                        func_0210d27c(2);
                        *(s16 *)(data_0216010c + 0x5368) |= 2;
                    } else if (func_02089ae4(170, 68, 14, 146) == 1) {
                        g = data_0216010c;
                        if (*(s16 *)(g + 0x50d4) <= five) return;
                        handled = one; *(s16 *)(data_0216010c + 0x5368) |= 2;
                    }
                }
            }
            if (!handled && func_02089ae4(195, 121, 52, 16) == 1) {
                handled = one; *(s16 *)(data_0216010c + 0x5382) |= 2;
            }
            *(s16 *)(data_0216010c + 0x51ae) &= ~2;
            if (!handled && func_02089ae4(232, 2, 20, 20) == 1)
                *(s16 *)(data_0216010c + 0x51ae) |= 2;
        } else {
            s32 cue;
            g = data_0216010c;
            *(s16 *)(g + 0x5300) &= ~2;
            *(s16 *)(data_0216010c + 0x5334) &= ~2;
            *(s16 *)(data_0216010c + 0x5368) &= ~2;
            *(s16 *)(data_0216010c + 0x52e6) |= 2;
            if (data_021626a6 & 0x40) {
                s32 count;
                g = data_0216010c;
                count = *(s16 *)(g + 0x50d4);
                if (count <= 1) return;
                if (g[0x50d7] == zero) {
                    if (count > five) {
                        g[0x50d7] = (u8)(count - 1); data_0216010c[0x50d6] = five;
                    } else {
                        g[0x50d7] = (u8)(count - 1); g = data_0216010c;
                        g[0x50d6] = (u8)(*(s16 *)(g + 0x50d4) - 1);
                    }
                } else {
                    if (g[0x50d6] != 0) g[0x50d6]--;
                    data_0216010c[0x50d7]--;
                }
                cue = 2; goto list_sound;
            } else if (data_021626a6 & 0x80) {
                g = data_0216010c;
                if (*(s16 *)(g + 0x50d4) <= 1) return;
                if (g[0x50d6] < five) g[0x50d6]++;
                data_0216010c[0x50d7]++;
                g = data_0216010c;
                if (*(s16 *)(g + 0x50d4) == g[0x50d7]) {
                    g[0x50d6] = zero; g = data_0216010c; g[0x50d7] = g[0x50d6];
                }
                cue = 2;
list_sound:
                func_0210d27c(cue);
            } else if ((data_021626a8 & 1) || (*(s16 *)(data_0216010c + 0x5382) & 2)) {
                g = data_0216010c;
                if (*(s16 *)(g + 0x50d4) > 0) {
                    if (func_02087754(g[0x50d7]) == 0) {
                        st[0] = five; func_0210d27c(11);
                        *(s16 *)(data_0216010c + 0x5382) |= 4;
                    } else { cue = 7; goto list_sound; }
                }
            } else if ((data_021626a8 & 2) || (*(s16 *)(data_0216010c + 0x51ae) & 2)) {
                func_0210d27c(5);
                *(s16 *)(data_0216010c + 0x51ae) |= 4;
                *(s16 *)(data_0216010c + 0x51ae) &= ~2;
                st[0] = 6;
            } else {
                u8 old = (u8)func_02085128(data_0216010c[0x50dc]);
                u16 keys = data_021626a6;
                if ((keys & 0x100) || (keys & 0x10) || (*(s16 *)(data_0216010c + 0x531a) & 2)) {
                    g = data_0216010c;
                    data_0216010c[0x50dc] = (u8)func_020851bc(g[0x50dc], one, (s16)(g[0x614] - 1), zero, sound);
                    if (old != func_02085128(data_0216010c[0x50dc])) {
                        func_02080d30();
                        func_02089284((s8)func_02085110(data_0216010c[0x50dc]), one);
                        data_0216010c[0x50d6] = zero; g = data_0216010c; g[0x50d7] = g[0x50d6];
                        func_0210d27c(sound); *(s16 *)(data_0216010c + 0x531a) |= 4;
                    }
                } else if ((keys & 0x200) || (keys & 0x20) || (*(s16 *)(data_0216010c + 0x534e) & 2)) {
                    g = data_0216010c;
                    data_0216010c[0x50dc] = (u8)func_020851f8(g[0x50dc], one, zero, (s16)(g[0x614] - 1), sound);
                    if (old != func_02085128(data_0216010c[0x50dc])) {
                        func_02080d30();
                        func_02089284((s8)func_02085110(data_0216010c[0x50dc]), one);
                        data_0216010c[0x50d6] = zero; g = data_0216010c; g[0x50d7] = g[0x50d6];
                        func_0210d27c(sound); *(s16 *)(data_0216010c + 0x534e) |= 4;
                    }
                }
            }
            *(s16 *)(data_0216010c + 0x5382) &= ~2;
            *(s16 *)(data_0216010c + 0x531a) &= ~2;
            *(s16 *)(data_0216010c + 0x534e) &= ~2;
        }
        break;
    }
    case 5:
        g[0x50de] = handled; g = data_0216010c;
        if (*(u16 *)(g + 0x48ac + g[0x50d7] * 0x40) == 0xe00) g[0x50de] = (u8)(six - 7);
        for (i = 0; i < 7; i = (s16)(i + 1)) {
            g = data_0216010c;
            if (g[0x614] > i)
                func_020895a0((u16)i, 0xc000, (i * 19 + 34) << 12, 90, 4,
                              (u16)(func_02085110((u8)i) + 1), 0, 0, 0);
            else func_020a994c(g + 0x74 + (s16)i * (s16)0x50);
        }
        func_020a8810(*(void **)(data_0216010c + 0x2a0), 0x16);
        g = data_0216010c;
        func_020895a0(7, 0x9f000, 0x4d000, 90, 0,
                      *(u16 *)(g + 0x4894 + g[0x50d7] * 0x40), 0, 0, 0);
        g = data_0216010c;
        if (func_02087cf4(g[0x50d7], (s8)g[0x50de]) != 1)
            *(s16 *)(data_0216010c + 0x5382) &= ~1;
        else *(s16 *)(data_0216010c + 0x5382) |= 1;
        *(s16 *)(data_0216010c + 0x5382) &= ~2;
        *(s16 *)(data_0216010c + 0x5382) &= ~4;
        st[0] = 7; break;
    case 6:
        st[0] = one;
        for (i = 0; i < 10; i = (s16)(i + 1)) {
            g = data_0216010c;
            if (g[0x614] > i)
                func_020895a0((u16)i, 0xc000, (i * 19 + 34) << 12, 90, 4,
                              (u16)(func_02085110((u8)i) + 1), 0, 0, 0);
            else func_020a994c(g + 0x74 + (s16)i * (s16)0x50);
        }
        break;
    case 7:
        func_02080c68();
        if (data_02162908[2]) {
            *(s16 *)(data_0216010c + 0x5382) &= ~2;
            if (func_02089ae4(197, 137, 52, 16) == 1 && func_02087754(data_0216010c[0x50d7]) == 0) {
                g = data_0216010c;
                if (func_02087cf4(g[0x50d7], (s8)g[0x50de]) == 1) {
                    handled = one; *(s16 *)(data_0216010c + 0x5382) |= 2;
                }
            }
            if (!handled) {
                if ((s8)data_0216010c[0x50de] != -1) {
                    for (i = 0; i < data_0216010c[0x614]; i = (s16)(i + 1)) {
                        if (func_02089ae4(8, (s16)(i * 19 + 33), 127, 17) == 1) {
                            g = data_0216010c;
                            if ((s8)g[0x50de] == i) {
                                if (*(s16 *)(g + 0x52e6) & 2) *(s16 *)(g + 0x5382) |= 2;
                            } else {
                                g[0x50de] = (u8)i; g = data_0216010c;
                                if (func_02087cf4(g[0x50d7], (s8)g[0x50de]) == 1)
                                    *(s16 *)(data_0216010c + 0x5382) |= 1;
                                else *(s16 *)(data_0216010c + 0x5382) &= ~1;
                                *(s16 *)(data_0216010c + 0x52e6) &= ~2;
                                func_0210d27c(sound);
                            }
                            handled = one;
                        }
                    }
                } else {
                    s16 j;
                    for (j = 0; j < data_0216010c[0x614]; j++) {
                        if (func_02089ae4(8, (s16)(j * (s16)19 + 33), 127, 17) == 1) {
                            g = data_0216010c;
                            if (*(s16 *)(g + 0x52e6) & 2) {
                                handled = one; *(s16 *)(g + 0x5382) |= 2;
                            }
                        }
                    }
                }
            }
            *(s16 *)(data_0216010c + 0x51ae) &= ~2;
            if (!handled && func_02089ae4(232, 2, 20, 20) == 1)
                *(s16 *)(data_0216010c + 0x51ae) |= 2;
        } else {
            *(s16 *)(data_0216010c + 0x52e6) |= 2;
            if ((data_021626a8 & 1) || (*(s16 *)(data_0216010c + 0x5382) & 2)) {
                *(s16 *)(data_0216010c + 0x5382) |= 4; st[0] = 8; return;
            }
            if ((data_021626a8 & 2) || (*(s16 *)(data_0216010c + 0x51ae) & 2)) {
                st[0] = 9; func_0210d27c(5);
                *(s16 *)(data_0216010c + 0x51ae) |= 4;
                *(s16 *)(data_0216010c + 0x51ae) &= ~2; return;
            }
            g = data_0216010c;
            if ((s8)g[0x50de] == -1) return;
            if (data_021626a6 & 0x80) {
                if (g[0x614] == 1) return;
                data_0216010c[0x50de] = (u8)func_020851bc((s8)g[0x50de], one, (s16)(g[0x614] - 1), 0, sound);
                func_0210d27c(sound); g = data_0216010c;
                if (func_02087cf4(g[0x50d7], (s8)g[0x50de]) == 1)
                    *(s16 *)(data_0216010c + 0x5382) |= 1;
                else *(s16 *)(data_0216010c + 0x5382) &= ~1;
            } else if ((data_021626a6 & 0x40) && g[0x614] != 1) {
                data_0216010c[0x50de] = (u8)func_020851f8((s8)g[0x50de], one, 0, (s16)(g[0x614] - 1), sound);
                func_0210d27c(sound); g = data_0216010c;
                if (func_02087cf4(g[0x50d7], (s8)g[0x50de]) == 1)
                    *(s16 *)(data_0216010c + 0x5382) |= 1;
                else *(s16 *)(data_0216010c + 0x5382) &= ~1;
            }
        }
        break;
    case 8:
        *(s16 *)(g + 0x5382) &= ~2;
        *(s16 *)(data_0216010c + 0x5382) &= ~4;
        g = data_0216010c;
        if (func_020877b4(g[0x50d7], (s8)g[0x50de]) == 0) func_0210d27c(7);
        if (func_02087754(data_0216010c[0x50d7]) == 0) {
            st[0] = 7; g = data_0216010c;
            if (func_02087cf4(g[0x50d7], (s8)g[0x50de]) == 1)
                *(s16 *)(data_0216010c + 0x5382) |= 1;
            else *(s16 *)(data_0216010c + 0x5382) &= ~1;
        } else st[0] = 9;
        break;
    case 9:
        for (i = 0; i < 8; i = (s16)(i + 1))
            func_020a994c(data_0216010c + 0x74 + (s16)i * (s16)0x50);
        st[0] = 4; break;
    }
}
