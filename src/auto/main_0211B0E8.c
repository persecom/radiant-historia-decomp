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
extern s32 func_0211b0bc(s32);
extern s32 func_0211ae60(s32, s32, s32);
extern s32 func_0211af90(s32, s32, s32);
extern void func_02009008(void *, void *, s32);

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

s32 func_0211b334(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg1 != 0) {
        return func_0211ae60(func_0211b0bc(arg0), arg2, arg3);
    } else {
        return func_0211af90(arg0, arg2, arg3);
    }
}

s32 func_0211b36c(s32 arg0, s32 *arg1, u16 *arg2, s32 arg3) {
    u16 h6 = arg2[3];
    if (h6 == 0 && arg2[2] == 1) {
        volatile u32 *reg = (arg0 <= 3) ? (volatile u32 *)0x04000000 : (volatile u32 *)0x04001000;
        return func_0211b334(arg0, (*reg & 0x40000000) ? 1 : 0, (s32)arg1, arg3);
    } else {
        return func_0211b334(arg0, (*arg1 != 3 && h6 != 1) ? 1 : 0, (s32)arg1, arg3);
    }
}

void func_0211b584(s32 arg0, s32 arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5, u32 arg6) {
    switch (arg1) {
        case 0:
            func_0211b274(arg0, arg2, arg3, arg4, arg5, arg6);
            break;
        case 1:
            func_0211b2b4(arg0, arg3, arg4, arg5, arg6);
            break;
        case 2:
            func_0211b2f4(arg0, arg3, arg4, arg5, arg6);
            break;
    }
}

void func_0211b83c(u8 *dst, u8 *src, s32 srcX, s32 srcY, s32 dstX, s32 dstY, s32 dstStride, s32 width, s32 height) {
    s32 srcStride = *(u16 *)src >> 3;
    u8 *s = (src + 0xc) + srcY * srcStride + srcX;
    u8 *d = dst + dstY * dstStride + dstX;
    s32 endY = srcY + height;
    s32 y;
    for (y = srcY; y < endY; y++) {
        func_02009008(s, d, width);
        s += srcStride;
        d += dstStride;
    }
}

extern void func_0211b3dc(s32, s32, u32);
extern void func_0211b4b8(s32, s32);
extern void func_02008e08(u8 *, u8 *, s32);
void func_0211b910(s32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5) {
    if (arg3 != 0 && arg1 != 0) {
        func_0211b36c(arg0, (s32 *)arg3, (u16 *)arg1, arg5);
    }
    if (arg2 != 0) {
        func_0211b3dc(arg0, arg2, arg4);
    }
    if (arg1 != 0) {
        func_0211b4b8(arg0, arg1);
    }
}

