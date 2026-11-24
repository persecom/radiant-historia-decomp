/* 25 functions from 0x0200D63C to 0x0200E5E8 (main), found by ds-decomp. */
#include "common.h"
typedef struct { u8 pad0[4]; void (*callback)(s32,s32,s32); u8 pad8[8]; u16 f10, f12; u8 *entries; u16 count; u8 pad1a[0x1a]; u16 f34, f36; volatile u16 f38, f3a; } State0200dcd4;

extern u8 data_0215f000[];
extern s32 data_0215f01c[];
typedef struct { u16 x,y,z,w; } Coord0200e138;
extern s32 func_0200a6e4(s32,u32,s32);
static inline s32 Send0200dcd4(u32 a, u32 b) {
 if(func_0200a6e4(6,(b&255)|0x02000100,0)<0) return 0;
 if(func_0200a6e4(6,a|0x01010000,0)<0) return 0;
 return 1;
}
extern u8 data_0215efa0[];
extern u32 data_0215effc;
extern void func_0200b988(void *, void *, u32, u32, u32);
extern void func_0200d63c();
extern void func_0200bc24(void);
extern void func_0200a56c(void);
extern s32 func_0200a6c0(s32, s32);
extern void func_0200a674(s32, void *);
extern void func_0200d868(s32, u32, s32);
extern s32 func_0200df4c(s16 *, u16, u16, u16, u16, u16, u16, u16, u16);
typedef struct {
    u16 x;
    u16 y;
    u16 touch;
    u16 validity;
} TPData0200dddc;
extern void func_0200dddc();
extern void func_0200e138(u32, u32);
extern u32 data_0215f068;
extern u32 data_02145c18;
extern s32 func_0200818c(void);
extern s32 func_02008180(void);
extern void func_0200a75c(void);
extern u8 data_0215f03c[];
extern void func_0200e320(u32);
extern void func_0200e418(u32, u32, u32);
extern s32 func_02008128(void);
extern void func_0200813c();
extern void func_0200e974(u32);

extern u32 data_0215ef98[];
extern u8 data_02145c0c[];
extern u8 data_02145c10[];
extern void func_0200f858(void);
extern u32 func_02005df8(void);
extern void func_0200b594(void *);
extern void func_0200b5b8(void *, void *, s32);
extern s32 func_020081e0(void);
extern u8 *func_0200f9a4(void);
extern void func_0200d4e0(void *, void *, s32);
extern void func_0200d3f4(void *, u32, u32, u32, u32, u32, void *, void *);
extern void func_0200d634(void *);
extern void func_0200b178(void *);
extern void func_0200d5a0(void);
extern void func_0200d558(void);
extern void func_0200d610(void);
extern void func_0200d624(void);
extern void func_0200d62c(void);
void func_0200d63c(u32 arg0) {
    func_0200f858();
    data_0215ef98[0] = arg0;
    data_0215ef98[1] = func_02005df8();
    func_0200b594(data_0215efa0);
    func_0200b5b8(data_0215efa0, data_02145c0c, 3);
    if (func_020081e0() == 1) {
        u8 *h1 = func_0200f9a4();
        u8 *h2 = func_0200f9a4();
        func_0200d4e0(data_0215efa0, func_0200d5a0, 0x682);
        {
            u32 f40 = *(u32 *)(h1 + 0x40);
            u32 f48;
            if (f40 != (u32)-1 && f40 != 0 && (f48 = *(u32 *)(h2 + 0x48)) != (u32)-1 && f48 != 0) {
                func_0200d3f4(data_0215efa0, 0, f48, *(u32 *)(h2 + 0x4c), f40, *(u32 *)(h1 + 0x44), func_0200d558, NULL);
            }
        }
    } else {
        func_0200d634(data_0215efa0);
    }
    switch ((*(u32 *)(data_0215efa0 + 0x14) & 2) != 0) {
    case 0:
        func_0200d4e0(data_0215efa0, func_0200d610, -1);
        func_0200d3f4(data_0215efa0, 0, 0, 0, 0, 0, func_0200d624, func_0200d62c);
        break;
    }
    func_0200b178(data_02145c10);
}

void func_0200d790(void *arg0, u32 arg1, u32 arg2) {
    func_0200b988(arg0, data_0215efa0, arg1, arg1 + arg2, 0xffff);
}

void func_0200d7c0(s32 arg0) {
    if (data_0215effc != 0) {
        return;
    }
    data_0215effc = 1;
    func_0200d63c(arg0);
    func_0200bc24();
}

