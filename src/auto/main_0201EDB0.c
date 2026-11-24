/* 21 functions from 0x0201EDB0 to 0x0201FD28 (main), found by ds-decomp. */
#include "common.h"

u32 func_0201f114(u32 lo, u32 hi) {
    u32 sign = hi & 0x80000000;
    u32 exp = hi >> 20;
    u32 r3, round, result, m;
    s32 e, shift;

    exp &= ~0x800;
    if (exp == 0) goto L_zero;
    if (exp >= 0x7ff) goto L_nan;
    e = exp - 0x380;
    if (exp <= 0x380) goto L_denorm;
    if (e >= 0xff) goto L_inf;

    r3 = sign | ((hi << 12) >> 9) | (lo >> 29);
    round = lo << 3;
    result = r3 | (e << 23);
    if (round == 0) return result;
    if ((round & 0x80000000) == 0) return result;
    round <<= 1;
    if (round == 0) round = result & 1;
    if (round != 0) result++;
    return result;

L_zero:
    if ((lo | (hi << 12)) != 0) goto L_zero2;
    return sign;
L_nan:
    if ((lo | (hi << 12)) != 0) goto L_nan2;
    return sign | 0x7f800000;
L_inf:
    return sign | 0x7f800000;
L_nan2:
    return 0x7fffffff;
L_zero2:
    return sign;
L_denorm:
    if (e == -23) goto L_440;
    if (e < -23) goto L_zero2;
    m = (((hi << 11) | 0x80000000) >> 8) | (lo >> 29);
    shift = 1 - e;
    round = lo << 3;
    result = sign | (m >> shift);
    shift = 0x20 - shift;
    m = m << shift;
    if (round != 0) m |= 1;
    round = m;
    if (round == 0) return result;
    if ((round & 0x80000000) == 0) return result;
    round <<= 1;
    if (round == 0) round = result & 1;
    if (round != 0) result++;
    return result;
L_440:
    return sign + ((lo | (hi << 12)) != 0);
}

u64 func_0201f218(s32 arg0) {
    u32 sign = (u32)arg0 & 0x80000000;
    u32 x = (u32)arg0;
    if (x & 0x80000000) {
        x = -x;
    }
    if (x == 0) {
        return 0;
    }
    {
        u32 lz = __clz(x);
        u32 exp = 0x41e - lz;
        u32 lo, hi;
        x <<= lz;
        lo = x << 21;
        hi = ((x << 1) >> 12) | sign | (exp << 20);
        return ((u64)hi << 32) | lo;
    }
}

u64 func_0201f258(s32 arg0) {
    u32 x = (u32)arg0;
    u32 exp;
    u32 lo, hi;
    if (x == 0) {
        return 0;
    }
    if ((s32)x < 0) {
        return x;
    }
    exp = 0x41e - __clz(x);
    x <<= __clz(x);
    lo = x << 21;
    hi = ((x << 1) >> 12) | (exp << 20);
    return ((u64)hi << 32) | lo;
}

u64 func_0201f800(u32 arg0) {
    u32 sign = arg0 & 0x80000000;
    u32 exp = (arg0 >> 23) & 0xff;
    u32 frac = arg0 << 9;
    u32 e = exp;
    u32 lo, hi;
    if (exp == 0) {
        u32 lz;
        if (frac == 0) {
            return (u64)sign << 32;
        }
        frac >>= 1;
        lz = __clz(frac);
        frac <<= lz;
        e = 1 - lz;
    } else if (exp == 0xff) {
        if (frac == 0) {
            return (u64)(0x7ff00000 | sign) << 32;
        }
        return 0x7fffffffffffffffULL;
    }
    lo = frac << 20;
    hi = sign | (frac >> 12) | ((e + 0x380) << 20);
    return ((u64)hi << 32) | lo;
}

s32 func_0201f884(s32 arg0) {
    u32 sign = (u32)arg0 & 0x80000000;
    u32 x = (u32)arg0;
    if (x & 0x80000000) {
        x = -x;
    }
    if (x == 0) {
        return 0;
    }
    {
        u32 lz = __clz(x);
        u32 low, result, round;
        x <<= lz;
        low = x & 0xff;
        result = sign | (((x << 1) >> 9)) | ((0x9e - lz) << 23);
        if (low == 0) {
            return result;
        }
        if ((low & 0x80) == 0) {
            return result;
        }
        round = low & 0x7f;
        if (round == 0) {
            round = result & 1;
        }
        if (round != 0) {
            result++;
        }
        return result;
    }
}

