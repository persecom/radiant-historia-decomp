/* 21 functions from 0x0201EDB0 to 0x0201FD28 (main), found by ds-decomp. */
#include "common.h"

#pragma opt_propagation off
u32 func_0201f114(u32 lo, u32 hi) {
    u32 exp = hi >> 20;
    u32 sign = hi & 0x80000000;
    s32 e, shift;
    u32 m, r3;

    exp &= ~0x800;
    if (exp == 0) goto L_zero;
    if ((exp << 21) > 0xffdfffffU) goto L_nan;
    e = exp - 0x380;
    if (exp <= 0x380) goto L_denorm;
    if (e >= 0xff) goto L_inf;

    r3 = sign | ((hi << 12) >> 9) | (lo >> 29);
    hi = lo << 3;
    lo = r3 | (e << 23);
    if (hi == 0) return lo;
    if ((hi & 0x80000000) == 0) return lo;
    hi <<= 1;
    if (hi == 0) hi = lo & 1;
    if (hi != 0) lo++;
    return lo;

L_nan:
    if ((lo | (hi << 12)) != 0) goto L_nan2;
    lo = 0xff000000U;
    return sign | (lo >> 1);
L_nan2:
    return 0x7fffffff;
L_zero:
    if ((lo | (hi << 12)) != 0) goto L_zero2;
    return sign;
L_denorm:
    if (e == -23) goto L_440;
    if (e < -23) goto L_zero2;
    m = (((hi << 11) | 0x80000000) >> 8) | (lo >> 29);
    shift = 1 - e;
    hi = lo << 3;
    lo = sign | (m >> shift);
    shift = 0x20 - shift;
    m = m << shift;
    if (hi != 0) m |= 1;
    hi = m;
    if (hi == 0) return lo;
    if ((hi & 0x80000000) == 0) return lo;
    hi <<= 1;
    if (hi == 0) hi = lo & 1;
    if (hi != 0) lo++;
    return lo;
L_440:
    return sign + ((lo | (hi << 12)) != 0);
L_zero2:
    return sign;
L_inf:
    lo = 0xff000000U;
    return sign | (lo >> 1);
}
#pragma opt_propagation on
u64 _dflt(s32 arg0) {
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

#pragma push
#pragma opt_propagation off
u32 func_0201f884(s32 arg0) {
 u32 sign=(u32)arg0 & 0x80000000;
 u32 x=(u32)arg0;
 if((s32)sign<0) x=-x;
 if(!x) return x;
 {
 u32 lz=0, probe=x;
 while ((s32)probe>=0) { ++lz; probe<<=1; }
 u32 low, result;
 x<<=lz;
 low=x&255;
 result=sign|((x+x)>>9)|((158-lz)<<23);
 if(low==0) return result;
 if(!(low&128)) return result;
 u32 round=low&127;
 if(round==0) round=result&1;
 if(round) ++result;
 return result;
 }
}
#pragma pop
u32 func_0201f8cc(u32 x) {
 u32 exp, rem, round;
 if (!x) return x;
 exp=158;
 while ((s32)x>=0) {x+=x; exp--;}
 rem=x&255; x+=x; x>>=9; x|=exp<<23;
 if (!rem) return x;
 if (!(rem&128)) return x;
 round=(rem&127) ? (rem&127) : (x&1); if(round) x++;
 return x;
}
#pragma optimization_level 4
long long func_0201f914(long long a, long long b) {
    unsigned long long dividend, divisor, bit, remainder;
    int negative = a < 0;
    if (b == 0) return a;
    dividend = negative ? -(unsigned long long)a : (unsigned long long)a;
    divisor = b < 0 ? -(unsigned long long)b : (unsigned long long)b;
    remainder = dividend;
    bit = 1;
    while (divisor < remainder && !(divisor >> 63)) {
        divisor <<= 1;
        bit <<= 1;
    }
    while (bit) {
        if (remainder >= divisor) remainder -= divisor;
        divisor >>= 1;
        bit >>= 1;
    }
    return negative ? -(long long)remainder : (long long)remainder;
}

