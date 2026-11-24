/* 30 functions from 0x0211BDE8 to 0x0211CDC8 (main), found by ds-decomp. */
#include "common.h"

extern void func_02008df0(s32, void *, s32);
extern u8 *data_021701f8;

void func_0211c4ec(u8 *arg0) {
    func_02008df0(0, arg0, 0x70);
    *(s32 *)(arg0 + 0x0) = 0;
    *(s32 *)(arg0 + 0x4) = 2;
    *(s32 *)(arg0 + 0x8) = 0;
    *(s32 *)(arg0 + 0xc) = 0;
    *(s32 *)(arg0 + 0x24) = 0;
    *(s32 *)(arg0 + 0x30) = 1;
    *(s32 *)(arg0 + 0x28) = 0;
}

void func_0211c52c(u8 *arg0, s32 arg1, s32 arg2) {
    *(s32 *)(arg0 + 0x8) = arg1;
    *(s32 *)(arg0 + 0xc) = arg2;
}

void func_0211c538(u8 *arg0, s32 arg1, s32 arg2) {
    *(s32 *)(arg0 + 0x1c) = arg1;
    *(s32 *)(arg0 + 0x20) = arg2;
}

void func_0211c544(s32 *arg0) {
    u8 *ptr = data_021701f8;
    *(s32 **)(ptr + 0x2c) = arg0;
    *(s32 *)(ptr + 0x40) = arg0[0];
    *(s32 *)(ptr + 0x44) = arg0[1];
    *(s32 *)(ptr + 0x48) = 0;
    *(s32 *)(ptr + 0x4c) = arg0[2];
    *(s32 *)(ptr + 0x50) = arg0[3];
    *(s32 *)(ptr + 0x54) = 0;
    *(s32 *)(ptr + 0x58) = 0;
    *(s32 *)(ptr + 0x5c) = 0;
    *(s32 *)(ptr + 0x60) = 0x1000;
    *(s32 *)(ptr + 0x64) = arg0[4];
    *(s32 *)(ptr + 0x68) = arg0[5];
    *(s32 *)(ptr + 0x6c) = *(s32 *)(ptr + 0x34);
}

void func_0211c5ac(s32 arg0, s32 arg1) {
    u8 *ptr = data_021701f8;
    *(s32 *)(ptr + 0x2c) = arg0;
    *(s32 *)(ptr + 0x28) = arg1;
}

void func_0211c5c4(u8 *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0x34) = arg1;
}

extern u8 *data_021701f8;
void func_0211c5cc(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

s32 func_0211c5d4(u8 *arg0) {
    return (*(s32 *)(arg0 + 0x24) & 1) ? 1 : 0;
}

s32 func_0211c5e8(u8 *arg0) {
    return (*(s32 *)(arg0 + 0x24) & 2) ? 1 : 0;
}

void func_0211c5fc(u8 *arg0, s32 arg1, s32 arg2) {
    if (arg1 != 0) {
        *(u32 *)(arg0 + 0x24) |= 1;
    } else {
        *(u32 *)(arg0 + 0x24) &= ~1;
    }
    if (arg2 != 0) {
        *(u32 *)(arg0 + 0x24) |= 2;
    } else {
        *(u32 *)(arg0 + 0x24) &= ~2;
    }
}

void func_0211c738(void) {
    if (*(s32 *)(*(u8 **)data_021701f8 + 0x14) == 0) {
        *(volatile u32 *)0x04000440 = 0;
        *(volatile u32 *)0x04000448 = 1;
        *(volatile u32 *)0x04000440 = 1;
    } else {
        *(u32 *)(data_021701f8 + 0x10) = 0;
        *(u32 *)(data_021701f8 + 0x2C) = 0;
        *(u32 *)(data_021701f8 + 0x28) = 0;
    }
    data_021701f8 = NULL;
}

void func_0211cbcc(u32 *arg0, u8 *arg1) {
    while (arg1 != NULL) {
        s32 i;
        for (i = 0; i < *(u8 *)(arg1 + 0x19); i++) {
            if (*(u16 *)(arg1 + 0x1A + i * 2) & 0x100) {
                arg0[i >> 5] |= 1 << (i & 0x1F);
            }
        }
        arg1 = *(u8 **)(arg1 + 0x10);
    }
}

void func_0211cd78(u8 *arg0) {
    *(s32 *)(arg0 + 0x20) = 0;
    arg0[0x24] = 0;
    arg0[0x25] = 0;
}

u32 func_0211cd8c(u8 *arg0) {
    if (arg0 != NULL) {
        return (u32)*(u16 *)(arg0 + 0xc) << 3;
    }
    return 0;
}

