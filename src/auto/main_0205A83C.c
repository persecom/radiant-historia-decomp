/* 8 functions from 0x0205A83C to 0x0205B710 (main), found by ds-decomp. */
#include "common.h"

extern u8 **data_02160244;
extern u8 *data_02160080;
extern u8 *data_02160a6c;

extern void func_020d90bc(s32);

void func_0205b4e0(void) {
    u8 *p = *data_02160244;
    if (*(u8 *)(p + 0x3c) == 0) {
        *(u8 *)(p + 0x3c) += 1;
        return;
    }
    if (*(u8 *)(p + 0x3c) == 1) {
        func_020d90bc(1);
        *(u32 *)(p + 0x4) = 0;
    }
}
