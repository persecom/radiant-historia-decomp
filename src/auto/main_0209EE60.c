/* 5 functions from 0x0209EE60 to 0x0209F684 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600b0;
void func_0209f3a0(s32 mode) {
    u8 *p = data_021600b0;
    if (mode == 0) {
        *(u16 *)(p + 0x118) = 1;
        *(u16 *)(p + 0x11a) = 0;
        *(u16 *)(p + 0x11c) = 0;
        *(u16 *)(p + 0x11e) = 0;
        *(u16 *)(p + 0x120) = 0;
        *(u16 *)(p + 0x122) = 0;
        *(u16 *)(p + 0x124) = 0;
    } else if (mode == 1) {
        *(u16 *)(p + 0x118) = 100;
        *(u16 *)(p + 0x11a) = 0x100;
        *(u16 *)(p + 0x11c) = 8;
        *(u16 *)(p + 0x11e) = 0x1f;
        *(u16 *)(p + 0x120) = 0xc0;
        *(u16 *)(p + 0x122) = 0;
        *(u16 *)(p + 0x124) = 0;
    }
}
