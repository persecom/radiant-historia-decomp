/* 12 functions from 0x02000F44 to 0x02001D9C (main), found by ds-decomp. */
#include "common.h"
typedef struct { s32 v[9]; } Mtx33;
typedef struct { s32 v[12]; } Mtx43;

typedef struct Mtx9 {
    u32 a00, a01, a02;
    u32 a10, a11, a12;
    u32 a20, a21, a22;
    u32 pad0, pad1, pad2;
} Mtx9;

extern void func_02000cd8(void *, void *, u32, u32, u32);
void func_02000f44(const Mtx33 *a, const Mtx33 *b, Mtx33 *out)
{
  Mtx33 tmp;
  Mtx33 *dst = out;
  s32 *new_var;
  s32 x;
  s32 y;
  s32 z;
  s32 t;
  s32 t2;
  if (out == b)
  {
    dst = &tmp;
  }
  x = a->v[0];
  y = a->v[1];
  z = a->v[2];
  dst->v[0] = (((((s64) x) * b->v[0]) + (((s64) y) * b->v[3])) + (((s64) z) * b->v[6])) >> 12;
  dst->v[1] = (((((s64) x) * b->v[1]) + (((s64) y) * b->v[4])) + (((s64) z) * b->v[7])) >> 12;
  t = (((((s64) x) * b->v[2]) + (((s64) y) * b->v[5])) + (((s64) z) * b->v[8])) >> 12;
  x = a->v[3];
  y = a->v[4];
  z = a->v[5];
  t2 = (((((s64) x) * b->v[2]) + (((s64) y) * b->v[5])) + (((s64) z) * b->v[8])) >> 12;
  dst->v[2] = t;
  dst->v[5] = t2;
  dst->v[4] = (((((s64) x) * b->v[1]) + (((s64) y) * b->v[4])) + (((s64) z) * b->v[7])) >> 12;
  z = (((((s64) x) * b->v[0]) + (((s64) y) * b->v[3])) + (((s64) z) * b->v[6])) >> 12;
  t = z;
  x = a->v[6];
  y = a->v[7];
  new_var = a->v;
  z = new_var[8];
  t2 = (((((s64) x) * b->v[0]) + (((s64) y) * b->v[3])) + (((s64) z) * b->v[6])) >> 12;
  dst->v[3] = t;
  dst->v[6] = t2;
  dst->v[7] = (((((s64) x) * b->v[1]) + (((s64) y) * b->v[4])) + (((s64) z) * b->v[7])) >> 12;
  dst->v[8] = (((((s64) x) * b->v[2]) + (((s64) y) * b->v[5])) + (((s64) z) * b->v[8])) >> 12;
  if (dst == (&tmp))
  {
    *out = tmp;
  }
}

void func_020010d8(u32 *p)
{
    u64 *q = (u64 *)p;

    *q++ = 0x1000ULL;
    *q++ = 0ULL;
    *q++ = 0x1000ULL;
    *q++ = 0ULL;
    *q++ = 0x1000ULL;
    *q++ = 0ULL;
}

void func_02001134(const u32 *in,u32 *out) {
u64 a=*(const u64 *)(in+0),b=*(const u64 *)(in+2),c=*(const u64 *)(in+4),d=*(const u64 *)(in+6);
u32 e=in[8];
out[0]=(u32)a;out[1]=(u32)(b>>32);out[2]=(u32)d;
out[3]=(u32)(a>>32);out[4]=(u32)c;out[5]=(u32)(d>>32);
out[6]=(u32)b;out[7]=(u32)(c>>32);out[8]=e;
out+=9;out[0]=0;out[1]=0;out[2]=0;
}

void func_02001160(u8 *arg0, u8 *arg1, u32 arg2, u32 arg3, u32 arg4) {
    u8 *a = arg0;
    u8 *b = arg1;
    u32 c, x, y;
    func_02000cd8(arg0, arg1, arg2, arg3, arg4);
    c = *(u32 *)(a + 0x2c);
    x = *(u32 *)(a + 0x24);
    y = *(u32 *)(a + 0x28);
    *(u32 *)(b + 0x24) = x;
    *(u32 *)(b + 0x28) = y;
    *(u32 *)(b + 0x2c) = c;
}

