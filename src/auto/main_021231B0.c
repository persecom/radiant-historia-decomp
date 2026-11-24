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

void func_02123204(u8 *arg0) {
    u32 flags = *(u32 *)arg0;
    if (!(flags & 4)) {
        if (!(flags & 2)) {
            func_021205ec(0x19, arg0 + 0x28, 0xc);
        } else {
            func_021205ec(0x1c, arg0 + 0x4c, 3);
        }
    } else if (!(flags & 2)) {
        func_021205ec(0x1a, arg0 + 0x28, 9);
    }
    if (!(*(u32 *)arg0 & 1)) {
        func_021205ec(0x1b, arg0 + 4, 3);
    }
}

void func_02123278(u32 *arg0, u32 *arg1, s32 arg2, u32 arg3) {
    if (arg3 & 4) {
        arg0[0] |= 1;
    } else {
        u32 x = arg1[0];
        u32 y = arg1[1];
        u32 z = arg1[2];
        arg0[1] = x;
        arg0[2] = y;
        arg0[3] = z;
    }
    arg0[0] |= 0x18;
}

void func_02123910(s32 *arg0) {
    arg0[0] = 0x1000;
    arg0[1] = 0;
    arg0[4] = 0;
    arg0[5] = 0x1000;
    arg0[12] = 0;
    arg0[13] = 0;
}
