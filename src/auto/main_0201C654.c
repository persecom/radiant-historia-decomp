/* 2 functions from 0x0201C654 to 0x0201D04C (main), found by ds-decomp. */
#include "common.h"

double func_0201e9fc(double,double);
int func_0201ff80(double);
double func_0201cd34(double x, double y) {
 double a,hz,z,r,qx;
 s32 ix=((s32 *)&x)[1]&0x7fffffff;
 if(ix<0x3e400000) { if(func_0201ff80(x)==0)return 1.0; }
 z=x*x;
 r=z*(0.0416666666666666+z*(-0.001388888888887411+z*(0.00002480158728947673+z*(-2.7557314351390663e-7+z*(2.087572321298175e-9+z*-1.1359647557788195e-11)))));
 if(ix<0x3fd33333)return 1.0-(0.5*z-(z*r-x*y));
 if(ix>0x3fe90000)qx=0.28125;
 else { ((s32 *)&qx)[1]=ix-0x200000; ((s32 *)&qx)[0]=0; }
 hz=0.5*z-qx;
 a=1.0-qx;
 return a-(hz-(z*r-x*y));
}
