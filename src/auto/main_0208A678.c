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
extern s32 func_0210c28c();
extern void func_020a994c(void *);
extern void func_02064b84(s32, s32, s32, s32);
extern void func_0208a5e0(void);
extern u32 func_020a1734(u32);
extern void func_0208c680(s32, s32, s32, s32, u16);
void func_0208a678(void) {
    u8 *p = data_021600b0;

    switch (*(u16 *)(p + 0xde)) {
    case 0: {
        u8 *node = *(u8 **)(data_0216010c + 0x5f0);
        while (node != NULL) {
            u8 *next = *(u8 **)(node + 0x30);
            func_021168f8(data_0216010c + 0x5f0, node);
            if (node != NULL) {
                func_0210c5dc(node);
            }
            node = next;
        }
        node = *(u8 **)(data_0216010c + 0x5fc);
        while (node != NULL) {
            u8 *next = *(u8 **)(node + 0x30);
            func_021168f8(data_0216010c + 0x5fc, node);
            if (node != NULL) {
                func_0210c5dc(node);
            }
            node = next;
        }
        func_020a3b84();
        *(u16 *)(p + 0xde) = 1;
        break;
    }
    case 1: {
        func_02108ffc();
        func_020a31c8(0xc);
        func_021167ac(p + 0x1d4, 4);
        func_02108ffc();
        func_020a033c(p + 0x1d4);
        *(s16 *)(p + 0x1e2) = -10;
        if (*(s16 *)(p + 0x1ec) <= 4) {
            *(s16 *)(p + 0x1e0) = 0;
            *(s16 *)(p + 0x1cc) = *(s16 *)(p + 0x1ec) * 0x28 + 0x19;
        } else {
            *(s16 *)(p + 0x1e0) = (*(s16 *)(p + 0x1ec) - 3) * -40;
            *(s16 *)(p + 0x1cc) = 0x91;
            if (*(s16 *)(p + 0x1ec) == 0x58) {
                *(s16 *)(p + 0x1e0) = (*(s16 *)(p + 0x1ec) - 4) * -40;
                *(s16 *)(p + 0x1cc) = 0xb9;
            }
        }
        *(s16 *)(p + 0x1ce) = *(s16 *)(p + 0x1ee) * 0x1c + 0x57;
        *(s16 *)(p + 0x1c6) = (*(s16 *)(p + 0x1cc) - *(s16 *)(p + 0x1e0)) / 40;
        *(s16 *)(p + 0x1c8) = (*(s16 *)(p + 0x1ce) - (*(s16 *)(p + 0x1e2) + 28)) / 28;
        p[0x1fa] = 3;
        if (*(s16 *)(p + 0x1f8) == 0x58) {
            p[0x1fa] = 4;
        }
        *(u16 *)(p + 0xde) = 2;
    }
    case 2:
        *(u16 *)(p + 0xde) = 5;
        break;
    case 3:
    case 4:
        break;
    case 5: {
        s32 flag = 1;
        s32 x6 = 0;
        s32 x7 = 0;
        s32 moved = 0;
        s16 ix = 0;
        s16 iy = 0;

        if (data_02162908[2] != 0) {
            p[0x212] = (s8)p[0x212] & ~2;
            if (((s8)p[0x212] & 1) != 0) {
                if (func_020a2754(0xa3, 0xad, 0x50, 0x14) == 1) {
                    p[0x212] = (s8)p[0x212] | 2;
                    flag = 0;
                } else if (!(p[0x1f3] & 2)) {
                    if ((s16)((s16)((data_02162908[0] - *(s16 *)(p + 0x1e0)) / 40) * 5 +
                              (s16)((data_02162908[1] - (*(s16 *)(p + 0x1e2) + 28)) / 28)) ==
                        *(s16 *)(p + 0x1e8)) {
                        p[0x212] = (s8)p[0x212] | 2;
                        flag = 0;
                    }
                }
            }
            p[0x21e] = (s8)p[0x21e] & ~2;
            if (func_020a2754(0xe8, -10, 30, 30) == 1 && flag == 1) {
                p[0x21e] = (s8)p[0x21e] | 2;
                flag = 0;
            }
            p[0x22a] = (s8)p[0x22a] & ~2;
            if (*(s32 *)(p + 0x224) == 1 &&
                func_020a2754(0xa, 0x50, 0xe, 0xe) == 1 && flag == 1) {
                p[0x22a] = (s8)p[0x22a] | 2;
                flag = 0;
            }
            p[0x236] = (s8)p[0x236] & ~2;
            if (*(s32 *)(p + 0x230) == 1 &&
                func_020a2754(0xe9, 0x50, 0xe, 0xe) == 1 && flag == 1) {
                p[0x236] = (s8)p[0x236] | 2;
                flag = 0;
            }
        } else {
            p[0x1f3] &= 0xfd;
            if (((s8)p[0x212] & 2) != 0) {
                p[0x212] = (s8)p[0x212] & ~2;
                x7 = 1;
                flag = 0;
            }
            if ((data_021626a8 & 2) || ((s8)p[0x21e] & 2) != 0) {
                *(u16 *)(p + 0xde) = 6;
                func_0210d27c(5);
                p[0x21e] = (s8)p[0x21e] | 2;
                return;
            }
            if (((s8)p[0x22a] & 2) != 0) {
                *(volatile s16 *)(p + 0x1e0) += 0xc8;
                flag = 0;
                if (*(volatile s16 *)(p + 0x1e0) > 0) {
                    *(s16 *)(p + 0x1e0) = 0;
                }
                p[0x22a] = (s8)p[0x22a] & ~2;
                func_0210d27c(2);
            }
            if (((s8)p[0x236] & 2) != 0) {
                *(s16 *)(p + 0x1e0) -= 0xc8;
                if ((s16)(-*(s16 *)(p + 0x1e0) / 40) + 6 >= *(s16 *)(p + 0x1f8)) {
                    *(s16 *)(p + 0x1e0) = (s16)(*(s16 *)(p + 0x1f8) - (s8)p[0x1fa]) * (s16)-40;
                }
                flag = 0;
                p[0x236] = (s8)p[0x236] & ~2;
                func_0210d27c(2);
            }
        }

        if (flag == 1 && ((s8)p[0x212] & 1) != 0 && (data_021626a8 & 0x800)) {
            p[0x212] = (s8)p[0x212] | 4;
            flag = 0;
            x7 = 1;
        }

        if (flag == 1) {
            struct TPPos { u16 x, y, touch, validity; } pos = *(struct TPPos *)data_02162908;
            if (pos.touch == 1) {
                p[0x1f3] |= 2;
                ix = pos.x;
                iy = pos.y;
                x6 = 1;
            } else {
                if ((data_021626a8 & 0x100) && *(s32 *)(p + 0x230) == 1) {
                    *(s16 *)(p + 0x1e0) -= 0xc8;
                    if ((s16)(-*(s16 *)(p + 0x1e0) / 40) + 6 >= *(s16 *)(p + 0x1f8)) {
                        *(s16 *)(p + 0x1e0) = (s16)(*(s16 *)(p + 0x1f8) - (s8)p[0x1fa]) * (s16)-40;
                    }
                    p[0x236] = (s8)p[0x236] | 4;
                    func_0210d27c(2);
                } else if ((data_021626a8 & 0x200) && *(s32 *)(p + 0x224) == 1) {
                    *(volatile s16 *)(p + 0x1e0) += 0xc8;
                    if (*(volatile s16 *)(p + 0x1e0) > 0) {
                        *(s16 *)(p + 0x1e0) = 0;
                    }
                    p[0x22a] = (s8)p[0x22a] | 4;
                    func_0210d27c(2);
                } else {
                    u16 hold = *(u16 *)data_021626b0;
                    ix = *(s16 *)(p + 0x1cc);
                    iy = *(s16 *)(p + 0x1ce);
                    if (hold & 0x10) { x6 = 1; moved = 1; ix = *(s16 *)(p + 0x1cc) + p[0x238]; }
                    if (hold & 0x20) { x6 = 1; moved = 1; ix = *(s16 *)(p + 0x1cc) - p[0x238]; }
                    if (hold & 0x40) { x6 = 1; moved = 1; iy = *(s16 *)(p + 0x1ce) - p[0x238]; }
                    if (hold & 0x80) { x6 = 1; moved = 1; iy = *(s16 *)(p + 0x1ce) + p[0x238]; }
                }
            }
            if (moved == 1) {
                p[0x239]++;
                if (p[0x239] >= 0x1e) {
                    p[0x238]++;
                    p[0x239] = 0;
                    if (p[0x238] >= 0xf) {
                        p[0x238] = 0xf;
                    }
                }
            } else {
                p[0x239] = 0;
                p[0x238] = 8;
            }
            if (func_020a2664(ix, iy, x6) == 0) {
                s32 a[2];
                s32 b[2];
                a[0] = *(s16 *)(p + 0x1cc);
                a[1] = *(s16 *)(p + 0x1ce);
                b[0] = ix;
                b[1] = iy;
                if (func_0210c28c(a, b) <= 2) {
                    ix = *(s16 *)(p + 0x1cc);
                    iy = *(s16 *)(p + 0x1ce);
                }
                *(s16 *)(p + 0x1cc) = ix;
                *(s16 *)(p + 0x1ce) = iy;
                if (iy >= 0x12 && iy <= 0x9e) {
                    *(s16 *)(p + 0x1c6) = (*(s16 *)(p + 0x1cc) - *(s16 *)(p + 0x1e0)) / 40;
                    *(s16 *)(p + 0x1c8) = (*(s16 *)(p + 0x1ce) - (*(s16 *)(p + 0x1e2) + 28)) / 28;
                }
            }
            if (*(s16 *)(p + 0x1ce) < 4) {
                *(s16 *)(p + 0x1ce) = 4;
            } else if (*(s16 *)(p + 0x1ce) > 0xbc) {
                *(s16 *)(p + 0x1ce) = 0xbc;
            }
            if (*(s16 *)(p + 0x1cc) < 0x20) {
                *(s16 *)(p + 0x1cc) = 0x20;
            } else if (*(s16 *)(p + 0x1ce) > 0xe6) {
                *(s16 *)(p + 0x1cc) = 0xe6;
            }
            if (*(s16 *)(p + 0x1ce) >= 0x12 && *(s16 *)(p + 0x1ce) <= 0x9e) {
                *(s16 *)(p + 0x1c6) = (*(s16 *)(p + 0x1cc) - *(s16 *)(p + 0x1e0)) / 40;
                *(s16 *)(p + 0x1c8) = (*(s16 *)(p + 0x1ce) - (*(s16 *)(p + 0x1e2) + 28)) / 28;
            }
            if (*(s32 *)(p + 0x224) == 1) {
                func_02064b84(0xa, 0x50, 0xe, 0xe);
            }
        }

        {
            s16 val = *(s16 *)(p + 0x1c8) + *(s16 *)(p + 0x1c6) * 5;
            s32 off = val * (s16)40;
            s32 changed = 0;
            s8 v;
            u16 *arr;
            *(u32 *)(p + 0x200) = 0;
            *(u32 *)(p + 0x20c) = 0;
            *(volatile s16 *)(p + 0x24e + off) &= ~0x100;
            if (!(*(volatile s16 *)(p + 0x24e + off) & 0x40)) {
                return;
            }
            if (func_020a1734((p + off)[0x23a]) != 1) {
                return;
            }
            if (*(s16 *)(p + off + 0x254) != 0) {
                *(u32 *)(p + 0x20c) = 1;
            }
            if (x7 == 1) {
                v = *(s8 *)(p + 0x1e6);
                if (v == 2) {
                    p[0x1e6] = 0;
                } else {
                    s32 vv = v + 1;
                    if (*(s16 *)(p + off + vv * 4 + 0x250) != 0) {
                        p[0x1e6] = vv;
                    } else {
                        p[0x1e6] = 0;
                    }
                }
                changed = 1;
                func_0210d27c(0xb);
            }
            if (*(s16 *)(p + 0x1e8) != val) {
                *(s16 *)(p + 0x1e8) = val;
                changed = 1;
                p[0x1e6] = 0;
            }
            if (changed != 1) {
                return;
            }
            v = *(s8 *)(p + 0x1e6);
            arr = (u16 *)(p + 0x250 + off);
            func_0208c680((p + off)[0x248], *(u16 *)(p + off + 0x24a),
                          arr[v * 2], *(s8 *)(p + off + v * 2 + 0x25c),
                          arr[v * 2 + 1]);
        }
        break;
    }
    case 6:
        func_020a994c(data_0216010c + 0x344);
        func_020a994c(data_0216010c + 0x3e4);
        func_020a994c(data_0216010c + 0x2f4);
        func_020a994c(data_0216010c + 0x394);
        *(u16 *)(p + 0xde) = 7;
        break;
    case 7:
        func_0208a5e0();
        break;
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

