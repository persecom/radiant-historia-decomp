/* 12 functions from 0x02000F44 to 0x02001D9C (main), found by ds-decomp. */
#include "common.h"
typedef struct { s32 v[9]; } Mtx33;
typedef struct { s32 v[12]; } Mtx43;
typedef struct { s32 v[16]; } Mtx44;

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

void func_02001134(const u32 *in, u32 *out)
{
    typedef struct {
        u32 x, y, z;
    } Row;

    register u32 a = in[0];
    register u32 b = in[1];
    register u32 c = in[2];
    register u32 d = in[3];
    register u32 e = in[4];
    register u32 f = in[5];
    register u32 g = in[6];
    register u32 h = in[7];
    register u32 i = in[8];

    Row r0 = {a, d, g};
    Row r1 = {b, e, h};
    Row r2 = {c, f, i};

    Row *dst = (Row *)out;

    *dst++ = r0;
    *dst++ = r1;
    *dst++ = r2;

    dst->x = 0;
    dst->y = 0;
    dst->z = 0;
}

void func_02001160(const Mtx43 *src, Mtx43 *dst, s32 x, s32 y, s32 z) {
    func_02000cd8((void *)src, dst, x, y, z);
    dst->v[9] = src->v[9];
    dst->v[10] = src->v[10];
    dst->v[11] = src->v[11];
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

void func_02001894(const Mtx44 *a, const Mtx44 *b, Mtx44 *out) {
    Mtx44 tmp;
    Mtx44 *dst;
    s32 x, y, z, w, t, t2;

    if (out == b) {
        dst = &tmp;
    } else {
        dst = out;
    }

    x = a->v[0];
    y = a->v[1];
    z = a->v[2];
    w = a->v[3];
    dst->v[0] = (((((s64)x * b->v[0]) + ((s64)y * b->v[4])) + ((s64)z * b->v[8])) + ((s64)w * b->v[12])) >> 12;
    dst->v[1] = (((((s64)x * b->v[1]) + ((s64)y * b->v[5])) + ((s64)z * b->v[9])) + ((s64)w * b->v[13])) >> 12;
    dst->v[3] = (((((s64)x * b->v[3]) + ((s64)y * b->v[7])) + ((s64)z * b->v[11])) + ((s64)w * b->v[15])) >> 12;
    t = (((((s64)x * b->v[2]) + ((s64)y * b->v[6])) + ((s64)z * b->v[10])) + ((s64)w * b->v[14])) >> 12;

    x = a->v[4];
    y = a->v[5];
    z = a->v[6];
    w = a->v[7];
    t2 = (((((s64)x * b->v[2]) + ((s64)y * b->v[6])) + ((s64)z * b->v[10])) + ((s64)w * b->v[14])) >> 12;
    dst->v[2] = t;
    dst->v[6] = t2;
    dst->v[5] = (((((s64)x * b->v[1]) + ((s64)y * b->v[5])) + ((s64)z * b->v[9])) + ((s64)w * b->v[13])) >> 12;
    dst->v[7] = (((((s64)x * b->v[3]) + ((s64)y * b->v[7])) + ((s64)z * b->v[11])) + ((s64)w * b->v[15])) >> 12;
    t = (((((s64)x * b->v[0]) + ((s64)y * b->v[4])) + ((s64)z * b->v[8])) + ((s64)w * b->v[12])) >> 12;

    x = a->v[8];
    y = a->v[9];
    z = a->v[10];
    w = a->v[11];
    t2 = (((((s64)x * b->v[0]) + ((s64)y * b->v[4])) + ((s64)z * b->v[8])) + ((s64)w * b->v[12])) >> 12;
    dst->v[4] = t;
    dst->v[8] = t2;
    dst->v[9] = (((((s64)x * b->v[1]) + ((s64)y * b->v[5])) + ((s64)z * b->v[9])) + ((s64)w * b->v[13])) >> 12;
    dst->v[11] = (((((s64)x * b->v[3]) + ((s64)y * b->v[7])) + ((s64)z * b->v[11])) + ((s64)w * b->v[15])) >> 12;
    t = (((((s64)x * b->v[2]) + ((s64)y * b->v[6])) + ((s64)z * b->v[10])) + ((s64)w * b->v[14])) >> 12;

    x = a->v[12];
    y = a->v[13];
    z = a->v[14];
    w = a->v[15];
    t2 = (((((s64)x * b->v[2]) + ((s64)y * b->v[6])) + ((s64)z * b->v[10])) + ((s64)w * b->v[14])) >> 12;
    dst->v[10] = t;
    dst->v[14] = t2;
    dst->v[13] = (((((s64)x * b->v[1]) + ((s64)y * b->v[5])) + ((s64)z * b->v[9])) + ((s64)w * b->v[13])) >> 12;
    dst->v[12] = (((((s64)x * b->v[0]) + ((s64)y * b->v[4])) + ((s64)z * b->v[8])) + ((s64)w * b->v[12])) >> 12;
    dst->v[15] = (((((s64)x * b->v[3]) + ((s64)y * b->v[7])) + ((s64)z * b->v[11])) + ((s64)w * b->v[15])) >> 12;

    if (dst == &tmp) {
        *out = *dst;
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

