/* 2 functions from 0x0201ABC4 to 0x0201B4CC (main), found by ds-decomp. */
#include "common.h"
extern s32 data_02160034;
extern double data_02160044;
extern double func_0201e6a8(double);
extern double func_02020c58(double,double);
extern double func_0201e9fc(double,double);
extern double func_0201edb0(double,double);
extern double func_0201e6cc(double,double);
extern double func_0201f218(s32);

double func_0201b2f4(double x) {
s32 hx=((s32 *)&x)[1];
s32 lx=((s32 *)&x)[0];
s32 k=0;
s32 i;
double y,z,l;
if(hx<0x00100000) {
if(((hx&0x7fffffff)|lx)==0) {
data_02160034=33;
return func_02020c58(-18014398509481984.0,data_02160044);
}
if(hx<0) {
data_02160034=33;
return func_02020c58(func_0201e9fc(x,x),data_02160044);
}
k-=54;
x=func_0201edb0(x,18014398509481984.0);
hx=((s32 *)&x)[1];
}
if(hx>=0x7ff00000) return func_0201e6cc(x,x);
k+=(hx>>20)-1023;
i=(k&0x80000000)>>31;
hx=(hx&0x000fffff)|((1023-i)<<20);
y=(double)(k+i);
((s32 *)&x)[1]=hx;
z=y*3.694239077158931e-13 + 0.4342944819032518*func_0201e6a8(x);
return z+y*0.30102999566361177;
}
