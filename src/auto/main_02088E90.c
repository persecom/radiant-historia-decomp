/* 13 functions from 0x02088E90 to 0x02089BB0 (main), found by ds-decomp. */
#include "common.h"

extern u16 data_02162908[4];
extern u8 *data_0216010c;
extern void func_020a8810(void *, u32);
extern void func_020895a0();

s32 func_02089220(s32 arg0, s16 arg1) {
    u8 *base = data_0216010c + arg0 * 0x844;
    s8 i;
    if (base[0x650] <= 0) {
        return -1;
    }
    for (i = 0; i < (s8)base[0x650]; i++) {
        if (*(s16 *)(base + 0x690 + i * 0x40) == arg1) {
            return i;
        }
    }
    return -1;
}

void func_02089550(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_02089578(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_0208994c(s32 arg0) {
    s32 arr[5];
    arr[0] = 0;
    arr[1] = (u16)arg0;
    arr[2] = 0;
    arr[3] = 0;
    arr[4] = 0;
    func_020a8810(*(void **)(data_0216010c + 0x340), 0x18);
    func_020895a0(9, 0x12000, 0x86000, 50, arr);
    func_020a8810(*(void **)(data_0216010c + 0x2f0), 0x16);
    arr[0] = 1;
    func_020895a0(8, 0x14000, 0x98000, 50, arr);
}

void func_020899e8(s32 arg0) {
    s32 arr[5];
    u16 v = (u16)(arg0 + 1);
    arr[0] = 8;
    arr[1] = v;
    arr[2] = 0;
    arr[3] = 0;
    arr[4] = 0;
    func_020a8810(*(void **)(data_0216010c + 0x340), 0x18);
    func_020895a0(9, 0x12000, 0x86000, 50, arr);
    func_020a8810(*(void **)(data_0216010c + 0x2f0), 0x16);
    arr[0] = 9;
    func_020895a0(8, 0x14000, 0x98000, 50, arr);
}

BOOL func_02089ae4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 x = data_02162908[0];
    s32 y = data_02162908[1];
    BOOL ret = (x >= arg0 && x <= arg0 + arg2 && y >= arg1 && y <= arg1 + arg3);
    return ret != 0;
}

