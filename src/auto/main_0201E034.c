/* 11 functions from 0x0201E034 to 0x0201EDB0 (main), found by ds-decomp. */
#include "common.h"

extern void func_02019c4c(void);
extern u64 _dmul(u64, u64);

typedef union {
    u64 d;
    struct { u32 lo, hi; } w;
} DoubleBits;
double func_0201e034(double x) {
s32 hi=((s32 *)&x)[1];
s32 exp=((hi>>20)&0x7ff)-1023;
u32 lo=((u32 *)&x)[0];
s32 mask;
u32 old;
if(exp<20) {
if(exp<0) {
if(1.0e300+x>0.0) {
if(hi>=0) {lo=0;hi=0;}
else if(((hi&0x7fffffff)|lo)!=0) {lo=0;hi=0xbff00000;}
}
} else {
mask=0xfffff;
if(((hi&(mask>>exp))|lo)==0)return x;
if(1.0e300+x>0.0) {
if(hi<0)hi+=0x100000>>exp;
hi&=~(mask>>exp);lo=0;
}
}
} else if(exp>51) {
if(exp==1024)return x+x;
return x;
} else {
u32 m=0xffffffff;
s32 shift=exp-20;
old=lo;
if(!(lo&(m>>shift)))return x;
if(1.0e300+x>0.0) {
if(hi<0) {
if(exp==20)hi++;
else {lo+=1U<<(52-exp);if(lo<old)hi++;}
}
lo&=~(m>>shift);
}
}
((s32 *)&x)[1]=hi;((u32 *)&x)[0]=lo;
return x;
}

double func_0201e1f8(double x, s32 *exp) {
s32 hi=((s32 *)&x)[1];
s32 lo=((s32 *)&x)[0];
s32 hx=hi&0x7fffffff;
s32 e=0;
*exp=e;
if(hx>=0x7ff00000 || (hx|lo)==0)return x;
if(hx<0x100000){x*=18014398509481984.0;e-=54;*exp=e;hi=((s32 *)&x)[1];hx=hi&0x7fffffff;}
*exp+=(hx>>20)-1022;
((u32 *)&x)[1]=(hi&0x800fffff)|0x3fe00000;
return x;
}

extern int func_020136ec(double);
extern double func_0201de78(double, double);
double func_0201e2b8(double x, int n) {
    int k, hx, lx;
    if (func_020136ec(x) <= 2 || x == 0.0) {
        return x;
    }
    hx = ((int *)&x)[1];
    lx = ((int *)&x)[0];
    k = (hx & 0x7ff00000) >> 20;
    if (k == 0) {
        if ((lx | (hx & 0x7fffffff)) == 0) return x;
        x *= 1.80143985094819840000e+16;
        hx = ((int *)&x)[1];
        k = ((hx & 0x7ff00000) >> 20) - 54;
        if (n < -50000) return 1.0e-300 * x;
    }
    if (k == 0x7ff) return x + x;
    k = k + n;
    if (k > 0x7fe) return 1.0e300 * func_0201de78(1.0e300, x);
    if (k > 0) {
        ((int *)&x)[1] = (hx & 0x800fffff) | (k << 20);
        return x;
    }
    if (k <= -54) {
        if (n > 50000) return 1.0e300 * func_0201de78(1.0e300, x);
        else return 1.0e-300 * func_0201de78(1.0e-300, x);
    }
    k += 54;
    ((int *)&x)[1] = (hx & 0x800fffff) | (k << 20);
    return x * 5.55111512312578270212e-17;
}

double func_0201dbfc(double, double, int);
double func_0201cd34(double, double);
double _dsub(double, double);
int func_0201c654(double, double *);
double func_0201e518(double x) {
double y[2];
double zero = 0.0;
int ix = ((int *)&x)[1] & 0x7fffffff;
if (ix <= 0x3fe921fb) return func_0201dbfc(x, zero, 0);
if (ix >= 0x7ff00000) return _dsub(x,x);
switch (func_0201c654(x,y)&3) {
case 0: return func_0201dbfc(y[0],y[1],1);
case 1: return func_0201cd34(y[0],y[1]);
case 2: return _dsub(zero,func_0201dbfc(y[0],y[1],1));
default: return _dsub(zero,func_0201cd34(y[0],y[1]));
}
}

void func_0201e690(void) {
    func_02019c4c();
}

extern void func_0201a460(void);
void func_0201e69c(void) {
    func_0201a460();
}

extern void func_0201abc4(void);
void func_0201e6a8(void) {
    func_0201abc4();
}

extern void func_0201b2f4(void);
void func_0201e6b4(void) {
    func_0201b2f4();
}

extern void func_0201b4cc(void);
void func_0201e6c0(void) {
    func_0201b4cc();
}

double _dadd(double a, double b) { return a + b; }

double _dsub(double aa,double bb) {
 DoubleBits a,b,r;
 u64 sign,x,y,lost,result;
 s32 ex,ey,shift;
 a.d=*(u64 *)&aa;b.d=*(u64 *)&bb;
 sign=a.d&0x8000000000000000ULL;
 x=a.d&0x7fffffffffffffffULL;y=b.d&0x7fffffffffffffffULL;
 if((a.d^b.d)&0x8000000000000000ULL){b.d^=0x8000000000000000ULL;return _dadd(aa,*(double *)&b.d);}
 if(x<y){u64 t=x;x=y;y=t;sign^=0x8000000000000000ULL;}
 ex=x>>52;ey=y>>52;
 if(ex==2047) {
 if((x&0xfffffffffffffULL)||(ey==2047))r.d=0x7fffffffffffffffULL;
 else r.d=sign|0x7ff0000000000000ULL;
 return *(double *)&r.d;
 }
 if(x==y){r.d=0;return *(double *)&r.d;}
 x=(x&0xfffffffffffffULL)|(ex?0x10000000000000ULL:0);
 y=(y&0xfffffffffffffULL)|(ey?0x10000000000000ULL:0);
 if(!ex)ex=1;if(!ey)ey=1;
 x<<=11;y<<=11;shift=ex-ey;
 if(shift>=64)y=y!=0;
 else if(shift){lost=y<<(64-shift);y=(y>>shift)|(lost!=0);}
 result=x-y;
 while(!(result&0x8000000000000000ULL)&&ex>1){result<<=1;ex--;}
 if(ex==1 && !(result&0x8000000000000000ULL))ex=0;
 lost=result&2047;result>>=11;
 if(lost>1024 || (lost==1024 && (result&1)))result++;
 if(result&0x20000000000000ULL){result>>=1;ex++;}
 if(!ex && (result&0x10000000000000ULL))ex=1;
 r.d=sign|((u64)ex<<52)|(result&0xfffffffffffffULL);
 return *(double *)&r.d;
}

