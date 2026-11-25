/* 5 functions from 0x0201D04C to 0x0201E034 (main), found by ds-decomp. */
#include "common.h"

double _dsub(double,double);
int func_0201ff80(double);
double _dmul(double,double);
double _dadd(double,double);
double _dflt(s32);
int _deq(double,double);
double func_02019c20(double,s32);
double func_0201e034(double);
int func_0201f294(double,double);
extern const s32 data_0213ee08[4];
int func_0201d04c(double *x, double *y, int e0, int nx, int pec, const int *ipio2)
{
    double q[40];
    double f[20];
    int iq[20];
    double d, d2, dd, z;
    int local_04, local_08, local_10, local_14, local_18, local_1c, local_20, local_24;
    int i, j, k, m, l, r6, r10;

    int jv = (e0 - 3) / 9;
    local_24 = data_0213ee08[pec];
    if (jv < 0) jv = 0;
    local_18 = e0 - (jv + 1) * 24;
    local_14 = 24 - local_18;
    local_10 = 23 - local_18;

    j = jv - (nx - 1);
    if ((nx - 1) + local_24 >= 0) {
        for (i = 0; i <= (nx - 1) + local_24; i++, j++) {
            if (j < 0) {
                union { int w[2]; double d; } u;
                u.w[0] = u.w[1] = i;
                z = u.d;
            } else {
                z = _dflt(ipio2[j]);
            }
            f[i] = z;
        }
    }

    if (local_24 >= 0) {
        for (k = 0; k <= local_24; k++) {
            d = 0.0;
            for (m = 0; m <= nx - 1; m++) {
                d = _dadd(d, _dmul(x[m], f[(nx - 1) + k - m]));
            }
            q[k] = d;
        }
    }

    local_04 = local_24;
    local_14 = 24 - local_18;
    local_10 = 23 - local_18;
    l = 0;
    r6 = local_04;
    d2 = q[local_04];
    if (local_04 > 0) {
        do {
            {
                union { double d; u32 w[2]; } c32;
                c32.w[0] = 0;
                c32.w[1] = 0x40400000;
                dd = _dflt(func_0201ff80(_dmul(c32.d, d2)));
            }
            {
                union { double d; u32 w[2]; } c53;
                c53.w[0] = 0;
                c53.w[1] = 0x43400000;
                iq[l] = func_0201ff80(_dsub(d2, _dmul(c53.d, dd)));
            }
            d2 = _dadd(dd, q[r6]);
            r6--;
            l++;
        } while (r6 > 0);
    }
    local_20 = func_0201ff80(func_02019c20(d2, local_18));
    {
        union { double d; u32 w[2]; } c1;
        c1.w[0] = 0;
        c1.w[1] = 0x3FC00000;
        d = _dmul(c1.d, func_0201e034(_dmul(c1.d, func_02019c20(d2, local_18))));
        {
            union { double d; u32 w[2]; } c15;
            c15.w[0] = 0;
            c15.w[1] = 0x3FC60000;
            dd = _dsub(func_02019c20(d2, local_18), _dmul(c15.d, func_0201e034(_dmul(c1.d, func_02019c20(d2, local_18)))));
        }
    }
    local_20 = func_0201ff80(_dsub(dd, _dflt(local_20)));
    d2 = _dsub(dd, _dflt(local_20));

    if (local_18 > 0) {
        int *p = &iq[local_04 - 1];
        int v = *p;
        int lo = v - ((v >> local_14) << local_14);
        *p = lo;
        local_20 += v >> local_14;
        r10 = lo >> local_10;
    } else if (local_18 == 0) {
        r10 = iq[local_04 - 1] >> 23;
    }

    {
        union { double d; u32 w[2]; } half;
        half.w[0] = r10;
        half.w[1] = 0x3FE00000;
        if (func_0201f294(d2, half.d) >= 0) r10 = 2;
    }

    if (r10 > 0) {
        int carry = 0;
        local_20++;
        for (j = 0; j < local_04; j++) {
            if (carry == 0) {
                if (iq[j] != 0) {
                    iq[j] = 0x1000000 - iq[j];
                    carry = 1;
                }
            } else {
                iq[j] = 0xFFFFFF - iq[j];
            }
        }
    }

    if (local_18 > 0) {
        if (local_18 == 1) {
            iq[local_04 - 1] &= 0x7FFFFF;
        } else if (local_18 == 2) {
            iq[local_04 - 1] &= 0x3FFFFF;
        }
    }

    if (r10 == 2) {
        union { double d; u32 w[2]; } sub;
        sub.w[0] = 0;
        sub.w[1] = 0x3FF00000;
        d = _dsub(sub.d, d2);
    }

    return 0;
}

double func_0201dbfc(double x,double y,int iy) {
 double z,v,r;
 s32 ix=((s32 *)&x)[1]&0x7fffffff;
 if(ix<0x3e400000){if(func_0201ff80(x)==0)return x;}
 z=x*x;
 v=z*x;
 r=0.00833333333332249+z*(-0.0001984126982985795+z*(0.0000027557313707070068+z*(-2.5050760253406863e-8+z*1.58969099521155e-10)));
 if(iy==0)return x+v*(-0.16666666666666632+z*r);
 return _dsub(x,_dsub(_dsub(z*_dsub(0.5*y,v*r),y),-0.16666666666666632*v));
}

double func_0201de78(double x, double y) {
    ((u32 *)&x)[1] = (((u32 *)&x)[1] & ~0x80000000) | (((u32 *)&y)[1] & 0x80000000);
    return x;
}

double func_0201cd34(double, double);
double func_0201dbfc(double, double, int);
double _dsub(double, double);
int func_0201c654(double, double *);
double func_0201dea0(double x) {
double y[2];
double zero = 0.0;
s32 ix = ((s32 *)&x)[1] & 0x7fffffff;
if (ix <= 0x3fe921fb) return func_0201cd34(x, zero);
if (ix >= 0x7ff00000) return _dsub(x,x);
switch (func_0201c654(x,y)&3) {
case 0: return func_0201cd34(y[0],y[1]);
case 1: return _dsub(zero,func_0201dbfc(y[0],y[1],1));
case 2: return _dsub(zero,func_0201cd34(y[0],y[1]));
default: return func_0201dbfc(y[0],y[1],1);
}
}

double func_0201e014(double x) {
    ((u32 *)&x)[1] &= ~0x80000000;
    return x;
}
