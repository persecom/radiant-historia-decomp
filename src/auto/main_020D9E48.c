/* 15 functions from 0x020D9E48 to 0x020DAA60 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160258;
extern s32 data_02151fcc;
extern s32 func_02002404(s32, s32);

void func_020d9e48(u32 *arg0, u32 *arg1) {
    s32 dx = (s32)arg1[0] - (s32)arg0[0];
    s32 dy = (s32)arg1[2] - (s32)arg0[2];
    *(u16 *)(data_02160258 + 0x48) = func_02002404(dy, dx);
}

void func_020d9e7c(void) {
    u8 *p = data_02160258;
    *(u32 *)(p + 0x7c) &= ~1;
    *(u32 *)(p + 0x88) &= ~2;
    *(u32 *)(p + 0x88) &= ~8;
}

void func_020da0c8(s32 arg0) {
    data_02151fcc = arg0 << 12;
}

