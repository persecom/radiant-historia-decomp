/* 12 functions from 0x02000F44 to 0x02001D9C (main), found by ds-decomp. */
#include "common.h"

typedef struct Mtx9 {
    u32 a00, a01, a02;
    u32 a10, a11, a12;
    u32 a20, a21, a22;
    u32 pad0, pad1, pad2;
} Mtx9;

extern void func_02000cd8(void *, void *, u32, u32, u32);
void func_020010d8(u32 *p) {
    p[0] = 0x1000; p[1] = 0; p[2] = 0; p[3] = 0;
    p[4] = 0x1000; p[5] = 0; p[6] = 0; p[7] = 0;
    p[8] = 0x1000; p[9] = 0; p[10] = 0; p[11] = 0;
}

void func_02001134(u32 *in, u32 *out) {
    u32 v0 = in[0], v1 = in[1], v2 = in[2], v3 = in[3], v4 = in[4];
    u32 v5 = in[5], v6 = in[6], v7 = in[7], v8 = in[8];
    out[0] = v0; out[1] = v3; out[2] = v6;
    out[3] = v1; out[4] = v4; out[5] = v7;
    out[6] = v2; out[7] = v5; out[8] = v8;
    out[9] = 0; out[10] = 0; out[11] = 0;
}

void func_02001160(u8 *arg0, u8 *arg1, u32 arg2, u32 arg3, u32 arg4) {
    u8 *a = arg0;
    u8 *b = arg1;
    u32 c, x, y;
    func_02000cd8(arg0, arg1, arg2, arg3, arg4);
    c = *(u32 *)(a + 0x2c);
    x = *(u32 *)(a + 0x24);
    y = *(u32 *)(a + 0x28);
    *(u32 *)(b + 0x24) = x;
    *(u32 *)(b + 0x28) = y;
    *(u32 *)(b + 0x2c) = c;
}

void func_02001834(u32 *p) {
    u32 i;
    for (i = 0; i < 16; i++) p[i] = 0;
    p[0] = 0x1000;
    p[5] = 0x1000;
    p[10] = 0x1000;
    p[15] = 0x1000;
}

void func_02001860(const s32 (*src)[4], s32 (*dst)[3]) {
    s32 i;
    for (i = 0; i < 4; i++) {
        dst[i][0] = src[i][0];
        dst[i][1] = src[i][1];
        dst[i][2] = src[i][2];
    }
}

