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
extern const double data_0213ee18[8];
int func_0201d04c(double *x, double *y, int e0, int nx, int prec, const int *ipio2)
{
    int jz, jx, jv, jp, jk, carry, n, iq[20], i, j, k, m, q0, ih;
    double z, fw, f[20], fq[20], q[20];

    jk = data_0213ee08[prec];
    jp = jk;

    jx = nx - 1;
    jv = (e0 - 3) / 24;
    if (jv < 0) jv = 0;
    q0 = e0 - 24 * (jv + 1);

    j = jv - jx;
    m = jx + jk;
    for (i = 0; i <= m; i++, j++) {
        f[i] = (j < 0) ? 0.0 : (double)ipio2[j];
    }

    for (i = 0; i <= jk; i++) {
        for (j = 0, fw = 0.0; j <= jx; j++) {
            fw += x[j] * f[jx + i - j];
        }
        q[i] = fw;
    }

    jz = jk;
recompute:
    for (i = 0, j = jz, z = q[jz]; j > 0; i++, j--) {
        fw = (double)((int)(5.9604644775390625e-08 * z));
        iq[i] = (int)(z - 16777216.0 * fw);
        z = q[j - 1] + fw;
    }

    z = func_02019c20(z, q0);
    z -= 8.0 * func_0201e034(0.125 * z);
    n = (int)z;
    z -= (double)n;
    ih = 0;
    if (q0 > 0) {
        i = (iq[jz - 1] >> (24 - q0));
        n += i;
        iq[jz - 1] -= i << (24 - q0);
        ih = iq[jz - 1] >> (23 - q0);
    } else if (q0 == 0) {
        ih = iq[jz - 1] >> 23;
    } else if (z >= 0.5) {
        ih = 2;
    }

    if (ih > 0) {
        n += 1;
        carry = 0;
        for (i = 0; i < jz; i++) {
            j = iq[i];
            if (carry == 0) {
                if (j != 0) {
                    carry = 1;
                    iq[i] = 0x1000000 - j;
                }
            } else {
                iq[i] = 0xffffff - j;
            }
        }
        if (q0 > 0) {
            switch (q0) {
                case 1:
                    iq[jz - 1] &= 0x7fffff;
                    break;
                case 2:
                    iq[jz - 1] &= 0x3fffff;
                    break;
            }
        }
        if (ih == 2) {
            z = 1.0 - z;
            if (carry != 0) {
                z -= func_02019c20(1.0, q0);
            }
        }
    }

    if (z == 0.0) {
        j = 0;
        for (i = jz - 1; i >= jk; i--) {
            j |= iq[i];
        }
        if (j == 0) {
            for (k = 1; iq[jk - k] == 0; k++) {
            }
            for (i = jz + 1; i <= jz + k; i++) {
                f[jx + i] = (double)ipio2[jv + i];
                for (j = 0, fw = 0.0; j <= jx; j++) {
                    fw += x[j] * f[jx + i - j];
                }
                q[i] = fw;
            }
            jz += k;
            goto recompute;
        }
    }

    if (z == 0.0) {
        jz -= 1;
        q0 -= 24;
        while (iq[jz] == 0) {
            jz--;
            q0 -= 24;
        }
    } else {
        z = func_02019c20(z, -q0);
        if (z >= 16777216.0) {
            fw = (double)((int)(5.9604644775390625e-08 * z));
            iq[jz] = (int)(z - 16777216.0 * fw);
            jz += 1;
            q0 += 24;
            iq[jz] = (int)fw;
        } else {
            iq[jz] = (int)z;
        }
    }

    fw = func_02019c20(1.0, q0);
    for (i = jz; i >= 0; i--) {
        q[i] = fw * (double)iq[i];
        fw *= 5.9604644775390625e-08;
    }

    for (i = jz; i >= 0; i--) {
        for (fw = 0.0, k = 0; k <= jp && k <= jz - i; k++) {
            fw += data_0213ee18[k] * q[i + k];
        }
        fq[jz - i] = fw;
    }

    switch (prec) {
        case 0:
            fw = 0.0;
            for (i = jz; i >= 0; i--) {
                fw += fq[i];
            }
            y[0] = (ih == 0) ? fw : -fw;
            break;
        case 1:
        case 2:
            fw = 0.0;
            for (i = jz; i >= 0; i--) {
                fw += fq[i];
            }
            y[0] = (ih == 0) ? fw : -fw;
            fw = fq[0] - fw;
            for (i = 1; i <= jz; i++) {
                fw += fq[i];
            }
            y[1] = (ih == 0) ? fw : -fw;
            break;
        case 3:
            for (i = jz; i > 0; i--) {
                fw = fq[i - 1] + fq[i];
                fq[i] += fq[i - 1] - fw;
                fq[i - 1] = fw;
            }
            for (i = jz; i > 1; i--) {
                fw = fq[i - 1] + fq[i];
                fq[i] += fq[i - 1] - fw;
                fq[i - 1] = fw;
            }
            for (fw = 0.0, i = jz; i >= 2; i--) {
                fw += fq[i];
            }
            if (ih == 0) {
                y[0] = fq[0];
                y[1] = fq[1];
                y[2] = fw;
            } else {
                y[0] = -fq[0];
                y[1] = -fq[1];
                y[2] = -fw;
            }
            break;
    }
    return n & 7;
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
