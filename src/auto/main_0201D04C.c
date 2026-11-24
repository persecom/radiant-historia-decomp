/* 5 functions from 0x0201D04C to 0x0201E034 (main), found by ds-decomp. */
#include "common.h"

double func_0201e9fc(double,double);
int func_0201ff80(double);
double func_0201dbfc(double x,double y,int iy) {
 double z,v,r;
 s32 ix=((s32 *)&x)[1]&0x7fffffff;
 if(ix<0x3e400000){if(func_0201ff80(x)==0)return x;}
 z=x*x;
 v=z*x;
 r=0.00833333333332249+z*(-0.0001984126982985795+z*(0.0000027557313707070068+z*(-2.5050760253406863e-8+z*1.58969099521155e-10)));
 if(iy==0)return x+v*(-0.16666666666666632+z*r);
 return func_0201e9fc(x,func_0201e9fc(func_0201e9fc(z*func_0201e9fc(0.5*y,v*r),y),-0.16666666666666632*v));
}

double func_0201de78(double x, double y) {
    ((u32 *)&x)[1] = (((u32 *)&x)[1] & ~0x80000000) | (((u32 *)&y)[1] & 0x80000000);
    return x;
}

double func_0201cd34(double, double);
double func_0201dbfc(double, double, int);
double func_0201e9fc(double, double);
int func_0201c654(double, double *);
double func_0201dea0(double x) {
double y[2];
double zero = 0.0;
s32 ix = ((s32 *)&x)[1] & 0x7fffffff;
if (ix <= 0x3fe921fb) return func_0201cd34(x, zero);
if (ix >= 0x7ff00000) return func_0201e9fc(x,x);
switch (func_0201c654(x,y)&3) {
case 0: return func_0201cd34(y[0],y[1]);
case 1: return func_0201e9fc(zero,func_0201dbfc(y[0],y[1],1));
case 2: return func_0201e9fc(zero,func_0201cd34(y[0],y[1]));
default: return func_0201dbfc(y[0],y[1],1);
}
}

double func_0201e014(double x) {
    ((u32 *)&x)[1] &= ~0x80000000;
    return x;
}
