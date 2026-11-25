/* 2 functions from 0x0201ABC4 to 0x0201B4CC (main), found by ds-decomp. */
#include "common.h"
extern s32 data_02160034;
extern double data_02160044;
extern double func_0201e6a8(double);
extern double func_02020c58(double,double);
extern double _dsub(double,double);
extern double _dmul(double,double);
extern double _dadd(double,double);
extern double _dflt(s32);
extern s32 _deq(double, double);
extern double data_0216003c;

double func_0201abc4(double x) {
    double hfsq, f, s, z, R, w, t1, t2, dk;
    s32 k, hx, i, j;
    u32 lx;

    hx = ((s32 *)&x)[1];
    lx = ((u32 *)&x)[0];
    k = 0;
    if (hx < 0x00100000) {
        if (((hx & 0x7fffffff) | lx) == 0) {
            return -18014398509481984.0 / data_0216003c;
        }
        if (hx < 0) {
            data_02160034 = 33;
            return (x - x) / data_0216003c;
        }
        k -= 54;
        x *= 18014398509481984.0;
        hx = ((s32 *)&x)[1];
    }
    if (hx >= 0x7ff00000) return x + x;
    k += (hx >> 20) - 1023;
    hx &= 0x000fffff;
    i = (hx + 0x95f64) & 0x100000;
    ((s32 *)&x)[1] = hx | (i ^ 0x3ff00000);
    k += (i >> 20);
    f = x - 1.0;
    if ((0x000fffff & (2 + hx)) < 3) {
        if (f == data_0216003c) {
            if (k == 0) return data_0216003c;
            dk = (double)k;
            return dk * 6.93147180369123816490e-01 + dk * 1.90821492927058770002e-10;
        }
        R = f * f * (0.5 - 0.33333333333333333 * f);
        if (k == 0) return f - R;
        dk = (double)k;
        return dk * 6.93147180369123816490e-01 - ((R - dk * 1.90821492927058770002e-10) - f);
    }
    s = f / (2.0 + f);
    dk = (double)k;
    z = s * s;
    i = hx - 0x6147a;
    w = z * z;
    j = 0x6b851 - hx;
    t1 = w * (3.999999999940941908e-01 + w * (2.222219843214978396e-01 + w * 1.531383769920937332e-01));
    t2 = z * (6.666666666666735130e-01 + w * (2.857142874366239149e-01 + w * (1.818357216161805012e-01 + w * 1.479819860511658591e-01)));
    i |= j;
    R = t2 + t1;
    if (i > 0) {
        hfsq = 0.5 * f * f;
        if (k == 0) return f - (hfsq - s * (hfsq + R));
        else {
            t1 = dk * 6.93147180369123816490e-01;
            t2 = s * (hfsq + R);
            return t1 - ((hfsq - (t2 + dk * 1.90821492927058770002e-10)) - f);
        }
    } else {
        if (k == 0) return f - s * (f - R);
        else return dk * 6.93147180369123816490e-01 - ((s * (f - R) - dk * 1.90821492927058770002e-10) - f);
    }
}

double func_0201b2f4(double x) {
s32 hx=((s32 *)&x)[1];
s32 lx=((s32 *)&x)[0];
s32 k=0;
s32 i;
double y,z,l;
if(hx<0x00100000) {
if(((hx&0x7fffffff)|lx)==0) {
data_02160034=33;
return func_02020c58(-18014398509481984.0,data_02160044);
}
if(hx<0) {
data_02160034=33;
return func_02020c58(_dsub(x,x),data_02160044);
}
k-=54;
x=_dmul(x,18014398509481984.0);
hx=((s32 *)&x)[1];
}
if(hx>=0x7ff00000) return _dadd(x,x);
k+=(hx>>20)-1023;
i=(k&0x80000000)>>31;
hx=(hx&0x000fffff)|((1023-i)<<20);
y=(double)(k+i);
((s32 *)&x)[1]=hx;
z=y*3.694239077158931e-13 + 0.4342944819032518*func_0201e6a8(x);
return z+y*0.30102999566361177;
}
