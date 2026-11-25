/* 33 functions from 0x021098AC to 0x0210A7E4 (main), found by ds-decomp. */
#include "common.h"
static inline void SetTranslation_021098ac(s32 x, s32 y, s32 z) {
 *(volatile s32 *)0x4000470=x<<12; *(volatile s32 *)0x4000470=y<<12; *(volatile s32 *)0x4000470=z<<12;
}
static inline void SetScale_021098ac(s32 x, s32 y) {
 *(volatile s32 *)0x400046c=x<<12; *(volatile s32 *)0x400046c=y<<12;
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
typedef struct {
    s16 flags;
    s16 x;
    s16 y;
    s16 z;
    s16 sx;
    s16 sy;
    s16 a6;
    s16 a7;
    s16 a8;
    s16 a9;
} Args_021099f8;

void func_021099f8(s16 *arg0) {
    s32 x = arg0[1], y = arg0[2], z = arg0[3];
    s32 sy, flags, sx;

    *(volatile u32 *)0x40004a8 = 0;

    sy = arg0[5];
    flags = arg0[0];
    sx = arg0[4];

    *(volatile u32 *)0x4000444 = 0;

    SetTranslation_021098ac(x, y, z);
    SetScale_021098ac(sx, sy);
    *(volatile s32 *)0x400046c = 0x1000;

    *(volatile u32 *)0x4000500 = 1;

    if (flags & 2) {
        *(volatile u32 *)0x4000480 = arg0[6];
        *(volatile u32 *)0x4000490 = 0;
        *(volatile u32 *)0x4000480 = arg0[7];
        *(volatile u32 *)0x4000490 = 0x10000;
        *(volatile u32 *)0x4000480 = arg0[8];
        *(volatile u32 *)0x4000490 = 0x10040;
        *(volatile u32 *)0x4000480 = arg0[9];
        *(volatile u32 *)0x4000490 = 0x40;
    } else {
        *(volatile u32 *)0x4000480 = arg0[6];
        *(volatile u32 *)0x4000490 = 0;
        *(volatile u32 *)0x4000490 = 0x10000;
        *(volatile u32 *)0x4000490 = 0x10040;
        *(volatile u32 *)0x4000490 = 0x40;
    }

    *(volatile u32 *)0x4000504 = 0;
    *(volatile u32 *)0x4000448 = 1;
}
