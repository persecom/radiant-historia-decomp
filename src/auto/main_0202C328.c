/* 14 functions from 0x0202C328 to 0x0202CD5C (main), found by ds-decomp. */
#include "common.h"

extern u8 **data_02160244;

s8 func_0202c658(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 0x128);
    s8 *q = *(s8 **)(p + 0x54);
    return *q;
}

u8 *func_0202c7d8(s32 arg0) {
    u8 *result = NULL;
    if (arg0 >= 0 && arg0 <= 8) {
        u8 *entry = *(u8 **)((u8 *)data_02160244 + arg0 * 4 + 8);
        u8 *sub = *(u8 **)(entry + 0x10);
        if (sub != NULL && *(u8 *)(sub + 4) == 0) {
            result = *(u8 **)sub;
        }
    }
    return result;
}

u8 *func_0202c820(u32 arg0) {
    u8 *sub = NULL;
    if (arg0 <= 8) {
        u8 *entry = *(u8 **)((u8 *)data_02160244 + arg0 * 4 + 8);
        sub = *(u8 **)(entry + 0x10);
    }
    return sub ? *(u8 **)sub : NULL;
}

