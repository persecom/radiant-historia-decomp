/* 3 functions from 0x0208B398 to 0x0208C250 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 v[10]; } Draw_0208bda0;
typedef struct { s16 x,y,z; } Pos_0208bda0;
extern const Draw_0208bda0 data_02140e3c, data_02140d88;
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);

void func_0208bda0(s32 mode, s16 x, s16 y, Pos_0208bda0 pos, s16 arg5) {
s16 py=pos.y;
Draw_0208bda0 a=data_02140e3c;
Draw_0208bda0 b=data_02140d88;
func_020a3bbc(16);
switch(mode) {
case 0:
b.v[1]+=(s16)((1-arg5)*4);
b.v[5]=pos.x+(x*40+20);
b.v[6]=py+((y-1)*28+98);
if(b.v[5]+b.v[8]<=0) return;
if(b.v[5]>=256) return;
func_021098ac(&b); break;
case 1:
a.v[2]-=(s16)((1-arg5)*4);
a.v[5]=pos.x+(x*40+27);
a.v[6]=py+(y*28+98);
if(a.v[5]+a.v[8]<=0) return;
if(a.v[5]>=256) return;
func_021098ac(&a); break;
case 2:
b.v[1]+=(s16)((1-arg5)*4);
b.v[5]=pos.x+(x*40+20);
b.v[6]=py+(y*28+98);
if(b.v[5]+b.v[8]<=0) return;
if(b.v[5]>=256) return;
func_021098ac(&b); break;
}
}
