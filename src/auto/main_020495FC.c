/* 1 function from 0x020495FC to 0x020508FC (main), found by ds-decomp. */
#include "common.h"

#pragma optimization_level 0
void func_020495fc(register u8*aI,u8 aB){
#define M0 {s32 R;s32 P;s32 U;s32 Q;s32 V;register s32 W;f32 E;R=c[0]-h[0];U=c[1]-h[1];P=m[0]-c[0]; \
Q=m[1]-c[1];W=k[0]-h[0];V=k[1]-h[1];E=(f32)(P*V-Q*W);if(0.0f!=E){register f32 t=(f32)((U*W-R*V)*100)/E; \
f32 u=(f32)((U*P-R*Q)*100)/E;if(t<0.0||100.0<t||u<0.0||100.0<u){d=FALSE; \
}else{volatile f32 bx,by;bx=(f32)c[0];B[0]=(s32)(bx+((f32)P*t)/100.0f); \
by=(f32)c[1];B[1]=(s32)(by+((f32)Q*t)/100.0f);d=TRUE;}}else{d=FALSE;}}
#define M1 M21(B[0],B[1])
#define M2 func_020508fc(c,m,h,k,B)
#define M3 func_020477c0(g,f);r=TRUE;
#define M4 *(s16*)(data_02160aec+0x58D36)
#define M5 (o*)func_0210c594(0x2C,data_02155c3c)
#define M6 data_02160aec
#define M7 (w-g->s)>>12
#define M8 (C-g->s)>>12
#define M9 (G-g->v)>>12
#define MA (n-g->v)>>12
#define MB f->aa=A[i];
#define MC f->D
#define MD f->a[0]
#define ME f->a[1]
#define MF f->b[0]
#define M10 f->b[1]
#define M11 h[0]
#define M12 h[1]
#define M13 k[0]
#define M14 k[1]
#define M15 data_0213a394
#define M16 C=x<<16;w=(x<<16)+0x10000;G=z<<16;n=(z<<16)+0x10000;
#define M17 M11=8+(M7);M13=(M8)-8;
#define M18 MB MD=(w>>12)+8;MF=(C>>12)-8;
#define M19 M12=8+(MA);M14=(M9)-8;d=M2;
#define M1C MB MD=(w>>12)+e;MF=(C>>12)-e;
#define M1F M11=e+(M7);M13=(M8)-e;
#define M20 ME=(n>>12)+8;M10=(G>>12)-8;
#define M21(XV,ZV) {register s32 zz;zz=g->v+((ZV)<<12);f->x=g->s+((XV)<<12);f->y=0;f->z=zz;}
#define M22 M21(B[0]+1,B[1]+1)
#define M23 M21(B[0]-1,B[1]+1)
#define M24 M21(B[0]-1,B[1]-1)
#define M25 M21(B[0]+1,B[1]-1)
#define M26(KV) ((tile*)(M6+(KV)*0xC))->type
typedef struct {u8 pad[0xBC8];u8 type,sub;} tile;typedef struct o{u32 D;s32 aa;s32 x,y,z;s32 a[2];s32 b[2];struct o*prev;
struct o*next;}o;typedef struct ac{s32 x,y,z;u8 pad0C[0x24];s32 al,deltaY,am;
u8 pad3C[0x52];u16 at;u16 id;u16 ag;u8 pad94[0x10];u8 az;u8 padA5[7];u32 D;
u8 padB0[4];u8 count;u8 padB5[3];o*aw;u8 padBC[0x14];void*aF;s32 s,oldY,v;
s32 X,aG,M;}ac;extern u8*data_021600bc;extern u8*M6;extern s32 data_02155c3c;
extern u16 data_02162908[];extern s16 M15[];extern void*func_0210c594(u32,s32);
extern void func_020477c0(void*,void*);extern void func_02047778(void*);
extern void func_02050b0c(u8*,s32);extern BOOL func_020508fc(s32*,s32*,s32*,s32*,s32*);
extern BOOL func_02050e2c(s32*,s32*,s32*);extern s32 func_0201fb1c(s32,s32);
extern s32 func_02002404(s32,s32);
#define g ((ac*)aI)
{register o*f=NULL;register s32 e;register u32 l;register s32 F;register u32 i;register s32 x;
s32 N,S,O,T,z;u32 K;s32 C,G,w,n;u8 Y,ao;u32 H;BOOL d;s32 m[2],c[2],k[2],h[2],B[2];
s32 J[2],Z[2],ae[2];s32 aj,ad;o*I=NULL;BOOL r=FALSE;u32 A[20]={0};u8*aC;
l=0;aC=data_021600bc;if(!M6){return;}if(aB==2){return;}if((g->D&0x1000000)!=0){
g->x+=g->al;g->z+=g->am;return;}N=g->s/0x10000-1;S=N+2;O=g->v/0x10000-1;
T=O+2;if(N<*(s32*)(M6+0x58BC8)){N=*(s32*)(M6+0x58BC8);}if(S>=*(s32*)(M6+0x58BCC)){
S=*(s32*)(M6+0x58BCC);}if(O<*(s32*)(M6+0x58BD0)){O=*(s32*)(M6+0x58BD0);
}if(T>=*(s32*)(M6+0x58BD4)){T=*(s32*)(M6+0x58BD4);}for(z=T;z>=O;z--){for(x=S;
x>=N;x--){K=x+z*M4;Y=M26(K);M16 if(Y>=2&&Y<=5&&C<=g->s&&g->s<=w&&G<=g->v&&g->v<=n){
A[l]=K;l++;}}}N=g->X/0x10000-1;S=N+2;O=g->M/0x10000-1;T=O+2;if(N<*(s32*)(M6+0x58BC8)){
N=*(s32*)(M6+0x58BC8);}if(S>=*(s32*)(M6+0x58BCC)){S=*(s32*)(M6+0x58BCC);
}if(O<*(s32*)(M6+0x58BD0)){O=*(s32*)(M6+0x58BD0);}if(T>=*(s32*)(M6+0x58BD4)){
T=*(s32*)(M6+0x58BD4);}for(z=T;z>=O;z--){for(x=S;x>=N;x--){K=x+z*M4;Y=M26(K);
M16 if(Y!=0xFF&&C<=g->X&&g->X<=w&&G<=g->M&&g->M<=n){A[l]=K;l++;ao=((tile*)(M6+K*0xC))->sub;
if(ao==0xFF){continue;}switch(ao){case 1:A[l]=(x+1)+(z)*M4;l++;A[l]=(x)+(z+1)*M4;l++;break;case 2:A[l]=(x-1)+(z)*M4;
l++;A[l]=(x)+(z+1)*M4;l++;break;case 3:A[l]=(x+1)+(z)*M4;l++;A[l]=(x)+(z-1)*M4;
l++;break;case 4:A[l]=(x-1)+(z)*M4;l++;A[l]=(x)+(z-1)*M4;l++;break;case 5:A[l]=(x)+(z-1)*M4;
l++;break;case 6:A[l]=(x)+(z+1)*M4;l++;break;case 7:A[l]=(x+1)+(z)*M4;l++;
break;case 8:A[l]=(x-1)+(z)*M4;l++;break;}}}}for(i=0;i<l;i++){u32 aH=A[i];
for(K=1;K<l;K++){if(aH==A[K]&&i!=K&&A[K]!=0){A[K]=0;}}}if(l!=0){K=1;i=1;
for(;;){if(A[K]==0){A[K]=A[K+i];A[K+i]=0;i++;if((s32)(K+i)>=16){break;}}
else{i=1;K++;}}l=K;}F=8;e=8;for(i=0;i<l;i++){x=A[i]%M4;z=A[i]/M4;
M16 c[0]=0;c[1]=0;m[0]=(g->X-g->s)>>12;m[1]=(g->M-g->v)>>12;Y=M26(A[i]);
H=0;switch(Y){case 1:case 6:case 7:case 8:case 9:case 10:{if(Y==6){H|=0xA;
}else if(Y==7){H|=5;}if((H&1)==0){M11=M7;M13=M7;M12=F+(MA);M14=(M9)-F;M0 if(d){
f=M5;MC|=1;MB MD=w>>12;MF=w>>12;ME=(n>>12)+F;M10=(G>>12)-F;M1 M3 H|=4;}
}if((H&2)==0){M11=F+(M7);M13=(M8)-F;M12=MA;M14=MA;M0 if(d){f=M5;MC|=2;MB MD=(w>>12)+F;
MF=(C>>12)-F;ME=n>>12;M10=n>>12;M1 M3 H|=8;}}if((H&4)==0){M11=M8;M13=M8;
M12=F+(MA);M14=(M9)-F;M0 if(d){f=M5;MC|=4;MB MD=C>>12;MF=C>>12;ME=(n>>12)+F;
M10=(G>>12)-F;M1 M3}}if((H&8)==0){M11=F+(M7);M13=(M8)-F;M12=M9;M14=M9;M0 if(d){
f=M5;MC|=8;MB MD=(w>>12)+F;MF=(C>>12)-F;ME=G>>12;M10=G>>12;M1 M3}}if(((g->D&0x40)!=0||(g->D&0x80)!=0)&&g->id==0&&data_02162908[2]==0){
g->D&=~0x40;g->D&=~0x80;}break;}case 2:{BOOL q;if(g->id==0&&(g->D&0x20000)!=0){
break;}if(g->at==0x1483){break;}M1F M12=(M9)-e;M14=e+(MA);M0 if(d){f=M5;
MC|=16;M1C ME=(G>>12)-e;M10=(n>>12)+e;M22 M3 break;}q=FALSE;M11=M8;
M13=M8;M12=F+(MA);M14=(M9)-F;M0 if(d){q=TRUE;}if(!q){M11=F+(M7);M13=(M8)-F;
M12=M9;M14=M9;M0 if(d){q=TRUE;}}if(q){c[0]=0;c[1]=0;m[0]=B[0]+32;m[1]=B[1]+32;
M1F M12=(M9)-e;M14=e+(MA);M0 if(d){f=M5;MC|=16;M1C ME=(G>>12)-e;M10=(n>>12)+e;
M22 M3}}break;}case 3:{BOOL q;if(g->id==0&&(g->D&0x20000)!=0){break;
}if(g->at==0x1483){break;}M1F M12=e+(MA);M14=(M9)-e;M0 if(d){f=M5;MC|=32;
M1C ME=(n>>12)+e;M10=(G>>12)-e;M23 M3 break;}q=FALSE;M11=M7;M13=M7;
M12=F+(MA);M14=(M9)-F;M0 if(d){q=TRUE;}if(!q){M11=F+(M7);M13=(M8)-F;M12=M9;
M14=M9;M0 if(d){q=TRUE;}}if(q){c[0]=0;c[1]=0;m[0]=B[0]-32;m[1]=B[1]+32;
M1F M12=e+(MA);M14=(M9)-e;M0 if(d){f=M5;MC|=32;M1C ME=(n>>12)+e;M10=(G>>12)-e;
M23 M3}}break;}case 4:{BOOL q;if(g->id==0&&(g->D&0x20000)!=0){break;
}if(g->at==0x1483){break;}M1F M12=(M9)-e;M14=e+(MA);M0 if(d){f=M5;MC|=64;
M1C ME=(G>>12)-e;M10=(n>>12)+e;M24 M3 break;}q=FALSE;M11=M7;M13=M7;
M12=F+(MA);M14=(M9)-F;M0 if(d){q=TRUE;}if(!q){M11=F+(M7);M13=(M8)-F;M12=MA;
M14=MA;M0 if(d){q=TRUE;}}if(q){c[0]=0;c[1]=0;m[0]=B[0]-32;m[1]=B[1]-32;
M1F M12=(M9)-e;M14=e+(MA);M0 if(d){f=M5;MC|=64;M1C ME=(G>>12)-e;M10=(n>>12)+e;
M24 M3}}break;}case 5:{BOOL q;if(g->id==0&&(g->D&0x20000)!=0){break;
}if(g->at==0x1483){break;}M1F M12=e+(MA);M14=(M9)-e;M0 if(d){f=M5;MC|=128;
M1C ME=(n>>12)+e;M10=(G>>12)-e;M25 M3 break;}q=FALSE;M11=M8;M13=M8;
M12=F+(MA);M14=(M9)-F;M0 if(d){q=TRUE;}if(!q){M11=F+(M7);M13=(M8)-F;M12=MA;
M14=MA;M0 if(d){q=TRUE;}}if(q){c[0]=0;c[1]=0;m[0]=B[0]+32;m[1]=B[1]-32;
M1F M12=e+(MA);M14=(M9)-e;M0 if(d){f=M5;MC|=128;M1C ME=(n>>12)+e;M10=(G>>12)-e;
M25 M3}}break;}}}if(!r){goto as;}I=NULL;ad=0x20000;aj=ad;for(f=g->aw;
f;f=f->next){s32 dz;s32 R;R=g->x-f->x;dz=g->z-f->z;if((aj>=0?aj:-aj)+(ad>=0?ad:-ad)>(R>=0?R:-R)+(dz>=0?dz:-dz)){
aj=R;ad=dz;I=f;}}if(!I){goto ab;}g->x=I->x;g->z=I->z;J[0]=g->X>>12;
J[1]=g->M>>12;Z[0]=I->a[0];Z[1]=I->a[1];ae[0]=I->b[0];ae[1]=I->b[1];func_02047778(g);
if(aB==0){{s32 ak[3];s32 C,G,w,n;s32 N,S,O,T,x,z;u8 Y;u8*aC=data_021600bc;
if(!M6||(g->D&0x1000000)!=0){goto an;}ak[0]=g->x;ak[1]=g->y;ak[2]=g->z;
ak[0]+=-(M15[(((g->ag+0)%0x10000)>>4)*2+1]*2);ak[2]+=M15[(((g->ag+0)%0x10000)>>4)*2]*2;
N=ak[0]/0x10000-1;S=N+2;O=ak[2]/0x10000-1;T=O+2;if(N<*(s32*)(M6+0x58BC8)){
N=*(s32*)(M6+0x58BC8);}if(S>=*(s32*)(M6+0x58BCC)){S=*(s32*)(M6+0x58BCC);
}if(O<*(s32*)(M6+0x58BD0)){O=*(s32*)(M6+0x58BD0);}if(T>=*(s32*)(M6+0x58BD4)){
T=*(s32*)(M6+0x58BD4);}for(z=T;z>=O;z--){for(x=S;x>=N;x--){Y=((tile*)(M6+((x+z*M4))*0xC))->type;
M16 if(C<=ak[0]&&ak[0]<=w&&G<=ak[2]&&ak[2]<=n){switch(Y){case 1:case 6:case 7:g->x-=-(M15[(((g->ag+0)%0x10000)>>4)*2+1]*2);
g->z-=M15[(((g->ag+0)%0x10000)>>4)*2]*2;goto an;}}}}}an:;{s32 ak[3];s32 C,G,w,n;
s32 N,S,O,T,x,z;u8 Y;u8*aC=data_021600bc;if(!M6||(g->D&0x1000000)!=0){
goto af;}ak[0]=g->x;ak[1]=g->y;ak[2]=g->z;ak[0]+=-(M15[(((g->ag+32768)%0x10000)>>4)*2+1]*2);
ak[2]+=M15[(((g->ag+32768)%0x10000)>>4)*2]*2;N=ak[0]/0x10000-1;S=N+2;O=ak[2]/0x10000-1;
T=O+2;if(N<*(s32*)(M6+0x58BC8)){N=*(s32*)(M6+0x58BC8);}if(S>=*(s32*)(M6+0x58BCC)){
S=*(s32*)(M6+0x58BCC);}if(O<*(s32*)(M6+0x58BD0)){O=*(s32*)(M6+0x58BD0);
}if(T>=*(s32*)(M6+0x58BD4)){T=*(s32*)(M6+0x58BD4);}for(z=T;z>=O;z--){for(x=S;
x>=N;x--){Y=((tile*)(M6+((x+z*M4))*0xC))->type;M16 if(C<=ak[0]&&ak[0]<=w&&G<=ak[2]&&ak[2]<=n){
switch(Y){case 1:case 6:case 7:g->x-=-(M15[(((g->ag+32768)%0x10000)>>4)*2+1]*2);
g->z-=M15[(((g->ag+32768)%0x10000)>>4)*2]*2;goto af;}}}}}af:;}if(aB!=0){
return;}{struct{s32 L[2];s32 ai[2];s32 aA[2];s32 av[2];}p;s32 aq;s32 ag;
s32 aD,aE;p.L[0]=ae[0]-Z[0];p.L[1]=ae[1]-Z[1];p.ai[0]=J[0]-Z[0];p.ai[1]=J[1]-Z[1];
aq=func_0201fb1c((p.L[0]*p.ai[0]+p.L[1]*p.ai[1])*100,p.L[0]*p.L[0]+p.L[1]*p.L[1]);
if((f64)aq<0.0||(f64)aq>100.0){d=FALSE;}else{p.aA[0]=(p.L[0]*aq)/100;p.aA[1]=(p.L[1]*aq)/100;
p.av[0]=Z[0]+p.aA[0];p.av[1]=Z[1]+p.aA[1];ag=func_02002404(p.L[0],p.L[1]);
aD=M15[(((ag+0x8000)%0x10000)>>4)*2+1]>>12;aE=M15[(((ag+0x8000)%0x10000)>>4)*2]>>12;
if(p.L[0]*p.ai[1]-p.L[1]*p.ai[0]<0){J[0]=p.av[0]+aD;J[1]=p.av[1]-aE;}else{
J[0]=p.av[0]-aD;J[1]=p.av[1]+aE;}d=TRUE;}}if(!d){goto ab;}if(g->id==0&&(g->D&0x20000)!=0){
goto ab;}if(g->at==0x1483){goto ab;}g->s=g->x;g->oldY=g->y;g->v=g->z;g->al=(J[0]<<12)-g->x;
g->am=(J[1]<<12)-g->z;{s32 M=g->z+g->am;g->X=g->x+g->al;g->aG=0;g->M=M;
}}{s32 N,S,O,T;s32 x,z;u32 K;u32 i,j;s32 C,G,w,n;u8 Y,ao;u32 H;BOOL d;s32 m[2],c[2];
s32 k[2],h[2],B[2];s32 J[2],Z[2],ae[2];s32 aj,ad;o*f;o*I=NULL;BOOL r=FALSE;
u32 l=0;u32 A[20]={0};u8*aC=data_021600bc;if(!M6||(u8)(aB+1)==2){goto ab;
}if((g->D&0x1000000)!=0){g->x+=g->al;g->z+=g->am;goto ab;}N=g->s/0x10000-1;
S=N+2;O=g->v/0x10000-1;T=O+2;if(N<*(s32*)(M6+0x58BC8)){N=*(s32*)(M6+0x58BC8);
}if(S>=*(s32*)(M6+0x58BCC)){S=*(s32*)(M6+0x58BCC);}if(O<*(s32*)(M6+0x58BD0)){
O=*(s32*)(M6+0x58BD0);}if(T>=*(s32*)(M6+0x58BD4)){T=*(s32*)(M6+0x58BD4);
}for(z=T;z>=O;z--){for(x=S;x>=N;x--){K=x+z*M4;Y=M26(K);M16 if(Y>=2&&Y<=5&&C<=g->s&&g->s<=w&&G<=g->v&&g->v<=n){
A[l]=K;l++;}}}N=g->X/0x10000-1;S=N+2;O=g->M/0x10000-1;T=O+2;if(N<*(s32*)(M6+0x58BC8)){
N=*(s32*)(M6+0x58BC8);}if(S>=*(s32*)(M6+0x58BCC)){S=*(s32*)(M6+0x58BCC);
}if(O<*(s32*)(M6+0x58BD0)){O=*(s32*)(M6+0x58BD0);}if(T>=*(s32*)(M6+0x58BD4)){
T=*(s32*)(M6+0x58BD4);}for(z=T;z>=O;z--){for(x=S;x>=N;x--){K=x+z*M4;Y=M26(K);
M16 if(Y!=0xFF&&C<=g->X&&g->X<=w&&G<=g->M&&g->M<=n){A[l]=K;l++;ao=((tile*)(M6+K*0xC))->sub;
if(ao==0xFF){continue;}switch(ao){case 1:A[l]=(x+1)+(z)*M4;l++;A[l]=(x)+(z+1)*M4;l++;break;case 2:A[l]=(x-1)+(z)*M4;
l++;A[l]=(x)+(z+1)*M4;l++;break;case 3:A[l]=(x+1)+(z)*M4;l++;A[l]=(x)+(z-1)*M4;
l++;break;case 4:A[l]=(x-1)+(z)*M4;l++;A[l]=(x)+(z-1)*M4;l++;break;case 5:A[l]=(x)+(z-1)*M4;
l++;break;case 6:A[l]=(x)+(z+1)*M4;l++;break;case 7:A[l]=(x+1)+(z)*M4;l++;
break;case 8:A[l]=(x-1)+(z)*M4;l++;break;}}}}for(i=0;i<l;i++){u32 aH=A[i];
for(j=1;j<l;j++){if(aH==A[j]&&i!=j&&A[j]!=0){A[j]=0;}}}if(l!=0){u32 au=1;
u32 ap=1;for(;;){if(A[au]==0){A[au]=A[au+ap];A[au+ap]=0;ap++;if((s32)(au+ap)>=16){
break;}}else{ap=1;au++;}}l=au;}for(i=0;i<l;i++){x=A[i]%M4;z=A[i]/M4;M16 c[0]=0;
c[1]=0;m[0]=(g->X-g->s)>>12;m[1]=(g->M-g->v)>>12;Y=M26(A[i]);H=0;
switch(Y){case 1:case 6:case 7:case 8:case 9:case 10:{if(Y==6){H|=0xA;}
else if(Y==7){H|=5;}if((H&1)==0){M11=M7;M13=M7;M19 if(d){f=M5;MC|=1;MB MD=w>>12;
MF=w>>12;M20 M1 M3 H|=4;}}if((H&2)==0){M17 M12=MA;M14=MA;d=M2;if(d){f=M5;
MC|=2;M18 ME=n>>12;M10=n>>12;M1 M3 H|=8;}}if((H&4)==0){M11=M8;M13=M8;M19 if(d){
f=M5;MC|=4;MB MD=C>>12;MF=C>>12;M20 M1 M3}}if((H&8)==0){M17 M12=M9;M14=M9;
d=M2;if(d){f=M5;MC|=8;M18 ME=G>>12;M10=G>>12;M1 M3}}if(((g->D&0x40)!=0||(g->D&0x80)!=0)&&g->id==0&&data_02162908[2]==0){
g->D&=~0x40;g->D&=~0x80;}break;}case 2:{BOOL q;if(g->id==0&&(g->D&0x20000)!=0){
break;}if(g->at==0x1483){break;}M17 M12=(M9)-8;M14=8+(MA);d=M2;if(d){f=M5;
MC|=16;M18 ME=(G>>12)-8;M10=(n>>12)+8;M22 M3 break;}q=FALSE;M11=M8;
M13=M8;M19 if(d){q=TRUE;}if(!q){M17 M12=M9;M14=M9;d=M2;if(d){q=TRUE;}}if(q){
c[0]=0;c[1]=0;m[0]=B[0]+32;m[1]=B[1]+32;M17 M12=(M9)-8;M14=8+(MA);d=M2;
if(d){f=M5;MC|=16;M18 ME=(G>>12)-8;M10=(n>>12)+8;M22 M3}}break;}case 3:{
BOOL q;if(g->id==0&&(g->D&0x20000)!=0){break;}if(g->at==0x1483){break;}
M17 M19 if(d){f=M5;MC|=32;M18 M20 M23 M3 break;}q=FALSE;M11=M7;M13=M7;
M19 if(d){q=TRUE;}if(!q){M17 M12=M9;M14=M9;d=M2;if(d){q=TRUE;}}if(q){c[0]=0;
c[1]=0;m[0]=B[0]-32;m[1]=B[1]+32;M17 M19 if(d){f=M5;MC|=32;M18 M20 M23 M3}
}break;}case 4:{BOOL q;if(g->id==0&&(g->D&0x20000)!=0){break;}if(g->at==0x1483){
break;}M17 M12=(M9)-8;M14=8+(MA);d=M2;if(d){f=M5;MC|=64;M18 ME=(G>>12)-8;
M10=(n>>12)+8;M24 M3 break;}q=FALSE;M11=M7;M13=M7;M19 if(d){q=TRUE;
}if(!q){M17 M12=MA;M14=MA;d=M2;if(d){q=TRUE;}}if(q){c[0]=0;c[1]=0;m[0]=B[0]-32;
m[1]=B[1]-32;M17 M12=(M9)-8;M14=8+(MA);d=M2;if(d){f=M5;MC|=64;M18 ME=(G>>12)-8;
M10=(n>>12)+8;M24 M3}}break;}case 5:{BOOL q;if(g->id==0&&(g->D&0x20000)!=0){
break;}if(g->at==0x1483){break;}M17 M19 if(d){f=M5;MC|=128;M18 M20 M25 M3 break;
}q=FALSE;M11=M8;M13=M8;M19 if(d){q=TRUE;}if(!q){M17 M12=MA;M14=MA;d=M2;
if(d){q=TRUE;}}if(q){c[0]=0;c[1]=0;m[0]=B[0]+32;m[1]=B[1]-32;M17 M19 if(d){
f=M5;MC|=128;M18 M20 M25 M3}}break;}}}if(!r){goto ar;}I=NULL;ad=0x20000;
aj=ad;for(f=g->aw;f;f=f->next){s32 dz;s32 R;R=g->x-f->x;dz=g->z-f->z;
if((aj>=0?aj:-aj)+(ad>=0?ad:-ad)>(R>=0?R:-R)+(dz>=0?dz:-dz)){aj=R;ad=dz;
I=f;}}if(I){g->x=I->x;g->z=I->z;J[0]=g->X>>12;J[1]=g->M>>12;Z[0]=I->a[0];
Z[1]=I->a[1];ae[0]=I->b[0];ae[1]=I->b[1];func_02047778(g);if((u8)(aB+1)==0){
func_02050b0c(aI,0);func_02050b0c(aI,0x8000);}if((u8)(aB+1)!=0){goto ab;
}if(func_02050e2c(J,Z,ae)){if(g->id==0&&(g->D&0x20000)!=0){goto ah;}if(g->at==0x1483){
goto ah;}g->s=g->x;g->oldY=g->y;g->v=g->z;g->al=(J[0]<<12)-g->x;g->am=(J[1]<<12)-g->z;
{s32 M=g->z+g->am;g->X=g->x+g->al;g->aG=0;g->M=M;}func_020495fc(aI,(u8)((u8)(aB+1)+1));
}}}ah:if(g->aF){g->az|=8;}if(((g->D&0x40)!=0||(g->D&0x80)!=0)&&g->id==0&&data_02162908[2]==0){
g->D&=~0x40;g->D&=~0x80;}goto ab;ar:g->x+=g->al;g->z+=g->am;if(g->aF){
g->az&=0xF7;}ab:if(g->aF){g->az|=8;}if(((g->D&0x40)!=0||(g->D&0x80)!=0)&&g->id==0&&data_02162908[2]==0){
g->D&=~0x40;g->D&=~0x80;}return;as:g->x+=g->al;g->z+=g->am;if(g->aF){
g->az&=0xF7;}
#undef g
#undef M22
#undef M23
#undef M24
#undef M25
#undef M26
#undef M21
#undef M20
#undef M1F
#undef M1C
#undef M19
#undef M18
#undef M17
#undef M16
#undef M15
#undef M14
#undef M13
#undef M12
#undef M11
#undef M10
#undef MF
#undef ME
#undef MD
#undef MC
#undef MB
#undef MA
#undef M9
#undef M8
#undef M7
#undef M6
#undef M5
#undef M4
#undef M3
#undef M2
#undef M1
#undef M0
}
