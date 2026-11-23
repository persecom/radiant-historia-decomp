/* 37 functions from 0x020BE330 to 0x020BF330 (main), found by ds-decomp. */
#include "common.h"

extern void func_020becfc(void);
void func_020be650(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_020bed94(void) {
    func_020becfc();
}
