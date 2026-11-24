/* 43 functions from 0x021143C0 to 0x02115380 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_0216cad0[4];
extern u8 data_0216c8f4[];
extern u8 data_0216c8f8[];
extern s32 func_0200a108(s32);
extern void func_0200968c(u32, u32, s32);
extern void func_020096b4(u32, s32);
extern void func_021139d0(void *);
extern void func_02009580(void *, s32, u32, s32);
extern void func_0200f0a4(void *);
extern void func_0200f0c4(void *);
extern void func_02114818(void *);
extern void func_021148cc(u8 *, s32);
extern u8 data_0216bfd8[12];
extern u32 data_0216c8a4;
extern u8 data_0216c8a8[12];
extern void func_021167ac(u32, s32);
extern void func_021168f8(u32, u8 *);
extern void func_021141a8(void *, u8 *);
extern void func_021141f8(u8 *);
extern void func_0211497c(void);
extern void func_021149c8(void);
extern s32 func_0211398c(u32);
void func_021143c0(u8 *arg0, u8 arg1) {
    u32 old = *(u32 *)(arg0 + 4);
    if (old != 0) {
        func_021168f8(old, arg0);
        *(u32 *)(arg0 + 4) = 0;
    }
    func_021168f8((u32)data_0216bfd8, arg0);
    arg0[0x3d] = arg1;
    if (old != 0) {
        func_021141a8((void *)old, arg0);
    }
    func_021141f8(arg0);
}

void func_02114420(u8 *arg0) {
    u32 *flag = &data_0216c8a4;
    u32 zero = 0;
    u32 flags;
    if (*flag != 0) {
        return;
    }
    func_021167ac((u32)data_0216c8a8, 0);
    *flag = 1;
    flags = *(u32 *)(arg0 + 0x2c) & ~1 & ~2;
    *(u32 *)(arg0 + 8) = (u32)func_0211497c;
    *(u32 *)(arg0 + 0xc) = (u32)arg0;
    *(u32 *)(arg0 + 0x18) = (u32)func_021149c8;
    *(u32 *)(arg0 + 0x1c) = (u32)arg0;
    *(u32 *)(arg0 + 0x4c) = zero;
    *(u32 *)(arg0 + 0x50) = zero;
    *(u32 *)(arg0 + 0x2c) = flags;
}

s32 func_02114494(u8 *arg0, s32 arg1, u8 *arg2) {
    u32 bits = 0;
    s32 i;
    if (arg1 > 0) {
        for (i = 0; i < arg1; i++) {
            u8 c = arg2[i];
            arg0[0x54 + i] = c;
            bits |= 1 << c;
        }
    }
    if (func_0211398c(bits) == 0) {
        return 0;
    }
    *(u32 *)(arg0 + 0x50) = arg1;
    *(u32 *)(arg0 + 0x4c) = bits;
    return 1;
}

void func_021144f0(u8 *arg0) {
    if (*(void **)(arg0 + 0x4c) != NULL) {
        func_021139d0(*(void **)(arg0 + 0x4c));
        *(void **)(arg0 + 0x4c) = NULL;
        *(void **)(arg0 + 0x50) = NULL;
    }
}

void func_021146b8(u8 *arg0) {
    func_02009580(*(void **)(arg0 + 0x4c), 0, 1u << *(s32 *)(arg0 + 0x48), 0);
    if (((*(s32 *)(arg0 + 0x2c) << 30) >> 31) != 0) {
        return;
    }
    func_0200f0a4(arg0 + 8);
    func_0200f0c4(arg0 + 0x18);
    *(u32 *)(arg0 + 0x2c) |= 2;
}

void func_0211470c(u8 *arg0) {
    if (((*(s32 *)(arg0 + 0x2c) << 31) >> 31) != 0) {
        func_02114818(arg0);
    }
}

void func_021148bc(u8 *arg0) {
    func_021148cc(arg0, 1);
}

u32 func_02114f70(void) {
    return data_0216cad0[0];
}

void *func_021152a8(void) {
    return *(void **)(data_0216cad0[0] + 0x9c);
}

extern void func_021139d0(void *);
extern void func_02009580(void *, s32, u32, s32);
extern void func_0200f0a4(void *);
extern void func_0200f0c4(void *);
extern void func_02114818(void *);
void func_021152bc(u32 arg0) {
    *(u32 *)(data_0216cad0[0] + 0x9c) = arg0;
}

void func_021152d0(u32 arg0, u32 arg1, u8 *arg2) {
    *(u32 *)(arg2 + 0x98) = 0;
}

void func_021152dc(s32 a0, s32 a1, u8 *a2) {
    *(s32 *)(a2 + 0x90) = 0;
}

void func_021152e8(s32 a0, s32 a1, u8 *a2) {
    *(s32 *)(a2 + 0x94) = 0;
}

