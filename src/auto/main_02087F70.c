/* 2 functions from 0x02087F70 to 0x02088E90 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_0216010c;
extern u16 data_02162908[4];
extern u16 data_021626a8;
extern u16 data_021626a6;
extern s32 func_02085110(u8);
extern void func_020895a0(u16, s32, s32, s32, s32, u16, s32, s32, s32);
extern void func_02080c68(void);
extern s32 func_02089ae4(s32, s16, s32, s32);
extern void func_0210d27c(s32);
extern s32 func_02085128(u8);
extern void func_02080b58(u8);
extern void func_02086030(void);
extern void func_02092010(s32, u16);
extern u8 func_020851bc(u8, s32, s16, s32, s32);
extern u8 func_020851f8(u8, s32, s32, s16, s32);
extern void func_02089284(s8, s32);
extern void func_020a994c(void *);
void func_02087f70(void) {
    register s32 max asm("r6") = 6;
    register u8 *state asm("r7") = *(u8 **)(data_0216010c + 0x44);
    s16 i;

    switch (*state) {
    case 0:
        *state = 1;
        data_0216010c[0x50dc] = 0;
        for (i = 0; i < data_0216010c[0x614]; i++) {
            u16 v = func_02085110((u8)i) + 1;
            func_020895a0((u16)i, 0xc000, (i * 0x13 + 0x22) << 12, 0x5a, 4, v, 0, 0, 0);
        }
        break;

    case 1:
        func_02080c68();
        if (data_02162908[2] != 0) {
            s32 hit = 0;
            *(s16 *)(data_0216010c + 0x5382) &= ~2;
            if (func_02089ae4(0xc5, 0x89, 0x34, 0x10) == 1) {
                hit = 1;
                *(s16 *)(data_0216010c + 0x5382) |= 2;
            }
            if (hit == 0) {
                for (i = 0; i < data_0216010c[0x614]; i++) {
                    if (func_02089ae4(8, (s16)(i * 0x13 + 0x21), 0x7f, 0x11) == 1) {
                        s16 diff = (s16)(data_0216010c[0x50dc] - i);
                        if (diff == 0) {
                            if (*(s16 *)(data_0216010c + 0x52e6) & 2) {
                                *(s16 *)(data_0216010c + 0x5382) |= 2;
                            }
                        } else {
                            data_0216010c[0x50dc] -= (u8)diff;
                            *(s16 *)(data_0216010c + 0x52e6) &= ~2;
                            func_0210d27c(2);
                            func_02080b58((u8)func_02085128(data_0216010c[0x50dc]));
                        }
                        hit = 1;
                    }
                }
            }
            *(s16 *)(data_0216010c + 0x51ae) &= ~2;
            if (hit == 0 && func_02089ae4(0xe8, 2, 0x14, 0x14) == 1) {
                *(s16 *)(data_0216010c + 0x51ae) |= 2;
            }
        } else {
            *(s16 *)(data_0216010c + 0x52e6) |= 2;
            if ((data_021626a8 & 1) || (*(s16 *)(data_0216010c + 0x5382) & 2)) {
                func_0210d27c(0xb);
                *state = 2;
                *(s16 *)(data_0216010c + 0x5382) |= 4;
            } else if ((data_021626a8 & 2) || (*(s16 *)(data_0216010c + 0x51ae) & 2)) {
                func_02086030();
                func_0210d27c(5);
                func_02092010(2, (u16)((s8)data_0216010c[0x50d2] + ((s8)data_0216010c[0x50d1] << 1)));
                *(s16 *)(data_0216010c + 0x51ae) |= 4;
                *(s16 *)(data_0216010c + 0x51ae) &= ~2;
            } else {
                u8 prev = (u8)func_02085128(data_0216010c[0x50dc]);
                if (data_021626a6 & 0x80) {
                    data_0216010c[0x50dc] = func_020851bc(data_0216010c[0x50dc], 1, (s16)(data_0216010c[0x614] - 1), 0, 2);
                    if (prev != func_02085128(data_0216010c[0x50dc])) {
                        func_02080b58((u8)func_02085128(data_0216010c[0x50dc]));
                        func_0210d27c(2);
                    }
                } else if (data_021626a6 & 0x40) {
                    data_0216010c[0x50dc] = func_020851f8(data_0216010c[0x50dc], 1, 0, (s16)(data_0216010c[0x614] - 1), 2);
                    if (prev != func_02085128(data_0216010c[0x50dc])) {
                        func_02080b58((u8)func_02085128(data_0216010c[0x50dc]));
                        func_0210d27c(2);
                    }
                }
            }
        }
        break;

    case 2:
        func_02089284((s8)func_02085110(data_0216010c[0x50dc]), 0);
        data_0216010c[0x50d6] = 0;
        data_0216010c[0x50d7] = 0;
        *(s16 *)(data_0216010c + 0x5382) &= ~2;
        *(s16 *)(data_0216010c + 0x5382) &= ~4;
        func_020a994c(data_0216010c + 0x254);
        *state = 4;
        break;

    case 4:
        i = 0;
        func_02080c68();
        if (data_02162908[2] != 0) {
            s32 hit = 0;
            if (*(s16 *)(data_0216010c + 0x50d4) < 6) {
                max = (u8)*(s16 *)(data_0216010c + 0x50d4);
            }
            for (i = 0; i < 6; i++) {
                if (i < max && func_02089ae4(8, (s16)(i * 0x16 + 0x25), 0x9c, 0x12) == 1) {
                    s16 diff = (s16)(data_0216010c[0x50d6] - i);
                    if (diff != 0) {
                        data_0216010c[0x50d6] -= (u8)diff;
                        data_0216010c[0x50d7] -= (u8)diff;
                        *(s16 *)(data_0216010c + 0x52e6) &= ~2;
                        func_0210d27c(2);
                    }
                    hit = 1;
                }
            }
            *(s16 *)(data_0216010c + 0x534e) &= ~2;
            if (hit == 0 && func_02089ae4(0xa, 0xf, 0xe, 0xe) == 1) {
                if (data_0216010c[0x614] == 1) return;
                *(s16 *)(data_0216010c + 0x534e) |= 2;
                hit = 1;
            }
            *(s16 *)(data_0216010c + 0x531a) &= ~2;
            if (hit == 0 && func_02089ae4(0x57, 0xf, 0xe, 0xe) == 1) {
                if (data_0216010c[0x614] == 1) return;
                *(s16 *)(data_0216010c + 0x531a) |= 2;
                hit = 1;
            }
            *(s16 *)(data_0216010c + 0x5300) &= ~2;
            if (hit == 0) {
                if (func_02089ae4(0xa8, 0x25, 0xe, 0xe) == 1) {
                    if (*(s16 *)(data_0216010c + 0x50d4) <= 5) return;
                    if (data_0216010c[0x50d7] == data_0216010c[0x50d6]) return;
                    hit = 1;
                    *(s16 *)(data_0216010c + 0x5300) |= 2;
                    data_0216010c[0x50d7] = func_020851f8(data_0216010c[0x50d7], 1, data_0216010c[0x50d6], (s16)(*(s16 *)(data_0216010c + 0x50d4) - 6), 1);
                    func_0210d27c(2);
                }
            } else {
                *(s16 *)(data_0216010c + 0x5300) &= ~2;
            }
            *(s16 *)(data_0216010c + 0x5334) &= ~2;
            if (hit == 0 && func_02089ae4(0xa8, 0x96, 0xe, 0xe) == 1) {
                if (*(s16 *)(data_0216010c + 0x50d4) <= 5) return;
                if (data_0216010c[0x50d7] >= (s16)(*(s16 *)(data_0216010c + 0x50d4) - 6 + data_0216010c[0x50d6])) return;
                hit = 1;
                *(s16 *)(data_0216010c + 0x5334) |= 2;
                data_0216010c[0x50d7] = func_020851bc(data_0216010c[0x50d7], 1, 0, (s16)(*(s16 *)(data_0216010c + 0x50d4) - 6 + data_0216010c[0x50d6]), 1);
                func_0210d27c(2);
            }
            *(s16 *)(data_0216010c + 0x5368) &= ~2;
            if (hit == 0) {
                if (func_02089ae4(0xaa, 0x34, 0xe, (s16)(*(s16 *)(data_0216010c + 0x50da) - 0x34)) == 1) {
                    if (*(s16 *)(data_0216010c + 0x50d4) <= 5) return;
                    hit = 1;
                    data_0216010c[0x50d7] = func_020851f8(data_0216010c[0x50d7], 1, data_0216010c[0x50d6], (s16)(*(s16 *)(data_0216010c + 0x50d4) - 6), 1);
                    *(s16 *)(data_0216010c + 0x5368) |= 2;
                } else if (func_02089ae4(0xaa, (s16)(*(s16 *)(data_0216010c + 0x50da) + data_0216010c[0x50d8]), 0xe, (s16)(0x93 - (*(s16 *)(data_0216010c + 0x50da) + data_0216010c[0x50d8]))) == 1) {
                    if (*(s16 *)(data_0216010c + 0x50d4) <= 5) return;
                    hit = 1;
                    data_0216010c[0x50d7] = func_020851bc(data_0216010c[0x50d7], 1, 0, (s16)(*(s16 *)(data_0216010c + 0x50d4) - 6 + data_0216010c[0x50d6]), 1);
                    func_0210d27c(2);
                    *(s16 *)(data_0216010c + 0x5368) |= 2;
                } else if (func_02089ae4(0xaa, 0x44, 0xe, 0x92) == 1) {
                    if (*(s16 *)(data_0216010c + 0x50d4) <= 5) return;
                    *(s16 *)(data_0216010c + 0x5368) |= 2;
                }
            }
            if (hit != 0) return;
            *(s16 *)(data_0216010c + 0x51ae) &= ~2;
            if (func_02089ae4(0xe8, 2, 0x14, 0x14) != 1) return;
            *(s16 *)(data_0216010c + 0x51ae) |= 2;
            return;
        } else {
            *(s16 *)(data_0216010c + 0x5300) &= ~2;
            *(s16 *)(data_0216010c + 0x5334) &= ~2;
            *(s16 *)(data_0216010c + 0x5368) &= ~2;
            if (data_021626a6 & 0x40) {
                if (*(s16 *)(data_0216010c + 0x50d4) <= 1) return;
                if (data_0216010c[0x50d7] == 0) {
                    data_0216010c[0x50d7] = *(s16 *)(data_0216010c + 0x50d4) - 1;
                    data_0216010c[0x50d6] = (u8)((*(s16 *)(data_0216010c + 0x50d4) > 5) ? 5 : *(s16 *)(data_0216010c + 0x50d4) - 1);
                } else {
                    if (data_0216010c[0x50d6] != 0) data_0216010c[0x50d6]--;
                    data_0216010c[0x50d7]--;
                }
            } else if (data_021626a6 & 0x80) {
                if (*(s16 *)(data_0216010c + 0x50d4) <= 1) return;
                if (data_0216010c[0x50d6] < 5) data_0216010c[0x50d6]++;
                data_0216010c[0x50d7]++;
                if (*(s16 *)(data_0216010c + 0x50d4) == data_0216010c[0x50d7]) {
                    data_0216010c[0x50d6] = 0;
                    data_0216010c[0x50d7] = data_0216010c[0x50d6];
                }
                func_0210d27c(2);
            } else if (!(data_021626a8 & 2)) {
                if (*(s16 *)(data_0216010c + 0x51ae) & 2) {
                    *state = 6;
                    func_0210d27c(5);
                    *(s16 *)(data_0216010c + 0x51ae) |= 4;
                }
            } else {
                u8 prev = (u8)func_02085128(data_0216010c[0x50dc]);
                if (!(data_021626a6 & 0x100) && !(data_021626a6 & 0x10)) {
                    if (*(s16 *)(data_0216010c + 0x531a) & 2) {
                        data_0216010c[0x50dc] = func_020851bc(data_0216010c[0x50dc], 1, 0, (s16)(data_0216010c[0x614] - 1), 2);
                        if (prev != (u8)func_02085128(data_0216010c[0x50dc])) {
                            func_02080b58((u8)func_02085128(data_0216010c[0x50dc]));
                            func_0210d27c(2);
                        }
                        *(s16 *)(data_0216010c + 0x531a) |= 4;
                        return;
                    }
                }
                if (!(data_021626a6 & 0x200) && !(data_021626a6 & 0x20)) {
                    if (*(s16 *)(data_0216010c + 0x534e) & 2) {
                        data_0216010c[0x50dc] = func_020851f8(data_0216010c[0x50dc], 1, 0, (s16)(data_0216010c[0x614] - 1), 2);
                        if (prev != (u8)func_02085128(data_0216010c[0x50dc])) {
                            func_02080b58((u8)func_02085128(data_0216010c[0x50dc]));
                            func_0210d27c(2);
                        }
                        *(s16 *)(data_0216010c + 0x534e) |= 4;
                        *(s16 *)(data_0216010c + 0x531a) &= ~2;
                        *(s16 *)(data_0216010c + 0x534e) &= ~2;
                    }
                }
            }
        }
        break;

    case 6:
        for (i = 0; i < 10; i++) {
            if (data_0216010c[0x614] <= i) {
                func_020a994c(data_0216010c + 0x74 + i * 0x50);
            } else {
                u16 v = func_02085110((u8)i) + 1;
                func_020895a0((u16)i, 0xc000, (i * 0x13 + 0x22) << 12, 0x5a, 4, v, 0, 0, 0);
            }
        }
        *state = 1;
        *(s16 *)(data_0216010c + 0x51ae) &= ~4;
        break;
    }
}

s32 func_02088e10(const void *arg0, const void *arg1) {
    struct {
        u32 unk_00[9];
        u16 unk_24;
        s16 unk_26;
        u32 unk_28[6];
    } a, b;

    a = *(const typeof(a) *)arg0;
    b = *(const typeof(b) *)arg1;

    if (a.unk_26 < b.unk_26) {
        return -1;
    }
    if (a.unk_26 > b.unk_26) {
        return 1;
    }
    return 0;
}
