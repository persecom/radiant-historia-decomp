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

void func_0213167c(s16 *samples, s16 *coeff, s16 *out) {
    s32 max = 0x7fff;
    s32 min = -0x8000;
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
        sum += *coeff++ * base[-384];
        sum += *coeff++ * base[-288];
        sum += *coeff++ * base[-256];
        sum += *coeff++ * base[-160];
        sum += *coeff++ * base[-128];
        sum += *coeff++ * base[-32];
        if (sum > 0x3fff800) *out++ = max;
        else if (sum < -0x4000000) *out++ = min;
        else *out++ = sum >> 11;
    } while (--n > 0);
}

void func_021317c4(s16 *p, s16 *coef, s16 *out) {
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
sum+=*coef++*base[-416];
sum+=*coef++*base[-384];
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

void func_0213190c(s16 *p, s16 *coef, s16 *out) {
    int count = 32;
    int sum;
    s16 *base;
    int lo = -32768, hi = 32767;
    do {
        base = p;
        sum = 0;
        sum += *coef++ * *p++;
        sum += *coef++ * base[96];
        sum += *coef++ * base[128];
        sum += *coef++ * base[224];
        sum += *coef++ * base[256];
        sum += *coef++ * base[352];
        sum += *coef++ * base[384];
        sum += *coef++ * base[480];
        sum += *coef++ * base[-512];
        sum += *coef++ * base[-416];
        sum += *coef++ * base[-384];
        sum += *coef++ * base[-288];
        sum += *coef++ * base[-256];
        sum += *coef++ * base[-160];
        sum += *coef++ * base[-128];
        sum += *coef++ * base[-32];
        if (sum > 0x3fff800) {
            *out++ = hi;
        } else if (sum < -0x4000000) {
            *out++ = lo;
        } else {
            *out++ = sum >> 11;
        }
    } while (--count > 0);
}

void func_02131a54(s16 *p, s16 *coef, s16 *out) {
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
sum+=*coef++*base[-544];
sum+=*coef++*base[-512];
sum+=*coef++*base[-416];
sum+=*coef++*base[-384];
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

void func_02131b9c(s16 *p, s16 *coef, s16 *out) {
    int count = 32;
    int sum;
    s16 *base;
    int lo = -32768, hi = 32767;
    do {
        base = p;
        sum = 0;
        sum += *coef++ * *p++;
        sum += *coef++ * base[96];
        sum += *coef++ * base[128];
        sum += *coef++ * base[224];
        sum += *coef++ * base[256];
        sum += *coef++ * base[352];
        sum += *coef++ * base[-640];
        sum += *coef++ * base[-544];
        sum += *coef++ * base[-512];
        sum += *coef++ * base[-416];
        sum += *coef++ * base[-384];
        sum += *coef++ * base[-288];
        sum += *coef++ * base[-256];
        sum += *coef++ * base[-160];
        sum += *coef++ * base[-128];
        sum += *coef++ * base[-32];
        if (sum > 0x3fff800) {
            *out++ = hi;
        } else if (sum < -0x4000000) {
            *out++ = lo;
        } else {
            *out++ = sum >> 11;
        }
    } while (--count > 0);
}

void func_02131ce4(s16 *p,s16 *coef,s16 *out) {
 int count=32;
 int sum;
 s16 *base;
 int lo=-32768,hi=32767;
 do {
 base=p;sum=0;
 sum+=*coef++ * *p++;
 sum+=*coef++ * base[96];
sum+=*coef++ * base[128];
sum+=*coef++ * base[224];
sum+=*coef++ * base[256];
sum+=*coef++ * base[-672];
sum+=*coef++ * base[-640];
sum+=*coef++ * base[-544];
sum+=*coef++ * base[-512];
sum+=*coef++ * base[-416];
sum+=*coef++ * base[-384];
sum+=*coef++ * base[-288];
sum+=*coef++ * base[-256];
sum+=*coef++ * base[-160];
sum+=*coef++ * base[-128];
sum+=*coef++ * base[-32];
 if(sum>0x3fff800) *out++=hi;
 else if(sum< -0x4000000) *out++=lo;
 else *out++=sum>>11;
 }while(--count>0);
}

void func_02131e2c(s16 *p, s16 *coef, s16 *out) {
    int count = 32;
    int sum;
    s16 *base;
    int lo = -32768, hi = 32767;
    do {
        base = p;
        sum = 0;
        sum += *coef++ * *p++;
        sum += *coef++ * base[96];
        sum += *coef++ * base[128];
        sum += *coef++ * base[224];
        sum += *coef++ * base[-768];
        sum += *coef++ * base[-672];
        sum += *coef++ * base[-640];
        sum += *coef++ * base[-544];
        sum += *coef++ * base[-512];
        sum += *coef++ * base[-416];
        sum += *coef++ * base[-384];
        sum += *coef++ * base[-288];
        sum += *coef++ * base[-256];
        sum += *coef++ * base[-160];
        sum += *coef++ * base[-128];
        sum += *coef++ * base[-32];
        if (sum > 0x3fff800) {
            *out++ = hi;
        } else if (sum < -0x4000000) {
            *out++ = lo;
        } else {
            *out++ = sum >> 11;
        }
    } while (--count > 0);
}

void func_02131f74(s16 *arg0, s16 *arg1, s16 *arg2) {
s32 hi = 0x7fff; s32 lo = -0x8000; s32 n = 0x20;
do { s16 *s = arg0; s32 acc = 0;
acc += *arg1++ * *arg0++;
acc += *arg1++ * s[96];
acc += *arg1++ * s[128];
acc += *arg1++ * s[-800];
acc += *arg1++ * s[-768];
acc += *arg1++ * s[-672];
acc += *arg1++ * s[-640];
acc += *arg1++ * s[-544];
acc += *arg1++ * s[-512];
acc += *arg1++ * s[-416];
acc += *arg1++ * s[-384];
acc += *arg1++ * s[-288];
acc += *arg1++ * s[-256];
acc += *arg1++ * s[-160];
acc += *arg1++ * s[-128];
acc += *arg1++ * s[-32];
if (acc > 0x3fff800) { *arg2++ = hi; } else if (acc < (s32)0xfc000000) { *arg2++ = lo; } else { *arg2++ = acc >> 11; }
} while (--n > 0);
}

void func_021320bc(s16 *p,s16 *coef,s16 *out) {
 int count=32;
 int sum;
 s16 *base;
 int lo=-32768,hi=32767;
 do {
 base=p;sum=0;
 sum+=*coef++ * *p++;
 sum+=*coef++ * base[96];
sum+=*coef++ * base[-896];
sum+=*coef++ * base[-800];
sum+=*coef++ * base[-768];
sum+=*coef++ * base[-672];
sum+=*coef++ * base[-640];
sum+=*coef++ * base[-544];
sum+=*coef++ * base[-512];
sum+=*coef++ * base[-416];
sum+=*coef++ * base[-384];
sum+=*coef++ * base[-288];
sum+=*coef++ * base[-256];
sum+=*coef++ * base[-160];
sum+=*coef++ * base[-128];
sum+=*coef++ * base[-32];
 if(sum>0x3fff800) *out++=hi;
 else if(sum< -0x4000000) *out++=lo;
 else *out++=sum>>11;
 }while(--count>0);
}

