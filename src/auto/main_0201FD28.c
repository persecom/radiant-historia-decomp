/* 11 functions from 0x0201FD28 to 0x02020C58 (main), found by ds-decomp. */
#include "common.h"
extern u32 data_02160034;
typedef union { double d; struct { u32 lo, hi; } w; } DoubleBits_0201ff80;

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