extern void func_02002028(s32);
extern s32 func_02001ff4(void);
extern void func_02008f24(const Mtx43 *, Mtx43 *);
s32 func_02001194(const Mtx43 *a, Mtx43 *b)
{
    Mtx43 tmp;
    Mtx43 *p;
    s32 det;
    s32 det00, det01, det02;
    s32 c10, c20, c11, c21, c12, c22;
    s32 inv;

    if (a == b) {
        p = &tmp;
    } else {
        p = b;
    }

    det00 = (((s64)a->v[4] * a->v[8] - (s64)a->v[5] * a->v[7]) + 0x800) >> 12;
    det01 = (((s64)a->v[3] * a->v[8] - (s64)a->v[5] * a->v[6]) + 0x800) >> 12;
    det02 = (((s64)a->v[3] * a->v[7] - (s64)a->v[4] * a->v[6]) + 0x800) >> 12;

    det = (((s64)a->v[0] * det00 - (s64)a->v[1] * det01 + (s64)a->v[2] * det02) + 0x800) >> 12;
    if (det == 0) {
        return -1;
    }

    func_02002028(det);

    c10 = ((s64)a->v[1] * a->v[8] - (s64)a->v[7] * a->v[2]) >> 12;
    c20 = ((s64)a->v[1] * a->v[5] - (s64)a->v[4] * a->v[2]) >> 12;
    c11 = ((s64)a->v[0] * a->v[8] - (s64)a->v[6] * a->v[2]) >> 12;
    c21 = ((s64)a->v[0] * a->v[5] - (s64)a->v[3] * a->v[2]) >> 12;

    inv = func_02001ff4();

    p->v[0] = (s32)(((s64)inv * (s64)det00) >> 12);
    p->v[1] = -(s32)(((s64)inv * c10) >> 12);
    p->v[2] = (s32)(((s64)inv * c20) >> 12);
    p->v[3] = -(s32)(((s64)inv * (s64)det01) >> 12);
    p->v[4] = (s32)(((s64)inv * c11) >> 12);
    p->v[5] = -(s32)(((s64)inv * c21) >> 12);
    p->v[6] = (s32)(((s64)inv * (s64)det02) >> 12);

    c12 = ((s64)a->v[0] * a->v[7] - (s64)a->v[6] * a->v[1]) >> 12;
    p->v[7] = -(s32)(((s64)inv * c12) >> 12);

    c22 = ((s64)a->v[0] * a->v[4] - (s64)a->v[3] * a->v[1]) >> 12;
    p->v[8] = (s32)(((s64)inv * c22) >> 12);

    p->v[9]  = -(s32)(((s64)p->v[0] * a->v[9] + (s64)p->v[3] * a->v[10] + (s64)p->v[6] * a->v[11]) >> 12);
    p->v[10] = -(s32)(((s64)p->v[1] * a->v[9] + (s64)p->v[4] * a->v[10] + (s64)p->v[7] * a->v[11]) >> 12);
    p->v[11] = -(s32)(((s64)p->v[2] * a->v[9] + (s64)p->v[5] * a->v[10] + (s64)p->v[8] * a->v[11]) >> 12);

    if (p == &tmp) {
        func_02008f24(&tmp, b);
    }

    return 0;
}

