/* 18 functions from 0x0211B0E8 to 0x0211BDE8 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_02144e58[16];
extern u8 data_02144e80[24];
extern u8 data_02144e98[24];
extern u8 data_02144eb0[32];
extern u16 *data_02144ee8[8];
extern u32 data_021701f4;
extern void *func_0211adb4(void *, u32, u32, u32);
extern void func_0211adf4(void *);
extern void func_0211ae38(void *);
extern u32 func_020055a0(void);
extern void func_0211b0e8(s32, u32, u32, u32, u32);
extern void func_0211b17c(s32, u32, u32, u32, u32);

void func_0211b0e8(s32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    u32 flag;
    u32 idx;
    u32 val;
    u16 *reg;
    u32 bits;
    idx = arg0 & 3;
    flag = 0;
    if (arg0 <= 3) {
        val = func_020055a0();
        if (val != 0x20 && val != 0x10 && val != 0x60) {
            flag = 1;
        }
        func_0211adf4(data_02144eb0 + idx * 8);
    } else {
        func_0211ae38(data_02144eb0 + idx * 8);
    }
    reg = data_02144ee8[arg0];
    bits = (arg1 << 14) | (arg3 << 8) | (arg4 << 2) | (flag << 13) | (arg2 << 7);
    *reg = (*reg & 0x43) | (u16)bits;
}

void func_0211b17c(s32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    u16 *reg;
    u32 bits;
    if (arg0 <= 3) {
        func_0211adf4(data_02144e58 + (arg0 - 2) * 8);
    } else {
        func_0211ae38(data_02144e58 + (arg0 - 6) * 8);
    }
    reg = data_02144ee8[arg0];
    bits = (arg1 << 14) | (arg3 << 8) | (arg4 << 2) | (arg2 << 13);
    *reg = (*reg & 0x43) | (u16)bits;
}

extern u8 data_02144e38[16];
void func_0211b1f8(s32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    u16 *reg;
    u32 bits;
    if (arg0 <= 3) {
        func_0211adf4(data_02144e38 + (arg0 - 2) * 8);
    } else {
        func_0211ae38(data_02144e38 + (arg0 - 6) * 8);
    }
    reg = data_02144ee8[arg0];
    bits = (arg1 << 14) | (arg3 << 8) | (arg4 << 2) | (arg2 << 13);
    *reg = (*reg & 0x43) | (u16)bits;
}

void func_0211b274(s32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5) {
    u8 *p = func_0211adb4(data_02144e98, arg2, arg3, arg3);
    func_0211b0e8(arg0, *(u16 *)(p + 4), arg1, arg4, arg5);
}

void func_0211b2b4(s32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    u8 *p = func_0211adb4(data_02144e80, arg1, arg2, arg3);
    func_0211b17c(arg0, *(u16 *)(p + 4), data_021701f4, arg3, arg4);
}

extern u8 data_02144e68[24];
extern void func_0211b1f8(s32, u32, u32, u32, u32);
void func_0211b2f4(s32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    u8 *p = func_0211adb4(data_02144e68, arg1, arg2, arg3);
    func_0211b1f8(arg0, *(u16 *)(p + 4), data_021701f4, arg3, arg4);
}

