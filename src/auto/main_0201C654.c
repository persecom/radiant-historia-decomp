/* 2 functions from 0x0201C654 to 0x0201D04C (main), found by ds-decomp. */
#include "common.h"

extern const s32 data_0213ec80[],data_0213ed00[];
extern double func_0201e014(double);
extern s32 func_0201d04c(double *,double *,s32,s32,s32,const s32 *);
double _dsub(double,double);
int func_0201ff80(double);
s32 func_0201c654(double x,double *y){
double z,w,t,r,fn;
double tx[3];
s32 e0,i,j,nx,n,ix,hx;
hx=((s32 *)&x)[1];ix=hx&0x7fffffff;
if(ix<=0x3fe921fb){y[0]=x;y[1]=0;return 0;}
if(ix<0x4002d97c){
if(hx>0){
z=x-1.5707963267341256;
if(ix!=0x3ff921fb){y[0]=z-6.0771005065061922e-11;y[1]=(z-y[0])-6.0771005065061922e-11;}
else {z-=6.0771005063039660e-11;y[0]=z-2.0222662487959506e-21;y[1]=(z-y[0])-2.0222662487959506e-21;}
return 1;
}else{
z=x+1.5707963267341256;
if(ix!=0x3ff921fb){y[0]=z+6.0771005065061922e-11;y[1]=(z-y[0])+6.0771005065061922e-11;}
else{z+=6.0771005063039660e-11;y[0]=z+2.0222662487959506e-21;y[1]=(z-y[0])+2.0222662487959506e-21;}
return -1;
}
}
if(ix<=0x413921fb){
t=func_0201e014(x);
n=func_0201ff80(t*0.63661977236758138+0.5);
fn=(double)n;
r=t-fn*1.5707963267341256;w=fn*6.0771005065061922e-11;
if(n<32 && ix!=data_0213ec80[n-1]) y[0]=r-w;
else{
j=ix>>20;
y[0]=r-w;
i=j-((((s32 *)y)[1]>>20)&0x7ff);
if(i>16){
t=r;w=fn*6.0771005063039660e-11;r=t-w;w=fn*2.0222662487959506e-21-((t-r)-w);
y[0]=r-w;
i=j-((((s32 *)y)[1]>>20)&0x7ff);
if(i>49){t=r;w=fn*2.0222662487111665e-21;r=t-w;w=fn*8.4784276603688996e-32-((t-r)-w);y[0]=r-w;}
}
}
y[1]=(r-y[0])-w;
if(hx<0){y[0]=0.0-y[0];y[1]=0.0-y[1];return -n;}
return n;
}
if(ix>=0x7ff00000){y[0]=y[1]=x-x;return 0;}
((s32 *)&z)[0]=((s32 *)&x)[0];
e0=(ix>>20)-1046;
((s32 *)&z)[1]=ix-(e0<<20);
for(i=0;i<2;i++){tx[i]=(double)func_0201ff80(z);z=(z-tx[i])*16777216.0;}
tx[2]=z;nx=3;
while(tx[nx-1]==0.0)nx--;
n=func_0201d04c(tx,y,e0,nx,2,data_0213ed00);
if(hx<0){y[0]=0.0-y[0];y[1]=0.0-y[1];return -n;}
return n;
}

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
