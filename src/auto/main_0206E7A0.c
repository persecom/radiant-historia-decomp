/* 8 functions from 0x0206E7A0 to 0x0206ED38 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u32 x;
    u32 y;
    u32 z;
} UnkVec12;

typedef struct {
    u32 unk0[6];
} UnkStruct24;

extern u8 *data_021600e8;
extern u32 data_02155c3c;

extern void *func_020675e4(u32, u16);
extern void *func_0210c594(u32, u32);
extern void func_0206b3c0(void *);
extern void func_0210c5dc(void *);
extern void func_021167f0(void *, void *);
extern void func_0206e7a0(u8, void *, void *, u16);

void func_0206e8f0(u32 arg0, UnkVec12 *arg1, u8 arg2) {
    u8 *p = func_020675e4(arg0, *(u16 *)(data_021600e8 + 0x50));
    *(u8 *)(p + 0x20) = arg2;
    if (arg2 == 2 || arg2 == 3) {
        UnkVec12 *v = func_0210c594(0xc, data_02155c3c);
        u32 x = arg1->x;
        *(UnkVec12 **)(p + 0x4c) = v;
        v->x = x;
        {
            u32 y = *(volatile u32 *)&arg1->y;
            u32 z = arg1->z;
            *(volatile u32 *)&v->y = y;
            v->z = z;
        }
        func_0206b3c0(p);
    } else if (arg2 == 1 || arg2 == 4) {
        *(UnkVec12 **)(p + 0x4c) = arg1;
        func_0206b3c0(p);
    } else {
        if (p != NULL) {
            func_0210c5dc(p);
        }
    }
}

extern u8 *func_020ddb90(u16);
void func_0206e990(u32 arg0, u16 arg1) {
    u8 *p = func_020675e4(arg0, *(u16 *)(data_021600e8 + 0x50));
    u8 *q = func_020ddb90(arg1);

    *(u8 *)(p + 0x20) = 0;
    *(u16 *)(p + 0x24) = arg1;
    if (q != NULL) {
        *(u8 **)(p + 0x4c) = q;
        if (**(u8 **)(q + 0x118) == 0) {
            if (((u32)(*(u8 *)(*(u8 **)(*(u8 **)(q + 0x108) + 8) + 0x70)) << 30) >> 31) {
                *(u8 *)(p + 0x40) |= 2;
            }
        } else {
            *(u8 *)(p + 0x40) |= 2;
            if (((u32)(*(u8 *)(*(u8 **)(*(u8 **)(q + 0x108) + 0) + 0x70)) << 30) >> 31) {
                *(u8 *)(p + 0x40) &= 0xfd;
            }
        }
        if (arg0 == 0x68 || arg0 == 0x69 || arg0 == 0x6a || arg0 == 0x87) {
            *(u8 *)(p + 0x40) = (*(u8 *)(p + 0x40) ^ 2) & 2;
        }
    } else {
        if (p != NULL) {
            func_0210c5dc(p);
            p = NULL;
        }
    }
    if (p != NULL) {
        func_0206b3c0(p);
    }
}

void func_0206eb80(u16 arg0, u8 arg1, u8 arg2, UnkVec12 *arg3, UnkStruct24 *arg4) {
    u32 *heap = &data_02155c3c;
    u8 *p = func_0210c594(0x2c, *heap);
    *(u8 *)(p + 0x2) = arg2;
    *(u16 *)(p + 0x0) = arg0;
    *(u8 *)(p + 0x20) = arg1;
    if (*(u8 *)((u8 *)arg4 + 0xc) == 2) {
        UnkVec12 *v = func_0210c594(0xc, *heap);
        *(UnkVec12 **)(p + 0x4) = v;
        v->x = arg3->x;
        v->y = arg3->y;
        v->z = arg3->z;
    } else {
        *(UnkVec12 **)(p + 0x4) = arg3;
    }
    heap = (u32 *)(p + 0x8);
    *(UnkStruct24 *)heap = *arg4;
    func_021167f0(data_021600e8 + 0x54, p);
    func_0206e7a0(arg2, arg3, arg4, arg0);
}

void *func_0206ec3c(u16 arg0) {
    u8 *p;
    if (data_021600e8 == NULL) {
        return NULL;
    }
    p = *(u8 **)(data_021600e8 + 0x54);
    while (p != NULL) {
        if (*(u16 *)p == arg0) {
            return p;
        }
        p = *(u8 **)(p + 0x28);
    }
    return NULL;
}

extern void func_021168f8(void *, void *);
void func_0206ec84(u16 arg0) {
    u8 *base = data_021600e8;
    u8 *p = *(u8 **)(base + 0x54);
    while (p != NULL) {
        if (*(u16 *)p == arg0) {
            func_021168f8(base + 0x54, p);
            if (*(u8 *)(p + 0x14) == 2) {
                if (*(void **)(p + 0x4) != NULL) {
                    func_0210c5dc(*(void **)(p + 0x4));
                    *(void **)(p + 0x4) = NULL;
                }
            }
            if (p != NULL) {
                func_0210c5dc(p);
            }
            return;
        }
        p = *(u8 **)(p + 0x28);
    }
}

void func_0206ed00(u16 arg0) {
    u8 *p = *(u8 **)(data_021600e8 + 0x48);
    while (p != NULL) {
        if (*(u16 *)(p + 0x50) == arg0) {
            *(u32 *)(p + 0x44) = 0;
        }
        p = *(u8 **)(p + 0x64);
    }
}
