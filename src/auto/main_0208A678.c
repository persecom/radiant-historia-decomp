/* 5 functions from 0x0208A678 to 0x0208B398 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600b0;
extern void func_0208c420(s32, s32);

typedef struct {
    u16 x;
    u16 y;
    u16 z;
} UnkVec3_0208b144;

extern void func_0208b398(UnkVec3_0208b144, s16);
void func_0208b198(void);
void func_0208b298(void);

typedef struct {
    s16 data[10];
} UnkBuf10_0208b198;

typedef struct {
    s16 data[27];
} UnkBuf27_0208b198;

extern UnkBuf10_0208b198 data_02140d4c;
extern UnkBuf27_0208b198 data_02140ec0;

extern void func_020a3bbc(u16);
extern void func_021098ac(void *);

extern u8 *data_0216010c;
extern u16 data_02162908[4];
extern u16 data_021626a8;
extern u8 data_021626b0[6];
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void func_020a3b84(void);
extern void func_02108ffc(void);
extern void func_020a31c8(s32);
extern void func_021167ac(void *, s32);
extern void func_020a033c(void *);
extern s32 func_020a2754(s32, s32, s32, s32);
extern void func_0210d27c(s32);
extern s32 func_020a2664(s32, s32, s32);
extern s32 func_0210c28c(s16 *, s16 *, void *);
extern void func_020a994c(void *);
extern void func_02064b84(s32, s32, s32, s32);
extern void func_0208a5e0(void);
void func_0208a678(void) {
    u8 *p = data_021600b0;
    u8 *w = data_0216010c;
    u8 *node;
    u8 *next;
    s32 i6 = 2;
    s32 i7 = 1;
    s32 i8 = 0, i9 = 0, i10 = 0;
    s32 a, b, c, d, e, f;

    switch (*(u16 *)(p + 0xde)) {
    case 0:
        node = *(u8 **)(w + 0x5f0);
        while (node != NULL) {
            next = *(u8 **)(node + 0x30);
            func_021168f8(w + 0x5f0, node);
            if (node != NULL) {
                func_0210c5dc(node);
            }
            node = next;
        }
        node = *(u8 **)(w + 0x5fc);
        while (node != NULL) {
            next = *(u8 **)(node + 0x30);
            func_021168f8(w + 0x5fc, node);
            if (node != NULL) {
                func_0210c5dc(node);
            }
            node = next;
        }
        func_020a3b84();
        *(u16 *)(p + 0xde) = 1;
        return;
    case 1: {
        u8 *q = p + 0x100;
        func_02108ffc();
        func_020a31c8(0xc);
        i7 = 4;
        func_021167ac(p + 0x1d4, i7);
        func_02108ffc();
        func_020a033c(p + 0x1d4);
        *(s16 *)(q + 0xe2) = i7 - 0xe;
        if (*(s16 *)(q + 0xec) > 4) {
            *(s16 *)(q + 0xe0) = (*(s16 *)(q + 0xec) - 3) * (i7 - 0x2c);
            *(s16 *)(q + 0xcc) = 0x91;
            if (*(s16 *)(q + 0xec) == 0x58) {
                *(s16 *)(q + 0xe0) = (*(s16 *)(q + 0xec) - 4) * (0x91 - 0xb9);
                *(s16 *)(q + 0xcc) = 0xb9;
            }
        } else {
            *(s16 *)(q + 0xe0) = 0;
            *(s16 *)(q + 0xcc) = *(s16 *)(q + 0xec) * 0x28 + 0x19;
        }
        q = p + 0x100;
        *(s16 *)(q + 0xce) = *(s16 *)(q + 0xee) * 0x1c + 0x57;
        i7 = 3;
        *(s16 *)(q + 0xc6) = (*(s16 *)(q + 0xcc) - *(s16 *)(q + 0xe0)) / 40;
        *(s16 *)(q + 0xc8) = (*(s16 *)(q + 0xce) - (*(s16 *)(q + 0xe2) + 28)) / 28;
        p[0x1fa] = i7;
        if (*(s16 *)(q + 0xf8) == 0x58) {
            p[0x1fa] = 4;
        }
        *(u16 *)(p + 0xde) = i6;
        return;
    }
    case 2:
        *(u16 *)(p + 0xde) = 5;
        return;
    case 5: {
        u16 *in = data_02162908;
        u16 keys = data_021626a8;
        s32 flag = 1;
        s16 out[2];
        i6 = 0;
        i7 = 0;
        i8 = 0;
        i9 = 0;
        i10 = 0;
        if (in[2] != 0) {
            p[0x212] &= ~2;
            if (((s8)p[0x212] & 1) != 0) {
                if (func_020a2754(0xa3, 0xad, 0x50, 0x14) == 1) {
                    p[0x212] |= 2;
                    flag = 0;
                }
            } else if (!(p[0x1f3] & 2)) {
                if ((s16)((s16)((in[0] - *(s16 *)(p + 0x1e0)) / 40) * 5 +
                          (s16)((in[1] - (*(s16 *)(p + 0x1e2) + 28)) / 28)) ==
                    *(s16 *)(p + 0x1e8)) {
                    p[0x212] |= 2;
                    flag = 0;
                }
            }
            p[0x21e] &= ~2;
            if (((s8)p[0x21e] & 1) != 0 &&
                func_020a2754(0xe8, -10, 30, 30) == 1 && flag == 1) {
                p[0x21e] |= 2;
                flag = 0;
            }
            p[0x22a] &= ~2;
            if (*(s32 *)(p + 0x224) == 1 &&
                func_020a2754(0xa, 0x50, 0xe, 0xe) == 1 && flag == 1) {
                p[0x22a] |= 2;
                flag = 0;
            }
            p[0x236] &= ~2;
            if (*(s32 *)(p + 0x230) == 1 &&
                func_020a2754(0xe9, 0x50, 0xe, 0xe) == 1 && flag == 1) {
                p[0x236] |= 2;
                flag = 0;
            }
        }
        p[0x1f3] &= ~2;
        if (((s8)p[0x212] & 2) != 0) {
            p[0x212] &= ~2;
            i7 = flag;
            flag = 0;
        }
        if (!(keys & 2)) {
            if (((s8)p[0x21e] & 2) != 0) {
                *(u16 *)(p + 0xde) = 6;
                func_0210d27c(5);
                p[0x21e] |= 2;
                return;
            }
            if (((s8)p[0x22a] & 2) != 0) {
                *(s16 *)(p + 0x1e0) += 0xc8;
                if (*(s16 *)(p + 0x1e0) > 0) {
                    *(s16 *)(p + 0x1e0) = 0;
                }
                p[0x22a] &= ~2;
                func_0210d27c(2);
                if (((s8)p[0x236] & 2) != 0) {
                    *(s16 *)(p + 0x1e0) -= 0xc8;
                    if (-*(s16 *)(p + 0x1e0) / 40 + 6 >= (s16)*(s16 *)(p + 0x1f8)) {
                        *(s16 *)(p + 0x1e0) = ((s16)*(s16 *)(p + 0x1f8) - (s16)p[0x1fa]) * -0x27;
                    }
                    p[0x236] &= ~2;
                    func_0210d27c(2);
                }
            }
            if (flag == 1 && ((s8)p[0x212] & 1) != 0 && (keys & 0x800)) {
                p[0x212] |= 4;
                flag = 0;
                i7 = 1;
            }
        }
        if (flag != 1) {
            return;
        }
        if (in[2] == 1) {
            p[0x1f3] |= 2;
            i9 = in[0];
            i10 = in[1];
            i6 = 1;
        } else {
            if ((keys & 0x100) && *(s32 *)(p + 0x230) == 1) {
                *(s16 *)(p + 0x1e0) -= 0xc8;
                if (-*(s16 *)(p + 0x1e0) / 40 + 6 >= (s16)*(s16 *)(p + 0x1f8)) {
                    *(s16 *)(p + 0x1e0) = ((s16)*(s16 *)(p + 0x1f8) - (s16)p[0x1fa]) * -0x27;
                }
                p[0x236] |= 4;
            } else if ((keys & 0x200) && *(s32 *)(p + 0x224) == 1) {
                *(s16 *)(p + 0x1e0) += 0xc8;
                if (*(s16 *)(p + 0x1e0) > 0) {
                    *(s16 *)(p + 0x1e0) = 0;
                }
                p[0x22a] |= 4;
                func_0210d27c(2);
            } else {
                i9 = *(s16 *)(p + 0x1cc);
                i10 = *(s16 *)(p + 0x1ce);
                if (data_021626b0[0] & 0x10) { i6 = 1; i8 = 1; i9 += p[0x238]; }
                if (data_021626b0[0] & 0x20) { i6 = 1; i8 = 1; i9 -= p[0x238]; }
                if (data_021626b0[0] & 0x40) { i6 = 1; i8 = 1; i10 -= p[0x238]; }
                if (data_021626b0[0] & 0x80) { i6 = 1; i8 = 1; i10 += p[0x238]; }
            }
        }
        if (i8 != 1) {
            p[0x239] = 0;
            p[0x238] = 8;
        } else {
            p[0x239] = (p[0x239] + 1) & 0xff;
            if (p[0x239] >= 0x1e) {
                p[0x238] = (p[0x238] + 1) & 0xff;
                p[0x239] = 0;
                if (p[0x238] >= 0xf) {
                    p[0x238] = 0xf;
                }
            }
        }
        if (func_020a2664(i9, i10, i6) == 0) {
            out[0] = *(s16 *)(p + 0x1cc);
            out[1] = *(s16 *)(p + 0x1ce);
            if (func_0210c28c(out, &i9, p + 0x100) <= 2) {
                *(s16 *)(p + 0x1cc) = i9;
                *(s16 *)(p + 0x1ce) = i10;
            }
        }
        return;
    }
    default:
        return;
    }
}

void func_0208b110(void) {
    u16 state = *(u16 *)(data_021600b0 + 0xde);
    if (state != 5 && state != 6) {
        return;
    }
    func_0208c420(0, 0);
    func_0208b198();
}

void func_0208b144(void) {
    u8 *p = data_021600b0;
    u16 state = *(u16 *)(p + 0xde);
    if (state != 5 && state != 6) {
        return;
    }
    func_0208b298();
    func_0208b398(*(UnkVec3_0208b144 *)(p + 0x1e0), *(s16 *)(p + 0x1ea));
}

void func_0208b198(void) {
    UnkBuf10_0208b198 other;
    UnkBuf27_0208b198 buf;
    u16 i;

    other = data_02140d4c;
    buf = data_02140ec0;
    *(volatile u32 *)0x040004a4 = 0x1f00c0;
    func_020a3bbc(0x1e);
    for (i = 0; i < 3; i++) {
        u16 idx = i * 9;
        other.data[1] = buf.data[idx + 0];
        other.data[2] = buf.data[idx + 1];
        other.data[3] = buf.data[idx + 2];
        other.data[4] = buf.data[idx + 3];
        other.data[5] = buf.data[idx + 4];
        other.data[6] = buf.data[idx + 5];
        other.data[8] = buf.data[idx + 7];
        other.data[9] = buf.data[idx + 8];
        func_021098ac(other.data);
    }
}

extern UnkBuf10_0208b198 data_02140e50;
extern UnkBuf27_0208b198 data_02140e88;
void func_0208b298(void) {
    UnkBuf10_0208b198 other;
    UnkBuf27_0208b198 buf;
    u16 i;

    other = data_02140e50;
    buf = data_02140e88;
    *(volatile u32 *)0x040004a4 = 0x1f00c0;
    func_020a3bbc(0x1e);
    for (i = 0; i < 3; i++) {
        u16 idx = i * 9;
        other.data[1] = buf.data[idx + 0];
        other.data[2] = buf.data[idx + 1];
        other.data[3] = buf.data[idx + 2];
        other.data[4] = buf.data[idx + 3];
        other.data[5] = buf.data[idx + 4];
        other.data[6] = buf.data[idx + 5];
        other.data[8] = buf.data[idx + 7];
        other.data[9] = buf.data[idx + 8];
        func_021098ac(other.data);
    }
}

