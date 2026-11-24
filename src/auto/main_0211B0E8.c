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

