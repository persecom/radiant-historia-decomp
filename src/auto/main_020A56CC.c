/* 24 functions from 0x020A56CC to 0x020A66B8 (main), found by ds-decomp. */
#include "common.h"

extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern void func_020a994c(void *);
extern void func_020a98a0(void *);
extern void func_020a9544(void *);
extern void func_0203bc34(void *, void *, void *, s32, s32, s32);
extern void func_020a899c(void *);
extern void func_020a9610(void *, void *, void *, void *, s32, s32);
extern u32 func_020a96f0(void *);
extern u8 **data_021600e4;
extern void *func_020a6360(void *, u8);

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3s32_020A56CC;
void *func_020a583c(void) {
    return func_0210c594(0x80, data_02155c3c);
}

void func_020a5858(u8 *arg0) {
    if (arg0 == NULL) {
        return;
    }
    if (*(u16 *)(arg0 + 0x5c) & 1) {
        func_020a994c(arg0 + 0xc);
        func_020a98a0(arg0 + 0xc);
    }
    func_020a9544(*(void **)(arg0 + 0));
    *(void **)(arg0 + 0) = NULL;
    if (*(u8 **)(arg0 + 4) != NULL) {
        (*(void (**)(void *))(*(u8 **)(arg0 + 4) + 0xc))(*(void **)(arg0 + 4));
        *(void **)(arg0 + 4) = NULL;
    }
    if (*(u8 **)(arg0 + 8) != NULL) {
        (*(void (**)(void *))(*(u8 **)(arg0 + 8) + 0xc))(*(void **)(arg0 + 8));
        *(void **)(arg0 + 8) = NULL;
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020a5bf4(u8 *arg0, void *arg1) {
    (*(void (**)(void *))(*(u8 **)(arg0 + 4) + 4))(*(void **)(arg0 + 4));
    if (arg1 != NULL) {
        func_0203bc34(*(void **)(arg0 + 0), *(void **)(arg0 + 4), arg1, 0, 0, 0);
    }
    func_020a899c(*(void **)(arg0 + 4));
}

void func_020a5c40(u8 *arg0, void *arg1) {
    func_020a9610(arg0 + 0x40, *(void **)(arg0 + 0), arg1, *(void **)(arg0 + 4), 0, 0);
    func_020a5bf4(arg0, arg1);
    *(u32 *)(arg0 + 0x78) = func_020a96f0(*(void **)(arg0 + 0x50));
    *(s32 *)(*(u8 **)(arg0 + 4) + 0x44) = 0x5000;
    *(s32 *)(*(u8 **)(arg0 + 4) + 0x48) = 0x4000;
    *(s32 *)(*(u8 **)(arg0 + 4) + 0x4c) = 0x2bc000;
    *(Vec3s32_020A56CC *)(arg0 + 0x60) = *(Vec3s32_020A56CC *)(*(u8 **)(arg0 + 4) + 0x44);
    *(s32 *)(arg0 + 0x6c) = -0x96000;
    *(s32 *)(arg0 + 0x70) = 0;
    *(s32 *)(arg0 + 0x74) = 0;
}

void func_020a5cd4(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0x6c) = -0x5000;
}

void func_020a5ce4(void *arg0) {
    if (*(void **)((u8 *)arg0 + 4) == NULL) {
        return;
    }
    ((void (*)(void *))*(void **)((u8 *)*(void **)((u8 *)arg0 + 4) + 4))(*(void **)((u8 *)arg0 + 4));
    func_020a899c(*(void **)((u8 *)arg0 + 4));
}

void func_020a5d0c(void *arg0) {
    *(s32 *)((u8 *)*(void **)((u8 *)arg0 + 4) + 0x44) = *(s32 *)((u8 *)arg0 + 0x60) + *(s32 *)((u8 *)arg0 + 0x6c);
    *(s32 *)((u8 *)*(void **)((u8 *)arg0 + 4) + 0x48) = *(s32 *)((u8 *)arg0 + 0x64) + *(s32 *)((u8 *)arg0 + 0x70);
    *(s32 *)((u8 *)*(void **)((u8 *)arg0 + 4) + 0x4c) = *(s32 *)((u8 *)arg0 + 0x68) + *(s32 *)((u8 *)arg0 + 0x74);
}

void *func_020a5d4c(void) {
    return func_0210c594(0xb4, data_02155c3c);
}

void func_020a5ed4(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
}

void *func_020a5f14(u8 **arg0, u16 arg1) {
    u8 *node = *arg0;
    while (node != NULL) {
        if (*(u16 *)(node + 0) == arg1) return node;
        node = *(u8 **)(node + 0xa4);
    }
    return NULL;
}

void *func_020a5f40(u8 **arg0, u16 arg1) {
    u8 *node = *arg0;
    while (node != NULL) {
        if (*(u16 *)(node + 2) == arg1) return node;
        node = *(u8 **)(node + 0xa4);
    }
    return NULL;
}

s32 func_020a5f6c(u8 *arg0, u8 *arg1, u16 arg2, u16 arg3) {
    u8 *g;
    u16 v0 = *(u16 *)(arg1 + 0);
    s32 i;
    g = *(u8 **)data_021600e4;
    if (v0 == arg2) {
        for (i = 0; i < 4; i++) {
            u8 v;
            void *p;
            void *a, *b;
            switch (i) {
            case 0: v = arg1[0x18]; break;
            case 1: v = arg1[0x1b]; break;
            case 2: v = arg1[0x19]; break;
            case 3: v = arg1[0x1a]; break;
            }
            p = func_020a6360(g + 0x118, v);
            if (p != NULL) {
                a = *(void **)((u8 *)p + 4);
                b = *(void **)((u8 *)p + 8);
                if (*(u16 *)((u8 *)a + 4) == arg3) return (s8)i;
                if (*(u16 *)((u8 *)b + 4) == arg3) return (s8)i;
            }
        }
    }
    return -1;
}

void *func_020a6168(void) {
    return func_0210c594(0x14, data_02155c3c);
}

void func_020a6320(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
}

