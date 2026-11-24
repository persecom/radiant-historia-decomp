/* 5 functions from 0x0201D04C to 0x0201E034 (main), found by ds-decomp. */
#include "common.h"

double func_0201de78(double x, double y) {
    ((u32 *)&x)[1] = (((u32 *)&x)[1] & ~0x80000000) | (((u32 *)&y)[1] & 0x80000000);
    return x;
}

double func_0201e014(double x) {
    ((u32 *)&x)[1] &= ~0x80000000;
    return x;
}
