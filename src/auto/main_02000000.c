/* 35 functions from 0x02000000 to 0x02000F44 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02160204;

typedef struct { u32 v; } OneWord;
typedef struct { u32 a, b, c, d; } FourWords;
typedef struct { s32 v[4]; } Mat4;
typedef struct { s32 v[4]; } MatA;
typedef struct { s32 v[9]; } Mtx9;
typedef struct { s32 a0; s32 a1, a2; s32 a3, a4; s32 a5, a6, a7, a8; } MtxFields;
typedef struct { u32 x, y; } Pair;
typedef union { u32 u; struct { u32 pad : 12; u32 val : 20; } b; } FX;

void func_02110000(void);
void func_021100d8(void);
void func_02008414(void);
void func_0200093c(u32 data, void *dest, u32 size) {
    u32 *p = (u32 *)dest;
    u32 *end = (u32 *)((u8 *)dest + size);
    while (p < end) {
        *p++ = data;
    }
}

void AutoloadCallback(void) {
}

void func_02000b60(void) {
}

void func_02000b64(void) {
}

void main(void) {
    if (data_02160204 == 0) {
        func_02110000();
    }
    func_021100d8();
    func_02008414();
}

#pragma opt_propagation off
void func_02000bec(u32 *p) { p[2]=0; p[1]=0; p[3]=0x1000; p[0]=0x1000; }
#pragma opt_propagation on
void func_02000c04(const MatA *a, Mat4 *b, Mat4 *out) {
    Mat4 tmp;
    Mat4 *p;
    s32 x, y;
    if (out == b) {
        p = &tmp;
    } else {
        p = out;
    }
    x = a->v[0];
    y = a->v[1];
    p->v[0] = (s32)(((s64)x * b->v[0] + (s64)y * b->v[2]) >> 12);
    p->v[1] = (s32)(((s64)x * b->v[1] + (s64)y * b->v[3]) >> 12);
    x = a->v[2];
    y = a->v[3];
    p->v[2] = (s32)(((s64)x * b->v[0] + (s64)y * b->v[2]) >> 12);
    p->v[3] = (s32)(((s64)x * b->v[1] + (s64)y * b->v[3]) >> 12);
    if (p == &tmp) {
        *out = tmp;
    }
}

void func_02000cb4(u64 *p) {
    p[4] = 0x1000ULL;
    p[0] = 0x0000000000001000ULL;
    p[1] = 0;
    p[2] = 0x0000000000001000ULL;
    p[3] = 0;
}

void func_02000cd8(const MtxFields *src, MtxFields *dst, s32 x, s32 y, s32 z) {
dst->a0=(s64)x*src->a0>>12;
dst->a1=(s64)x*src->a1>>12;
dst->a2=(s64)x*src->a2>>12;
dst->a3=(s64)y*src->a3>>12;
dst->a4=(s64)y*src->a4>>12;
dst->a5=(s64)y*src->a5>>12;
dst->a6=(s64)z*src->a6>>12;
dst->a7=(s64)z*src->a7>>12;
dst->a8=(s64)z*src->a8>>12;
}

#pragma thumb on
#pragma optimization_level 1
void func_02000da0(volatile s32 *p,s32 a,s32 b) {
p[0]=4096; p[1]=0; p[2]=0; p[3]=0; p[4]=b; p[5]=a;
p[6]=0; p[7]=-a; p[8]=b;
}
#pragma thumb on
void func_02000dbc(volatile s32 *p, s32 a, s32 b)
{
  p[0] = b;
  p[8] = b;
  p[1] = 0;
  p[3] = 0;
  p[5] = 0;
  p[7] = 0;
  s32 n = -a;
  s32 one = 4096;
  p[6] = a;
  p[4] = one;
  p[2] = n;
}
#pragma thumb off
void func_02000dd8(s32 *p, s32 a, s32 b) {
    p[0] = b;
    p[1] = a;
    p[2] = 0;
    p[3] = -a;
    p[4] = b;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
    p[8] = 0x1000;
}

#pragma optimization_level 4
#pragma opt_propagation off
void func_02000df0(MtxFields *m, const MtxFields *v, s32 sn, s32 cs) {
s32 t=4096-cs;
s32 x=v->a0, y=v->a1, z=v->a2;
s32 sx,sy,sz;
s32 yz,xz,xy;
{ s32 d=(t*((s64)x*x))>>24; d+=cs; m->a0=d; }
{ s32 d=(t*((s64)y*y))>>24; d+=cs; m->a4=d; }
{ s32 d=(t*((s64)z*z))>>24; d+=cs; m->a8=d; }
xy=((s64)t*x*y)>>24;
xz=((s64)t*x*z)>>24;
yz=((s64)t*y*z)>>24;
sx=((s64)sn*x)>>12;
sy=((s64)sn*y)>>12;
sz=((s64)sn*z)>>12;
m->a1=xy+sz;
m->a3=xy-sz;
m->a2=xz-sy;
m->a6=xz+sy;
m->a5=yz+sx;
m->a7=yz-sx;
}
#pragma opt_propagation on
