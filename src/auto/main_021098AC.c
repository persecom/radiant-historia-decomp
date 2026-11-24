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
 s32 x=arg0[1]<<12, y=arg0[2]<<12;
 s32 width=arg0[3]<<12, height=arg0[4]<<12;
 s32 right,bottom;
 u16 x0,y0,x1,y1;
 if(width<0) {right=x-1;width=-width;x=width+right;} else right=width+x;
 if(height<0) {bottom=y-1;height=-height;y=height+bottom;} else bottom=height+y;
 s32 tx=arg0[5], ty=arg0[6], tz=arg0[7];
 *(volatile u32 *)0x4000444=0;
 *(volatile s32 *)0x4000470=tx<<12;
 *(volatile s32 *)0x4000470=ty<<12;
 *(volatile s32 *)0x4000470=tz<<12;
 if(!(arg0[0]&1)) {
 *(volatile s32 *)0x400046c=width;
 *(volatile s32 *)0x400046c=height;
 }else{
 s32 sx=arg0[8],sy=arg0[9];
 *(volatile s32 *)0x400046c=sx<<12;
 *(volatile s32 *)0x400046c=sy<<12;
 }
 x0=(s16)(x>>8);y0=(s16)(y>>8);
 x1=(s16)(right>>8);y1=(s16)(bottom>>8);
 *(volatile u32 *)0x400046c=0x1000;
 *(volatile u32 *)0x4000500=1;
 *(volatile u32 *)0x4000488=x0 | (y0<<16);
 *(volatile u32 *)0x4000490=0;
 *(volatile u32 *)0x4000488=x0 | (y1<<16);
 *(volatile u32 *)0x4000490=0x10000;
 *(volatile u32 *)0x4000488=x1 | (y1<<16);
 *(volatile u32 *)0x4000490=0x10040;
 *(volatile u32 *)0x4000488=x1 | (y0<<16);
 *(volatile u32 *)0x4000490=0x40;
 *(volatile u32 *)0x4000504=0;
 *(volatile u32 *)0x4000448=1;
}

void func_021099f8(s16 *arg0) {
    s32 x = arg0[1];
    s32 y = arg0[2];
    s32 z = arg0[3];
    s32 sx, sy, flags;

    *(volatile u32 *)0x40004a8 = 0;

    sy = arg0[5];
    flags = arg0[0];
    sx = arg0[4];

    *(volatile u32 *)0x4000444 = 0;

    *(volatile s32 *)0x4000470 = x << 12;
    *(volatile s32 *)0x4000470 = y << 12;
    *(volatile s32 *)0x4000470 = z << 12;

    *(volatile s32 *)0x400046c = sx << 12;
    *(volatile s32 *)0x400046c = sy << 12;
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

void func_02109af8(void) {
    func_0210a014();
    func_021167ac(data_0216256c, 0);
}

extern s32 data_02155bac;
extern u8 data_02162684;
extern u8 data_02162688[];
extern void *data_02162638;
extern void *func_02109c60(void *, u32 *);
extern u32 func_02008128(void);
extern void func_0200813c(u32);
extern void func_02006afc(void *);
extern void func_02006b4c(void *);
extern u32 func_02117088(void *);
extern u32 func_02117078(void *, u32);
extern u8 *func_02109d04(void *);
void *func_02109b14(void *arg0, u32 *arg1) {
    struct { u8 bit : 1; } flag;
    u32 irq;
    u32 old;
    u8 *r5;

    if (data_02155bac == 0) {
        return func_02109c60(arg0, arg1);
    }
    if (data_02162684 != 0) {
        irq = func_02008128();
        func_02006afc(data_02162688);
    }
    *(u8 *)&flag = (u8)func_02117088(data_02162638);
    flag.bit = 1;
    old = func_02117078(data_02162638, *(u8 *)&flag);
    r5 = func_02109d04(arg0);
    func_02117078(data_02162638, old);
    if (data_02162684 != 0) {
        func_02006b4c(data_02162688);
        func_0200813c(irq);
    }
    if (r5 == NULL) {
        return NULL;
    }
    if (arg1 != NULL) {
        struct { u32 size : 24; } *s = (void *)(r5 + 0xc);
        *arg1 = s->size;
    }
    return *(void **)(r5 + 0x8);
}

s32 func_02109c04(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    func_0210a2f0();
    func_0210a348((u32)arg0, (u32)arg1);
}

void func_02109c24(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    func_0210a30c(arg0, arg2, 0);
    func_0210a3d8(arg0, arg1, arg3);
}

void func_02109c54(u8 *arg0) {
    func_0210a38c();
}
