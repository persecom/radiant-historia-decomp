/* 16 functions from 0x02012E3C to 0x020139A4 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02145c2c;
extern s32 func_0201f800(u32);

s32 func_02013618(void) {
    return func_0201f800(data_02145c2c);
}

s32 func_02013630(s32 x) {
    return x < 0 ? -x : x;
}

