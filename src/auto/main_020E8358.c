/* 8 functions from 0x020E8358 to 0x020E9354 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160a74;
extern u8 *data_02160078;
extern u8 *func_020e5910(s32);

void func_020e8698(void) {
    *(u32 *)(data_02160a74 + 0x98) = 0;
    *(u32 *)(data_02160a74 + 0x58) = 0;
    *(u16 *)(data_02160a74 + 0x9c) = 0;
}
