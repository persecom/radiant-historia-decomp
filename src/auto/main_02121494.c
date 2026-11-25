/* 6 functions from 0x02121494 to 0x021221E4 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s32 _00,_01,_02,_10,_11,_12,_20,_21,_22; } Mtx33_02121;
extern void func_02002274(void *,void *);
typedef struct { s16 x,y; } Pair16_02121;
typedef struct { s32 x,y; } Pair32_02121;

extern u8 *data_02170460;
void func_02121938(s32 *, s32, u32 *, u8 *);
void func_021217e8(s32 *, s32, u32 *, u8 *);
void func_021211f0(void *);
void func_021221e4(void *, u32, void *, void *);
void func_02121de0(void *, u32, void *, void *);
s32 func_0212251c(void *, void *, void *, u32);
void func_02121314(void *);
void func_02121c60(s32 *, s32, u32 *, u8 *);
void func_02121a8c(s32 *, s32, u32 *, u8 *);
void func_02121284(void *);
void func_02121494(u8 *arg0, u32 arg1, u32 arg2, u8 *arg3) {
    struct Header {
        u8 pad[0x14];
        u16 ofs[1];
    };
    struct Mtx33 {
        s32 _00, _01, _02;
        s32 _10, _11, _12;
        s32 _20, _21, _22;
    };
    struct {
        s32 s[3];
        s32 invs[3];
    } scale;
    s32 tmp0[2];
    s32 tmp1[2];
    s32 tmp2[2];
    u16 off = ((struct Header *)arg0)->ofs[arg1];
    u8 *base = arg0 + off;
    u32 flags = *(u32 *)base;

    if (flags & 1) {
        *(u32 *)arg3 = 7;
    } else {
        u8 *p = base + 4;
        s32 interp;
        if ((arg2 & 0xfff) && (*(u32 *)(arg0 + 8) & 1)) {
            interp = 1;
        } else {
            interp = 0;
        }
        *(u32 *)arg3 = 0;

        if (!(flags & 6)) {
            if (!(flags & 8)) {
                if (interp) {
                    func_02121938((s32 *)(arg3 + 0x4c), arg2, (u32 *)p, arg0);
                } else {
                    func_021217e8((s32 *)(arg3 + 0x4c), arg2, (u32 *)p, arg0);
                }
                p += 8;
            } else {
                *(u32 *)(arg3 + 0x4c) = *(u32 *)p;
                p += 4;
            }
            if (!(flags & 0x10)) {
                if (interp) {
                    func_02121938((s32 *)(arg3 + 0x50), arg2, (u32 *)p, arg0);
                } else {
                    func_021217e8((s32 *)(arg3 + 0x50), arg2, (u32 *)p, arg0);
                }
                p += 8;
            } else {
                *(u32 *)(arg3 + 0x50) = *(u32 *)p;
                p += 4;
            }
            if (!(flags & 0x20)) {
                if (interp) {
                    func_02121938((s32 *)(arg3 + 0x54), arg2, (u32 *)p, arg0);
                } else {
                    func_021217e8((s32 *)(arg3 + 0x54), arg2, (u32 *)p, arg0);
                }
                p += 8;
            } else {
                *(u32 *)(arg3 + 0x54) = *(u32 *)p;
                p += 4;
            }
        } else if (flags & 2) {
            *(u32 *)arg3 |= 4;
        } else {
            func_021211f0(arg3);
        }

        if (!(flags & 0xc0)) {
            if (!(flags & 0x100)) {
                if (interp) {
                    func_021221e4(arg3 + 0x28, arg2, p, arg0);
                } else {
                    func_02121de0(arg3 + 0x28, arg2, p, arg0);
                }
                p += 8;
            } else {
                if (func_0212251c(arg3 + 0x28, arg0 + *(u32 *)(arg0 + 0xc), arg0 + *(u32 *)(arg0 + 0x10), *(u32 *)p)) {
                    struct Mtx33 *m = (struct Mtx33 *)(arg3 + 0x28);
                    s32 _12 = m->_12;
                    s32 _00 = m->_00;
                    s32 _10 = m->_10;
                    s32 _02 = m->_02;
                    s32 _01 = m->_01;
                    s32 _11 = m->_11;
                    m->_20 = (_01 * _12 - _02 * _11) >> 12;
                    m->_21 = (_02 * _10 - _00 * _12) >> 12;
                    m->_22 = (_00 * _11 - _01 * _10) >> 12;
                }
                p += 4;
            }
        } else if (flags & 0x40) {
            *(u32 *)arg3 |= 2;
        } else {
            func_02121314(arg3);
        }

        if (!(flags & 0x600)) {
            {
                s32 invs0, s0;
                if (!(flags & 0x800)) {
                    if (interp) {
                        func_02121c60(tmp0, arg2, (u32 *)p, arg0);
                    } else {
                        func_02121a8c(tmp0, arg2, (u32 *)p, arg0);
                    }
                    s0 = tmp0[0];
                    invs0 = tmp0[1];
                } else {
                    s0 = *(s32 *)(p + 0);
                    invs0 = *(s32 *)(p + 4);
                }
                scale.s[0] = s0;
                scale.invs[0] = invs0;
            }
            {
                s32 invs1, s1;
                if (!(flags & 0x1000)) {
                    if (interp) {
                        func_02121c60(tmp1, arg2, (u32 *)(p + 8), arg0);
                    } else {
                        func_02121a8c(tmp1, arg2, (u32 *)(p + 8), arg0);
                    }
                    s1 = tmp1[0];
                    invs1 = tmp1[1];
                } else {
                    s1 = *(s32 *)(p + 8);
                    invs1 = *(s32 *)(p + 12);
                }
                scale.s[1] = s1;
                scale.invs[1] = invs1;
            }
            {
                s32 invs2, s2;
                if (!(flags & 0x2000)) {
                    if (interp) {
                        func_02121c60(tmp2, arg2, (u32 *)(p + 16), arg0);
                    } else {
                        func_02121a8c(tmp2, arg2, (u32 *)(p + 16), arg0);
                    }
                    s2 = tmp2[0];
                    invs2 = tmp2[1];
                store_z:
                    scale.s[2] = s2;
                    scale.invs[2] = invs2;
                } else {
                    s2 = *(s32 *)(p + 16);
                    invs2 = *(s32 *)(p + 20);
                    goto store_z;
                }
            }
        } else if (flags & 0x200) {
            *(u32 *)arg3 |= 1;
        } else {
            func_02121284(arg3);
            return;
        }
    }

    ((void (*)(void *, void *, u32, s32))(*(void **)(data_02170460 + 0xe8)))(arg3, &scale, *(u32 *)data_02170460, (*(u32 *)arg3 & 1) ? 4 : 0);
}

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
u32 offset=((volatile u32 *)desc)[1];
u32 flags=desc[0];
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
if(rem){
if(index>end){index=rem+(end>>2);goto direct;}
if(index&1){
if(index&2){a=index>>2;b=a+1;}else {b=index>>2;a=b+1;}
if(flags&0x20000000){
Pair16_02121 *q=(Pair16_02121 *)p;
s32 bx=q[b].x, by=q[b].y, ax=q[a].x, ay=q[a].y;
s32 x=ax+bx*3;
s32 y=ay+by*3;
out[0]=x>>2;out[1]=y>>2;
return;
}else{
Pair32_02121 *q=(Pair32_02121 *)p;
Pair32_02121 *pb=q+b,*pa=q+a;
s32 bx=pb->x, by=pb->y;
s32 ax=pa->x,ay=pa->y;
s64 x=(s64)bx*3+ax;
s64 y=(s64)by*3+ay;
out[0]=x>>2;out[1]=y>>2;
}
return;
}
a=index>>2;goto half;
}
index>>=2;
direct:
{
s32 x,y;
if(flags&0x20000000){Pair16_02121 *q=(Pair16_02121 *)p+index;x=q->x;y=q->y;}
else{Pair32_02121 *q=(Pair32_02121 *)p+index;x=q->x;y=q->y;}
out[0]=x;out[1]=y;
}
return;
half:
if(flags&0x20000000){
Pair16_02121 *q=(Pair16_02121 *)p+a;
s32 x=q[0].x+q[1].x,y=q[0].y+q[1].y;
out[0]=x>>1;out[1]=y>>1;
}else {
Pair32_02121 *q=(Pair32_02121 *)p+a;
s32 x=q[0].x+q[1].x,y=q[0].y+q[1].y;
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

void func_02121de0(void *out, u32 pos, void *descArg, void *dataArg){
s32 *m=out;
u32 *desc=descArg;
u8 *data=dataArg;
u32 flags=desc[0],offset=desc[1];
s32 index=(s32)pos>>12;
u32 ofs2,ofs1;
u16 *p=(u16 *)(data+offset);
ofs1=*(u32 *)(data+12);ofs2=*(u32 *)(data+16);
u32 end,rem,other;
if(!(flags&0xc0000000))goto direct;
end=(flags&0x1fff0000)>>16;
if(flags&0x40000000){
if(index&1){
if((u32)index>end){index=(end>>1)+1;goto direct;}
other=(u32)index>>1;goto half;
}
index=(u32)index>>1;goto direct;
}
rem=index&3;
if(rem){
if((u32)index>end){index=(end>>2)+rem;goto direct;}
if(index&1){
s32 tmp[9];u32 cross=0;
if(index&2){other=(u32)index>>2;index=other+1;}
else{index=(u32)index>>2;other=index+1;}
cross|=func_0212251c(m,data+ofs1,data+ofs2,p[index]);
cross|=func_0212251c(tmp,data+ofs1,data+ofs2,p[other]);
m[0]=tmp[0]+m[0]*3;
m[1]=tmp[1]+m[1]*3;
m[2]=tmp[2]+m[2]*3;
m[3]=tmp[3]+m[3]*3;
m[4]=tmp[4]+m[4]*3;
m[5]=tmp[5]+m[5]*3;
func_02002274(m,m);func_02002274(m+3,m+3);
if(!cross){m[6]=tmp[6]+m[6]*3;
m[7]=tmp[7]+m[7]*3;
m[8]=tmp[8]+m[8]*3;func_02002274(m+6,m+6);}else {Mtx33_02121 *a=(Mtx33_02121 *)m;
s32 _12=a->_12,_00=a->_00,_10=a->_10,_02=a->_02,_01=a->_01,_11=a->_11;
a->_20=(_01*_12-_02*_11)>>12;
a->_21=(_02*_10-_00*_12)>>12;
a->_22=(_00*_11-_01*_10)>>12;
}
return;
}
other=(u32)index>>2;goto half;
}
index=(u32)index>>2;goto direct;
half:{
s32 tmp[9];u32 cross=0;
cross|=func_0212251c(m,data+ofs1,data+ofs2,p[other]);
cross|=func_0212251c(tmp,data+ofs1,data+ofs2,(p+other)[1]);
m[0]=m[0]+tmp[0];
m[1]=m[1]+tmp[1];
m[2]=m[2]+tmp[2];
m[3]=m[3]+tmp[3];
m[4]=m[4]+tmp[4];
m[5]=m[5]+tmp[5];
func_02002274(m,m);func_02002274(m+3,m+3);
if(!cross){m[6]=m[6]+tmp[6];
m[7]=m[7]+tmp[7];
m[8]=m[8]+tmp[8];func_02002274(m+6,m+6);}else {Mtx33_02121 *a=(Mtx33_02121 *)m;
s32 _12=a->_12,_00=a->_00,_10=a->_10,_02=a->_02,_01=a->_01,_11=a->_11;
a->_20=(_01*_12-_02*_11)>>12;
a->_21=(_02*_10-_00*_12)>>12;
a->_22=(_00*_11-_01*_10)>>12;
}
return;
}
direct:
if(func_0212251c(m,data+ofs1,data+ofs2,p[index])){Mtx33_02121 *a=(Mtx33_02121 *)m;
s32 _12=a->_12,_00=a->_00,_10=a->_10,_02=a->_02,_01=a->_01,_11=a->_11;
a->_20=(_01*_12-_02*_11)>>12;
a->_21=(_02*_10-_00*_12)>>12;
a->_22=(_00*_11-_01*_10)>>12;
}
else func_02002274(m+6,m+6);
}

