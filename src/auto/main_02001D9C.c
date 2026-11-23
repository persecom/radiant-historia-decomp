/* 40 functions from 0x02001D9C to 0x02002D9C (main), found by ds-decomp. */
#include "common.h"

extern void func_02002058(void);
s32 func_02001ff4(void);
s32 func_02001fb0(void) {
    func_02002058();
    return func_02001ff4();
}

s64 func_02001fd0(void) {
    while (*(volatile u16 *)0x04000280 & 0x8000) {
    }
    return *(s64 *)0x040002a0;
}

s32 func_02001ff4(void) {
    while (*(volatile u16 *)0x04000280 & 0x8000) {
    }
    return (s32)((*(volatile s64 *)0x040002a0 + 0x80000) >> 20);
}

void func_02002028(s32 arg0) {
    volatile u8 *reg = (volatile u8 *)0x04000280;
    *(volatile u16 *)(reg + 0x00) = 1;
    *(volatile s32 *)(reg + 0x10) = 0;
    *(volatile s32 *)(reg + 0x14) = 0x1000;
    *(volatile s32 *)(reg + 0x18) = arg0;
    *(volatile s32 *)(reg + 0x1c) = 0;
}

