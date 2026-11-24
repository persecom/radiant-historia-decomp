/* 32 functions from 0x020C93F4 to 0x020CA10C (main), found by ds-decomp. */
#include "common.h"

extern void func_020c9980(void);
extern void func_020c9404(u8 *, u16);
extern void func_020c94dc(u8 *);
extern void func_020c9348(u8 *, s32);
extern u8 *func_020c9c10(void *, s32);
extern void func_020c9590(u8 *);
void func_020c93f4(u8 *arg0, u16 arg1) {
    *(u16 *)(arg0 + 0x3a) = arg1;
    func_020c9404(arg0, arg1);
}

void func_020c9404(u8 *arg0, u16 arg1) {
    u16 max = *(u16 *)(arg0 + 0x42);
    s16 diff = max - *(u16 *)(arg0 + 0x40);
    u16 old = *(u16 *)(arg0 + 0x3a);
    if (max != 0) {
        if (old >= max) {
            *(u16 *)(arg0 + 0x3a) = max - 1;
        }
    } else {
        *(u16 *)(arg0 + 0x3a) = 0;
    }
    if (diff > 0) {
        if (*(u16 *)(arg0 + 0x3e) > diff) {
            *(u16 *)(arg0 + 0x3e) = diff;
        }
    } else {
        *(u16 *)(arg0 + 0x3e) = 0;
    }
    if (old != *(u16 *)(arg0 + 0x3a)) {
        func_020c9348(arg0, 1);
        *(u8 *)(arg0 + 0x44) = 1;
    }
}

u8 func_020c9488(u8 *arg0) {
    return *(u8 *)(arg0 + 0x44);
}

u32 func_020c9490(u8 *arg0) {
    return arg0[0x44] | arg0[0x45];
}

u16 func_020c94a0(u8 *arg0) {
    return *(u16 *)(arg0 + 0x3a);
}

u16 func_020c94a8(u8 *arg0) {
    return *(u16 *)(arg0 + 0x3e);
}

s16 func_020c94b0(u8 *arg0) {
    return *(u16 *)(arg0 + 0x3a) - *(u16 *)(arg0 + 0x3e);
}

void func_020c94c8(u8 *arg0, u16 arg1, u16 arg2) {
    *(u16 *)(arg0 + 0x52) = arg1;
    *(u16 *)(arg0 + 0x54) = arg2;
    func_020c94dc(arg0);
}

void func_020c94dc(u8 *arg0) {
    u8 *obj = func_020c9c10(*(void **)(arg0 + 0x30), 0);
    ((void (*)(u8 *, s16))(*(void **)(obj + 0x10)))(obj, *(s16 *)(arg0 + 0x34) + *(u16 *)(arg0 + 0x52) - *(s16 *)(obj + 0x3e));
    ((void (*)(u8 *, s16))(*(void **)(obj + 0x14)))(obj, *(s16 *)(arg0 + 0x36) + *(u16 *)(arg0 + 0x54) - *(s16 *)(obj + 0x40));
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 1);
    ((void (*)(u8 *, s16))(*(void **)(obj + 0x10)))(obj, *(s16 *)(arg0 + 0x34) + *(u16 *)(arg0 + 0x52) - *(s16 *)(obj + 0x3e));
    ((void (*)(u8 *, s16))(*(void **)(obj + 0x14)))(obj, *(s16 *)(arg0 + 0x36));
    func_020c9590(arg0);
}

u16 func_020c9924(u8 *arg0) {
    return *(u16 *)(arg0 + 8);
}

void func_020c9940(void) {
    func_020c9980();
}

u16 func_020c9c34(u8 *arg0) {
    return *(u16 *)(arg0 + 4);
}

