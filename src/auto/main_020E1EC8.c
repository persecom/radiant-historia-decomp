/* 11 functions from 0x020E1EC8 to 0x020E2BE4 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02160a74[];
extern void func_020a5ce4(void *);
extern void func_020a994c(void *);
extern void func_020a9610(void *, u32, u32, u32, u32, u32);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
extern void func_020e24bc(u32, u32, u32, u32, u32);
extern void func_020b52f4(u32);

void func_020e25c4(void) {
    s32 i;
    for (i = 0; i < 0xe; i++) {
        void **arr = (void **)data_02160a74[0];
        void *p = arr[i + 0x18];
        if (p != NULL) {
            func_020a5ce4(p);
        }
    }
}

s32 func_020e25fc(u32 arg0, u32 arg1, u32 arg2) {
    u8 *base = (u8 *)data_02160a74[0];
    u8 *p = *(u8 **)(base + (arg0 << 2) + 0x60);
    u8 *q = p + 0xc;
    if (arg2 != 0) {
        func_020a994c(q);
        func_020a9610(p + 0x40, *(u32 *)(p + 0), arg1, *(u32 *)(p + 4), 0, 0);
        func_020a98ac(q);
        func_020a98f4(q);
        *(u32 *)(p + 0x7c) = 1;
        return 1;
    }
    func_020a994c(q);
    *(u32 *)(p + 0x7c) = 0;
    return 0;
}

void func_020e267c(void *arg0, u32 arg1, u32 arg2, u32 arg3) {
    u8 *p = *(u8 **)((u8 *)arg0 + 4);
    *(u32 *)(p + 0x44) = arg1 << 12;
    *(u32 *)(p + 0x48) = arg2 << 12;
    *(u32 *)(p + 0x4c) = arg3 << 12;
}

void func_020e269c(u32 arg0, u8 *arg1, u32 arg2) {
    if (arg2 == 0) {
        u16 v = *(u16 *)(arg1 + 0x20);
        if (v == 5) {
            func_020b52f4(0);
        } else {
            func_020e24bc(arg0, 0, 7, v, 1);
        }
    } else {
        func_020e24bc(arg0, 0, 7, arg2, 1);
    }
}

s32 func_020e27ec(void) {
    u8 *base = (u8 *)data_02160a74[0];
    u8 *node;
    if (base == NULL) {
        return 0;
    }
    node = *(u8 **)(base + 0x40);
    while (node != NULL) {
        if (*(s32 *)node == 0) {
            return 1;
        }
        node = *(u8 **)(node + 0x24);
    }
    return 0;
}

