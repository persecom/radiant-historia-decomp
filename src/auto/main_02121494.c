/* 6 functions from 0x02121494 to 0x021221E4 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 x,y; } Pair16_02121;
typedef struct { s32 x,y; } Pair32_02121;

void func_021217e8(s32 *out, s32 pos, u32 *desc, u8 *data) {
 u32 offset = desc[1];
 u32 flags = desc[0];
 s32 index = pos >> 12;
 u8 *p = data + offset;
 u32 end, rem, other;
 if (!(flags & 0xc0000000)) goto direct;
 {
  end = (flags & 0x1fff0000) >> 16;
  if (flags & 0x40000000) {
   if (index & 1) {
    if ((u32)index > end) {index = (end >> 1) + 1; goto direct;}
    index = (u32)index >> 1; goto half;
   }
   index = (u32)index >> 1; goto direct;
  }
  rem = index & 3;
  if (rem) {
   if ((u32)index > end) {index = (end >> 2) + rem; goto direct;}
   if (index & 1) {
    if (index & 2) {index = (u32)index >> 2; other = index + 1;}
    else {other = (u32)index >> 2; index = other + 1;}
    if (flags & 0x20000000) *out = (((s16 *)p)[index] + 3 * ((s16 *)p)[other]) >> 2;
    else *out = ((s64)((s32 *)p)[other] * 3 + ((s32 *)p)[index]) >> 2;
    return;
   }
   index = (u32)index >> 2; goto half;
  }
  index = (u32)index >> 2; goto direct;
 }
 goto direct;
half:
 if (!(flags & 0x20000000)) *out = (((s32 *)p)[index] >> 1) + (((s32 *)p + index)[1] >> 1);
 else *out = (((s16 *)p)[index] + ((s16 *)p + index)[1]) >> 1;
 return;
direct:
 if (flags & 0x20000000) { *out = ((s16 *)p)[index]; }
 if (!(flags & 0x20000000)) { *out = ((s32 *)p)[index]; }
 return;
}

void func_02121938(s32 *out, s32 pos, u32 *desc, u8 *data) {
u8 *p=data+desc[1];
u32 index=pos>>12;
u32 flags=desc[0];
u32 end; s32 scale,shift,frac,a,b;
if(*(u16 *)(data+4)-1==(pos>>12)) {
if(flags&0xc0000000) {
if(flags&0x40000000)index=(index&1)+(index>>1);
else index=(index&3)+(index>>2);
}
if(*(u32 *)(data+8)&2) {
frac=pos&0xfff;
if(!(flags&0x20000000)){a=((s32 *)p)[index];b=((s32 *)p)[0];}
else {a=((s16 *)p)[index];b=((s16 *)p)[0];}
*out=a+((frac*(b-a))>>12);
} else {
if(flags&0x20000000)a=((s16 *)p)[index];
else a=((s32 *)p)[index];
*out=a;
}
return;
}
if(flags&0xc0000000) {
end=(flags&0x1fff0000)>>16;
if(flags&0x40000000) {
if(index>=end){index=end>>1;goto normal;}
index>>=1;pos&=0x1fff;scale=2;shift=1;goto interp;
} else {
if(index>=end){index=(index&3)+(index>>2);goto normal;}
index>>=2;pos&=0x3fff;scale=4;shift=2;goto interp;
}
}
normal:
pos&=0xfff;scale=1;shift=0;
interp:
if(!(flags&0x20000000)){s32 *q=(s32 *)p+index; a=*q++; b=*q;}
else {s16 *q=(s16 *)p+index;a=q[0];b=q[1];}
*out=(a*scale+((pos*(b-a))>>12))>>shift;
}

void func_02121a8c(s32 *out,s32 pos,u32 *desc,u8 *data) {
u32 offset=desc[1], flags=desc[0];
u32 index=pos>>12;
u8 *p=data+offset;
u32 end,rem,a,b;
if(!(flags&0xc0000000))goto direct;
end=(flags&0x1fff0000)>>16;
if(flags&0x40000000) {
if(index&1) {
if(index>end){index=(end>>1)+1;goto direct;}
a=index>>1;goto half;
}
index>>=1;goto direct;
}
rem=index&3;
if(!rem){index>>=2;goto direct;}
if(index>end){index=rem+(end>>2);goto direct;}
if(!(index&1)){a=index>>2;goto half;}
if(index&2){a=index>>2;b=a+1;}else {b=index>>2;a=b+1;}
if(flags&0x20000000){
s16 *q=(s16 *)p;
s32 x=q[b*2]*3+q[a*2];
s32 y=q[b*2+1]*3+q[a*2+1];
out[0]=x>>2;out[1]=y>>2;
}else{
s32 *q=(s32 *)p;
s64 x=(s64)q[b*2]*3+q[a*2];
s64 y=(s64)q[b*2+1]*3+q[a*2+1];
out[0]=x>>2;out[1]=y>>2;
}
return;
direct:
{
s32 x,y;
if(flags&0x20000000){s16 *q=(s16 *)p+index*2;x=q[0];y=q[1];}
else{s32 *q=(s32 *)p+index*2;x=q[0];y=q[1];}
out[0]=x;out[1]=y;
}
return;
half:
if(flags&0x20000000){
s16 *q=(s16 *)p+a*2;
s32 x=q[0]+q[2],y=q[1]+q[3];
out[0]=x>>1;out[1]=y>>1;
}else {
s32 *q=(s32 *)p+a*2;
s32 x=q[0]+q[2],y=q[1]+q[3];
out[0]=x>>1;out[1]=y>>1;
}
}

void func_02121c60(s32 *out, s32 pos, u32 *desc, u8 *data) {
 u8 *p = data + desc[1];
 s32 index = pos >> 12;
 u32 flags = desc[0];
 s32 next, scale, shift;
 s32 a, b, c, d;
 u32 end;
 if (*(u16 *)(data+4)-1 == index) {
  if (flags & 0xc0000000) {
   if (flags & 0x40000000) index = (index & 1) + ((u32)index >> 1);
   else index = (index & 3) + ((u32)index >> 2);
  }
  if (*(u32 *)(data+8) & 2) {next=0; goto single;}
  { s32 x, y;
  if (flags & 0x20000000) {
   y = ((s16 (*)[2])p)[index][1]; x = ((s16 (*)[2])p)[index][0];
  } else {x=((s32 (*)[2])p)[index][0]; y=((s32 (*)[2])p)[index][1];}
  out[0]=x; out[1]=y; return;
 }
 }
 if (flags & 0xc0000000) {
  end = (flags & 0x1fff0000) >> 16;
  if (flags & 0x40000000) {
   if ((u32)index >= end) {index=end>>1; next=index+1; goto single;}
   index = (u32)index >> 1; next=index+1; pos &= 0x1fff; scale=2; shift=1; goto interpolate;
  }
  if ((u32)index >= end) {index=(index&3)+((u32)index>>2); next=index+1; goto single;}
  index=(u32)index>>2; next=index+1; pos &= 0x3fff; scale=4; shift=2; goto interpolate;
 }
 next=index+1;
single:
 pos &= 0xfff; scale=1; shift=0;
interpolate:
 if (!(flags & 0x20000000)) {
  a=((s32 (*)[2])p)[index][0]; b=((s32 (*)[2])p)[index][1];
  c=((s32 (*)[2])p)[next][0]; d=((s32 (*)[2])p)[next][1];
 } else {
  b=((s16 (*)[2])p)[index][1]; a=((s16 (*)[2])p)[index][0];
  c=((s16 (*)[2])p)[next][0]; d=((s16 (*)[2])p)[next][1];
 }
 out[0]=(a*scale+((pos*(c-a))>>12))>>shift;
 out[1]=(b*scale+((pos*(d-b))>>12))>>shift;
}

