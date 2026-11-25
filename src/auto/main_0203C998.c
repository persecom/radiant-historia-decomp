/* 9 functions from 0x0203C998 to 0x0203D970 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160098[2];
extern u32 data_02155c3c;

extern void *func_0210c594(u32, u32);
extern void func_021167ac(void *, s32);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void func_020020f8(void *, void *, void *);
extern void func_020f4668(void *);

extern u8 *data_02160a74;
extern u8 *data_02160110;
extern u8 *data_02160258;
extern BOOL func_020df03c(s32);
extern void func_020a5ce4(void *);
extern s32 func_020df38c(s32, s32);
extern u16 data_021626a8, data_021626a6;
extern s32 func_02064b84(s32,s32,s32,s32);
extern void func_0210d27c(s32);
extern void func_020de078(void);
extern void func_020df3f4(s32,s32);
extern u8 *data_0216011c;
extern u8 *func_02032254(u16);
extern s32 func_020e84c0(s32);
extern s32 func_020e8410(s32,s32,s32);
extern void func_020e8504(s32);
extern void func_020a9544(void *);
extern void func_020e1ec8(void *,s32);
extern void func_020a8810(void *,s32);
extern void func_020e24bc(void *,s32,s32,s32,s32);
extern void func_020e25fc(s32, s32, s32);
extern void func_020e26f0(s32, s32, s32);
extern void func_020d91bc(void);
extern void func_020da0c8(s32);
extern void func_020e86c0(s32);
extern void func_020df0c0(void);
static inline void update_selection_c998(u8 *p, s32 zero) {
 u8 *left,*right;
 if(*(s16 *)(data_02160110+0xde)<*(s16 *)(data_02160110+0xe2))
 *(s16 *)(data_02160110+0xde)=*(s16 *)(data_02160110+0xe2);
 left=func_02032254(*(s16 *)(data_02160110+0xb6)-1);
 right=func_02032254(*(s16 *)(data_02160110+0xde)+1);
 data_02160a74[0x1c3]=zero;
 if(*(u32 *)left==*(u32 *)right) {
 data_02160a74[0x1c3]=1;
 func_020a8810(*(void **)(p+4),23);
 }
 if(data_0216011c && *(u16 *)(data_0216011c+0x2a) && *(u16 *)(data_0216011c+0x38)) {
 u8 *obj=*(u8 **)func_02032254(*(s16 *)(data_02160110+0xde)+1);
 s32 selector=*(s8 *)(data_02160a74+0x1ca);
 data_02160a74[0x1c3]=zero;
 if(selector<=-1) {
 if(**(u8 **)(obj+0x118)!=1) {
 data_02160a74[0x1c3]=1;
 func_020a8810(*(void **)(p+4),23);
 }else func_020a8810(*(void **)(p+4),20);
 }else {
 if(*(u16 *)(obj+0x90)!=data_02160a74[0x1ca]) {
 data_02160a74[0x1c3]=1;
 func_020a8810(*(void **)(p+4),23);
 }else func_020a8810(*(void **)(p+4),20);
 }
 }else *(u16 *)(data_02160a74+0x1b8)|=0x40;
 func_020e86c0(14);
}

void func_0203c998(void) {
 u8 *p=*(u8 **)(data_02160a74+0x94);
 s32 zero=0;
 s32 one,eight;
 u8 *left,*right;
 *(u16 *)(data_02160110+0xde)=zero;
 data_02160110[0xdc]|=1;
 *(u32 *)(data_02160a74+0x58)|=0x2000;
 *(u8 **)(data_02160110+0xe4)=func_02032254(*(s16 *)(data_02160110+0xb6)-1);
 *(u32 *)(data_02160a74+0x58)|=0x100000;
 { s32 mode=func_020e84c0(zero);
 one=1;
 func_020df3f4(mode,one); }
 eight=8;
 *(u16 *)(data_02160110+0xec)=zero;
 data_02160a74[0x1c3]=zero;
 func_020e25fc(eight,eight,zero);
 func_020a9544(**(void ***)(data_02160a74+0x80));
 func_020e1ec8(*(void **)(data_02160a74+0x80),4);
 if(func_020e8410(zero,2,zero)) {
 *(u32 *)(data_02160a74+0x58)|=0x4000;
 func_020e25fc(eight,eight,one);
 } else {
 *(u32 *)(data_02160a74+0x58)&=~0x4000;
 func_020e8504(zero);
 }
 func_020a5ce4(p);
 func_020a9544(*(void **)p);
 func_020e1ec8(p,14);
 func_020a8810(*(void **)(p+4),20);
 func_020e24bc(p,62,66,11,zero);
 if(*(s16 *)(data_02160110+0xde)<*(s16 *)(data_02160110+0xe2))
 *(s16 *)(data_02160110+0xde)=*(s16 *)(data_02160110+0xe2);
 left=func_02032254(*(s16 *)(data_02160110+0xb6)-1);
 right=func_02032254(*(s16 *)(data_02160110+0xde)+1);
 data_02160a74[0x1c3]=zero;
 if(*(u32 *)left==*(u32 *)right) {
 data_02160a74[0x1c3]=1;
 func_020a8810(*(void **)(p+4),23);
 }
 if(data_0216011c && *(u16 *)(data_0216011c+0x2a) && *(u16 *)(data_0216011c+0x38)) {
 s32 selector;
 u8 *obj=*(u8 **)func_02032254(*(s16 *)(data_02160110+0xde)+1);
 selector=*(s8 *)(data_02160a74+0x1ca);
 data_02160a74[0x1c3]=zero;
 if(selector<=-1) {
 if(**(u8 **)(obj+0x118)!=1) {
 data_02160a74[0x1c3]=1;
 func_020a8810(*(void **)(p+4),23);
 }else func_020a8810(*(void **)(p+4),20);
 }else {
 if(*(u16 *)(obj+0x90)!=data_02160a74[0x1ca]) {
 data_02160a74[0x1c3]=1;
 func_020a8810(*(void **)(p+4),23);
 }else func_020a8810(*(void **)(p+4),20);
 }
 }else *(u16 *)(data_02160a74+0x1b8)|=0x40;
 func_020e86c0(14);
}

void func_0203cc60(void) {
u8 *screen=*(u8 **)(data_02160a74+0x94);
s32 zero=0, one=1;
s32 changed=zero;
*(u32 *)(data_02160a74+0x58)|=0x80000;
if(*(s16 *)(data_02160110+0xde)<*(s16 *)(data_02160110+0xe2))
*(s16 *)(data_02160110+0xde)=*(s16 *)(data_02160110+0xe2);
if(!func_020df38c(3,0x384000) && ((data_021626a8&2)||func_02064b84(4,0x80,0x12,0x12)) && (*(u16 *)(data_02160a74+0x1b8)&0x40)) {
func_020df38c(1,1); func_0210d27c(5); func_020e86c0(15);
}
if(!func_020df38c(3,0x380001) && ((data_021626a8&0x400)||func_02064b84(0xcf,4,0x2d,0xe)) && !data_0216011c) {
u8 *p; u32 bits;
func_020df38c(one,0x4000); *(u32 *)(data_02160a74+0x19c)=0x4000;
p=data_02160a74; bits=*(u32 *)(p+0x58)&0x4000;
if(bits) {*(u32 *)(p+0x58)&=~0x4000; func_020e8410(one,2,0);}
else if(bits==0) {*(u32 *)(p+0x58)|=0x4000; func_020e8410(one,2,one);}
changed=1; func_0210d27c(1);
}
if(!func_020df38c(3,0x304001) && ((data_021626a6&0x40)||func_02064b84(0xb,0x2f,0x94,0xe))) {
func_020df38c(1,0x80000); *(u32 *)(data_02160a74+0x19c)=0x80000; func_0210d27c(0x1f);
(*(s16 *)(data_02160110+0xde))--;
if(*(s16 *)(data_02160110+0xde)<*(s16 *)(data_02160110+0xe2)) *(s16 *)(data_02160110+0xde)=8;
{
u8 *left=func_02032254((u16)(*(s16 *)(data_02160110+0xb6)-1));
u8 *right=func_02032254((u16)(*(s16 *)(data_02160110+0xde)+1));
u8 *obj=*(u8 **)right;
s32 selector=*(s8 *)(data_02160a74+0x1ca);
if(selector==0) {
data_02160a74[0x1c3]=0;
if(*(u32 *)left==*(u32 *)right) {
data_02160a74[0x1c3]=one; func_020a8810(*(void **)(screen+4),23);
}else func_020a8810(*(void **)(screen+4),20);
}else {
if(selector<=-1) {
data_02160a74[0x1c3]=zero;
if(**(u8 **)(obj+0x118)!=1) {
data_02160a74[0x1c3]=one; func_020a8810(*(void **)(screen+4),23);
}else func_020a8810(*(void **)(screen+4),20);
}else {
data_02160a74[0x1c3]=zero;
if(*(u16 *)(obj+0x90)!=data_02160a74[0x1ca]) {
data_02160a74[0x1c3]=one; func_020a8810(*(void **)(screen+4),23);
}else func_020a8810(*(void **)(screen+4),20);
}
}
}
}
if(!func_020df38c(3,0x184001) && ((data_021626a6&0x80)||func_02064b84(0xb,0x53,0x94,0xe))) {
func_020df38c(1,0x200000); *(u32 *)(data_02160a74+0x19c)=0x200000; func_0210d27c(0x1f);
(*(s16 *)(data_02160110+0xde))++;
if(*(s16 *)(data_02160110+0xde)>8) *(s16 *)(data_02160110+0xde)=*(s16 *)(data_02160110+0xe2);
{
u8 *left=func_02032254((u16)(*(s16 *)(data_02160110+0xb6)-1));
u8 *right=func_02032254((u16)(*(s16 *)(data_02160110+0xde)+1));
u8 *obj=*(u8 **)right;
s32 selector=*(s8 *)(data_02160a74+0x1ca);
if(selector==0) {
data_02160a74[0x1c3]=0;
if(*(u32 *)left==*(u32 *)right) {
data_02160a74[0x1c3]=one; func_020a8810(*(void **)(screen+4),23);
}else func_020a8810(*(void **)(screen+4),20);
}else {
if(selector<=-1) {
data_02160a74[0x1c3]=zero;
if(**(u8 **)(obj+0x118)!=1) {
data_02160a74[0x1c3]=one; func_020a8810(*(void **)(screen+4),23);
}else func_020a8810(*(void **)(screen+4),20);
}else {
data_02160a74[0x1c3]=zero;
if(*(u16 *)(obj+0x90)!=data_02160a74[0x1ca]) {
data_02160a74[0x1c3]=one; func_020a8810(*(void **)(screen+4),23);
}else func_020a8810(*(void **)(screen+4),20);
}
}
}
}
if(!func_020df38c(3,0x384001) && ((data_021626a8&1)||func_02064b84(0xb,0x41,0x94,0xe))) {
if(data_02160a74[0x1c3]==0) {
u8 *left,*right,*obj; s32 selector;
func_020df38c(1,0x100000); *(u32 *)(data_02160a74+0x19c)=0x100000;
left=func_02032254((u16)(*(s16 *)(data_02160110+0xb6)-1));
right=func_02032254((u16)(*(s16 *)(data_02160110+0xde)+1));
obj=*(u8 **)right;
func_0210d27c(0x77);
selector=*(s8 *)(data_02160a74+0x1ca);
if(selector==0) {
if(*(u32 *)left!=*(u32 *)right) {func_020e24bc(screen,0x3e,0x43,0xb,zero);func_020e86c0(16);}
}else if(selector<=-1) {
data_02160a74[0x1c3]=zero;
if(**(u8 **)(obj+0x118)==1) {func_020e24bc(screen,0x3e,0x43,0xb,zero);func_020e86c0(16);}
}else if(*(u16 *)(obj+0x90)==(u8)selector) {func_020e24bc(screen,0x3e,0x43,0xb,zero);func_020e86c0(16);}
}else func_0210d27c(7);
}
if(changed) func_020e8504(8);
}

