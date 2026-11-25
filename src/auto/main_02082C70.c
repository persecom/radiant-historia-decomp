/* 2 functions from 0x02082C70 to 0x02083580 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 field[10]; } MenuDrawParams;
extern const MenuDrawParams data_02140c8c;
extern void func_0208b110(void);
extern void func_02084a70(void *);
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
extern void func_0208c8b8(s32);
extern void func_0208cb1c(s32);
extern void func_0208cbcc(void);
extern void func_020899e8(u8);
extern void func_020a994c(void *);
extern void func_02092190(void);
extern void func_02089878(void);
extern s32 func_02085110(u8);
extern u8 *func_02021f10(s32);
extern void func_0208a3a4(u8);
extern void func_0208fa4c(s32,s32,s32,s32,s32);
extern void func_0208994c(s32);
typedef struct { u8 pad[0x1a]; s16 flags; } MenuFlagView;
typedef struct { u8 bytes[0x1a]; } MenuItem;
extern u16 data_02162908[4];
extern u8 *data_0216010c;
extern u8 *data_02160200;
extern u16 data_021626a8;
extern s32 func_02089ae4(s16,s16,s16,s16);
extern void func_0210d27c(s32);
extern void func_02084b54(void);
extern void func_0208480c(void);

void func_02082c70(void) {
s32 row;
volatile s8 *base=(s8 *)data_0216010c;
s32 j,i;
u32 stride=26;
if(data_02162908[2]){
for(i=0;i<3;i=(s16)(i+1)){
row=i*2;
for(j=0;j<2;j=(s16)(j+1)){
((MenuFlagView *)((u8 *)((MenuItem *)((u8 *)(row*26)+(u32)data_0216010c)+(s32)j)+0x50f8))->flags&=~2;
if(func_02089ae4(i*83+3,j*50+9,36,36)==1){
if(j+row==5){
if(!(*(u32 *)(data_02160200+0x15c)&0x10000000))continue;
if((s8)base[0x50d1]!=i || (s8)base[0x50d2]!=j)func_0210d27c(2);
base[0x50d1]=i;base[0x50d2]=j;
((MenuFlagView *)((u8 *)((MenuItem *)((u8 *)(row*26)+(u32)data_0216010c)+(s32)j)+0x50f8))->flags|=2;
}else{
if((s8)base[0x50d1]!=i || (s8)base[0x50d2]!=j)func_0210d27c(2);
base[0x50d1]=i;base[0x50d2]=j;
((MenuFlagView *)((u8 *)((MenuItem *)((u8 *)(row*26)+(u32)data_0216010c)+(s32)j)+0x50f8))->flags|=2;
}
}
}
}
*(s16 *)(data_0216010c+0x51ae)&=~2;
if(func_02089ae4(232,2,20,20)==1) *(s16 *)(data_0216010c+0x51ae)|=2;
}else{
for(i=0;i<3;i=(s16)(i+1))for(j=0;j<2;j=(s16)(j+1)){
if(*(s16 *)((u8 *)((MenuItem *)base+i*2+j)+0x5112)&2){
*(s16 *)(base+0x50f8+(i*2+j+1)*0x1a)&=~2;
func_02084b54();return;
}
}
if(data_021626a8&0x10){
base[0x50d1]++;
if((s8)base[0x50d2]+(s8)base[0x50d1]*2==5 && !(*(u32 *)(data_02160200+0x15c)&0x10000000))base[0x50d1]=0;
if((s8)base[0x50d1]>=3)base[0x50d1]=0;
func_0210d27c(2);
}else if(data_021626a8&0x20){
base[0x50d1]--;
if((s8)base[0x50d1]<0)base[0x50d1]=2;
if((s8)base[0x50d2]+(s8)base[0x50d1]*2==5 && !(*(u32 *)(data_02160200+0x15c)&0x10000000))base[0x50d1]=1;
func_0210d27c(2);
}
if((data_021626a8&0x40)||(data_021626a8&0x80)){
base[0x50d2]^=1;
if((s8)base[0x50d2]+(s8)base[0x50d1]*2==5 && !(*(u32 *)(data_02160200+0x15c)&0x10000000))base[0x50d2]^=1;
func_0210d27c(2);
}
if(data_021626a8&1){func_02084b54();return;}
if((data_021626a8&2)||(*(s16 *)(data_0216010c+0x51ae)&2)){
func_0208480c();func_0210d27c(5);
*(s16 *)(data_0216010c+0x51ae)|=4;
*(s16 *)(data_0216010c+0x51ae)&=~2;
}
}
}

