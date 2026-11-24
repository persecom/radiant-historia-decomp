/* 11 functions from 0x0201E034 to 0x0201EDB0 (main), found by ds-decomp. */
#include "common.h"

extern void func_02019c4c(void);
extern u64 _dmul(u64, u64);

typedef union {
    u64 d;
    struct { u32 lo, hi; } w;
} DoubleBits;
double func_0201e034(double x) {
s32 hi=((s32 *)&x)[1];
s32 exp=((hi>>20)&0x7ff)-1023;
u32 lo=((u32 *)&x)[0];
s32 mask;
u32 old;
if(exp<20) {
if(exp<0) {
if(1.0e300+x>0.0) {
if(hi>=0) {lo=0;hi=0;}
else if(((hi&0x7fffffff)|lo)!=0) {lo=0;hi=0xbff00000;}
}
} else {
mask=0xfffff;
if(((hi&(mask>>exp))|lo)==0)return x;
if(1.0e300+x>0.0) {
if(hi<0)hi+=0x100000>>exp;
hi&=~(mask>>exp);lo=0;
}
}
} else if(exp>51) {
if(exp==1024)return x+x;
return x;
} else {
u32 m=0xffffffff;
s32 shift=exp-20;
old=lo;
if(!(lo&(m>>shift)))return x;
if(1.0e300+x>0.0) {
if(hi<0) {
if(exp==20)hi++;
else {lo+=1U<<(52-exp);if(lo<old)hi++;}
}
lo&=~(m>>shift);
}
}
((s32 *)&x)[1]=hi;((u32 *)&x)[0]=lo;
return x;
}

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
        u.d = _dmul(u.d, 0x4350000000000000ULL);
        hx = u.w.hi & 0x7fffffff;
        e = e - 54;
        *exp = e;
    }
    u.w.hi = (u.w.hi & 0x800fffff) | 0x3fe00000;
    *exp += ((s32)hx >> 20) - 1022;
    return u.d;
}

extern int func_020136ec(double);
extern double func_0201de78(double, double);
double func_0201e2b8(double x, int n) {
    int k, hx, lx;
    if (func_020136ec(x) <= 2 || x == 0.0) {
        return x;
    }
    hx = ((int *)&x)[1];
    lx = ((int *)&x)[0];
    k = (hx & 0x7ff00000) >> 20;
    if (k == 0) {
        if ((lx | (hx & 0x7fffffff)) == 0) return x;
        x *= 1.80143985094819840000e+16;
        hx = ((int *)&x)[1];
        k = ((hx & 0x7ff00000) >> 20) - 54;
        if (n < -50000) return 1.0e-300 * x;
    }
    if (k == 0x7ff) return x + x;
    k = k + n;
    if (k > 0x7fe) return 1.0e300 * func_0201de78(1.0e300, x);
    if (k > 0) {
        ((int *)&x)[1] = (hx & 0x800fffff) | (k << 20);
        return x;
    }
    if (k <= -54) {
        if (n > 50000) return 1.0e300 * func_0201de78(1.0e300, x);
        else return 1.0e-300 * func_0201de78(1.0e-300, x);
    }
    k += 54;
    ((int *)&x)[1] = (hx & 0x800fffff) | (k << 20);
    return x * 5.55111512312578270212e-17;
}

double func_0201dbfc(double, double, int);
double func_0201cd34(double, double);
double _dsub(double, double);
int func_0201c654(double, double *);
double func_0201e518(double x) {
double y[2];
double zero = 0.0;
int ix = ((int *)&x)[1] & 0x7fffffff;
if (ix <= 0x3fe921fb) return func_0201dbfc(x, zero, 0);
if (ix >= 0x7ff00000) return _dsub(x,x);
switch (func_0201c654(x,y)&3) {
case 0: return func_0201dbfc(y[0],y[1],1);
case 1: return func_0201cd34(y[0],y[1]);
case 2: return _dsub(zero,func_0201dbfc(y[0],y[1],1));
default: return _dsub(zero,func_0201cd34(y[0],y[1]));
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

