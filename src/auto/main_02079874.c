/* 2 functions from 0x02079874 to 0x0207A6B8 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160204, *data_021600ac, *data_021600bc;
extern u8 *data_02160a80[4];
extern const s16 data_0213a394[];
extern u16 data_021626aa[3], data_02162908[4], data_02151fc8;
extern s32 data_02170248[], data_02170204[];
extern void func_02002028(s32);
extern s64 func_02001fd0(void);
static inline s16 sin_02079874(s32 a) {return data_0213a394[((a%65536)>>4)*2];}
static inline s16 cos_02079874(s32 a) {return data_0213a394[((a%65536)>>4)*2+1];}
static inline int collision_02079874(u8 *a,u8 *b) {
s32 *ca=*(s32 **)(a+0xb0), *cb=*(s32 **)(b+0xb0);
if(ca && cb) {
int ra=*ca, rb=*cb;
if(ra && rb) {
int ax=*(s32 *)a, az=*(s32 *)(a+8), bx=*(s32 *)b, bz=*(s32 *)(b+8);
int x0=ax-ra,x1=ax+ra,z0=az-ra,z1=az+ra;
int bx0=bx-rb,bx1=bx+rb,bz0=bz-rb,bz1=bz+rb;
if(x0<bx1 && bx0<x1 && z0<bz1 && bz0<z1) return 1;else return 0;
}
if(a[0x9d] && b[0x9d]) return func_0210c2f4(a,b)<((a[0x9d]+b[0x9d])<<12);
if(a[0x9d] && rb) {
int x=*(s32 *)a,z=*(s32 *)(a+8),x0=*(s32 *)b-rb,x1=*(s32 *)b+rb,z0=*(s32 *)(b+8)-rb,z1=*(s32 *)(b+8)+rb;
u8 i;
for(i=0;i<8;i++) {
int angle=(u16)(i<<13);
int idx=(angle%65536)>>4;
int px=x+a[0x9d]*sin_02079874(angle), pz=z+a[0x9d]*cos_02079874(angle);
int hit;
if(px>=x0 && px<=x1 && pz>=z0 && pz<=z1) hit=1;else hit=0;
if(hit) return 1;
}
} else if(b[0x9d] && ra) {
int x=*(s32 *)b,z=*(s32 *)(b+8),x0=*(s32 *)a-ra,x1=*(s32 *)a+ra,z0=*(s32 *)(a+8)-ra,z1=*(s32 *)(a+8)+ra;
u8 i;
for(i=0;i<8;i++) {
int angle=(u16)(i<<13);
int idx=(angle%65536)>>4;
int px=x+b[0x9d]*sin_02079874(angle), pz=z+b[0x9d]*cos_02079874(angle);
int hit;
if(px>=x0 && px<=x1 && pz>=z0 && pz<=z1) hit=1;else hit=0;
if(hit) return 1;
}
}
}
return 0;
}

void func_02079874(void) {
u32 active;
int direction, mode;
u8 *base,*a,*node,*b,*p;
int near, far;
if(data_02160204[0x7e]) return;
direction=0;active=0;mode=0;
node=*(u8 **)(data_02160a80[0]+0x3c);
base=data_021600ac;
a=*(u8 **)(base+0x68);b=*(u8 **)(base+0x370);
while(node) {if(*(u32 *)(node+8)==0x32c9) goto found;node=*(u8 **)(node+0x38);}
node=0;
found:
if(data_02160204[0x85]) return;
if(*(u32 *)(a+0xac)&0x400) return;
func_020439a8();func_02043b28();func_020441bc();
if(func_02043c10()) {
func_021168f8(data_021600bc+0x40,b);
*(u32 *)(base+0x370)=0;
*(u32 *)(node+0x18)&=~1;
*(u32 *)(a+0xac)&=~0x20000;
if(*(u32 *)(data_021600ac+0x10)!=3) *(u32 *)(data_021600ac+0x10)=4;
return;
}
for(p=*(u8 **)(data_021600bc+0x40);p;p=*(u8 **)(p+0x13c)) {
if(*(u16 *)(p+0x8e)>100 && *(u16 *)(p+0x8e)<700 && *(u16 *)(*(u8 **)(p+0xb0)+4)==1) {
func_021168f8(data_021600bc+0x40,b);func_0204487c(p);
*(u32 *)(a+0xac)&=~0x20000;return;
}
}
a[0x9d]+=6;
{
if(*(u8 **)(a+0xb0)==0 || *(u8 **)(b+0xb0)==0) { near=0; goto near_done; }
if(*(s32 *)(*(u8 **)(a+0xb0))!=0 && *(s32 *)(*(u8 **)(b+0xb0))!=0) {
s32 box1[4], box0[4], rad;
rad=*(s32 *)(*(u8 **)(a+0xb0));
box1[0]=*(s32 *)(a+0)-rad; box1[2]=*(s32 *)(a+0)+rad;
box1[1]=*(s32 *)(a+8)-rad; box1[3]=*(s32 *)(a+8)+rad;
rad=*(s32 *)(*(u8 **)(b+0xb0));
box0[0]=*(s32 *)(b+0)-rad; box0[2]=*(s32 *)(b+0)+rad;
box0[1]=*(s32 *)(b+8)-rad; box0[3]=*(s32 *)(b+8)+rad;
if(box1[0]<box0[2] && box0[0]<box1[2] && box1[1]<box0[3] && box0[1]<box1[3]) near=1; else near=0;
goto near_done;
}
if(a[0x9d]!=0 && b[0x9d]!=0) {
if(func_0210c2f4(a,b)<((a[0x9d]+b[0x9d])<<12)) near=1; else near=0;
goto near_done;
}
if(a[0x9d]!=0 && *(s32 *)(*(u8 **)(b+0xb0))!=0) {
s32 box2[4]; u16 ang; s32 pz,px,hit,s,c,rad; u8 i;
rad=*(s32 *)(*(u8 **)(b+0xb0));
box2[0]=*(s32 *)(b+0)-rad; box2[2]=*(s32 *)(b+0)+rad;
box2[1]=*(s32 *)(b+8)-rad; box2[3]=*(s32 *)(b+8)+rad;
rad=a[0x9d];
for(i=0;i<8;i++) {
ang=(u16)(i<<13);
s=data_0213a394[(((s32)ang%0x10000)>>4)*2];
px=*(s32 *)(a+0)+rad*s;
c=data_0213a394[(((s32)ang%0x10000)>>4)*2+1];
pz=*(s32 *)(a+8)+rad*c;
if(px>=box2[0] && px<=box2[2] && pz>=box2[1] && pz<=box2[3]) hit=1; else hit=0;
if(hit) { near=1; goto near_done; }
}
near=0; goto near_done;
}
if(b[0x9d]!=0 && *(s32 *)(*(u8 **)(a+0xb0))!=0) {
s32 box3[4]; u16 ang; s32 pz,px,hit,s,c,rad; u8 i;
rad=*(s32 *)(*(u8 **)(a+0xb0));
box3[0]=*(s32 *)(a+0)-rad; box3[2]=*(s32 *)(a+0)+rad;
box3[1]=*(s32 *)(a+8)-rad; box3[3]=*(s32 *)(a+8)+rad;
rad=b[0x9d];
for(i=0;i<8;i++) {
ang=(u16)(i<<13);
s=data_0213a394[(((s32)ang%0x10000)>>4)*2];
px=*(s32 *)(b+0)+rad*s;
c=data_0213a394[(((s32)ang%0x10000)>>4)*2+1];
pz=*(s32 *)(b+8)+rad*c;
if(px>=box3[0] && px<=box3[2] && pz>=box3[1] && pz<=box3[3]) hit=1; else hit=0;
if(hit) { near=1; goto near_done; }
}
near=0; goto near_done;
}
near=0;
near_done:;
}
a[0x9d]-=6;
a[0x9d]+=15;
{
if(*(u8 **)(a+0xb0)==0 || *(u8 **)(b+0xb0)==0) { far=0; goto far_done; }
if(*(s32 *)(*(u8 **)(a+0xb0))!=0 && *(s32 *)(*(u8 **)(b+0xb0))!=0) {
s32 box1[4], box0[4], rad;
rad=*(s32 *)(*(u8 **)(a+0xb0));
box1[0]=*(s32 *)(a+0)-rad; box1[2]=*(s32 *)(a+0)+rad;
box1[1]=*(s32 *)(a+8)-rad; box1[3]=*(s32 *)(a+8)+rad;
rad=*(s32 *)(*(u8 **)(b+0xb0));
box0[0]=*(s32 *)(b+0)-rad; box0[2]=*(s32 *)(b+0)+rad;
box0[1]=*(s32 *)(b+8)-rad; box0[3]=*(s32 *)(b+8)+rad;
if(box1[0]<box0[2] && box0[0]<box1[2] && box1[1]<box0[3] && box0[1]<box1[3]) far=1; else far=0;
goto far_done;
}
if(a[0x9d]!=0 && b[0x9d]!=0) {
far=func_0210c2f4(a,b)<((a[0x9d]+b[0x9d])<<12);
goto far_done;
}
if(a[0x9d]!=0 && *(s32 *)(*(u8 **)(b+0xb0))!=0) {
s32 box2[4]; u16 ang; s32 pz,px,hit,s,c,rad; u8 i;
rad=*(s32 *)(*(u8 **)(b+0xb0));
box2[0]=*(s32 *)(b+0)-rad; box2[2]=*(s32 *)(b+0)+rad;
box2[1]=*(s32 *)(b+8)-rad; box2[3]=*(s32 *)(b+8)+rad;
rad=a[0x9d];
for(i=0;i<8;i++) {
ang=(u16)(i<<13);
s=data_0213a394[(((s32)ang%0x10000)>>4)*2];
px=*(s32 *)(a+0)+rad*s;
c=data_0213a394[(((s32)ang%0x10000)>>4)*2+1];
pz=*(s32 *)(a+8)+rad*c;
if(px>=box2[0] && px<=box2[2] && pz>=box2[1] && pz<=box2[3]) hit=1; else hit=0;
if(hit) { far=1; goto far_done; }
}
far=0; goto far_done;
}
if(b[0x9d]!=0 && *(s32 *)(*(u8 **)(a+0xb0))!=0) {
s32 box3[4]; u16 ang; s32 pz,px,hit,s,c,rad; u8 i;
rad=*(s32 *)(*(u8 **)(a+0xb0));
box3[0]=*(s32 *)(a+0)-rad; box3[2]=*(s32 *)(a+0)+rad;
box3[1]=*(s32 *)(a+8)-rad; box3[3]=*(s32 *)(a+8)+rad;
rad=b[0x9d];
for(i=0;i<8;i++) {
ang=(u16)(i<<13);
s=data_0213a394[(((s32)ang%0x10000)>>4)*2];
px=*(s32 *)(b+0)+rad*s;
c=data_0213a394[(((s32)ang%0x10000)>>4)*2+1];
pz=*(s32 *)(b+8)+rad*c;
if(px>=box3[0] && px<=box3[2] && pz>=box3[1] && pz<=box3[3]) hit=1; else hit=0;
if(hit) { far=1; goto far_done; }
}
far=0; goto far_done;
}
far=0;
far_done:;
}
a[0x9d]-=15;
if(!((data_021626aa[0]&1)||data_02162908[2]) || (!near && !far)) {
*(u32 *)(base+0x10)=0;
*(u32 *)(a+0xac)&=~0x20000;
*(u32 *)(b+0xac)&=~0x20000;
*(u32 *)(a+0xac)|=1;
*(u32 *)(b+0xac)|=1;
*(u32 *)(a+0xac)&=~2;
*(u16 *)(*(u8 **)(a+0xb0)+4)=*(u16 *)(b+0x90);
func_021168f8(data_021600bc+0x40,b);
if(node) {*(u32 *)(node+0x18)&=~1;*(u32 *)(node+0x10)=1;}
return;
}
{
int d=func_02079720(b);
if(d==0 || d==2) direction=1;
else if(d==1 || d==3) direction=2;
}
if(node && a) {*(s32 *)(node+0x1c)=*(s32 *)(a+0xfc)<<12;*(s32 *)(node+0x20)=(*(s32 *)(a+0x100)-24)<<12;}
if(data_02162908[2]) {
s32 x,y,z,sx,sy,w,screenX,screenY;
s64 inv;
const s32 *m=data_02170248,*pr=data_02170204;
y=m[10]+(s32)(((s64)*(s32 *)a*m[1]+(s64)*(s32 *)(a+4)*m[4]+(s64)*(s32 *)(a+8)*m[7])>>12);
x=m[9]+(s32)(((s64)*(s32 *)a*m[0]+(s64)*(s32 *)(a+4)*m[3]+(s64)*(s32 *)(a+8)*m[6])>>12);
z=m[11]+(s32)(((s64)*(s32 *)a*m[2]+(s64)*(s32 *)(a+4)*m[5]+(s64)*(s32 *)(a+8)*m[8])>>12);
w=pr[15]+(s32)(((s64)x*pr[3]+(s64)y*pr[7]+(s64)z*pr[11])>>12);
func_02002028(w);
sx=pr[12]+(s32)(((s64)x*pr[0]+(s64)y*pr[4]+(s64)z*pr[8])>>12);
sy=pr[13]+(s32)(((s64)x*pr[1]+(s64)y*pr[5]+(s64)z*pr[9])>>12);
inv=func_02001fd0();
screenY=(s32)((inv*sy+0x80000000LL)>>32);
sy=(screenY+4096)>>1;
sy=(sy<<7)+(sy<<6);
screenY=192-((sy+2048)>>12);
screenX=(s32)((inv*sx+0x80000000LL)>>32);
screenX=(((((screenX+4096)>>1)*256)+2048)>>12);
if(direction==1) {
if(data_02162908[1]<screenY-24) active|=16;
else if(data_02162908[1]>screenY+24) active|=4;
if(node) {if(*(u32 *)(node+0x10)) func_020ea5d4(node,5);*(u32 *)(node+0x18)|=1;}
} else if(direction==2) {
if(data_02162908[0]<screenX-24) active|=2;
else if(data_02162908[0]>screenX+24) active|=8;
if(node) {if(*(u32 *)(node+0x10)) func_020ea5d4(node,4);*(u32 *)(node+0x18)|=1;}
}
} else {
if(direction==1) {
if(data_021626aa[0]&64) active|=16;
if(data_021626aa[0]&128) active|=4;
if(node) {if(*(u32 *)(node+0x10)) func_020ea5d4(node,5);*(u32 *)(node+0x18)|=1;}
} else if(direction==2) {
if(data_021626aa[0]&32) active|=2;
if(data_021626aa[0]&16) active|=8;
if(node) {if(*(u32 *)(node+0x10)) func_020ea5d4(node,4);*(u32 *)(node+0x18)|=1;}
}
}
{ int speed=3;
if(active) {
if((active&16)&&(active&4)) active&=~20;
if((active&2)&&(active&8)) active&=~10;
switch(active) {
case 18:mode=0xa000;break;
case 24:mode=0xe000;break;
case 6:mode=0x6000;break;
case 12:mode=0x2000;break;
case 16:mode=0xc000;break;
case 4:mode=0x4000;break;
case 2:mode=0x8000;break;
case 8:mode=0;break;
case 0:
default:active|=1;break;
}
if(!(active&1)) {
int angle,cosine,sine;
*(s32 *)(a+0x30)=0;*(s32 *)(a+0x34)=0;*(s32 *)(a+0x38)=0;
if(*(u32 *)(base+0x74)==active) angle=*(u16 *)(base+0x6c);else angle=data_02151fc8;
angle=(u16)((angle+mode)%65536);
cosine=data_0213a394[(angle>>4)*2+1];
*(s32 *)(a+0x78)=speed;
*(s32 *)(a+0x30)=*(s32 *)(a+0x78)*cosine;
sine=data_0213a394[(angle>>4)*2];
*(s32 *)(a+0x38)=*(s32 *)(a+0x78)*sine;
*(s32 *)(b+0x30)=*(s32 *)(a+0x78)*cosine;
*(s32 *)(b+0x38)=*(s32 *)(a+0x78)*sine;
*(u32 *)(a+0xac)&=~0x40;
*(u32 *)(a+0xac)&=~0x80;
*(u32 *)(a+0xac)|=0x20000;
*(u32 *)(b+0xac)|=0x20000;
if(!func_0210d548()) func_0210d27c(120);
}
} else *(u32 *)(a+0xac)&=~0x20000;
}
if(*(u32 *)(base+0x74)!=active) {*(u32 *)(base+0x74)=active;*(u16 *)(base+0x6c)=data_02151fc8;}
if((*(u32 *)(a+0xac)&0x20000)||(*(u32 *)(a+0xac)&0x40)||(*(u32 *)(a+0xac)&0x400)) {
switch(func_02079720(b)) {
case 0:*(u16 *)(a+0x92)=0;break;
case 1:*(u16 *)(a+0x92)=0x4000;break;
case 2:*(u16 *)(a+0x92)=0x8000;break;
case 3:*(u16 *)(a+0x92)=0xc000;break;
}
if(active&2) {if(func_02079720(b)==1) func_020477dc(a,3,1);else if(func_02079720(b)==3) func_020477dc(a,4,1);}
else if(active&8) {if(func_02079720(b)==3) func_020477dc(a,3,1);else if(func_02079720(b)==1) func_020477dc(a,4,1);}
else if(active&16) {if(func_02079720(b)==0) func_020477dc(a,3,1);else if(func_02079720(b)==2) func_020477dc(a,4,1);}
else if(active&4) {if(func_02079720(b)==2) func_020477dc(a,3,1);else if(func_02079720(b)==0) func_020477dc(a,4,1);}
} else func_020477dc(a,6,1);
}

void func_0207a6b4(void) {
}
