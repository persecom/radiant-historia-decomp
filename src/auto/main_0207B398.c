/* 8 functions from 0x0207B398 to 0x0207C328 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s32 x;
    s32 unk4;
    s32 y;
} Vec3;

extern u8 *data_021600f0;
extern u8 *data_021600ac;
extern s32 func_0201f884(s32);
extern s32 func_020201f4(s32, s32);
extern s32 func_0201ff0c(s32);
extern void func_020477dc(void *, s32, s32);
extern void *func_02021f10(u32);
extern void func_0210d27c(s32);

s32 func_0207be40(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s32 v[2];
    s64 sq;
    v[0] = func_0201ff0c(func_020201f4(func_0201f884(arg0[0] - arg1[0]), arg2));
    v[1] = func_0201ff0c(func_020201f4(func_0201f884(arg0[2] - arg1[2]), arg3));
    sq = (s64)v[0] * v[0] + (s64)v[1] * v[1];
    *(volatile u16 *)0x40002b0 = 1;
    *(volatile u32 *)0x40002b8 = (u32)(sq << 2);
    *(volatile u32 *)0x40002bc = (u32)(sq >> 30);
    while (*(volatile u16 *)0x40002b0 & 0x8000) {
    }
    return (*(volatile s32 *)0x40002b4 + 1) >> 1;
}

extern const s16 data_0213a394[];
s32 func_0207bee0(u8 *arg0) {
    u8 *r4 = *(u8 **)(data_021600ac + 0x68);
    s32 scale = 0x18;
    s32 param = 0x3f800000;
    Vec3 v0;
    Vec3 v1;

    if (*(u16 *)(r4 + 0x92) == 0x8000) {
        scale = 0x12;
        param = 0x3f8ccccd;
    }

    v0.x = (*(s32 *)(r4 + 0xfc) << 12) - data_0213a394[((*(u16 *)(r4 + 0x92) % 0x10000) >> 4) * 2] * 0x18;
    v0.y = (*(s32 *)(r4 + 0x100) << 12) - scale * data_0213a394[((*(u16 *)(r4 + 0x92) % 0x10000) >> 4) * 2 + 1];
    v1.x = *(s32 *)(arg0 + 0xfc) << 12;
    v1.y = *(s32 *)(arg0 + 0x100) << 12;

    if (func_0207be40(&v0.x, &v1.x, 0x3f19999a, param) < ((*(u8 *)(arg0 + 0x9d) + 0x1c) << 12)) {
        s32 y0 = *(s32 *)(arg0 + 4);
        s32 y1 = *(s32 *)(r4 + 4);
        if (y1 <= y0 + 0x20000 && y1 >= y0 - 0x20000) {
            return 1;
        }
    }
    return 0;
}

void func_0207c124(void) {
    u8 *node = *(u8 **)(data_021600f0 + 4);
    u8 *obj = *(u8 **)(data_021600ac + 0x68);
    if (*(u8 *)(node + 0) == 0) {
        return;
    }
    *(u16 *)(node + 2) = 0;
    *(u8 *)(node + 0) = 0;
    *(u32 *)(obj + 0xac) &= ~0x800;
    func_020477dc(obj, 2, 1);
}

void func_0207c17c(void) {
    u8 *p = *(u8 **)(data_021600f0 + 0x10);
    void *res = func_02021f10(0);
    u8 *node;
    s16 v;
    if (*(u8 *)(p + 0) == 1) {
        return;
    }
    v = *(u16 *)((u8 *)res + 0x14);
    if (v >= 0) {
        *(u16 *)(p + 2) = 0x1c2;
        *(u8 *)(p + 0) = 1;
        node = *(u8 **)(p + 4);
        while (node != NULL) {
            u8 *r1 = *(u8 **)(node + 0x2c);
            if (r1 != NULL) {
                *(u32 *)(r1 + 0xac) &= ~0x80000;
            }
            node = *(u8 **)(node + 0x54);
        }
    } else {
        func_0210d27c(6);
    }
}

extern s32 func_0210c2f4(void *, void *);
extern s32 func_020bdba0(u16);
void func_0207c200(void) {
    u8 *p = *(u8 **)(data_021600f0 + 0x10);
    u8 *r5;
    u8 *obj;
    u8 *node;

    if (*(u8 *)(p + 0) == 0) {
        return;
    }
    obj = *(u8 **)(data_021600ac + 0x68);
    *(u16 *)(p + 2) = *(u16 *)(p + 2) - 1;
    if (*(volatile u16 *)(p + 2) == 0) {
        *(u16 *)(p + 2) = 0x1c2;
    }
    node = *(u8 **)(p + 4);
    if (node == NULL) {
        return;
    }
    while (node != NULL) {
        r5 = *(u8 **)(node + 0x2c);
        if (r5 != NULL) {
            if (*(u16 *)(*(u8 **)(obj + 0xb0) + 4) == 0 &&
                *(u16 *)(r5 + 0x8e) == 0x14c9) {
                if (func_0210c2f4(r5, obj) < 0x20000) {
                    if (func_020bdba0(*(u16 *)(*(u8 **)(r5 + 0xb0) + 0x22)) == 0) {
                        *(u16 *)(*(u8 **)(obj + 0xb0) + 4) = *(u16 *)(r5 + 0x90);
                    }
                }
            }
            if (*(u16 *)(p + 2) == 0) {
                *(u32 *)(r5 + 0xac) |= 0x80000;
            }
        }
        node = *(u8 **)(node + 0x54);
    }
}

void func_0207c2dc(void) {
    u8 *p = *(u8 **)(data_021600f0 + 0x10);
    u8 *node;
    *(u8 *)(p + 0) = 0;
    *(u16 *)(p + 2) = 0;
    node = *(u8 **)(p + 4);
    while (node != NULL) {
        u8 *r1 = *(u8 **)(node + 0x2c);
        if (r1 != NULL) {
            *(u32 *)(r1 + 0xac) |= 0x80000;
        }
        node = *(u8 **)(node + 0x54);
    }
}

