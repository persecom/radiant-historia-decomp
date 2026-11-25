/* 11 functions from 0x020ACE8C to 0x020ADE8C (main), found by ds-decomp. */
#include "common.h"
extern void func_020b3be8(u16,u8);
extern u32 func_020b3908(void);
extern u16 func_020b39f4(u32,u8);
extern void func_020b3924(void),func_020aea84(void);
extern void func_020ade30(s32);

extern u8 *func_020b3890(void), *func_020b4044(void), *func_020b3fd8(void);
extern s32 func_020b3f14(u16);
extern void func_020220b0(u16,s32);
extern void func_020b41b8(s32);
extern void func_020b40a4(s32,s32*,s32*);
extern void func_020aaf88(s32*,s32,s32,s32,s32);
extern void func_020b4058(s32);
extern void func_0210d27c(s32);
extern void func_0210d490(s32);

extern u8 *func_020b442c(void);
extern s32 func_020abf5c(s32, s32, s32, s32, s32);
extern void func_020ae50c(s32);
extern void func_020abf3c(void);
extern u8 *func_020b3880(void);
extern void func_02008f74(void *, s32, u32);
extern void func_020adf34(void *);
extern void func_020ae180(void *);
extern void func_020ae560(void *);
extern void func_020adf14(void);
extern void func_020adfb4(void *);
extern void func_020ae35c(void *);
extern void func_020ae6e8(void *);
extern u8 data_02162908[];
u8 *func_020adda8(void);
s32 func_020ad26c(u8 *arg0) {
    u8 *p = func_020b442c();
    if (func_020abf5c(0, 0, 0x100, 0xC0, 1) != 0) {
        *arg0 = 0;
        func_020ae50c(6);
        func_020abf3c();
        return 2;
    }
    if (*(u16 *)(data_02162908 + 4) == 0) {
        *(s32 *)(p + 4) = 0;
        *(s32 *)(p + 8) = 1;
    } else {
        *(s32 *)(p + 8) = 0;
    }
    return 0;
}

s32 func_020ad2dc(u8 *arg0) {
    u8 *p = func_020b442c();
    if (func_020abf5c(0, 0, 0x100, 0xC0, 1) != 0) {
        *arg0 = 0;
        func_020ae50c(6);
        func_020abf3c();
        return 2;
    }
    if (*(u16 *)(data_02162908 + 4) == 0) {
        *(s32 *)(p + 4) = 0;
        *(s32 *)(p + 8) = 1;
    } else {
        *(s32 *)(p + 8) = 0;
    }
    return 0;
}

void func_020ade30(s32);
s32 func_020ada80(u8 *arg0) {
u8 *a,*p,*q,*touch;
s32 dir=0;
s32 count=0,first=0;
a=func_020b3890();p=func_020b4044();q=func_020b3fd8();touch=func_020b442c();
func_020b3f14(*(u16*)(p+4));
if(func_020abf5c(0xa5,0x3b,14,14,0)) {
if(*(s32*)(touch+12)==1) dir=-1;
} else if(func_020abf5c(0xe4,0x3b,14,14,0)) {
if(*(s32*)(touch+12)==1) dir=1;
}
s32 one=1;
if(func_020abf5c(0xc2,0x9c,0x34,16,one)) {
*(s32*)(a+0x258)+=*(s32*)p * *(s32*)(q+0x2aac);
if(*(s32*)(a+0x258)>9999999) *(s32*)(a+0x258)=9999999;
func_020220b0(*(u16*)(p+4),-*(s32*)(q+0x2aac));
func_020ae50c(6);func_020ae50c(7);
func_020b41b8(1);
func_020b40a4(*(s32*)(q+0x2aa4),&count,&first);
if(first>=0) {
if(count-first>=5 && *(s32*)(q+0x2a98)>count-5) *(s32*)(q+0x2a98)=count-5;
if(*(s32*)(q+0x2aa0)>=count) *(s32*)(q+0x2aa0)=count-1;
if(*(s32*)(q+0x2aa0)<first) *(s32*)(q+0x2aa0)=first;
}
s32 zero=0;
func_020aaf88((s32*)(q+0x2aa0),zero,first,count,one);
func_020b4058(*(s32*)(q+0x2aa0));
*(s32*)(q+0x2aac)=one;
*arg0=zero;
func_020ade30(18);func_0210d27c(15);
return 2;
}
if(func_020abf5c(0xea,3,18,18,one)) {
*arg0=0;*(s32*)(q+0x2aac)=one;
func_020ae50c(6);func_020ae50c(7);
s32 two=2;
func_020ade30(two);func_0210d27c(5);return two;
}
if(dir!=0) {
s32 old=*(s32*)(q+0x2aac);
func_020aaf88((s32*)(q+0x2aac),dir,1,p[8]+1,0);
if(old!=*(s32*)(q+0x2aac)) {
if(dir==1) func_020ade30(24); else func_020ade30(25);
func_0210d27c(2);
} else func_0210d490(7);
}
if(*(u16*)(data_02162908+4)==0) {
*(s32*)(touch+8)=1;
*(s32*)(touch+12)=0;
*(s32*)(touch+4)=0;
} else {
*(s32*)(touch+8)=0; *(s32*)(touch+12)=0;
if(*(s32*)(touch+4)==0) *(s32*)(touch+12)=1;
if(*(s32*)(touch+4)>=20 && *(s32*)(touch+4)%2==0) *(s32*)(touch+12)=1;
if(++*(s32*)(touch+4)>100) *(s32*)(touch+4)=20;
}
return 0;
}

u8 *func_020adda8(void) {
    return func_020b3880() + 0x3C;
}

s32 func_020addb8(void) {
    u8 *p = func_020adda8();
    func_02008f74(p, 0, 0x6CC);
    func_020adf34(p);
    func_020ae180(p);
    func_020ae560(p);
    func_020adf14();
    *(s32 *)(p + 0x6C0) = -1;
    *(s32 *)(p + 0x6BC) = -1;
    *(s32 *)(p + 0x6C4) = 0;
    return 1;
}

void func_020ade0c(void) {
    u8 *p = func_020adda8();
    func_020adfb4(p);
    func_020ae35c(p);
    func_020ae6e8(p);
}

void func_020ade30(s32 arg0) {
    u8 *p = func_020adda8();
    *(s32 *)(p + 0x6BC) = arg0;
}

void func_020ade44(s32 arg0) {
    u8 *p = func_020adda8();
    *(s32 *)(p + 0x6BC) = arg0;
    *(s32 *)(p + 0x6C0) = -1;
}

void *func_020ade60(s32 arg0) {
    if (arg0 >= 0 && arg0 < 5) {
        return func_020adda8() + 0xEC + arg0 * 0x10;
    }
    return NULL;
}

