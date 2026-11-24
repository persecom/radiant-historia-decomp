/* 40 functions from 0x02001D9C to 0x02002D9C (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s32 x, y, z;
} Vec3;

typedef struct {
    s32 x, y;
} Vec2;

typedef struct {
    Vec2 xy;
    s32 z;
} Vec3n;

extern u16 data_02145ba0;
extern u16 data_0215cd20;
extern void func_0200f1bc(void);
void func_02002058(s32 arg0, s32 arg1);
void func_02002028(u32 arg0);
s32 func_02001ff4(void);

void func_02002708(s32 arg0) {
    volatile u16 *reg = (volatile u16 *)0x4000004;
    u16 v = *reg;
    if (arg0 != 0) {
        *reg = v | 8;
    } else {
        *reg = v & 0xfff7;
    }
}

extern u16 data_02145ba0;
extern void func_02002028(u32);
extern s32 func_02001ff4(void);
u16 func_02002740(void) {
    return data_02145ba0;
}

void func_02002750(void) {
    u32 tmp = *(volatile u32 *)0x04000000;
    data_02145ba0 = 0;
    data_0215cd20 = (u16)((tmp & 0x30000) >> 16);
    *(volatile u32 *)0x04000000 = tmp & ~0x30000;
    func_0200f1bc();
}

void func_02002790(void) {
    data_02145ba0 = 1;
    if (data_0215cd20 != 0) {
        *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x30000) | (data_0215cd20 << 16);
    } else {
        *(volatile u32 *)0x04000000 |= 0x10000;
    }
}

void func_020027d4(u32 dispMode, u32 bgMode, u32 bg0_2d3d) {
    u32 cnt = *(volatile u32 *)0x04000000;
    data_0215cd20 = (u16)dispMode;
    if (data_02145ba0 == 0) {
        dispMode = 0;
    }
    *(volatile u32 *)0x04000000 = (cnt & 0xfff0fff0) | (dispMode << 16) | bgMode | (bg0_2d3d << 3);
    if (data_0215cd20 == 0) {
        data_02145ba0 = 0;
    }
}

void func_0200283c(u32 arg0) {
    *(volatile u32 *)0x04001000 = (*(volatile u32 *)0x04001000 & ~7) | arg0;
}

void func_02002920(u32 *arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    *arg0 = (arg1 | 0x40) | (arg2 << 8) | ((arg3 | (arg4 << 8)) << 16);
}

extern void func_020055d4(void);
void func_02002bbc(void)
{
  *((volatile u32 *) 0x4000400) = 0x16;
  func_020055d4();
  *((volatile u32 *) 0x4000400) = 0x16;
}

extern void func_020055b0(void *arg0);
extern void func_0200f1bc(void);
extern u16 data_0215cd20;
void func_02002bd8(void *arg0) {
    *(volatile u32 *)0x04000400 = 0x17;
    func_020055b0(arg0);
}

