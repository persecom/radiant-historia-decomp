/* 36 functions from 0x0200F244 to 0x020101F8 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_0215f0a0[4];
u32 func_0200f94c(void) {
    return data_0215f0a0[0];
}

extern s32 func_0200a6e4(s32, s32, s32);
s32 func_0200f6fc(s32 arg0);
void func_0200f974(u32 arg0) {
    data_0215f0a0[0] = arg0;
}

