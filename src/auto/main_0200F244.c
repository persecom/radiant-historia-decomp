/* 36 functions from 0x0200F244 to 0x020101F8 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_0215f0a0[4];
u32 func_0200f684(u32 arg0) {
    u32 result = 0;
    s32 i;
    u32 mult;

    for (i = 0; i < 8; i++) {
        if (((arg0 >> (i << 2)) & 0xf) >= 10) {
            return 0;
        }
    }

    mult = 1;
    for (i = 0; i < 8; i++) {
        result += ((arg0 >> (i << 2)) & 0xf) * mult;
        mult *= 10;
    }

    return result;
}

s32 func_0200f6ec(void) {
    return func_0200f6fc(0x27);
}

s32 func_0200f6fc(s32 arg0) {
    s32 ret = 0;
    if (func_0200a6e4(5, (arg0 << 8) & 0x7f00, 0) >= 0) {
        ret = 1;
    }
    return ret;
}

u32 func_0200f94c(void) {
    return data_0215f0a0[0];
}

extern s32 func_0200a6e4(s32, s32, s32);
s32 func_0200f6fc(s32 arg0);
void func_0200f974(u32 arg0) {
    data_0215f0a0[0] = arg0;
}

void *func_0200f998(void) {
    return (void *)0x02fffa80;
}

void *func_0200f9a4(void) {
    return (void *)0x02fffe00;
}

extern void func_0200fa74(void *, s32);
void func_0200fa3c(void *arg0) {
    func_0200fa74(arg0, 2);
}

