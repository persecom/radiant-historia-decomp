/* 6 functions from 0x02121494 to 0x021221E4 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s32 first, second; } InterpPair_02121938;

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

