/* 21 functions from 0x020B8718 to 0x020B967C (main), found by ds-decomp. */
#include "common.h"

void func_020b8844(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}
