/* 10 functions from 0x0212A9FC to 0x0212B8E0 (main), found by ds-decomp. */
#include "common.h"

extern s32 data_0217397c;
s32 func_0212afc0(s32, s32, s32, s32, s32, s32, s16, s16, s32, s16, s16);
s32 func_0212abac(s32, s32, s32, s32, s32, s32, s16, s16, s32, s16, s16);
s32 func_0212b354(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s16 a6, s16 a7, s32 a8, s16 a9, s16 a10) {
    if (data_0217397c == 0) {
        return func_0212afc0(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }
    return func_0212abac(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}

s32 func_0212b550(u8 *arg0, s32 arg1, u16 *arg2) {
    s32 i;
    s32 found = 0x7fffffff;

    for (i = 0; i < arg1 - 1; i += 2) {
        if (*(u16 *)(arg0 + i) == 0x80) {
            found = (i < 0x7fffffff) ? i : 0x7fffffff;
            break;
        }
    }
    if (found != 0x7fffffff) {
        *arg2 = found;
        return 0;
    }
    *arg2 = 0;
    return -1;
}
