/* 4 functions from 0x0208E000 to 0x0208EEF4 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_0216010c;
void func_0209250c(s16,s32,s16,s16,s16,s16,s16,s16,s16,s16,s16,s16,s16);
void func_020a8810(void *,s32);
u32 func_02085110(u32);
void func_020895a0(s32,s32,s32,s32,s32,s32,s32,s32,s32);
void func_0208d5c0(u8,s16,s16,s32);

typedef struct { s16 f0, f1, f2, f3, f4, f5, f6, f7, f8, f9; } Unk10;
extern const Unk10 data_02141148, data_02141134;
extern const Unk10 data_0214101c,data_021410f8,data_021410e4;
typedef struct { s32 data[4]; } Styles_0208e864;
extern const Styles_0208e864 data_02140ef8;
extern s32 func_02087754(u8);
extern void func_0208db04(u16,s32,s16,s16,s16,s16,s16,s16);
extern void func_020922f8(s32,s32,s32,s32,s16,s16,s16,s16,s16,s16,s16,s16,s16);
void func_020a3bbc(s32);
void func_021098ac(void *);

void func_0208e000(u32 id, s16 x, s16 y, s16 width, s16 z) {
 Unk10 a = data_02141148;
 Unk10 b = data_02141134;
 func_020a3bbc(0x45);
 a.f7=z; a.f1=0; a.f2=0; a.f3=a.f8=15; a.f5=x; a.f6=y;
 func_021098ac(&a);
 a.f1=1; a.f2=0; a.f3=4; a.f8=width-16; a.f5=x+15; a.f6=y;
 func_021098ac(&a);
 a.f1=15; a.f2=0; a.f3=a.f8=1; a.f5=x+width-1; a.f6=y;
 func_021098ac(&a);
 func_020a3bbc(0x44);
 b.f6=y+2; b.f5=x+4; b.f7=z+1;
 switch(id) {
 case 0:b.f1=0;b.f2=0;b.f8=32;b.f3=32;b.f9=13;b.f4=b.f9;break;
 case 1:b.f1=32;b.f2=0;b.f8=32;b.f3=32;b.f9=13;b.f4=b.f9;break;
 case 2:b.f1=0;b.f2=13;b.f8=32;b.f3=32;b.f9=13;b.f4=b.f9;break;
 case 3:b.f1=0;b.f2=26;b.f8=51;b.f3=51;b.f9=13;b.f4=b.f9;break;
 case 4:b.f1=0;b.f2=39;b.f8=40;b.f3=40;b.f9=13;b.f4=b.f9;break;
 }
 func_021098ac(&b);
}

extern void func_020a994c(void *);
extern void func_0208da7c(s16, s32, s16, s16, s16, s16, s16);
extern void func_020a30c4(u16);
extern void func_0208dcc8(s32, s32, s32, s32, s32);
extern void func_0208dea4(s32, s32, s32, s32, s32, s32);
extern const Unk10 data_02141008;
void func_0208e1cc(s32 arg0, s32 arg1) {
    Unk10 a = data_02141008;
    s16 i;
    s32 diff, off, id, cnt;
    u8 limit;

    diff = (u8)(data_0216010c[0x50d7] - data_0216010c[0x50d6]);
    limit = 6;
    if (*(s16 *)(data_0216010c + 0x50d4) < 6) limit = (u8)*(s16 *)(data_0216010c + 0x50d4);
    off = diff * 100;

    for (i = 0; i < 6; i++) {
        if (limit <= i) {
            func_020a994c(data_0216010c + 0x74 + i * (s16)0x50);
            continue;
        }
        id = *(s16 *)(data_0216010c + off + i * 100 + 0x5570);
        cnt = *(u8 *)(data_0216010c + off + i * 100 + 0x5572);
        if (i == data_0216010c[0x50d6]) {
            func_0209250c(0x30, 1, 10, (s16)(i * 19 + 53), 156, 18, 8, 16, 4, 2, 4, 4, 177);
            func_020a8810(*(void **)(data_0216010c + i * (s16)0x50 + 0x70), 19);
            if (cnt >= 10) {
                func_0208da7c(0x3e, (cnt / 10) & 0xff, 0x92, (s16)(i * 19 + 56), 8, 10, 179);
                func_0208da7c(0x3e, (cnt % 10) & 0xff, 0x9a, (s16)(i * 19 + 56), 8, 10, 179);
            } else {
                func_0208da7c(0x3e, cnt & 0xff, 0x96, (s16)(i * 19 + 56), 8, 10, 179);
            }
            func_0208da7c(0x3e, 10, 0x86, (s16)(i * 19 + 56), 8, 10, 179);
        } else {
            func_0209250c(0x2f, 1, 10, (s16)(i * 19 + 53), 156, 18, 8, 16, 4, 2, 4, 4, 177);
            func_020a8810(*(void **)(data_0216010c + i * (s16)0x50 + 0x70), 20);
            if (cnt >= 10) {
                func_0208da7c(0x3d, (cnt / 10) & 0xff, 0x92, (s16)(i * 19 + 56), 8, 10, 179);
                func_0208da7c(0x3d, (cnt % 10) & 0xff, 0x9a, (s16)(i * 19 + 56), 8, 10, 179);
            } else {
                func_0208da7c(0x3d, cnt & 0xff, 0x96, (s16)(i * 19 + 56), 8, 10, 179);
            }
            func_0208da7c(0x3d, 10, 0x86, (s16)(i * 19 + 56), 8, 10, 179);
        }
        func_020895a0((u16)i, 0x1e000, (i * 19 + 55) << 12, 0x5a, 0, (u16)id, 0, 0, 0);
                a.f5 = 11;
        a.f6 = (s16)(i * 19 + 53);
        a.f7 = 179;
        func_020a30c4((u16)id);
        func_021098ac(&a);
    }

    func_0208dcc8(0xaa, 0x35, 0x4e, 0xb1, diff);
    if (arg0 == 10) return;
    if (*(s16 *)(data_0216010c + 0x50d4) < 1) return;
    {
        s32 flags = *(s16 *)(data_0216010c + 0x5382);
        if ((flags & 2) || (flags & 4)) {
            func_0208dea4(arg0, arg1, 0xc5, 0x89, 0x8e, 1);
        } else {
            func_0208dea4(arg0, arg1, 0xc5, 0x89, 0x8e, 0);
        }
    }
}

void func_0208e67c(s16 x, s16 y, s32 unused, s32 selected) {
 s16 i;
 s32 spacing = 19;
 for(i=0;i<data_0216010c[0x614];i++) {
 if(selected == -1) {
 func_0209250c(0x30,1,x,(s16)(y+i*spacing),127,17,8,16,4,2,4,4,177);
 func_020a8810(*(void **)(((u8 (*)[0x50])data_0216010c)[i]+0x70),spacing);
 } else if (i == selected) {
 func_0209250c(0x30,1,x,(s16)(y+i*spacing),127,17,8,16,4,2,4,4,177);
 func_020a8810(*(void **)(((u8 (*)[0x50])data_0216010c)[i]+0x70),spacing);
 } else {
 func_0209250c(0x2f,1,x,(s16)(y+i*spacing),127,17,8,16,4,2,4,4,177);
 func_020a8810(*(void **)(((u8 (*)[0x50])data_0216010c)[i]+0x70),20);
 }
 func_020895a0((u16)i,(x+4)<<12,(y+1+i*spacing)<<12,90,4,(u16)(func_02085110((u8)i)+1),0,0,0);
 func_0208d5c0((u8)func_02085110((u8)(i & 0xff)),x,(s16)(y+2+i*spacing),179);
 }
}

void func_0208e864(s16 x,s16 y,s16 z,s16 arg3,u8 arg4) {
Unk10 top=data_0214101c;
Unk10 icon=data_021410f8;
Unk10 amount=data_021410e4;
Styles_0208e864 styles=data_02140ef8;
u8 count=6;
u8 *base=data_0216010c;
s32 offset=(u8)(base[0x50d7]-base[0x50d6]);
s32 texture, row, depth;
u8 selected;
s16 i;
if(*(s16 *)(base+0x50d4)<6) {
count=(u8)*(s16 *)(base+0x50d4);
{s32 j;for(j=count;j<6;j=(s16)(j+1)) func_020895a0((u16)j,(x+30)<<12,(y+28+j*22)<<12,90,0,0,0,0,0);}
}
for(i=0;i<count;i++) {
selected=0;
if(i==base[0x50d6]) selected=1;
selected+=func_02087754((u8)(i+offset));
func_020a8810(*(void **)(((u8 (*)[80])data_0216010c)[i]+0x70),styles.data[selected]);
row=y+26+i*22;
func_0209250c(selected+47,1,x+8,row,156,18,8,16,4,2,4,4,z);
func_020895a0((u16)i,(x+28)<<12,(y+28+i*22)<<12,90,0,*(u16 *)(data_0216010c+(offset<<6)+(i<<6)+0x4894),0,0,0);
icon.f6=row; icon.f5=x+9;icon.f7=z+1;
switch(*(u8 *)(data_0216010c+(offset<<6)+(i<<6)+0x489c)) {
case 0:func_020a3bbc(70);break;
case 1:func_020a3bbc(71);break;
case 2:func_020a3bbc(72);break;
case 3:func_020a3bbc(86);break;
}
func_021098ac(&icon);
texture=selected+73;func_020a3bbc(texture);
amount.f5=x+128;amount.f6=y+31+i*22;amount.f7=z+1;
func_021098ac(&amount);
func_0208db04((u16)texture,*(s16 *)(data_0216010c+(offset<<6)+(i<<6)+0x4890),x+150,y+31+i*22,7,8,8,z+1);
}
func_0208dcc8((s16)(x+168),(s16)(y+26),94,z,offset);
if(count) {
s32 pressed=0;
if(!func_02087754(data_0216010c[0x50d7])) {
if((*(s16 *)(data_0216010c+0x5382)&2)||(*(s16 *)(data_0216010c+0x5382)&4)) {
pressed=1;
func_0208dea4(arg3,arg4,(s16)(x+195),(s16)(y+110),z,pressed);
}else func_0208dea4(arg3,arg4,(s16)(x+195),(s16)(y+110),z,pressed);
}
}
func_020a8810(*(void **)(data_0216010c+0x2a0),22);
func_020895a0(7,(x+34)<<12,(y+5)<<12,90,4,(u16)(func_02085110(data_0216010c[0x50dc])+1),0,0,0);
if((*(s16 *)(data_0216010c+0x534e)&2)||(*(s16 *)(data_0216010c+0x534e)&4)) {
func_020a3bbc(56);*(s16 *)(data_0216010c+0x534e)&=~4;
}else func_020a3bbc(55);
depth=z+1;
top.f1=0;top.f2=0;top.f5=x+10;top.f6=y+4;top.f7=depth;
func_021098ac(&top);
if((*(s16 *)(data_0216010c+0x531a)&2)||(*(s16 *)(data_0216010c+0x531a)&4)) {
func_020a3bbc(56);*(s16 *)(data_0216010c+0x531a)&=~4;
}else func_020a3bbc(55);
top.f1=16;top.f2=0;top.f5=x+87;top.f6=y+4;top.f7=depth;
func_021098ac(&top);
func_020922f8(8,0,(s16)(x+26),(s16)(y+4),60,15,8,14,4,4,4,4,depth);
}