void func_0200dadc(void) {
    if (*(u16 *)(data_0215f000 + 0) != 0) {
        return;
    }
    *(u16 *)(data_0215f000 + 0) = 1;
    func_0200a56c();
    *(u16 *)(data_0215f000 + 0x10) = 0;
    *(u32 *)(data_0215f000 + 4) = 0;
    *(u32 *)(data_0215f000 + 0x14) = 0;
    *(u16 *)(data_0215f000 + 0x36) = 0;
    *(u16 *)(data_0215f000 + 0x34) = 0;
    *(u16 *)(data_0215f000 + 0x3a) = 0;
    *(u16 *)(data_0215f000 + 0x38) = 0;
    while (func_0200a6c0(6, 1) == 0) {}
    func_0200a674(6, (void *)func_0200d868);
}

s32 func_0200db50(u16 *arg0) {
    volatile u8 *g = (volatile u8 *)0x02fffc80;
    u16 v58 = *(u16 *)(g + 0x58);
    u16 v5a = *(u16 *)(g + 0x5a);
    u16 v5e = *(u16 *)(g + 0x5e);
    u16 v60 = *(u16 *)(g + 0x60);
    u8 b5c = g[0x5c];
    u8 b5d = g[0x5d];
    u8 b62 = g[0x62];
    u8 b63 = g[0x63];
    if (v58 == 0 && v5e == 0 && v5a == 0 && v60 == 0) {
        goto clear;
    }
    if (func_0200df4c(arg0, v58, v5a, b5c, b5d, v5e, v60, b62, b63) == 0) {
        return 1;
    }
clear:
    arg0[0] = 0;
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0;
    return 1;
}

void func_0200dbe4(s16 *arg0) {

s32 state;
s32 n;
s32 d;
if(arg0==NULL){ *(u16 *)(data_0215f000+0x34)=0; return; }
state=func_02008128();
d=arg0[2];
if(d!=0){
*(volatile u16 *)0x4000280=0;
*(volatile u32 *)0x4000290=0x10000000;
n=arg0[0];
*(volatile u32 *)0x4000298=d;
*(volatile u32 *)0x400029c=0;
*(s32 *)(data_0215f000+0x1c)=n;
*(s32 *)(data_0215f000+0x20)=d;
while(*(volatile u16 *)0x4000280 & 0x8000){}
*(s32 *)(data_0215f000+0x24)=*(volatile s32 *)0x40002a0;
}else{
*(s32 *)(data_0215f000+0x1c)=0; *(s32 *)(data_0215f000+0x20)=0; *(s32 *)(data_0215f000+0x24)=0;
}
d=arg0[3];
if(d!=0){
*(volatile u16 *)0x4000280=0;
*(volatile u32 *)0x4000290=0x10000000;
n=arg0[1];
*(volatile u32 *)0x4000298=d;
*(volatile u32 *)0x400029c=0;
*(s32 *)(data_0215f000+0x28)=n;
*(s32 *)(data_0215f000+0x2c)=d;
while(*(volatile u16 *)0x4000280 & 0x8000){}
*(s32 *)(data_0215f000+0x30)=*(volatile s32 *)0x40002a0;
}else{
*(s32 *)(data_0215f000+0x28)=0; *(s32 *)(data_0215f000+0x2c)=0; *(s32 *)(data_0215f000+0x30)=0;
}
func_0200813c(state);
*(u16 *)(data_0215f000+0x34)=1;
}

s32 func_0200a6e4(s32,u32,s32);
#pragma opt_propagation off
void func_0200dcd4(u32 arg0,u32 arg1,void *arg2,u32 arg3) {
 u32 i;
 s32 state;
 u8 ok;
 
 ((State0200dcd4 *)data_0215f000)->entries=arg2;
 ((State0200dcd4 *)data_0215f000)->f10=0;
 ((State0200dcd4 *)data_0215f000)->f12=arg1;
 ((State0200dcd4 *)data_0215f000)->count=arg3;
 for(i=0;i<arg3;i++) {
 *(u16 *)(((State0200dcd4 *)data_0215f000)->entries+i*8+4)=0;
 }
 state=func_02008128();
 ok=Send0200dcd4(arg0,arg1);
 if(!ok) {
 func_0200813c(state);
 ((State0200dcd4 *)data_0215f000)->f38 = 2 | ((State0200dcd4 *)data_0215f000)->f38;
 if(((State0200dcd4 *)data_0215f000)->callback)
 (((State0200dcd4 *)data_0215f000)->callback)(1,4,0);
 } else {
 ((State0200dcd4 *)data_0215f000)->f3a = 2 | ((State0200dcd4 *)data_0215f000)->f3a;
 ((State0200dcd4 *)data_0215f000)->f38 = 0xfffd & ((State0200dcd4 *)data_0215f000)->f38;
 func_0200813c(state);
 }
}

