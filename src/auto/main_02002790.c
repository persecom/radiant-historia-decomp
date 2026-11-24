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

extern u16 data_02145ba0;
extern void func_02002028(u32);
extern s32 func_02001ff4(void);

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

void func_02002858(volatile u16 *reg, s32 brightness) {
    if (brightness == 0) {
        *reg = 0;
    } else if (brightness > 0) {
        *reg = (u16)(brightness | 0x4000);
    } else {
        *reg = (u16)((-brightness) | 0x8000);
    }
}

extern void func_02001d9c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 *arg7);
extern void func_02002bbc();
extern void func_02002e58(void);
void func_02002880(volatile u32 *reg, const s32 *mtx, s32 centerX, s32 centerY, s32 x1, s32 y1) {
    s32 dx = mtx[0] * (x1 - centerX) + mtx[1] * (y1 - centerY);
    s32 dy = mtx[2] * (x1 - centerX) + mtx[3] * (y1 - centerY);
    s32 x2 = dx + (centerX << 12);
    s32 y2 = dy + (centerY << 12);

    reg[0] = (u16)((mtx[0] << 12) >> 16) | ((u16)((mtx[1] << 12) >> 16) << 16);
    reg[1] = (u16)((mtx[2] << 12) >> 16) | ((u16)((mtx[3] << 12) >> 16) << 16);
    reg[2] = (u32)(x2 >> 4);
    reg[3] = (u32)(y2 >> 4);
}

void func_02002920(u32 *arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    *arg0 = (arg1 | 0x40) | (arg2 << 8) | ((arg3 | (arg4 << 8)) << 16);
}

void func_0200293c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 *mtx) {
    s32 tmp[16];
    if (mtx == NULL) {
        mtx = tmp;
    }
    func_02001d9c(arg0, arg1, arg2, arg3, arg4, arg5, arg6, mtx);
    if (arg7 != 0) {
        *(volatile u32 *)0x04000440 = 0;
        func_02002bbc(mtx);
    }
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

void func_02002bf4(void *arg0) {
    *(volatile u32 *)0x04000400 = 0x19;
    func_020055b0(arg0);
}

void func_02002d30(void) {
    while (*(volatile u32 *)0x04000600 & 0x08000000) {
    }
    *(volatile u32 *)0x04000600 |= 0x8000;
    *(volatile u16 *)0x04000060 |= 0x2000;
    *(volatile u16 *)0x04000060 |= 0x1000;
    func_02002e58();
    *(volatile u32 *)0x040004a4 = 0x1f0080;
    *(volatile u32 *)0x040004a8 = 0;
    *(volatile u32 *)0x040004ac = 0;
}

