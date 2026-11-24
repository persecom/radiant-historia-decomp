/* 10 functions from 0x02098268 to 0x02098A28 (main), found by ds-decomp. */
#include "common.h"

extern s16 *data_0216011c;
extern u16 data_02141fdc[6][2];
extern u16 data_0214200c[8][2];
extern u16 data_0214202c[10][2];

void func_020988c0(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}
