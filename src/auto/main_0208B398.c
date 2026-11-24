/* 3 functions from 0x0208B398 to 0x0208C250 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 v[10]; } Draw_0208bda0;
typedef struct { s16 x,y,z; } Pos_0208bda0;
extern const Draw_0208bda0 data_02140e3c, data_02140d88;
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
extern const Draw_0208bda0 data_02140d74;
extern u8 *data_021600b0;
typedef struct { s32 mode; s16 counter; s8 flags; u8 pad[5]; } Entry_0208bff0;
typedef struct { u8 pad[0x200]; Entry_0208bff0 entries[2]; } State_0208bff0;
extern void func_020922bc(s32,s32,s32,s32,s32,s32,s32,s32);

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

void func_0208bff0(s32 index,s32 start,s32 end,s32 y) {
Draw_0208bda0 d=data_02140d74;
u8 *p=data_021600b0;
s16 x;
*(s8*)(p+0x206+index*12)&=~1;
x=start+(end-start)* *(s16*)(p+0x204+index*12)/7;
if(*(s32*)(p+0x200+index*12)==1) {
if(*(s16*)(p+0x204+index*12)<7) ++*(s16*)(p+0x204+index*12);
else *(s8*)(p+0x206+index*12)|=1;
} else if(*(s32*)(p+0x200+index*12)==0) {
if(*(s16*)(p+0x204+index*12)>0) --*(s16*)(p+0x204+index*12);
}
s8 *flags=(s8*)(p+0x206);
if((flags[index*12]&2)||(flags[index*12]&4)) func_020922bc(34,x,y,86,16,32,16,55);
else func_020922bc(33,x,y,86,16,32,16,55);
if((flags[index*12]&2)||(flags[index*12]&4)) func_020a3bbc(36); else func_020a3bbc(35);
if(index==0) {d.v[2]=0;d.v[1]=0;}
else if(index==1) {d.v[1]=12;d.v[2]=11;}
d.v[3]=12;d.v[4]=11;
d.v[5]=x+2; s32 py=y+2; d.v[6]=py;
d.v[7]=56; d.v[8]=12; d.v[9]=11;
func_021098ac(&d);
if((flags[index*12]&2)||(flags[index*12]&4)) func_020a3bbc(20); else func_020a3bbc(19);
if(index==0) {d.v[1]=58;d.v[3]=57;d.v[5]=x+20;d.v[8]=57;}
else if(index==1) {d.v[1]=8;d.v[3]=45;d.v[5]=x+18;d.v[8]=45;}
d.v[2]=12;d.v[4]=12;d.v[6]=py;d.v[7]=56;d.v[9]=12;
func_021098ac(&d);
if(flags[index*12]&4) flags[index*12]&=~4;
}

