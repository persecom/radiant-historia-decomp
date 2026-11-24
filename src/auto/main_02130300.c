/* 12 functions from 0x02130300 to 0x021312A4 (main), found by ds-decomp. */
#include "common.h"
extern u8 data_0215b120[], data_0215b148[], data_0215b174[];
extern void (*data_02173588)(u8 *);
extern void (*data_0217357c)(void), (*data_02173580)(void), (*data_02173584)(void), (*data_021735a0)(void);
extern void (*data_0217359c)(void *, u32, u32);
extern void func_0213273c(void), func_02132ad8(void), func_021324b4(void);
extern void func_02132aac(void *, u32, u32);
extern void *func_021325d4(u32, int, void *, void *, int);

extern u32 data_0215a0d8[];
extern void (*data_02173434[])(u32);
extern u8 data_0215b1a4[];

extern void func_0212bda8(void *);
extern void func_0212824c(void);
extern void func_0212e61c(void);
extern void func_02132770(void *);
extern void func_021326e4(void *);
extern void func_0212e628(void);
extern void func_02132568(void);

extern void func_02132ae8(void);
void func_02130858(u32 *arg0, u32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = data_0215a0d8[0];
    }
    if (arg1 != NULL) {
        *arg1 = data_0215a0d8[1];
    }
}

void func_021309e8(void *);
void func_02130a5c(u8 *);
void func_02130a50(void);
void func_02130a44(void);
void func_021309c8(u32);
void func_02130880(u8 *p, void *buf, int size) {
void *v; u8 *a; u8 *b;
if (!p || !buf) {func_0212bda8(data_0215b120);return;}
if(size<0x1800){func_0212bda8(data_0215b148);return;}
func_0212824c();func_021309c8((u32)p);func_021324b4();
a=*(u8 **)(p+4);b=*(u8 **)(a+4);
v=func_021325d4(*(u32 *)(p+0x10),1,p+0x18,buf,size);
if(!v){func_0212bda8(data_0215b174);return;}
func_0212e61c();*(void **)(b+0xb8)=v;
data_02173434[0]=(void (*)(u32))func_021309e8;
data_02173588=func_02130a5c;
data_0217357c=func_02130a50;
data_02173580=func_02130a44;
data_02173584=func_0213273c;
data_021735a0=func_02132ad8;
data_0217359c=func_02132aac;
func_02132aac(v,*(u32 *)(a+0x58),*(u32 *)(a+0x5c));
func_0212e628();
}

void func_021309c8(u32 arg0) {
    if (data_02173434[0] != NULL) {
        data_02173434[0](arg0);
    }
}

void func_021309e8(void *arg0) {
    u8 *r4;
    void *r5;
    if (arg0 == NULL) {
        func_0212bda8(data_0215b1a4);
        return;
    }
    func_0212824c();
    r4 = *(u8 **)(*(u8 **)((u8 *)arg0 + 4) + 4);
    r5 = *(void **)(r4 + 0xb8);
    if (r5 == NULL) {
        return;
    }
    func_0212e61c();
    func_02132770(r5);
    func_021326e4(r5);
    *(void **)(r4 + 0xb8) = NULL;
    func_0212e628();
    func_02132568();
}

void func_02130a44(void) {
    func_02132ae8();
}

extern void func_02132af0(void);
void func_02130a50(void) {
    func_02132af0();
}

extern s32 func_02132734(void *);
extern void func_02132afc(void *, s32);
extern void func_02132744(void *);
extern void func_02132a6c(void *);
extern s32 func_02132a9c(void *);
extern s32 func_02132a94(void *);
void func_02130a5c(u8 *p) {
void *v=*(void **)(p+0xb8);s32 zero=0,i,delta,old;
if(func_02132734(v)==0){*(s32 *)(p+0x90)=zero;*(s32 *)(p+0x88)=zero;func_02132770(v);}
if(*(s32 *)(p+4)==1) {
if(*(s32 *)(p+0xac)==0)func_02132afc(v,0);else func_02132afc(v,1);
*(s32 *)(p+0x88)=zero;func_02132744(v);*(s32 *)(p+4)=2;
} else if(*(s32 *)(p+4)==2) {
for(i=0;i<*(s32 *)(p+0xc0);i++)func_02132a6c(v);
delta=func_02132a9c(v);old=*(s32 *)(p+0x88);delta-=old;
*(s32 *)(p+0x90)=delta;*(s32 *)(p+0x88)=old+delta;
*(s32 *)(p+0x94)=func_02132a94(v);
if(func_02132734(v)==3){func_02132770(v);*(s32 *)(p+4)=zero;}
}
}

void func_02130ecc(s16 *samples, s16 *coeff, s16 *out) {
 int n = 32;
 do {
  s16 *base = samples;
  s32 sum = 0;
  sum += *coeff++ * *samples++;
  sum += *coeff++ * base[96];
  sum += *coeff++ * base[128];
  sum += *coeff++ * base[224];
  sum += *coeff++ * base[256];
  sum += *coeff++ * base[352];
  sum += *coeff++ * base[384];
  sum += *coeff++ * base[480];
  sum += *coeff++ * base[512];
  sum += *coeff++ * base[608];
  sum += *coeff++ * base[640];
  sum += *coeff++ * base[736];
  sum += *coeff++ * base[768];
  sum += *coeff++ * base[864];
  sum += *coeff++ * base[896];
  sum += *coeff++ * base[992];
  if (sum > 0x3fff800) *out++ = 32767;
  else if (sum < -0x4000000) *out++ = -32768;
  else *out++ = sum >> 11;
 } while (--n > 0);
}

void func_02131014(s16 *p, s16 *coef, s16 *out) {
int count=32; int sum; s16 *base; int lo=-32768, hi=32767;
do {
base=p; sum=0;
sum+=coef[0]* *p++;
sum+=coef[1]*base[96];
sum+=coef[2]*base[128];
sum+=coef[3]*base[224];
sum+=coef[4]*base[256];
sum+=coef[5]*base[352];
sum+=coef[6]*base[384];
sum+=coef[7]*base[480];
sum+=coef[8]*base[512];
sum+=coef[9]*base[608];
sum+=coef[10]*base[640];
sum+=coef[11]*base[736];
sum+=coef[12]*base[768];
sum+=coef[13]*base[864];
sum+=coef[14]*base[896];
sum+=coef[15]*base[-32];
coef+=16;
if(sum>0x3fff800)*out++=hi;
else if(sum< -0x4000000)*out++=lo;
else *out++=sum>>11;
}while(--count>0);
}

