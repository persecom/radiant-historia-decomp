/* 13 functions from 0x02088E90 to 0x02089BB0 (main), found by ds-decomp. */
#include "common.h"

extern u16 data_02162908[4];
extern u8 *data_0216010c;
extern void func_020a8810(void *, u32);
extern void func_020895a0(u32, u32, u32, u32, s32 *);

void func_02089550(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_02089578(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

