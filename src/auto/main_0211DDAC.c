/* 13 functions from 0x0211DDAC to 0x0211EA84 (main), found by ds-decomp. */
#include "common.h"

void func_0211e014(u32 *arg0, u8 *arg1) {
    while (arg1 != NULL) {
        s32 i;
        for (i = 0; i < *(u8 *)(arg1 + 0x19); i++) {
            if (*(u16 *)(arg1 + 0x1A + i * 2) & 0x100) {
                arg0[i >> 5] |= 1 << (i & 0x1F);
            }
        }
        arg1 = *(u8 **)(arg1 + 0x10);
    }
}
