/* 40 functions from 0x02001D9C to 0x02002D9C (main), found by ds-decomp. */
#include "common.h"

void func_02002058(s32 arg0, s32 arg1);
void func_02002028(u32 arg0);
s32 func_02001ff4(void);
s32 func_02001fb0(s32 arg0, s32 arg1) {
    func_02002058(arg0, arg1);
    return func_02001ff4();
}

s32 func_02001fc0(u32 arg0) {
    func_02002028(arg0);
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
    return (s32)((*(u64 *)0x040002a0 + 0x80000) >> 20);
}

void func_02002028(u32 arg0) {
    *(volatile u16 *)0x04000280 = 1;
    *(volatile u64 *)0x04000290 = (u64)0x1000 << 32;
    *(volatile u64 *)0x04000298 = arg0;
}

void func_02002058(s32 arg0, s32 arg1) {
    *(volatile u16 *)0x04000280 = 1;
    *(volatile s32 *)0x04000290 = 0;
    *(volatile s32 *)0x04000294 = arg0;
    *(volatile s32 *)0x04000298 = arg1;
    *(volatile s32 *)0x0400029c = 0;
}

s32 func_02002080(s32 arg0, u32 arg1) {
    *(volatile u16 *)0x04000280 = 0;
    *(volatile s32 *)0x04000290 = arg0;
    *(volatile u64 *)0x04000298 = arg1;
    while (*(volatile u16 *)0x04000280 & 0x8000) {
    }
    return *(volatile s32 *)0x040002a0;
}

void func_02002594(void) {
}

extern u16 data_02145ba0;
extern void func_02002028(u32);
extern s32 func_02001ff4(void);
u16 func_02002740(void) {
    return data_02145ba0;
}

