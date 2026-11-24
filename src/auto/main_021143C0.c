/* 43 functions from 0x021143C0 to 0x02115380 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_0216cad0[4];
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

