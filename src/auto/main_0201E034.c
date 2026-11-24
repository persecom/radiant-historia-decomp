/* 11 functions from 0x0201E034 to 0x0201EDB0 (main), found by ds-decomp. */
#include "common.h"

extern void func_02019c4c(void);
extern u64 func_0201edb0(u64, u64);

typedef union {
    u64 d;
    struct { u32 lo, hi; } w;
} DoubleBits;
u64 func_0201e1f8(u64 x, s32 *exp, ...) {
    union { u64 d; struct { u32 lo, hi; } w; } u;
    u32 hx;
    s32 e;
    u.d = x;
    hx = u.w.hi & 0x7fffffff;
    e = 0;
    *exp = e;
    if (hx >= 0x7ff00000) {
        return x;
    }
    if ((hx | u.w.lo) == 0) {
        return x;
    }
    if (hx < 0x100000) {
        u.d = func_0201edb0(u.d, 0x4350000000000000ULL);
        hx = u.w.hi & 0x7fffffff;
        e = e - 54;
        *exp = e;
    }
    u.w.hi = (u.w.hi & 0x800fffff) | 0x3fe00000;
    *exp += ((s32)hx >> 20) - 1022;
    return u.d;
}

double func_0201dbfc(double, double, int);
double func_0201cd34(double, double);
double func_0201e9fc(double, double);
int func_0201c654(double, double *);
double func_0201e518(double x) {
double y[2];
double zero = 0.0;
int ix = ((int *)&x)[1] & 0x7fffffff;
if (ix <= 0x3fe921fb) return func_0201dbfc(x, zero, 0);
if (ix >= 0x7ff00000) return func_0201e9fc(x,x);
switch (func_0201c654(x,y)&3) {
case 0: return func_0201dbfc(y[0],y[1],1);
case 1: return func_0201cd34(y[0],y[1]);
case 2: return func_0201e9fc(zero,func_0201dbfc(y[0],y[1],1));
default: return func_0201e9fc(zero,func_0201cd34(y[0],y[1]));
}
}

void func_0201e690(void) {
    func_02019c4c();
}

extern void func_0201a460(void);
void func_0201e69c(void) {
    func_0201a460();
}

extern void func_0201abc4(void);
void func_0201e6a8(void) {
    func_0201abc4();
}

extern void func_0201b2f4(void);
void func_0201e6b4(void) {
    func_0201b2f4();
}

extern void func_0201b4cc(void);
void func_0201e6c0(void) {
    func_0201b4cc();
}

