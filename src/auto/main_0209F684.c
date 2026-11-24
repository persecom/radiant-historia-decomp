/* 2 functions from 0x0209F684 to 0x020A033C (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 v[10]; } Draw_020a00ec;
typedef struct { s16 f0,f1,f2,f3,f4,f5,f6,f7,f8,f9; } Fields_020a00ec;
typedef struct { s16 x,y,z; } Pos_020a00ec;
extern const Draw_020a00ec data_02142ccc, data_02142c18;
void func_020a3bbc(s32);
void func_021098ac(void *);

void func_020a00ec(s32 mode, s16 x, s16 y, Pos_020a00ec pos, s16 arg5) {
s16 py=pos.y;
Draw_020a00ec a=data_02142ccc;
Draw_020a00ec b=data_02142c18;
func_020a3bbc(20);
switch(mode) {
case 0:
b.v[6]=py+((y-1)*28+98);
b.v[5]=pos.x+(x*40+20);
b.v[1]+=(s16)((1-arg5)*4);
if(b.v[5]+b.v[8]<=0) return;
if(b.v[5]>=256) return;
func_021098ac(&b); break;
case 1:
a.v[5]=pos.x+(x*40+27);
a.v[6]=py+(y*28+98);
a.v[2]-=(s16)((1-arg5)*4);
if(a.v[5]+a.v[8]<=0) return;
if(a.v[5]>=256) return;
func_021098ac(&a); break;
case 2:
b.v[5]=pos.x+(x*40+20);
b.v[6]=py+(y*28+98);
b.v[1]+=(s16)((1-arg5)*4);
if(b.v[5]+b.v[8]<=0) return;
if(b.v[5]>=256) return;
func_021098ac(&b); break;
}
}
