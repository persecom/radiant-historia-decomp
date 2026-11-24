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
