/* 3 functions from 0x02019C20 to 0x0201ABC4 (main), found by ds-decomp. */
#include "common.h"

extern u64 func_0201e1f8(u32, u32, s32 *);
extern double _dmul(double, double);
extern double _dadd(double, double);
extern double _dsub(double, double);
extern int _dgr(double, double);
extern double func_0201e014(double);
extern double func_02020c58(double, double);
extern double func_0201f800(u32);
extern double func_02020058(double);
extern u32 data_02145c2c;
extern u32 data_02160034;
extern void func_0201e2b8(u64, s32);

#pragma opt_propagation off

#pragma opt_propagation on

double func_0201a460(double x) {
    double t, w, p, q, c, r, s;
    s32 hx = ((s32 *)&x)[1];
    s32 ix = hx & 0x7fffffff;
    if (ix >= 0x3ff00000) {
        if (((ix - 0x3ff00000) | ((u32 *)&x)[0]) == 0)
            return _dadd(_dmul(1.570796326794896558e+00, x), _dmul(6.12323399573676603587e-17, x));
        data_02160034 = 0x21;
        return func_0201f800(data_02145c2c);
    }
    if (ix < 0x3fe00000) {
        if (ix < 0x3e400000) {
            if (1.00000000000000005250e+300 + x > 1.0) return x;
        } else {
            t = x*x;
        }
        p = t * (1.66666666666666657415e-01+t*(-3.25565818622400915405e-01+t*(2.01212532134862925881e-01+t*(-4.00555345006794114027e-02+t*(7.91534994289814532176e-04+t*3.47933107596021167570e-05)))));
        q = (1.0+t*(-2.40339491173441421878e+00+t*(2.02094576023350569471e+00+t*(-6.88283971605453293030e-01+t*7.70381505559019352791e-02))));
        w = func_02020c58(p,q);
        return x + x*w;
    }
    w = 1.0 - func_0201e014(x);
    t = 0.5*w;
    p = t * (1.66666666666666657415e-01+t*(-3.25565818622400915405e-01+t*(2.01212532134862925881e-01+t*(-4.00555345006794114027e-02+t*(7.91534994289814532176e-04+t*3.47933107596021167570e-05)))));
    q = (1.0+t*(-2.40339491173441421878e+00+t*(2.02094576023350569471e+00+t*(-6.88283971605453293030e-01+t*7.70381505559019352791e-02))));
    s = func_02020058(t);
    if (ix >= 0x3fef3333) {
        w = func_02020c58(p,q);
        t = 1.570796326794896558e+00 - (2.0*(s+s*w)-6.12323399573676603587e-17);
    } else {
        w = s;
        ((u32 *)&w)[0] = 0;
        c = func_02020c58(t-w*w,s+w);
        r = func_02020c58(p,q);
        p = (2.0*s)*r-(6.12323399573676603587e-17-2.0*c);
        q = 0.78539816339744827900-2.0*w;
        t = 0.78539816339744827900-(p-q);
    }
    if (hx > 0) return t;
    return 0.0-t;
}

