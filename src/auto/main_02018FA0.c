/* 7 functions from 0x02018C20 to 0x02019C20 (main), found by ds-decomp. */
#include "common.h"
typedef struct {u8 sign,pad;s16 exponent;u8 length;u8 digits[32];} Decimal19160;

extern void func_02019400();
extern void func_02018900(u8 *, s32);
extern u8 data_02145ecc[];
extern u8 data_02145efc[];
extern u8 data_02145f24[];
extern u8 data_02145f3c[];
extern u8 data_02145f4c[];
extern u8 data_02145f54[];
extern u8 data_02145f5c[];
extern u8 data_02145f64[];
extern u8 data_02145f6c[];
extern u8 data_02145f70[];
extern u8 data_02145f74[];
extern u8 data_02145f78[];
extern u8 data_02145f7c[];
extern u8 data_02145f80[];
extern u8 data_02145f84[];
extern u8 data_02145f88[];
extern u8 data_02145f8c[];
extern u8 data_02145f90[];
extern u8 data_02145f94[];
extern u8 data_02145f98[];
extern u8 data_02145f9c[];
void func_02018b84(void *, void *, s32);
void func_02018a04(void *, void *, void *);

s32 func_02018fa0(u8 *arg0, u8 *arg1)
{
    typedef struct {
        u8 unk00[2];
        s16 unk02;
        u8 unk04;
        u8 digits[1];
    } UnkNum;

    UnkNum *a = (UnkNum *)arg0;
    UnkNum *b = (UnkNum *)arg1;
    s32 i;
    s32 n;
    UnkNum *p;

    if (a->digits[0] == 0) {
        return b->digits[0] == 0;
    }
    if (b->digits[0] == 0) {
        s32 ret = 1;
        if (a->digits[0] != 0) {
            ret = 0;
        }
        return ret;
    }
    if (a->unk02 == b->unk02) {
        n = a->unk04;
        if (n > b->unk04) {
            n = b->unk04;
        }
        for (i = 0; i < n; i++) {
            if (a->digits[i] != b->digits[i]) {
                return 0;
            }
        }
        p = a;
        if (n == a->unk04) {
            p = b;
        }
        for (; i < ((volatile UnkNum *)p)->unk04; i++) {
            if (p->digits[i] != 0) {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

s32 func_02019080(const u8 *a, const u8 *b) {
    s32 i;
    s32 min_len;
    if (a[5] == 0) {
        return b[5] != 0;
    }
    if (b[5] == 0) {
        return 0;
    }
    if (*(const s16 *)(a + 2) == *(const s16 *)(b + 2)) {
        min_len = a[4];
        if (min_len > b[4]) {
            min_len = b[4];
        }
        for (i = 0; i < min_len; i++) {
            if (a[5 + i] < b[5 + i]) {
                return 1;
            }
            if (b[5 + i] < a[5 + i]) {
                return 0;
            }
        }
        if (min_len == a[4]) {
            for (; i < b[4]; i++) {
                if (b[5 + i] != 0) {
                    return 1;
                }
            }
        }
        return 0;
    }
    return *(const s16 *)(a + 2) < *(const s16 *)(b + 2);
}

void func_02019160(Decimal19160 *a,const Decimal19160 *b,const Decimal19160 *c){
s32 i,n,shift;
u8 *start,*end,*q,*scan;
const u8 *cs,*cp,*stop;
s32 round;
*a=*b;
if(c->digits[0]==0)return;
i=a->length;n=i;
if(n<c->length)n=c->length;
shift=a->exponent-c->exponent;
n+=shift;if(n>32)n=32;
for(;i<n;i=a->length){a->length++;a->digits[i]=0;}
start=a->digits;
end=start+n;
i=c->length+shift;
if(i<n)end=start+i;
cs=c->digits;
cp=cs+((end-start)-shift);
stop=cp;
while(end>start&&cp>cs){
--end;--cp;
if(*end<*cp){
q=end-1;
while(*q==0)--q;
while(q!=end){--*q;++q;*q+=10;}
}
*end-=*cp;
}
i=stop-cs;
if(i<c->length){
round=0;
if(*stop<5)round=1;
else if(*stop==5){
const u8 *last=c->digits+c->length;
++stop;
while(stop<last){if(*stop!=0)goto normalize;++stop;}
end=start+i+shift-1;
if(*end&1)round=1;
}
if(round){
if(*end<1){q=end-1;while(*q==0)--q;while(q!=end){--*q;++q;*q+=10;}}
--*end;
}
}
normalize:
scan=start;
while(*scan==0)++scan;
if(scan>start){
u8 count=scan-start;
q=start+a->length;
a->exponent-=count;
while(scan<q)*start++=*scan++;
a->length-=count;
}
start=a->digits;
end=start+a->length;
while(end>start){if(*--end!=0)break;}
a->length=end-start+1;
}

extern s32 func_020136d0(double);
extern s32 func_020136ec(double);
extern double func_0201e1f8(double, s32 *);
extern s32 func_0201363c(u64);
extern void func_02018c20(void *, s32);
extern double func_0201e2b8(double, s32);
extern void func_02018940(void *, u64);
extern void func_02018a04(void *, void *, void *);
void func_02019400(void *arg0, double x) {
    u8 *dec = (u8 *)arg0;
    u8 sign;
    s32 exp;
    s32 shift;
    u64 m;
    double tmp;
    u8 buf1[0x26];
    u8 buf2[0x26];

    sign = func_020136d0(x) ? 1 : 0;
    if (0.0 == x) {
        dec[0] = sign;
        *(s16 *)(dec + 2) = 0;
        dec[4] = 1;
        dec[5] = 0;
        return;
    }
    if (func_020136ec(x) <= 2) {
        dec[0] = sign;
        *(s16 *)(dec + 2) = 0;
        dec[4] = 1;
        dec[5] = (func_020136ec(x) == 1) ? 'N' : 'I';
        return;
    }
    if (sign != 0) {
        x = 0.0 - x;
    }
    x = func_0201e1f8(x, &exp);
    tmp = x;
    m = (*(u64 *)&tmp) | 0x0010000000000000ULL;
    shift = 53 - func_0201363c((m & -m) - 1);
    func_02018c20(buf2, exp - shift);
    func_02018940(buf1, (u64)func_0201e2b8(x, shift));
    func_02018a04(dec, buf1, buf2);
    dec[0] = sign;
}

void func_02019580(u8 *arg0, double arg1, u8 *arg3)
{
    typedef struct {
        u8 unk00[2];
        s16 unk02;
        u8 unk04;
        u8 digits[1];
    } UnkNum;

    UnkNum *num = (UnkNum *)arg3;
    s32 max = *(s16 *)(arg0 + 2);
    s32 i;
    s32 j;
    s32 cnt;
    s16 val;

    func_02019400(arg3, arg1);
    if (num->digits[0] > 9) {
        return;
    }
    if (max > 0x20) {
        max = 0x20;
    }
    func_02018900(arg3, max);
    for (i = num->unk04; i < max; i = num->unk04) {
        num->unk04++;
        num->digits[i] = 0;
    }
    val = num->unk02;
    cnt = arg3[4];
    val -= (s16)(i - 1);
    num->unk02 = val;
    j = 0;
    if (cnt <= 0) {
        return;
    }
    do {
        num->digits[j++] += 0x30;
    } while (j < num->unk04);
}
