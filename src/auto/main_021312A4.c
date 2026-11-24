/* 12 functions from 0x021312A4 to 0x02132204 (main), found by ds-decomp. */
#include "common.h"

void func_021312a4(s16 *p, s16 *coef, s16 *out) {
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
sum+=*coef++*base[-160];
sum+=*coef++*base[-128];
sum+=*coef++*base[-32];
if(sum>0x3fff800)*out++=hi;
else if(sum< -0x4000000)*out++=lo;
else *out++=sum>>11;
}while(--count>0);
}

void func_021313ec(s16 *p, s16 *coef, s16 *out) {
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
sum+=*coef++*base[-256];
sum+=*coef++*base[-160];
sum+=*coef++*base[-128];
sum+=*coef++*base[-32];
if(sum>0x3fff800)*out++=hi;
else if(sum< -0x4000000)*out++=lo;
else *out++=sum>>11;
}while(--count>0);
}

void func_02131534(s16 *p, s16 *coef, s16 *out) {
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
sum+=*coef++*base[-288];
sum+=*coef++*base[-256];
sum+=*coef++*base[-160];
sum+=*coef++*base[-128];
sum+=*coef++*base[-32];
if(sum>0x3fff800)*out++=hi;
else if(sum< -0x4000000)*out++=lo;
else *out++=sum>>11;
}while(--count>0);
}

