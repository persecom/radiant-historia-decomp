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
extern s32 data_0215a07c[];
extern s32 func_0212f3fc(void *, s32);
void func_02130300(void *bs, u8 *hdr, s32 bit_alloc[][32], s32 scalefactor[][3][32], s32 gr, s16 *samples, s32 *sf_table) {
    s32 sblimit = *(s32 *)(hdr + 0x10);
    s32 nch = *(s32 *)(hdr + 0x4);
    s32 jsbound = *(s32 *)(hdr + 0x14);
    u8 *alloc_tbl = *(u8 **)(hdr + 0x18);
    s32 sb, ch, j;

    for (sb = 0; sb < sblimit; sb++) {
        for (ch = 0; ch < (sb < jsbound ? nch : 1); ch++) {
            s32 ba = bit_alloc[ch][sb];
            if (ba != 0) {
                s32 *entry = (s32 *)(alloc_tbl + sb * 0x180 + ba * 0x18);
                s32 d = entry[5];
                s32 sf = sf_table[scalefactor[ch][gr][sb]];
                s32 c = entry[4];
                if (entry[2] == 3) {
                    s32 bits = entry[1];
                    if (bits <= 8) {
                        s32 code = func_0212f3fc(bs, bits * 3);
                        s32 mask = data_0215a07c[bits];
                        samples[ch * 96 + 64 + sb] = (s16)((((c * (code & mask) + d) >> 2) * sf) >> 16);
                        code >>= bits;
                        samples[ch * 96 + 32 + sb] = (s16)((((c * (code & mask) + d) >> 2) * sf) >> 16);
                        code >>= bits;
                        samples[ch * 96 + 0 + sb] = (s16)((((c * code + d) >> 2) * sf) >> 16);
                    } else {
                        samples[ch * 96 + 0 + sb] = (s16)((((func_0212f3fc(bs, bits) * c + d) >> 2) * sf) >> 16);
                        samples[ch * 96 + 32 + sb] = (s16)((((func_0212f3fc(bs, bits) * c + d) >> 2) * sf) >> 16);
                        samples[ch * 96 + 64 + sb] = (s16)((((func_0212f3fc(bs, bits) * c + d) >> 2) * sf) >> 16);
                    }
                } else {
                    s32 steps = entry[0];
                    s32 code = func_0212f3fc(bs, entry[1]);
                    if (steps == 3) {
                        samples[ch * 96 + 0 + sb] = (s16)(((((code % 3) * c + d) >> 2) * sf) >> 16);
                        code /= 3;
                        samples[ch * 96 + 32 + sb] = (s16)(((((code % 3) * c + d) >> 2) * sf) >> 16);
                        code /= 3;
                        samples[ch * 96 + 64 + sb] = (s16)(((((code % 3) * c + d) >> 2) * sf) >> 16);
                    } else if (steps == 5) {
                        samples[ch * 96 + 0 + sb] = (s16)(((((code % 5) * c + d) >> 2) * sf) >> 16);
                        code /= 5;
                        samples[ch * 96 + 32 + sb] = (s16)(((((code % 5) * c + d) >> 2) * sf) >> 16);
                        code /= 5;
                        samples[ch * 96 + 64 + sb] = (s16)(((((code % 5) * c + d) >> 2) * sf) >> 16);
                    } else if (steps == 9) {
                        samples[ch * 96 + 0 + sb] = (s16)(((((code % 9) * c + d) >> 2) * sf) >> 16);
                        code /= 9;
                        samples[ch * 96 + 32 + sb] = (s16)(((((code % 9) * c + d) >> 2) * sf) >> 16);
                        code /= 9;
                        samples[ch * 96 + 64 + sb] = (s16)(((((code % 9) * c + d) >> 2) * sf) >> 16);
                    } else {
                        for (j = 0; j < 3; j++) {
                            samples[ch * 96 + j * 32 + sb] = (s16)(((((code % steps) * c + d) >> 2) * sf) >> 16);
                            code /= steps;
                        }
                    }
                }
            } else {
                samples[ch * 96 + 0 + sb] = 0;
                samples[ch * 96 + 32 + sb] = 0;
                samples[ch * 96 + 64 + sb] = 0;
            }

            if (nch == 2 && sb >= jsbound) {
                for (j = 0; j < 3; j++) {
                    samples[96 + j * 32 + sb] = samples[j * 32 + sb];
                }
            }
        }
    }

    for (sb = sblimit; sb < 32; sb++) {
        for (ch = 0; ch < nch; ch++) {
            for (j = 0; j < 3; j++) {
                samples[ch * 96 + j * 32 + sb] = 0;
            }
        }
    }
}

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

