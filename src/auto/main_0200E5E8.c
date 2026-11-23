/* 29 functions from 0x0200E5E8 to 0x0200F244 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_0215f04c[8];
extern void func_0200f004(void *, s32);
extern void func_0200e524(u32 *, s32);
extern s32 func_0200ed20(s32, s32, s32, s32);
extern s32 func_0200e4a0(u32 *, s32, void *, void *, void *);
extern void func_0200e314(void);
extern void func_0200e290(void);
s32 func_0200e5e8(u32 arg0, u32 arg1) {
    u32 buf[2];
    buf[0] = 0x03006000;
    func_0200e524(buf, 1);
    while (func_0200ed20(0, 2, 0, 1) != 1) {
    }
    buf[0] = 0x02006200 | (arg0 & 0xff);
    buf[1] = 0x01010000 | (u16)arg1;
    func_0200e524(buf, 2);
    return 0;
}

s32 func_0200e674(u32 arg0, u32 arg1, void *arg2, void *arg3, void *arg4) {
    u32 buf[2];
    buf[0] = 0x02006100 | (arg0 & 0xff);
    buf[1] = 0x01010000 | (u16)arg1;
    return func_0200e4a0(buf, 2, arg2, arg3, arg4);
}

void func_0200f0e4(s32 arg0) {
    func_0200f004(data_0215f04c, arg0);
}
