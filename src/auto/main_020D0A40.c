/* 2 functions from 0x020D0A40 to 0x020D0D1C (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160244;
void func_020d0cd4(s32 arg0, u32 arg1) {
    if (arg0 == 1) {
        *(u32 *)(data_02160244 + 0x7c) |= arg1;
    } else if (arg0 == 0) {
        *(u32 *)(data_02160244 + 0x7c) &= ~arg1;
    }
}
