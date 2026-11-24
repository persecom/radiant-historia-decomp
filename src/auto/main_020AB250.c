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

