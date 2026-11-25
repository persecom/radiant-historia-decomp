/* 11 functions from 0x0201FD28 to 0x02020C58 (main), found by ds-decomp. */
#include "common.h"
extern u32 data_02160034;

u64 func_0201fd28(u32 numerator, u32 denominator)
{
    u32 remainder = 0;
    s32 i;

    if (denominator == 0) {
        return numerator;
    }

    if (numerator < denominator) {
        return (u64)numerator << 32;
    }

    for (i = 0; i < 32; i++) {
        remainder = (remainder << 1) | (numerator >> 31);
        numerator <<= 1;

        if (remainder >= denominator) {
            remainder -= denominator;
            numerator |= 1;
        }
    }

    return ((u64)remainder << 32) | numerator;
}

u32 func_0201ff40(u32 x) {
    s32 e;
    if ((x & 0x80000000u) == 0) {
        e = 0x9e;
        e -= (s32)(x >> 23);
        if (e < 0) goto neg_result;
        return ((x << 8) | 0x80000000u) >> e;
    }
    if (0xff000000u >= (x << 1)) return 0;
    return 0xffffffffu;
neg_result:
    return 0xffffffffu;
}

int func_0201ff80(u32 lo, u32 hi) {
    s32 bias = 0x41e;
    s32 e;
    u32 m;
    s32 r;
    e = bias;
    e -= (s32)((hi & 0x7fffffffu) >> 20);
    if (e < 0) goto saturate;
    if (e >= 32) goto zero;
    m = (hi << 11) | 0x80000000u | (lo >> 21);
    if ((s32)hi < 0) return -(s32)(m >> e);
    return (s32)(m >> e);
zero:
    return 0;
saturate:
    return ~((s32)hi >> 31) + 0x80000000;
}

#pragma optimization_level 2
u64 func_0201ffcc(u64 bits) {
    u32 lo = bits, hi = bits >> 32;
    s32 shift;
    register u64 mantissa;
    if (!(hi & 0x80000000)) {
        shift = 0x43e - (hi >> 20);
        if (shift < 0) goto overflow;
        if (shift >= 64) goto zero;
        mantissa = (bits << 11) | 0x8000000000000000ULL;
        if (shift > 32) { shift -= 32; return (u32)(mantissa >> 32) >> shift; } else
        return mantissa >> shift;
    }
    if (bits > 0xfff0000000000000ULL) goto overflow;
zero:
    return 0;
overflow:
    return ~(u64)0;
}
#pragma optimization_level 4
u64 func_02020058(u64 value) {
u32 lo=(u32)value,hi=(u32)(value>>32);
s32 exponent;
u64 remainder,trial;
u32 highRoot=0,lowRoot=0,highTrial=0,lowTrial=0,bit;
if(hi>=0x7ff00000) {
if(hi&0x80000000) { if((hi&0x7fffffff)==0 && lo==0) return value; }
else if((lo|(hi<<12))==0) return value;
data_02160034=0x21; return ((u64)(hi|0x7ff80000)<<32)|lo;
}
exponent=hi>>20;
if(exponent==0) {
if(hi==0 && lo==0) return value;
remainder=value;
exponent=1;
while((remainder & ((u64)1<<52))==0) { remainder<<=1; exponent--; }
} else remainder=((u64)(hi&0xfffff|0x100000)<<32)|lo;
if((exponent&1)==0) {exponent=(exponent>>1)-1;remainder<<=1;} else exponent>>=1;
remainder<<=1;
for(bit=0x200000;bit;bit>>=1) {
u32 t=highTrial+bit;
if((s32)t<=(s32)(remainder>>32)) {highTrial=t+bit; remainder-=(u64)t<<32;highRoot+=bit;}
remainder<<=1;
}
if(remainder>=(((u64)highTrial<<32)|0x80000000)) {
remainder-=((u64)highTrial<<32)|0x80000000;
highTrial++;lowRoot=0x80000000;
}
remainder<<=1;
for(bit=0x40000000;bit;bit>>=1) {
u32 t=lowTrial+bit;
trial=((u64)highTrial<<32)|t;
if(trial<=remainder) {lowTrial=t+bit;remainder-=trial;lowRoot+=bit;}
remainder<<=1;
}
if(remainder==0)lowRoot&=~1;
value=((u64)highRoot<<32)|lowRoot;
value=(value>>1)+(value&1);
return value+((u64)(0x1ff00000+(exponent<<20))<<32);
}

s32 func_020205f0(void) {
    return 0x7fffffff;
}

float func_02020604(float a, float b) { return a - b; }