void func_02130b48(const s32 *a,const s32 *b,s16 *out) {
 const s32 *original=b;
 s16 *last=out+48,*mid=out+16,*hi=out+63,*lo=out+33,*neg=out+32;
 u32 n=16;
 do {s32 sum=(s16)a[0]*(s16)b[0]; sum+=(s16)(a[0]>>16)*(s16)(b[0]>>16);
sum+=(s16)a[1]*(s16)b[1];sum+=(s16)(a[1]>>16)*(s16)(b[1]>>16);
sum+=(s16)a[2]*(s16)b[2];sum+=(s16)(a[2]>>16)*(s16)(b[2]>>16);
sum+=(s16)a[3]*(s16)b[3];sum+=(s16)(a[3]>>16)*(s16)(b[3]>>16);
sum+=(s16)a[4]*(s16)b[4];sum+=(s16)(a[4]>>16)*(s16)(b[4]>>16);
sum+=(s16)a[5]*(s16)b[5];sum+=(s16)(a[5]>>16)*(s16)(b[5]>>16);
sum+=(s16)a[6]*(s16)b[6];sum+=(s16)(a[6]>>16)*(s16)(b[6]>>16);
sum+=(s16)a[7]*(s16)b[7];sum+=(s16)(a[7]>>16)*(s16)(b[7]>>16);
sum+=(s16)a[8]*(s16)b[8];sum+=(s16)(a[8]>>16)*(s16)(b[8]>>16);
sum+=(s16)a[9]*(s16)b[9];sum+=(s16)(a[9]>>16)*(s16)(b[9]>>16);
sum+=(s16)a[10]*(s16)b[10];sum+=(s16)(a[10]>>16)*(s16)(b[10]>>16);
sum+=(s16)a[11]*(s16)b[11];sum+=(s16)(a[11]>>16)*(s16)(b[11]>>16);
sum+=(s16)a[12]*(s16)b[12];sum+=(s16)(a[12]>>16)*(s16)(b[12]>>16);
sum+=(s16)a[13]*(s16)b[13];sum+=(s16)(a[13]>>16)*(s16)(b[13]>>16);
sum+=(s16)a[14]*(s16)b[14];sum+=(s16)(a[14]>>16)*(s16)(b[14]>>16);
sum+=(s16)a[15]*(s16)b[15];sum+=(s16)(a[15]>>16)*(s16)(b[15]>>16);
 s32 value=sum>>12; *out++=value;*neg--=-value;b+=16;}while(--n != 0);
 *mid=0;b=original+528;n=15;
 do {s32 sum=(s16)a[0]*(s16)b[0]+(s16)(a[0]>>16)*(s16)(b[0]>>16);
sum+=(s16)a[1]*(s16)b[1];sum+=(s16)(a[1]>>16)*(s16)(b[1]>>16);
sum+=(s16)a[2]*(s16)b[2];sum+=(s16)(a[2]>>16)*(s16)(b[2]>>16);
sum+=(s16)a[3]*(s16)b[3];sum+=(s16)(a[3]>>16)*(s16)(b[3]>>16);
sum+=(s16)a[4]*(s16)b[4];sum+=(s16)(a[4]>>16)*(s16)(b[4]>>16);
sum+=(s16)a[5]*(s16)b[5];sum+=(s16)(a[5]>>16)*(s16)(b[5]>>16);
sum+=(s16)a[6]*(s16)b[6];sum+=(s16)(a[6]>>16)*(s16)(b[6]>>16);
sum+=(s16)a[7]*(s16)b[7];sum+=(s16)(a[7]>>16)*(s16)(b[7]>>16);
sum+=(s16)a[8]*(s16)b[8];sum+=(s16)(a[8]>>16)*(s16)(b[8]>>16);
sum+=(s16)a[9]*(s16)b[9];sum+=(s16)(a[9]>>16)*(s16)(b[9]>>16);
sum+=(s16)a[10]*(s16)b[10];sum+=(s16)(a[10]>>16)*(s16)(b[10]>>16);
sum+=(s16)a[11]*(s16)b[11];sum+=(s16)(a[11]>>16)*(s16)(b[11]>>16);
sum+=(s16)a[12]*(s16)b[12];sum+=(s16)(a[12]>>16)*(s16)(b[12]>>16);
sum+=(s16)a[13]*(s16)b[13];sum+=(s16)(a[13]>>16)*(s16)(b[13]>>16);
sum+=(s16)a[14]*(s16)b[14];sum+=(s16)(a[14]>>16)*(s16)(b[14]>>16);
sum+=(s16)a[15]*(s16)b[15];sum+=(s16)(a[15]>>16)*(s16)(b[15]>>16);
 s16 value=sum>>12;*lo++=value;*hi--=value;b+=16;}while(--n != 0);
 *last=-(((const s16 *)a)[0]+((const s16 *)a)[1]+((const s16 *)a)[2]+((const s16 *)a)[3]+((const s16 *)a)[4]+((const s16 *)a)[5]+((const s16 *)a)[6]+((const s16 *)a)[7]+((const s16 *)a)[8]+((const s16 *)a)[9]+((const s16 *)a)[10]+((const s16 *)a)[11]+((const s16 *)a)[12]+((const s16 *)a)[13]+((const s16 *)a)[14]+((const s16 *)a)[15]+((const s16 *)a)[16]+((const s16 *)a)[17]+((const s16 *)a)[18]+((const s16 *)a)[19]+((const s16 *)a)[20]+((const s16 *)a)[21]+((const s16 *)a)[22]+((const s16 *)a)[23]+((const s16 *)a)[24]+((const s16 *)a)[25]+((const s16 *)a)[26]+((const s16 *)a)[27]+((const s16 *)a)[28]+((const s16 *)a)[29]+((const s16 *)a)[30]+((const s16 *)a)[31]);
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
sum+=*coef++* *p++;
sum+=*coef++*base[96];
sum+=*coef++*base[128];
sum+=*coef++*base[224];
sum+=*coef++*base[256];
sum+=*coef++*base[352];
sum+=*coef++*base[384];
sum+=*coef++*base[480];
sum+=*coef++*base[512];
sum+=*coef++*base[608];
sum+=*coef++*base[640];
sum+=*coef++*base[736];
sum+=*coef++*base[768];
sum+=*coef++*base[864];
sum+=*coef++*base[896];
sum+=*coef++*base[-32];

if(sum>0x3fff800)*out++=hi;
else if(sum< -0x4000000)*out++=lo;
else *out++=sum>>11;
}while(--count>0);
}

void func_0213115c(s16 *samples, s16 *coeff, s16 *out) {
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
  sum += *coeff++ * base[-128];
  sum += *coeff++ * base[-32];
  if (sum > 0x3fff800) *out++ = 32767;
  else if (sum < -0x4000000) *out++ = -32768;
  else *out++ = sum >> 11;
 } while (--n > 0);
}

