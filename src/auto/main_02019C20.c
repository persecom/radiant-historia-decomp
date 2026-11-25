/* 3 functions from 0x02019C20 to 0x0201ABC4 (main), found by ds-decomp. */
#include "common.h"

extern u64 func_0201e1f8(u32, u32, s32 *);
extern double _dmul(double, double);
extern double _dadd(double, double);
extern double _dsub(double, double);
extern int _dgr(double, double);
extern double func_0201e014(double);
extern double func_02020c58(double, double);
extern void func_0201f800(u32);
extern double func_02020058(double);
extern u32 data_02145c2c;
extern u32 data_02160034;
extern void func_0201e2b8(u64, s32);
void func_02019c20(u32 arg0, u32 arg1, s32 arg2) {
    s32 local;
    u64 tmp = func_0201e1f8(arg0, arg1, &local);
    local += arg2;
    func_0201e2b8(tmp, local);
}

double func_0201a460(u32 arg0, u32 arg1, double x) {
    s32 ix = ((s32 *)&x)[1] & 0x7fffffff;
    double z, r, s, t, p, q;

    if (ix < 0x3ff00000) goto less1;
    if (((ix - 0x3ff00000) | ((u32 *)&x)[0]) == 0)
        return _dadd(_dmul(x, 1.570796326794896558e+00), _dmul(x, 6.12323399573676603587e-17));
    data_02160034 = 0x21;
    func_0201f800(data_02145c2c);
    return x;

less1:
    if (ix >= 0x3fe00000) goto big;
    if (ix < 0x3e400000) {
        if ((x + 8.98846567431158e+307) > 1.0) return x;
        z = _dmul(x, x);
        r = 1.66666666666666657415e-01+z*(-3.25565818622400915405e-01+z*(2.01212532134862925881e-01+z*(-4.00555345006794114027e-02+z*(7.91534994289814532176e-04+z*3.47933107596021167570e-05))));
        return _dadd(x, _dmul(x, _dmul(z, r)));
    }
    z = _dmul(x, x);
    r = 1.66666666666666657415e-01+z*(-3.25565818622400915405e-01+z*(2.01212532134862925881e-01+z*(-4.00555345006794114027e-02+z*(7.91534994289814532176e-04+z*3.47933107596021167570e-05))));
    return _dadd(x, _dmul(x, _dmul(z, r)));

big:
    t = _dmul(_dsub(1.0, func_0201e014(x)), 0.5);
    s = _dmul(t, t);
    p = -2.40339491173441421878e+00+s*(2.02094576023350569471e+00+s*(-6.88283971605453293030e-01+s*7.70381505559019352791e-02));
    q = 1.66666666666666657415e-01+s*(-3.25565818622400915405e-01+s*(2.01212532134862925881e-01+s*(-4.00555345006794114027e-02+s*(7.91534994289814532176e-04+s*3.47933107596021167570e-05))));
    r = func_02020c58(q, p);
    r = _dsub(t, _dmul(_dmul(r, t), 2.0));
    s = _dsub(_dmul(1.570796326794896558e+00, x), _dsub(_dmul(r, 2.0), 6.12323399573676603587e-17));
    if (((s32 *)&x)[1] >= 0) return s;
    return _dsub(0.0, s);
}

