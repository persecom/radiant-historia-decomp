/* 8 functions from 0x0207B398 to 0x0207C328 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600f0;
extern u8 *data_021600ac;
extern s32 func_0201f884(s32);
extern s32 func_020201f4(s32, s32);
extern s32 func_0201ff0c(s32);
extern void func_020477dc(void *, s32, s32);
extern void *func_02021f10(u32);
extern void func_0210d27c(s32);

s32 func_0207be40(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s32 v1 = func_0201ff0c(func_020201f4(func_0201f884(arg0[0] - arg1[0]), arg2));
    s32 v2 = func_0201ff0c(func_020201f4(func_0201f884(arg0[2] - arg1[2]), arg3));
    s64 sq = (s64)v2 * v2 + (s64)v1 * v1;
    *(volatile u16 *)0x40002b0 = 1;
    *(volatile u32 *)0x40002b8 = (u32)(sq << 2);
    *(volatile u32 *)0x40002bc = (u32)(sq >> 30);
    while (*(volatile u16 *)0x40002b0 & 0x8000) {
    }
    return (*(volatile u32 *)0x40002b4 + 1) >> 1;
}

void func_0207c124(void) {
    u8 *node = *(u8 **)(data_021600f0 + 4);
    u8 *obj = *(u8 **)(data_021600ac + 0x68);
    if (*(u8 *)(node + 0) == 0) {
        return;
    }
    *(u16 *)(node + 2) = 0;
    *(u8 *)(node + 0) = 0;
    *(u32 *)(obj + 0xac) &= ~0x800;
    func_020477dc(obj, 2, 1);
}