void func_02001508(const Mtx43 *a, const Mtx43 *b, Mtx43 *out) {
    Mtx43 tmp;
    Mtx43 *dst;
    s32 x, y, z, t, t2;

    if (out == b) {
        dst = &tmp;
    } else {
        dst = out;
    }

    x = a->v[0];
    y = a->v[1];
    z = a->v[2];
    dst->v[0] = ((((s64)x * b->v[0]) + ((s64)y * b->v[3])) + ((s64)z * b->v[6])) >> 12;
    dst->v[1] = ((((s64)x * b->v[1]) + ((s64)y * b->v[4])) + ((s64)z * b->v[7])) >> 12;
    t = ((((s64)x * b->v[2]) + ((s64)y * b->v[5])) + ((s64)z * b->v[8])) >> 12;

    x = a->v[3];
    y = a->v[4];
    z = a->v[5];
    t2 = ((((s64)x * b->v[2]) + ((s64)y * b->v[5])) + ((s64)z * b->v[8])) >> 12;
    dst->v[2] = t;
    dst->v[5] = t2;
    dst->v[4] = ((((s64)x * b->v[1]) + ((s64)y * b->v[4])) + ((s64)z * b->v[7])) >> 12;
    t = ((((s64)x * b->v[0]) + ((s64)y * b->v[3])) + ((s64)z * b->v[6])) >> 12;

    x = a->v[6];
    y = a->v[7];
    z = a->v[8];
    t2 = ((((s64)x * b->v[0]) + ((s64)y * b->v[3])) + ((s64)z * b->v[6])) >> 12;
    dst->v[3] = t;
    dst->v[6] = t2;
    dst->v[7] = ((((s64)x * b->v[1]) + ((s64)y * b->v[4])) + ((s64)z * b->v[7])) >> 12;
    t = ((((s64)x * b->v[2]) + ((s64)y * b->v[5])) + ((s64)z * b->v[8])) >> 12;

    x = a->v[9];
    y = a->v[10];
    z = a->v[11];
    t2 = b->v[11] + (((((s64)x * b->v[2]) + ((s64)y * b->v[5])) + ((s64)z * b->v[8])) >> 12);
    dst->v[8] = t;
    dst->v[11] = t2;
    dst->v[10] = b->v[10] + (((((s64)x * b->v[1]) + ((s64)y * b->v[4])) + ((s64)z * b->v[7])) >> 12);
    dst->v[9] = b->v[9] + (((((s64)x * b->v[0]) + ((s64)y * b->v[3])) + ((s64)z * b->v[6])) >> 12);

    if (dst == &tmp) {
        *out = tmp;
    }
}

extern void func_02002274(const s32 *, s32 *);
extern void func_02002194(const s32 *, const s32 *, s32 *);
extern s32 func_02002158(const s32 *, const s32 *);
void func_02001720(const s32 *camPos, const s32 *camUp, const s32 *target, s32 *mtx) {
    s32 vLook[3];
    s32 vRight[3];
    s32 vUp[3];

    vLook[0] = camPos[0] - target[0];
    vLook[1] = camPos[1] - target[1];
    vLook[2] = camPos[2] - target[2];
    func_02002274(vLook, vLook);

    func_02002194(camUp, vLook, vRight);
    func_02002274(vRight, vRight);

    func_02002194(vLook, vRight, vUp);

    mtx[0] = vRight[0];
    mtx[1] = vUp[0];
    mtx[2] = vLook[0];
    mtx[3] = vRight[1];
    mtx[4] = vUp[1];
    mtx[5] = vLook[1];
    mtx[6] = vRight[2];
    mtx[7] = vUp[2];
    mtx[8] = vLook[2];

    mtx[9] = -func_02002158(camPos, vRight);
    mtx[10] = -func_02002158(camPos, vUp);
    mtx[11] = -func_02002158(camPos, vLook);
}

void func_02001834(u32 *p) {
    u32 i;
    for (i = 0; i < 16; i++) p[i] = 0;
    p[0] = 0x1000;
    p[5] = 0x1000;
    p[10] = 0x1000;
    p[15] = 0x1000;
}

void func_02001860(const s32 (*src)[4], s32 (*dst)[3]) {
    s32 i;
    for (i = 0; i < 4; i++) {
        dst[i][0] = src[i][0];
        dst[i][1] = src[i][1];
        dst[i][2] = src[i][2];
    }
}

s32 func_02001fb0(s32, s32);
s64 func_02001fd0(void);
s32 func_02001ff4(void);
void func_02001c50(s32 a, s32 b, s32 c, s32 d, s32 e, s32 scale, s32 *m) {
s32 cot = func_02001fb0(b,a);
s64 inv;
s32 twice;
*(u64 *)0x4000290 = (u64)0x1000 << 32;
*(s64 *)0x4000298 = (u32)(d-e);
if(scale != 4096) cot = cot * scale / 4096;
m[1]=0;m[2]=0;m[3]=0;m[4]=0;
m[5]=cot;
m[6]=0;m[7]=0;m[8]=0;m[9]=0;
m[11]=-scale;
m[12]=0;m[13]=0;m[15]=0;
inv=func_02001fd0();
*(s64 *)0x4000290 = (s64)cot << 32;
*(s64 *)0x4000298 = (u32)c;
if(scale != 4096) inv=inv*scale/4096;
twice=d+d;
m[10]=(inv*(e+d)+0x80000000LL)>>32;
m[14]=(inv*(s32)(((s64)twice*e+0x800)>>12)+0x80000000LL)>>32;
m[0]=func_02001ff4();
}

