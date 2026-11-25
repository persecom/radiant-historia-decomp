/* 33 functions from 0x021098AC to 0x0210A7E4 (main), found by ds-decomp. */
#include "common.h"
static inline void SetTranslation_021098ac(s32 x, s32 y, s32 z) {
 *(volatile s32 *)0x4000470=x; *(volatile s32 *)0x4000470=y; *(volatile s32 *)0x4000470=z;
}
static inline void SetScale_021098ac(s32 x, s32 y) {
 *(volatile s32 *)0x400046c=x; *(volatile s32 *)0x400046c=y;
}

extern u8 data_02162610[64];

extern s32 func_0210a38c();
extern void func_0210a014(void);
extern u32 data_0216256c[];
extern void func_021167ac(void *, s32);
extern void func_0210a2f0(void);
extern void func_0210a348(u32, u32);
extern void func_0210a30c(u32, u32, s32);
extern void func_0210a3d8(u32, u32, u32);
extern void *func_0210c518(u32, void *);
extern void func_02006dc4(void *, u32);
extern void func_021168f8(void *, void *);
extern void func_0210c674(void *);
extern void func_0210c5dc(void *);
extern void *func_02109f3c(void);
extern void func_02109ea8(void *);
extern void *data_02155c3c;
extern u32 data_02162564[];
extern u32 func_0210a498(u32 *);
void func_021098ac(s16 *arg0) {
    s32 tx = arg0[5], ty = arg0[6], tz = arg0[7];
    s32 y = arg0[2] << 12;
    s32 x = arg0[1] << 12;
    s32 width = arg0[3] << 12;
    s32 height = arg0[4] << 12;
    s32 flags;
    s32 right, bottom;
    s32 zero = 0;
    u16 x0, y0, x1, y1;
    if (width < 0) { right = x - 1; width = -width; x = width + right; } else right = width + x;
    if (height < 0) { bottom = y - 1; height = -height; y = height + bottom; } else bottom = height + y;
    *(volatile u32 *)0x4000444 = zero;
    flags = arg0[0];
    *(volatile s32 *)0x4000470 = tx << 12;
    *(volatile s32 *)0x4000470 = ty << 12;
    *(volatile s32 *)0x4000470 = tz << 12;
    if (!(flags & 1)) {
        *(volatile s32 *)0x400046c = width;
        *(volatile s32 *)0x400046c = height;
    } else {
        s32 sx = arg0[8], sy = arg0[9];
        *(volatile s32 *)0x400046c = sx << 12;
        *(volatile s32 *)0x400046c = sy << 12;
    }
    x0 = (s16)(x >> 8); y0 = (s16)(y >> 8);
    x1 = (s16)(right >> 8); y1 = (s16)(bottom >> 8);
    *(volatile u32 *)0x400046c = 0x1000;
    *(volatile u32 *)0x4000500 = 1;
    *(volatile u32 *)0x4000488 = x0 | (y0 << 16);
    *(volatile u32 *)0x4000490 = 0;
    *(volatile u32 *)0x4000488 = x0 | (y1 << 16);
    *(volatile u32 *)0x4000490 = 0x10000;
    *(volatile u32 *)0x4000488 = x1 | (y1 << 16);
    *(volatile u32 *)0x4000490 = 0x10040;
    *(volatile u32 *)0x4000488 = x1 | (y0 << 16);
    *(volatile u32 *)0x4000490 = 0x40;
    *(volatile u32 *)0x4000504 = 0;
    *(volatile u32 *)0x4000448 = 1;
}