void func_0200dddc(TPData0200dddc *result) {
    s32 i;
    s32 curr;
    TPData0200dddc *tp;

    result->validity = 3;
    curr = ((State0200dcd4 *)data_0215f000)->f10;
    if (((State0200dcd4 *)data_0215f000)->f12 == 1 || ((State0200dcd4 *)data_0215f000)->count == 1) {
        *result = ((TPData0200dddc *)((State0200dcd4 *)data_0215f000)->entries)[curr];
        return;
    }

    for (i = 0; i < ((State0200dcd4 *)data_0215f000)->f12 && i < ((State0200dcd4 *)data_0215f000)->count - 1; i++) {
        s32 idx = curr - i;
        if (idx < 0) {
            idx += ((State0200dcd4 *)data_0215f000)->count;
        }
        tp = &((TPData0200dddc *)((State0200dcd4 *)data_0215f000)->entries)[idx];
        if (tp->touch == 0) {
            *result = *tp;
            return;
        }
        if ((result->validity & 1) && !(tp->validity & 1)) {
            result->x = tp->x;
            if (i != 0) {
                result->validity &= 0xfffe;
            }
        }
        if ((result->validity & 2) && !(tp->validity & 2)) {
            result->y = tp->y;
            if (i != 0) {
                result->validity &= 0xfffd;
            }
        }
        if (result->validity == 0) {
            result->touch = 1;
            return;
        }
    }
    result->touch = 1;
}

#pragma opt_propagation on
void func_0200df30(u32 arg0) {
    func_0200dddc((TPData0200dddc *)arg0);
    func_0200e138(arg0, arg0);
}

s32 func_0200df4c(s16 *calibrate, u16 raw_x1, u16 raw_y1, u16 dx1, u16 dy1, u16 raw_x2, u16 raw_y2, u16 dx2, u16 dy2) {
    s32 xDotSize;
    s32 yDotSize;
    s32 x0;
    s32 y0;
    s32 dy;

    if (raw_x1 >= 0x1000 || raw_y1 >= 0x1000 || raw_x2 >= 0x1000 || raw_y2 >= 0x1000) {
        return 1;
    }
    if (dx1 >= 0x100 || dx2 >= 0x100 || dy1 >= 0xc0 || dy2 >= 0xc0) {
        return 1;
    }
    if (dx1 == dx2 || dy1 == dy2 || raw_x1 == raw_x2 || raw_y1 == raw_y2) {
        return 1;
    }

    func_02008128();

    *(volatile u16 *)0x04000280 = 0;
    *(volatile s32 *)0x04000290 = (raw_x1 - raw_x2) << 8;
    *(volatile u64 *)0x04000298 = (u32)(dx1 - dx2);

    dy = dy1 - dy2;

    while (*(volatile u16 *)0x04000280 & 0x8000) {}
    xDotSize = *(volatile s32 *)0x040002a0;

    *(volatile u16 *)0x04000280 = 0;
    *(volatile s32 *)0x04000290 = (raw_y1 - raw_y2) << 8;
    *(volatile u64 *)0x04000298 = (u32)dy;

    if (xDotSize >= 0x8000 || xDotSize < -0x8000) {
        func_0200813c();
        return 1;
    }
    calibrate[2] = (s16)xDotSize;

    x0 = ((((raw_x1 + raw_x2) << 8) - (s32)calibrate[2] * (dx1 + dx2)) << 9) >> 16;
    if (x0 >= 0x8000 || x0 < -0x8000) {
        func_0200813c();
        return 1;
    }
    calibrate[0] = (s16)x0;

    while (*(volatile u16 *)0x04000280 & 0x8000) {}
    yDotSize = *(volatile s32 *)0x040002a0;
    func_0200813c();

    if (yDotSize >= 0x8000 || yDotSize < -0x8000) {
        return 1;
    }
    calibrate[3] = (s16)yDotSize;

    y0 = ((((raw_y1 + raw_y2) << 8) - (s32)calibrate[3] * (dy1 + dy2)) << 9) >> 16;
    if (y0 >= 0x8000 || y0 < -0x8000) {
        return 1;
    }
    calibrate[1] = (s16)y0;

    return 0;
}

