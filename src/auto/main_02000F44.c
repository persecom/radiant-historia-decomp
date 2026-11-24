/* 12 functions from 0x02000F44 to 0x02001D9C (main), found by ds-decomp. */
#include "common.h"

typedef struct Mtx9 {
    u32 a00, a01, a02;
    u32 a10, a11, a12;
    u32 a20, a21, a22;
    u32 pad0, pad1, pad2;
} Mtx9;

extern void func_02000cd8(void *, void *, u32, u32, u32);
void func_020010d8(u32 *arg0) {
    *arg0++ = 0x1000;
    *arg0++ = 0;
    *arg0++ = 0;
    *arg0++ = 0;
    *arg0++ = 0x1000;
    *arg0++ = 0;
    *arg0++ = 0;
    *arg0++ = 0;
    *arg0++ = 0x1000;
    *arg0++ = 0;
    *arg0++ = 0;
    *arg0++ = 0;
}

void func_02001134(u32 *arg0, u32 *arg1) {
    arg1[0] = arg0[0];
    arg1[1] = arg0[3];
    arg1[2] = arg0[6];
    arg1[3] = arg0[1];
    arg1[4] = arg0[4];
    arg1[5] = arg0[7];
    arg1[6] = arg0[2];
    arg1[7] = arg0[5];
    arg1[8] = arg0[8];
    arg1[9] = 0;
    arg1[10] = 0;
    arg1[11] = 0;
}

void func_02001160(u8 *arg0, u8 *arg1, u32 arg2, u32 arg3, u32 arg4) {
    func_02000cd8(arg0, arg1, arg2, arg3, arg4);
    *(u32 *)(arg1 + 0x24) = *(u32 *)(arg0 + 0x24);
    *(u32 *)(arg1 + 0x28) = *(u32 *)(arg0 + 0x28);
    *(u32 *)(arg1 + 0x2c) = *(u32 *)(arg0 + 0x2c);
}

void func_02001834(u32 *arg0) {
    *arg0++ = 0x1000;
    *arg0++ = 0;
    *arg0++ = 0;
    *arg0++ = 0;
    *arg0++ = 0;
    *arg0++ = 0x1000;
    *arg0++ = 0;
    *arg0++ = 0;
    *arg0++ = 0;
    *arg0++ = 0;
    *arg0++ = 0x1000;
    *arg0++ = 0;
    *arg0++ = 0;
    *arg0++ = 0;
    *arg0++ = 0;
    *arg0++ = 0x1000;
}

