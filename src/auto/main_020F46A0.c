/* 30 functions from 0x020F46A0 to 0x020F5574 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

extern void func_0210c5dc(void *);
extern void func_0210a76c(void *);
extern void func_0210aa14(void *);
extern u32 data_02160c3c[];
extern u8 data_02151fc8[];
extern s32 func_02107d58(u32, u16, u16);
extern u8 *data_02160c34[];
extern u8 *data_02155984;
extern u32 data_02162834[];
extern void func_02002128(Vec3 *, void *, void *);
extern s32 func_02002080(s32, u32);
s32 func_020f46a0(u16 arg0) {
    *(u16 *)data_02151fc8 += arg0;
    return func_02107d58(*(u32 *)(data_02151fc8 + 4), *(u16 *)(data_02151fc8 + 2), *(u16 *)data_02151fc8);
}

void func_020f46cc(Vec3 *arg0, u32 arg1) {
    *(u32 *)((u8 *)((u32 *)data_02160c34)[1] + 0x14) = 0;
    arg1 >>= data_02162834[0];
    func_02002128(arg0, data_02155984 + 0x20, (u8 *)((u32 *)data_02160c34)[1] + 0x2c);
    *(s32 *)((u8 *)((u32 *)data_02160c34)[1] + 0x2c) = func_02002080(*(s32 *)((u8 *)((u32 *)data_02160c34)[1] + 0x2c), arg1);
    *(s32 *)((u8 *)((u32 *)data_02160c34)[1] + 0x30) = func_02002080(*(s32 *)((u8 *)((u32 *)data_02160c34)[1] + 0x30), arg1);
    *(s32 *)((u8 *)((u32 *)data_02160c34)[1] + 0x34) = func_02002080(*(s32 *)((u8 *)((u32 *)data_02160c34)[1] + 0x34), arg1);
    *(Vec3 *)((u8 *)((u32 *)data_02160c34)[1] + 0x20) = *arg0;
}

void func_020f4774(Vec3 *arg0, s32 arg1) {
    *(u32 *)((u8 *)((u32 *)data_02160c34)[1] + 0x14) = 0;
    *(s32 *)((u8 *)((u32 *)data_02160c34)[1] + 0x2c) = (arg0->x - *(s32 *)(data_02155984 + 0x20)) * arg1 / 100;
    *(s32 *)((u8 *)((u32 *)data_02160c34)[1] + 0x30) = (arg0->y - *(s32 *)(data_02155984 + 0x24)) * arg1 / 100;
    *(s32 *)((u8 *)((u32 *)data_02160c34)[1] + 0x34) = (arg0->z - *(s32 *)(data_02155984 + 0x28)) * arg1 / 100;
    *(Vec3 *)((u8 *)((u32 *)data_02160c34)[1] + 0x20) = *arg0;
}

void func_020f4828(u16 arg0, u16 arg1) {
    *(u16 *)((u8 *)((u32 *)data_02160c34)[1] + 0x18) = arg0;
    *(u16 *)((u8 *)((u32 *)data_02160c34)[1] + 0x1a) = arg1;
}

void func_020f4844(u16 arg0, u16 arg1) {
    *(u16 *)((u8 *)((u32 *)data_02160c34)[1] + 0x1c) = arg0;
    *(u16 *)((u8 *)((u32 *)data_02160c34)[1] + 0x1e) = arg1;
}

void func_020f4860(u32 arg0) {
    data_02160c3c[1] = arg0;
}

void func_020f4870(void) {
    if (data_02160c3c[1] == 0) {
        return;
    }
    func_0210a76c(*(void **)data_02160c3c[1]);
    func_0210aa14(*(void **)((u8 *)data_02160c3c[1] + 4));
    if (data_02160c3c[1] != 0) {
        func_0210c5dc((void *)data_02160c3c[1]);
        data_02160c3c[1] = 0;
    }
}

void func_020f4bd0(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

u32 func_020f53e4(void (*arg0)(void)) {
    if (arg0 != NULL) {
        arg0();
    }
    return ~(u32)arg0;
}

