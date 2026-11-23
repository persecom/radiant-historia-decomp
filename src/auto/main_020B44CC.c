/* 23 functions from 0x020B44CC to 0x020B5364 (main), found by ds-decomp. */
#include "common.h"

extern void func_020ec548(void *);
void func_020b453c(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_020b4af0(void *arg0) {
    if (arg0 != NULL) {
        func_020ec548(arg0);
    }
}
