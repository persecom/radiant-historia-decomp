/* 4 functions from 0x0208E000 to 0x0208EEF4 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_0216010c;
void func_0209250c(s32,s32,s32,s16,s32,s32,s32,s32,s32,s32,s32,s32,s32);
void func_020a8810(void *,s32);
u32 func_02085110(u32);
void func_020895a0(s32,s32,s32,s32,s32,s32,s32,s32,s32);
void func_0208d5c0(u8,s16,s16,s32);

typedef struct { s16 f0, f1, f2, f3, f4, f5, f6, f7, f8, f9; } Unk10;
extern const Unk10 data_02141148, data_02141134;
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

extern u8 *data_0216010c;
void func_0209250c(s32,s32,s32,s16,s32,s32,s32,s32,s32,s32,s32,s32,s32);
void func_020a8810(void *,s32);
u32 func_02085110(u32);
void func_020895a0(s32,s32,s32,s32,s32,s32,s32,s32,s32);
void func_0208d5c0(u8,s16,s16,s32);
