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

double func_02019c4c(double x) {
    s32 hx = ((s32 *)&x)[1];
    s32 ix = hx & 0x7fffffff;
    double s, a, z, p, q, r, w, c, df;

    if (ix >= 0x3ff00000) {
        if (((ix - 0x3ff00000) | ((u32 *)&x)[0]) == 0) {
            if (hx > 0) return 0.0;
            return 3.14159265358979311600e+00;
        }
        data_02160034 = 0x21;
        return func_0201f800(data_02145c2c);
    }
    if (ix < 0x3fe00000) {
        if (ix <= 0x3c600000) return 1.570796326794896558e+00 + 6.12323399573676603587e-17;
        z = _dmul(x, x);
        p = z*(1.66666666666666657415e-01+z*(-3.25565818622400915405e-01+z*(2.01212532134862925881e-01+z*(-4.00555345006794114027e-02+z*(7.91534994289814532176e-04+z*3.47933107596021167570e-05)))));
        q = 1.0+z*(-2.40339491173441421878e+00+z*(2.02094576023350569471e+00+z*(-6.88283971605453293030e-01+z*7.70381505559019352791e-02)));
        r = func_02020c58(p, q);
        return _dsub(1.570796326794896558e+00, _dsub(x, _dsub(6.12323399573676603587e-17, _dmul(x, r))));
    }
    if (hx < 0) {
        z = _dmul(0.5, _dadd(1.0, x));
        p = z*(1.66666666666666657415e-01+z*(-3.25565818622400915405e-01+z*(2.01212532134862925881e-01+z*(-4.00555345006794114027e-02+z*(7.91534994289814532176e-04+z*3.47933107596021167570e-05)))));
        q = 1.0+z*(-2.40339491173441421878e+00+z*(2.02094576023350569471e+00+z*(-6.88283971605453293030e-01+z*7.70381505559019352791e-02)));
        s = func_02020058(z);
        r = func_02020c58(p, q);
        w = _dsub(_dmul(r, s), 6.12323399573676603587e-17);
        return _dsub(3.14159265358979311600e+00, _dmul(2.0, _dadd(s, w)));
    }
    z = _dmul(0.5, _dsub(1.0, x));
    s = func_02020058(z);
    a = s;
    ((u32 *)&a)[0] = 0;
    c = func_02020c58(_dsub(z, _dmul(a, a)), _dadd(s, a));
    p = z*(1.66666666666666657415e-01+z*(-3.25565818622400915405e-01+z*(2.01212532134862925881e-01+z*(-4.00555345006794114027e-02+z*(7.91534994289814532176e-04+z*3.47933107596021167570e-05)))));
    q = 1.0+z*(-2.40339491173441421878e+00+z*(2.02094576023350569471e+00+z*(-6.88283971605453293030e-01+z*7.70381505559019352791e-02)));
    r = func_02020c58(p, q);
    w = _dadd(c, _dmul(r, s));
    return _dmul(2.0, _dadd(a, w));
}
#pragma opt_propagation on
