/* 20 functions from 0x021231B0 to 0x021241A4 (main), found by ds-decomp. */
#include "common.h"

extern void func_021205ec(s32, void *, s32);
void func_021231b0(u32 *arg0, u8 *arg1, u32 arg2) {
    u8 *ptr = *(u8 **)(arg1 + 8);
    s32 frame = *(s32 *)(arg1 + 0);
    s32 limit = *(u16 *)(ptr + 4) << 12;
    u32 bit;
    if (frame >= limit) {
        frame = limit - 1;
    } else if (frame < 0) {
        frame = 0;
    }
    bit = (frame >> 12) * *(u16 *)(ptr + 6) + arg2;
    *arg0 = *(u32 *)(ptr + 0xc + (bit >> 5) * 4) & (1 << (bit & 0x1f));
}

void func_02123910(s32 *arg0) {
    arg0[0] = 0x1000;
    arg0[1] = 0;
    arg0[4] = 0;
    arg0[5] = 0x1000;
    arg0[12] = 0;
    arg0[13] = 0;
}
