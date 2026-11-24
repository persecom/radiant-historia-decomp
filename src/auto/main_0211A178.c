/* 28 functions from 0x0211A178 to 0x0211B0E8 (main), found by ds-decomp. */
#include "common.h"
extern u32 data_021701d8[4];
extern u32 data_021701cc[3];

extern u32 data_02155ed0[4];


extern void func_0211c5fc(void);
void func_0211a4c0(void) {
    func_0211c5fc();
}

u32 func_0211a4cc(u8 *arg0) {
    return *(u32 *)(arg0 + 0x78);
}

extern void func_0211c52c(void);
void func_0211a4d4(void) {
    func_0211c52c();
}

u8 *func_0211a5e4(s32 arg0) {
    return (u8 *)data_021701cc[2] + arg0 * 0x30;
}

extern void func_02118e68(void *);
extern void func_02118e84(void *, s32, s32);
void func_0211a5fc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u32 arg4, u32 arg5, u32 arg6, u32 arg7) {
    u8 *ptr = (u8 *)data_021701cc[2] + arg0 * 0x30;
    func_02118e68(ptr);
    if (arg1 != -1) {
        func_02118e84(ptr, 0, arg1);
    }
    if (arg2 != -1) {
        func_02118e84(ptr, 1, arg2);
    }
    if (arg3 != -1) {
        func_02118e84(ptr, 2, arg3);
    }
    *(u32 *)(ptr + 0xc) = arg4;
    *(u32 *)(ptr + 0x10) = arg5;
    *(u32 *)(ptr + 0x14) = arg6;
    *(u32 *)(ptr + 0x18) = arg7;
}

void func_0211ab04(u32 arg0) {
    data_021701d8[2] = arg0;
}

void func_0211ab14(void) {
    data_021701d8[1] = 0;
}

void func_0211ab28(u32 arg0) {
    data_02155ed0[0] = arg0;
}

extern u32 data_02155ed0[4];
u32 func_0211ab38(void) {
    return data_02155ed0[0];
}

extern u32 data_021701d8[4];
void func_0211ad90(u32 arg0) {
    data_021701d8[0] = arg0;
}

void func_0211ada0(void) {
    data_021701d8[0] = 0;
}

