/* 40 functions from 0x02001D9C to 0x02002D9C (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s32 x, y, z;
} Vec3;

typedef struct {
    s32 x, y;
} Vec2;


typedef struct {
    Vec2 xy;
    s32 z;
} Vec3n;

extern u16 data_02145ba0;
extern u16 data_0215cd20;
extern void func_0200f1bc(void);
void func_02002058(s32 arg0, s32 arg1);
void func_02002028(u32 arg0);
s32 func_02001ff4(void);
s64 func_02001fd0(void);
void func_02001d9c(s32 top, s32 bottom, s32 left, s32 right, s32 near, s32 far, s32 scale, s32 *m) {
    s64 x, y, z;
    func_02002028(right-left);
    m[1]=0; m[2]=0; m[3]=0;
    m[4]=0; m[6]=0; m[7]=0;
    m[8]=0; m[9]=0; m[11]=0;
    m[15]=scale;
    x = func_02001fd0();
    *(volatile u64 *)0x04000290 = (u64)0x1000 << 32;
    *(volatile u64 *)0x04000298 = (u32)(top-bottom);
    if (scale != 0x1000) x = x*scale / 0x1000;
    m[0] = ((x << 13) + 0x80000000LL) >> 32;
    y = func_02001fd0();
    *(volatile u64 *)0x04000290 = (u64)0x1000 << 32;
    *(volatile u64 *)0x04000298 = (u32)(near-far);
    if (scale != 0x1000) y = y*scale / 0x1000;
    m[5] = ((y << 13) + 0x80000000LL) >> 32;
    z = func_02001fd0();
    if (scale != 0x1000) z = z*scale / 0x1000;
    m[10] = ((z << 13) + 0x80000000LL) >> 32;
    m[12] = (x * -(right+left) + 0x80000000LL) >> 32;
    m[13] = (y * -(top+bottom) + 0x80000000LL) >> 32;
    m[14] = (z * (far+near) + 0x80000000LL) >> 32;
}

s32 func_02001fb0(s32 arg0, s32 arg1) {
    func_02002058(arg0, arg1);
    return func_02001ff4();
}

s32 func_02001fc0(u32 arg0) {
    func_02002028(arg0);
    return func_02001ff4();
}

s64 func_02001fd0(void) {
    while (*(volatile u16 *)0x04000280 & 0x8000) {
    }
    return *(s64 *)0x040002a0;
}

s32 func_02001ff4(void) {
    while (*(volatile u16 *)0x04000280 & 0x8000) {
    }
    return (s32)((*(u64 *)0x040002a0 + 0x80000) >> 20);
}

void func_02002028(u32 arg0) {
    *(volatile u16 *)0x04000280 = 1;
    *(volatile u64 *)0x04000290 = (u64)0x1000 << 32;
    *(volatile u64 *)0x04000298 = arg0;
}

void func_02002058(s32 arg0, s32 arg1) {
    *(volatile u16 *)0x04000280 = 1;
    *(volatile s32 *)0x04000290 = 0;
    *(volatile s32 *)0x04000294 = arg0;
    *(volatile s32 *)0x04000298 = arg1;
    *(volatile s32 *)0x0400029c = 0;
}

s32 func_02002080(s32 arg0, u32 arg1) {
    *(volatile u16 *)0x04000280 = 0;
    *(volatile s32 *)0x04000290 = arg0;
    *(volatile u64 *)0x04000298 = arg1;
    while (*(volatile u16 *)0x04000280 & 0x8000) {
    }
    return *(volatile s32 *)0x040002a0;
}

s32 func_020020bc(s32 arg0, u32 arg1) {
    *(volatile u16 *)0x04000280 = 0;
    *(volatile u32 *)0x04000290 = arg0;
    *(volatile u64 *)0x04000298 = arg1;
    while (*(volatile u16 *)0x04000280 & 0x8000) {
    }
    return *(volatile s32 *)0x040002a8;
}

#pragma optimization_level 1
void func_020020f8(s32 *arg0, s32 *arg1, s32 *arg2)
{
    u32 bx = (u32)arg1[0];
    u32 by = (u32)arg1[1];
    u64 a = *(const u64 *)arg0;
    u32 ax = (u32)a;
    u32 ay = (u32)(a >> 32);
    u32 az, bz;
    ay += by;
    ax += bx;
    az = (u32)arg0[2];
    bz = (u32)arg1[2];
    arg2[0] = (s32)ax;
    arg2[1] = (s32)ay;
    arg2[2] = (s32)(az + bz);
}
#pragma optimization_level 1
void func_02002128(s32 *arg0, s32 *arg1, s32 *arg2)
{
    u32 bx = (u32)arg1[0];
    u32 by = (u32)arg1[1];
    u64 a = *(const u64 *)arg0;
    u32 ax = (u32)a;
    u32 ay = (u32)(a >> 32);
    u32 az, bz;
    ay -= by;
    ax -= bx;
    az = (u32)arg0[2];
    bz = (u32)arg1[2];
    arg2[0] = (s32)ax;
    arg2[1] = (s32)ay;
    arg2[2] = (s32)(az - bz);
}
#pragma optimization_level 4
s32 func_02002158(const s32 *a, const s32 *b) {
    return (s32)(((s64)a[0] * b[0] + (s64)a[1] * b[1] + (s64)a[2] * b[2] + 0x800) >> 12);
}

void func_02002194(const s32 *a, const s32 *b, s32 *ab) {
    s32 x = (s32)(((s64)a[1] * b[2] - (s64)a[2] * b[1] + 0x800) >> 12);
    s32 y = (s32)(((s64)a[2] * b[0] - (s64)a[0] * b[2] + 0x800) >> 12);
    s32 z = (s32)(((s64)a[0] * b[1] - (s64)a[1] * b[0] + 0x800) >> 12);
    ab[0] = x;
    ab[1] = y;
    ab[2] = z;
}

s32 func_02002214(const s32 *v) {
    s64 sum = (s64)v[0] * v[0];
    sum += (s64)v[1] * v[1];
    sum += (s64)v[2] * v[2];
    *(volatile u16 *)0x040002b0 = 1;
    *(volatile u64 *)0x040002b8 = (u64)sum << 2;
    while (*(volatile u16 *)0x040002b0 & 0x8000) {
    }
    return (*(volatile s32 *)0x040002b4 + 1) >> 1;
}

void func_02002274(const Vec3 *pSrc, Vec3 *pDst)
{
  s64 t = ((s64) pSrc->y) * pSrc->y;
  s32 s;
  s64 d;
  t += ((s64) pSrc->x) * (pSrc->x ^ 0);
  t += ((s64) pSrc->z) * pSrc->z;
  *((volatile u16 *) 0x04000280) = 2;
  *((volatile u64 *) 0x04000290) = ((u64) 1) << 56;
  *((volatile u64 *) 0x04000298) = t;
  *((volatile u16 *) 0x040002b0) = 1;
  *((volatile u64 *) 0x040002b8) = t << 2;
  while ((*((volatile u16 *) 0x040002b0)) & 0x8000)
  {
  }

  s = *((volatile s32 *) 0x040002b4);
  while ((*((volatile u16 *) 0x04000280)) & 0x8000)
  {
  }

  d = (*((volatile s64 *) 0x040002a0)) * s;
  pDst->x = (s32) (((d * pSrc->x) + (((s64) 1) << 44)) >> 45);
  pDst->y = (s32) (((d * pSrc->y) + (((s64) 1) << 44)) >> 45);
  pDst->z = (s32) (((d * pSrc->z) + (((s64) 1) << 44)) >> 45);
}

s32 func_02002388(s32 *arg0,s32 *arg1) {
s32 dx=arg0[0]-arg1[0];
s32 dy=arg0[1]-arg1[1];
s32 dz=arg0[2]-arg1[2];
s64 sum=(s64)dx*dx; sum+=(s64)dy*dy; sum+=(s64)dz*dz;
*(volatile u16 *)0x40002b0=1;
*(volatile u64 *)0x40002b8=(u64)sum<<2;
while(*(volatile u16 *)0x40002b0&0x8000){}
return (*(volatile s32 *)0x40002b4+1)>>1;
}

u16 func_02002404(s32 y, s32 x)
{
    extern s32 func_02001fb0(s32, s32);
    extern const s16 data_0213e394[];

    u32 positive, bias, denominator, numerator;

    if (y > 0) {
        if (x > 0) {
            if (x > y) {
                numerator = (u32)y;
                denominator = (u32)x;
                bias = 0;
                positive = TRUE;
            } else if (x < y) {
                numerator = (u32)x;
                denominator = (u32)y;
                bias = 0x4000;
                positive = FALSE;
            } else {
                return 0x2000;
            }
        } else if (x < 0) {
            x = -x;

            if (x < y) {
                numerator = (u32)x;
                denominator = (u32)y;
                bias = 0x4000;
                positive = TRUE;
            } else if (x > y) {
                numerator = (u32)y;
                denominator = (u32)x;
                bias = 0x8000;
                positive = FALSE;
            } else {
                return 0x6000;
            }
        } else {
            return 0x4000;
        }
    } else if (y < 0) {
        y = -y;

        if (x < 0) {
            x = -x;

            if (x > y) {
                numerator = (u32)y;
                denominator = (u32)x;
                bias = (u32)-0x8000;
                positive = TRUE;
            } else if (x < y) {
                numerator = (u32)x;
                denominator = (u32)y;
                bias = (u32)-0x4000;
                positive = FALSE;
            } else {
                return 0xA000;
            }
        } else if (x > 0) {
            if (x < y) {
                numerator = (u32)x;
                denominator = (u32)y;
                bias = (u32)-0x4000;
                positive = TRUE;
            } else if (x > y) {
                numerator = (u32)y;
                denominator = (u32)x;
                bias = 0;
                positive = FALSE;
            } else {
                return 0xE000;
            }
        } else {
            return 0xC000;
        }
    } else {
        u16 result = 0;

        if (x < 0) {
            result = 0x8000;
        }

        return result;
    }

    if (denominator == 0) {
        return 0;
    }

    if (positive) {
        return (u16)(bias + data_0213e394[
            func_02001fb0((s32)numerator, (s32)denominator) >> 5
        ]);
    } else {
        return (u16)(bias - data_0213e394[
            func_02001fb0((s32)numerator, (s32)denominator) >> 5
        ]);
    }
}

void func_02002594(void) {
}

void func_020055f0(void);
s32 func_02005df8(void);
void func_02008414(void);
void func_02008568(s32,void *,s32,s32,s32);
void func_02008e24(s32,void *,s32);
void func_02002598(void) {
*(volatile u16 *)0x4000304 |= 0x8000;
*(volatile u16 *)0x4000304 = (*(volatile u16 *)0x4000304 & ~0x20e) | 0x20e;
*(volatile u16 *)0x4000304 |= 1;
func_020055f0();
while((&data_0215cd20)[1]==0) {
s32 id=func_02005df8();
if(id==-3) func_02008414();
(&data_0215cd20)[1]=id;
}
*(volatile u16 *)0x4000004=0;
*(volatile u32 *)0x4000000=0;
if(((s32 *)&data_02145ba0)[1]!=-1) {
func_02008568(((s32 *)&data_02145ba0)[1],(void *)0x4000008,0,0x60,1);
*(volatile u16 *)0x400006c=0;
func_02008568(((s32 *)&data_02145ba0)[1],(void *)0x4001000,0,0x70,1);
} else {
func_02008e24(0,(void *)0x4000008,0x60);
*(volatile u16 *)0x400006c=0;
func_02008e24(0,(void *)0x4001000,0x70);
}
*(volatile u16 *)0x4000020=0x100;
*(volatile u16 *)0x4000026=0x100;
*(volatile u16 *)0x4000030=0x100;
*(volatile u16 *)0x4000036=0x100;
*(volatile u16 *)0x4001020=0x100;
*(volatile u16 *)0x4001026=0x100;
*(volatile u16 *)0x4001030=0x100;
*(volatile u16 *)0x4001036=0x100;
}

void func_020026e0(s32 arg0) {
    u32 v = (u32)arg0 << 24;
    *(volatile u16 *)0x4000004 = (*(volatile u16 *)0x4000004 & 0x3f) | (v >> 16) | ((arg0 & 0x100) >> 1);
}
