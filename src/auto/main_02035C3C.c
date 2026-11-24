/* 6 functions from 0x02035C3C to 0x02036514 (main), found by ds-decomp. */
#include "common.h"

extern u8 *func_020ddc08(s32);
void func_02036298(s32 arg0, u8 arg1, s32 arg2) {
    u8 *p = func_020ddc08(arg0);
    p[0x192] = arg1;
    *(s32 *)(p + 0x64) = arg2;
    *(u16 *)(p + 0x190) = 0;
}

void func_020362c0(s32 arg0, u8 arg1, u16 arg2, s32 arg3) {
    u8 *p = func_020ddc08(arg0);
    p[0x192] = arg1;
    *(u16 *)(p + 0x190) = arg2;
    *(s32 *)(p + 0x64) = arg3;
}

void func_020362e8(s32 arg0, s32 arg1) {
    u8 *p = func_020ddc08(arg0);
    *(s32 *)(p + 0xf8) = arg1;
}

void func_020362fc(s32 arg0, s32 arg1) {
    u8 *p = func_020ddc08(arg0);
    if (arg1 != 0) {
        *(u32 *)(p + 0x80) |= 2;
        p[0xa1] |= 0x08;
        p[0xa1] |= 0x20;
        return;
    }
    *(u32 *)(p + 0x80) &= ~2;
    p[0xa1] &= 0xf7;
    p[0xa1] &= 0xdf;
}

