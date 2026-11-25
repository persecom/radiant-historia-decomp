/* 2 functions from 0x02082C70 to 0x02083580 (main), found by ds-decomp. */
#include "common.h"
extern u16 data_02162908[4];
extern u8 *data_0216010c;
extern u8 *data_02160200;
extern u16 data_021626a8;
extern s32 func_02089ae4(s16,s16,s16,s16);
extern void func_0210d27c(s32);
extern void func_02084b54(void);
extern void func_0208480c(void);

void func_02082c70(void) {
s8 *base=(s8 *)data_0216010c;
s16 i,j;
if(data_02162908[2]){
for(i=0;i<3;i++){
for(j=0;j<2;j++){
*(s16 *)((u8 *)(i*2*0x1a+(u32)data_0216010c)+j*0x1a+0x50f8+0x1a)&=~2;
if(func_02089ae4(i*83+3,j*50+9,36,36)==1){
if(i*2+j==5){
if(!(*(u32 *)(data_02160200+0x15c)&0x10000000))continue;
if((s8)base[0x50d1]!=i || (s8)base[0x50d2]!=j)func_0210d27c(2);
}else{
if((s8)base[0x50d1]!=i || (s8)base[0x50d2]!=j)func_0210d27c(2);
}
base[0x50d1]=i;base[0x50d2]=j;
*(s16 *)((u8 *)(i*2*0x1a+(u32)data_0216010c)+j*0x1a+0x50f8+0x1a)|=2;
}
}
}
*(s16 *)(data_0216010c+0x51ae)&=~2;
if(func_02089ae4(232,2,20,20)==1) *(s16 *)(data_0216010c+0x51ae)|=2;
}else{
for(i=0;i<3;i++)for(j=0;j<2;j++){
if(*(s16 *)(base+i*2*0x1a+j*0x1a+0x5112)&2){
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

