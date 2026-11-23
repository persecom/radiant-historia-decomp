/* 10 functions from 0x02098268 to 0x02098A28 (main), found by ds-decomp. */
#include "common.h"

void func_020988c0(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}
