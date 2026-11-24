/* 8 functions from 0x0205C65C to 0x0205D644 (main), found by ds-decomp. */
#include "common.h"

extern void func_0205bc60(void *, u8 *, s32);
extern void func_020dd810(void *, s32, s32);
extern void func_0205aa34(void *, s32);
extern void func_020020f8(void *, void *, void *);
extern void *func_0205bad4(void *);
extern s32 func_020dde4c(u16);
extern void func_02060110(void *, void *, void *, s32, void *);
extern void func_020d4eb8(void *);
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
