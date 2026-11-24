/* 10 functions from 0x020AB250 to 0x020AC0B0 (main), found by ds-decomp. */
#include "common.h"
extern u16 data_021626a6;
extern u8 *func_020b4044(void);
extern u8 *func_020b3fd8(void);
extern s32 func_020b3f14(u16);
extern s32 func_020b3908(void);
extern s32 func_020b39f4(s32, u8);
extern void func_020220b0(s32, s32);
extern void func_020b3be8(u16, s32);
extern void func_020b3924(void);
extern void func_0210d27c(s32);
extern void func_020ade30(s32);
extern void func_020aea84(void);
extern void func_020aaf88(s32 *, s32, s32, s32, s32);
extern u16 data_021628f8, data_021628fa[3], data_02162900[4];

extern u16 data_021626a8;
extern u16 data_02162908[4];
extern void func_020ae50c(s32);
extern void *func_020b442c(void);

u8 *func_020b3890(void);
void func_020ade8c(s32);
s32 func_02022068(u16);
void func_0210d490(s32);
s32 func_020ab638(u8 *arg0) {
s32 two=2,one=1;
u8 *a,*p,*q;
s32 dir=0;
s32 amount=0;
a=func_020b3890();
p=func_020b4044();
q=func_020b3fd8();
s32 type=func_020b3f14(*(u16*)(p+4));
if(data_021626a6&16) dir=one;
else if(data_021626a6&32) dir--;
else if(data_021626a8&1) {
*(s32*)(a+0x258)-=*(s32*)p * *(s32*)(q+0x2aac);
if(a[0x263]==2) {
if(type==1) *(s32*)(q+0x2aa8)=dir;
else if(type==2) *(s32*)(q+0x2aa8)=one;
else {func_020ade8c(3);*(s32*)(q+0x2aa8)=two;}
func_020ade8c(4);
*arg0=two;
} else {
func_020220b0(*(u16*)(p+4),*(s32*)(q+0x2aac));
*arg0=dir;
}
func_020ae50c(6);func_020ae50c(7);func_020ade30(18);func_0210d27c(15);
*(s32*)(q+0x2aac)=1;return 2;
} else if(data_021626a8&2) {
*arg0=dir;
*(s32*)(q+0x2aac)=one;
func_020ae50c(6);func_020ae50c(7);func_020ade30(two);func_0210d27c(5);
return two;
}
if(dir!=0 && type==0) {
s32 old=*(s32*)(q+0x2aac);
amount=old;
func_020aaf88(&amount,dir,1,100,0);
s32 money=*(s32*)(a+0x258)-*(s32*)p*amount;
if(old!=amount) {
if(money>=0 && amount+func_02022068(*(u16*)(p+4))<=99) {
func_0210d27c(2);
*(s32*)(q+0x2aac)=amount;
} else { func_0210d490(7); }
} else { func_0210d490(7); }
}
done:
return 0;
}

s32 func_020ab840(u8 *arg0) {
u8 *q;
s32 dir = 0;
u8 *p = func_020b4044();
q = func_020b3fd8();
s32 type = func_020b3f14(*(u16 *)(p+4));
if (data_021626a6 & 0x80) dir = 1;
else if (data_021626a6 & 0x40) dir--;
else if (data_021626a8 & 1) {
*arg0 = 0;
func_020220b0(func_020b39f4(func_020b3908(), (u8)*(s32 *)(q+0x2aa8)),1);
if(type == 3) dir = (u8)(*(s32 *)(q+0x2aa8)-2);
func_020b3be8(*(u16 *)(p+4),dir);
func_020b3924();
func_0210d27c(0x4c);
func_020ae50c(6);
func_020ade30(0x12);
func_020aea84();
return 2;
} else if (data_021626a8 & 2) {
*arg0=0;
func_020220b0(*(u16 *)(p+4),1);
func_020ae50c(6);
func_020ade30(2);
func_020aea84();
func_0210d27c(5);
return 2;
}
if(dir != 0 && type == 3) {
func_020aaf88((s32 *)(q+0x2aa8),dir,2,5,1);
func_020b3be8(*(u16 *)(func_020b4044()+4),(u8)(*(s32 *)(q+0x2aa8)-2));
*(s32 *)func_020b442c()=-1;
func_0210d27c(2);
}
return 0;
}

s32 func_020ab9c8(u8 *arg0) {
    u16 flags = data_021626a8;
    if ((flags & 1) || (flags & 2)) {
        *arg0 = 0;
        func_020ae50c(6);
        return 2;
    }
    return 0;
}

s32 func_020aba08(u8 *arg0) {
    u16 flags = data_021626a8;
    if ((flags & 1) || (flags & 2)) {
        *arg0 = 0;
        func_020ae50c(6);
        return 2;
    }
    return 0;
}

void func_020b41b8(s32);
void func_020b40a4(s32,s32 *,s32 *);
void func_020b4058(s32);
s32 func_020abd0c(u8 *arg0) {
s32 one=1;
u8 *a,*p,*q;
s32 dir=0;
s32 count=0,first=0;
a=func_020b3890();p=func_020b4044();q=func_020b3fd8();
func_020b3f14(*(u16*)(p+4));
if(data_021626a6&16) dir=one;
else if(data_021626a6&32) dir--;
else if(data_021626a8&1) {
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
} else if(data_021626a8&2) {
*arg0=dir;*(s32*)(q+0x2aac)=one;
func_020ae50c(6);func_020ae50c(7);
s32 two=2;
func_020ade30(two);func_0210d27c(5);return two;
}
if(dir!=0) {
s32 old=*(s32*)(q+0x2aac);
func_020aaf88((s32*)(q+0x2aac),dir,1,p[8]+1,0);
if(old!=*(s32*)(q+0x2aac)) func_0210d27c(2);
else func_0210d490(7);
}
return 0;
}

void *func_020abf3c(void) {
    void *p = func_020b442c();
    *(s32 *)p = -1;
    *(s32 *)((u8 *)p + 0x8) = 0;
    *(s32 *)((u8 *)p + 0x4) = 0;
    return p;
}

s32 func_020abf5c(s32 x,s32 y,s32 w,s32 h,s32 mode){
s32 right=x+w,bottom=y+h;
s32 px,py,inside;
if(mode==0 || mode==1 || mode==3){
px=data_02162908[0];py=data_02162908[1];
if(px>=x && px<=right && py>=y && py<=bottom)inside=1;else inside=0;
if(inside==1){
if(mode==0){if(data_02162908[2])return 1;}
else if((data_021628f8&1) && !(data_021628fa[0]&1))return 1;
}
}else if(mode==2){
px=data_02162900[0];py=data_02162900[1];
if(px>=x && px<=right && py>=y && py<=bottom)inside=1;else inside=0;
if(inside==1 && !(data_021628f8&1) && (data_021628fa[0]&1) && data_02162908[2]==0)return 1;
}
return 0;
}

void func_020ac094(s32 *arg0, s32 *arg1) {
    *arg0 = data_02162908[0];
    *arg1 = data_02162908[1];
}

