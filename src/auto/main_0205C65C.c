/* 8 functions from 0x0205C65C to 0x0205D644 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160a6c;

extern void func_0205bc60(void *, u8 *, s32);
extern void func_020dd810(void *, s32, s32);
extern void func_0205aa34(void *, s32);
extern void func_020020f8(void *, void *, void *);
extern void *func_0205bad4(void *);
extern s32 func_020dde4c(u16);
extern void func_02060110(void *, void *, void *, s32, void *);
extern void func_020d4eb8(void *);
void func_0205c65c(u8 *p, s32 state) {
u8 *n; s32 ready;
switch(state){
case 910:
(*(volatile u16 *)(p+0x10))++;
if(*(volatile u16 *)(p+0x10)>20){*(volatile u16 *)(p+0x10)=0; *(s32 *)(p+0x24)=911;} break;
case 911:
*(u16 *)(p+0x1e)&=0xfff7;
n=*(u8 **)(data_02160a6c+0xb8); ready=1;
while(n){if(n && *(s32 *)(n+0x1c0)==1) ready=0; n=*(u8 **)(n+0x174);}
if(ready) *(s32 *)(p+0x24)=299;
break;
case 912: *(s32 *)(p+0x24)=299; break;
case 913:
ready=1; n=func_0205bad4(p);
while(n){if(*(u16 *)(n+0x10)!=0)ready=0; n=*(u8 **)(n+0x18);}
if(ready){*(u16 *)(p+0x1e)&=0xffef; *(s32 *)(p+0x24)=300;}
break;
}
}

void func_0205ca14(u8 *arg0) {
 u8 *p=*(u8 **)(arg0+0x128);
 u8 *n;
 u8 *q=*(u8 **)(p+8);
 s32 base, i, count;
 n=func_0205bad4(p);
 base=*(u16 *)(arg0+0x90)*10; i=0; count=0;
 s32 zero=0, one=1;
 while(n) {
 if(func_020dde4c((u16)(i+0x276+base)) == 0) {
 u8 *v=*(u8 **)n;
 if(**(u8 **)(v+0x118)==1) {
 if (!(*(u32 *)(q+8)&1)) func_02060110(v,q,n,one,p);
 else func_02060110(v,q,n,zero,p);
 }
 } else {count++;}
 n=*(u8 **)(n+0x18); i++;
 }
 if(count) return;
 *(u32 *)(p+0x14)=0;
 *(u16 *)(p+0x1e)|=0x100;
 func_020d4eb8(arg0);
}

void func_0205cafc(s32 *arg0) {
u8 count = 0;
u8 *p = *(u8 **)((u8 *)arg0 + 0x128);
s32 dy;
func_0205bc60(arg0, &count, 20);
dy = (arg0[10] - arg0[1]) >> 12;
if (dy < 0) dy = -dy;
if (dy < 10) { arg0[13] = 0; count++; }
if (count >= 2) {
s32 zero = 0;
arg0[0] = arg0[6]; arg0[1] = arg0[7]; arg0[2] = arg0[8];
arg0[12] = zero; arg0[13] = zero; arg0[14] = zero;
if (((u8 *)arg0)[0x104]) func_020dd810(arg0,zero,zero);
func_0205aa34(arg0,2);
*(s32 *)(p+0x24)=0;
} else func_020020f8(arg0, arg0 + 12, arg0);
}

extern s32 func_0205bcb0(void *, u16);
extern void *func_020c17bc(void *, u16, u16, s32, s32);
extern void func_020d2bf0(void *, void *, s32, s32);
extern void func_0205baf8(void *);
void func_0205cbc0(u8 *p) {
u8 *r;
u8 *q=*(u8 **)(p+0x128);
r=*(u8 **)q;
u8 *v=*(u8 **)(r+0x118);
s32 flags;
if((v[0x64]&2)||(*(u32 *)(v+0x8c)&0x20)) {
*(u32 *)(r+0x1c0)=1;
*(u32 *)(r+0xec)=*(u32 *)r;*(u32 *)(r+0xf0)=*(u32 *)(r+4);*(u32 *)(r+0xf4)=*(u32 *)(r+8);
}
flags=func_0205bcb0(p,(u16)*(u32 *)(q+0x30));
if((flags&1)&&!*(s16 *)(q+0x1c)) {
s32 pos[3];u8 *obj;s32 zero=0;
*(s16 *)(q+0x1c)=1;
pos[0]=*(s32 *)p+0x1e000;pos[1]=*(s32 *)(p+4)+0x1e000;pos[2]=*(s32 *)(p+8);
obj=func_020c17bc(pos,(u16)*(u32 *)(q+0x34),(u16)(*(u16 *)(p+0x90)+600),14,0);
*(u32 *)(obj+0x78)=64;
pos[0]=*(s32 *)(r+0x1a8);pos[1]=*(s32 *)(r+0x1ac)+0x10000;pos[2]=*(s32 *)(r+0x1b0);
func_020d2bf0(obj,pos,zero,zero);func_0205baf8(obj);
if(*(u16 *)(p+0x8e)!=32) *(u32 *)(obj+0x80)&=~2;
q[0xa6]=0;
}
if(flags&2) {if(*(u16 *)(p+0x8e)==32)func_0210d27c(39);func_020d4eb8(p);}
if(*(u16 *)(p+0x8e)!=91)return;
(*(volatile s8 *)(q+0xa6))++;
if(*(s8 *)(q+0xa6)==1) {func_0210d27c(98);return;}
if(*(s8 *)(q+0xa6)>5) q[0xa6]=0;
}

