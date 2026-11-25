/* 3 functions from 0x0208EEF4 to 0x0208FA4C (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s16 data[10];
} Unk_0208f7a0_10;

extern const Unk_0208f7a0_10 data_021410bc, data_021410a8, data_02141094;
typedef struct { s32 data[4]; } Unk_0208eef4_4;
typedef struct { u8 data[80]; } Unk_0208eef4_80;
extern const Unk_0208eef4_4 data_02140f08;
extern const Unk_0208f7a0_10 data_02141044;
extern const Unk_0208f7a0_10 data_02141030;
extern u8 *data_0216010c;
extern void func_02092814(s32, s32, s16, s16, s16, s16, s16);
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
extern void func_0208da7c(s16, s32, s16, s16, s16, s16, s16);
extern void func_020922f8(s32, s32, s32, s32, s16, s16, s16, s16, s16, s16, s16, s16, s16);

extern const Unk_0208f7a0_10 data_0214106c;
extern const Unk_0208f7a0_10 data_02141058;
extern void func_02081f08(void *, u8);
extern void func_020a8810(void *, s32);
extern void func_020895a0(s32, s32, s32, s32, s32, u16, s32, s32, s32);
extern void func_020a30c4(u16);
extern void func_0209250c(s16,s32,s16,s16,s16,s16,s16,s16,s16,s16,s16,s16,s16);
extern void func_0208db04(u16,s32,s16,s16,s16,s16,s16,s16);
extern void func_0208dcc8(s16,s16,s32,s16,u8);
extern s32 func_02085110(u8);
#pragma opt_lifetimes off
void func_0208eef4(s16 x,s16 y,s16 z) {
Unk_0208f7a0_10 top=data_021410bc;
Unk_0208f7a0_10 icon=data_021410a8;
Unk_0208f7a0_10 amount=data_02141094;
Unk_0208eef4_4 styles=data_02140f08;
u8 count=6;
u8 *base=data_0216010c;
u8 offset=base[0x50d7]-base[0x50d6];
u32 row;
s32 selected;
s16 i;
if(*(s16 *)(base+0x50d4)<6) {
count=(u8)*(s16 *)(base+0x50d4);
{s32 j;for(j=count;j<6;j=(s16)(j+1)) func_020895a0((u16)j,(x+30)<<12,(y+28+j*22)<<12,90,0,0,0,0,0);}
}
for(i=0;i<count;i++) {
selected=0;
if(i==base[0x50d6]) selected=1;
func_020a8810(*(void **)(((Unk_0208eef4_80 *)data_0216010c)[i].data+0x70),styles.data[selected]);
row=y+26+i*22;
func_0209250c(selected+47,1,x+8,row,156,18,8,16,4,2,4,4,z);
func_020895a0((u16)i,(x+28)<<12,(y+28+i*22)<<12,90,0,*(u16 *)(data_0216010c+(offset<<6)+(i<<6)+0x4894),0,0,0);
icon.data[6]=row; icon.data[5]=x+9;icon.data[7]=z+1;
switch(*(u8 *)(data_0216010c+(offset<<6)+(i<<6)+0x489c)) {
case 0:func_020a3bbc(70);break;
case 1:func_020a3bbc(71);break;
case 2:func_020a3bbc(72);break;
case 3:func_020a3bbc(86);break;
}
func_021098ac(&icon);
if(*(s8 *)(data_0216010c+(offset<<6)+(i<<6)+0x488e)<2) {
{s32 texture=selected+73;func_020a3bbc(texture);
amount.data[5]=x+128;amount.data[6]=y+31+i*22;amount.data[7]=z+1;
func_021098ac(&amount);
func_0208db04((u16)texture,*(s16 *)(data_0216010c+(offset<<6)+(i<<6)+0x4890),x+150,y+31+i*22,7,8,8,z+1);
}
}
}
func_0208dcc8(x+168,y+26,94,z,offset);
func_020a8810(*(void **)(data_0216010c+0x2a0),22);
func_020895a0(7,(x+34)<<12,(y+5)<<12,90,4,(u16)(func_02085110(data_0216010c[0x50dc])+1),0,0,0);
if((*(s16 *)(data_0216010c+0x534e)&2)||(*(s16 *)(data_0216010c+0x534e)&4)) {
func_020a3bbc(56);*(s16 *)(data_0216010c+0x534e)&=~4;
}else func_020a3bbc(55);
top.data[1]=0;top.data[2]=0;top.data[5]=x+10;top.data[6]=y+4;top.data[7]=z+1;
func_021098ac(&top);
if((*(s16 *)(data_0216010c+0x531a)&2)||(*(s16 *)(data_0216010c+0x531a)&4)) {
func_020a3bbc(56);*(s16 *)(data_0216010c+0x531a)&=~4;
}else func_020a3bbc(55);
top.data[1]=16;top.data[2]=0;top.data[5]=x+87;top.data[6]=y+4;top.data[7]=z+1;
func_021098ac(&top);
func_020922f8(8,0,(s16)(x+26),(s16)(y+4),60,15,8,14,4,4,4,4,z+1);
}
#pragma opt_lifetimes reset
void func_0208f4e4(s16 arg0, s16 arg1, s16 arg2, s32 arg3) {
    u8 buf[0x64];
    Unk_0208f7a0_10 s1 = data_0214106c;
    Unk_0208f7a0_10 s2 = data_02141058;

    func_02081f08(buf, (u8)arg3);
    func_02092814(6, 2, arg0, arg1, 0xc8, 0x20, arg2);
    func_020a8810(*(void **)(data_0216010c + 0x2a0), 0x16);
    func_020895a0(7, (arg0 + 0x11) << 12, (arg1 + 4) << 12, 0x5a, 0, *(u16 *)(buf + 0), 0, 0, 0);

    s1.data[5] = arg0;
    s1.data[6] = arg1 + 3;
    s1.data[7] = arg2 + 1;
    func_020a30c4(*(u16 *)(buf + 0));
    func_021098ac(&s1);

    if (buf[2] >= 10) {
        func_0208da7c(0x3d, (u8)(buf[2] / 10), arg0 + 0x5c, arg1 + 0x13, 8, 10, arg2 + 2);
        func_0208da7c(0x3d, (u8)(buf[2] % 10), arg0 + 0x64, arg1 + 0x13, 8, 10, arg2 + 2);
    } else {
        func_0208da7c(0x3d, buf[2], arg0 + 0x60, arg1 + 0x13, 8, 10, arg2 + 2);
    }
    func_0208da7c(0x3d, 10, arg0 + 0x52, arg1 + 0x12, 8, 10, arg2 + 2);

    func_020a3bbc(0x55);
    s2.data[5] = arg0 + 0x2d;
    s2.data[6] = arg1 + 0x13;
    s2.data[7] = arg2 + 1;
    func_021098ac(&s2);
    func_020922f8(8, 0, (s16)(arg0 + 0x4f), (s16)(arg1 + 0x13), 0x1e, 0xb, 8, 0xe, 4, 4, 4, 4, arg2 + 1);
}

void func_0208f7a0(s16 arg0, s16 arg1, s16 arg2, s32 arg3) {
    Unk_0208f7a0_10 s1 = data_02141044;
    Unk_0208f7a0_10 s2 = data_02141030;

    func_02092814(6, 2, arg0, arg1, 0xc8, 0x20, arg2);
    s1.data[5] = arg0;
    s1.data[6] = arg1 + 3;
    s1.data[7] = arg2 + 1;

    switch (*(u8 *)(data_0216010c + arg3 * 0x40 + 0x489c)) {
    case 0:
        func_020a3bbc(0x46);
        break;
    case 1:
        func_020a3bbc(0x47);
        break;
    case 2:
        func_020a3bbc(0x48);
        break;
    case 3:
        func_020a3bbc(0x56);
        break;
    }
    func_021098ac(&s1);

    if (*(s16 *)(data_0216010c + arg3 * 0x40 + 0x4890) >= 10) {
        func_0208da7c(0x3d, (u8)(*(s16 *)(data_0216010c + arg3 * 0x40 + 0x4890) / 10),
                      arg0 + 0x56, arg1 + 0x13, 8, 10, arg2 + 2);
        func_0208da7c(0x3d, (u8)(*(s16 *)(data_0216010c + arg3 * 0x40 + 0x4890) % 10),
                      arg0 + 0x5e, arg1 + 0x13, 8, 10, arg2 + 2);
    } else {
        func_0208da7c(0x3d, (u8)*(s16 *)(data_0216010c + arg3 * 0x40 + 0x4890),
                      arg0 + 0x5a, arg1 + 0x13, 8, 10, arg2 + 2);
    }

    func_020a3bbc(0x55);
    s2.data[5] = arg0 + 0x36;
    s2.data[6] = arg1 + 0x13;
    s2.data[7] = arg2 + 1;
    func_021098ac(&s2);
    func_020922f8(8, 0, (s16)(arg0 + 0x4f), (s16)(arg1 + 0x13), 0x1e, 0xb, 8, 0xe, 4, 4, 4, 4, arg2 + 1);
}
