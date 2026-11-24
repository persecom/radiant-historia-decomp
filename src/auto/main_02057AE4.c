/* 4 functions from 0x02057AE4 to 0x02058A08 (main), found by ds-decomp. */
#include "common.h"
extern u8 *func_020bd438(u32);
extern u8 *func_02021f10(u8);
extern void func_02057a18(u16,u16,s32);
extern void *func_020f4d40(s32);
extern f32 func_0201f884(s32),func_0201f8cc(u32);
extern f32 func_020201f4(f32,f32),func_02020888(f32,f32),func_02020604(f32,f32);
extern s32 func_0201ff0c(f32);
void *func_0205817c(u32);


extern u8 *data_021600ac;
void func_02057f5c(void) {
u8 *bar,*widget;
s32 one=1;
u8 *actor;
u32 i;
s32 idx,base;
f32 current,ratio,origin;
s32 other=1;
for(i=0;i<3;i=(u8)(i+1)) {
u8 *slot=func_020bd438(i);
if(!slot || !(*(u16 *)slot&1))continue;
actor=func_02021f10(slot[2]);
base=i*100;
func_02057a18((u16)(base+202),*(u16 *)(actor+16),one);
func_02057a18((u16)(base+203),*(u16 *)(actor+20),one);
idx=i*23;
widget=func_0205817c((u16)(idx+7));
if(widget && actor) {
bar=func_020f4d40(i+1);
if(!*(u16 *)(actor+16))*(s32 *)(widget+32)=0;
else {
current=func_0201f8cc(*(u16 *)(actor+16));
ratio=func_02020888(current,func_0201f884(*(u16 *)(actor+18)+*(s16 *)(actor+36)));
*(s32 *)(bar+32)=func_0201ff0c(func_020201f4(4096.0f,ratio));
origin=func_0201f884(i*81+52);
*(s32 *)(widget+8)=func_0201ff0c(func_02020604(origin,func_02020888(func_02020604(32.0f,func_020201f4(32.0f,ratio)),2.0f)));
*(s32 *)(bar+40)=one;*(s32 *)(widget+32)=one;
}
}
widget=func_0205817c((u16)(idx+8));
if(widget && actor) {
bar=func_020f4d40(i+4);
if(!*(u16 *)(actor+20))*(s32 *)(widget+32)=0;
else {
current=func_0201f8cc(*(u16 *)(actor+20));
ratio=func_02020888(current,func_0201f884(*(u16 *)(actor+22)+*(s16 *)(actor+38)));
*(s32 *)(bar+32)=func_0201ff0c(func_020201f4(4096.0f,ratio));
origin=func_0201f884(i*81+52);
*(s32 *)(widget+8)=func_0201ff0c(func_02020604(origin,func_02020888(func_02020604(32.0f,func_020201f4(32.0f,ratio)),2.0f)));
*(s32 *)(bar+40)=other;*(s32 *)(widget+32)=other;
}
}
}
}

void *func_0205817c(u32 arg0) {
    u8 *root = data_021600ac;
    u8 *node = *(u8 **)(root + 0x8c4);
    while (node != NULL) {
        if (*(u32 *)(node + 0x48) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x3c);
    }
    return NULL;
}
