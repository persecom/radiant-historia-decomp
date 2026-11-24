/* 4 functions from 0x020DB864 to 0x020DC7EC (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160204, *data_02160258, *data_02160a6c, *data_02160244;
extern u32 data_0216025c[];
extern u8 *func_020f0a5c(u16);
extern u8 *func_020ddb90(u16);
extern u8 *func_020bf4dc(s32);
extern void *func_020de270(void);

extern u8 *func_02030698(void *, s32);

s32 func_020db864(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *p;
    switch (arg2) {
    case 0: {
        s32 mult;
        s16 pct = 0;
        s16 flat = 0;
        s32 val;
        p = func_02030698(*(void **)(arg0 + 0x118), 0xe);
        if (p != NULL) {
            pct += *(s16 *)(p + 2);
            flat += *(s16 *)(p + 4);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 0);
        if (p != NULL) {
            pct += *(s16 *)(p + 2);
            flat += *(s16 *)(p + 4);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 0xa);
        if (p != NULL) {
            pct += *(s16 *)(p + 2);
            flat += *(s16 *)(p + 4);
        }
        pct += *(s16 *)(*(u8 **)(arg0 + 0x118) + 0x94);
        flat += *(s16 *)(*(u8 **)(arg0 + 0x118) + 0x96);
        mult = 100;
        if (arg1 != NULL) {
            mult = *(s16 *)(arg1 + 2);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 1);
        if (p != NULL) {
            pct -= *(s16 *)(p + 2);
            flat -= *(s16 *)(p + 4);
        }
        val = (*(s16 *)(*(u8 **)(arg0 + 0x118) + 0x28) * (pct + 100)) / 100;
        val = (mult * val) / 100 + flat;
        if (val <= 1) {
            val = 1;
        }
        return val;
    }
    case 1: {
        s16 pct = *(s16 *)(*(u8 **)(arg0 + 0x118) + 0x98);
        s16 flat = *(s16 *)(*(u8 **)(arg0 + 0x118) + 0x9a);
        s32 mult;
        s32 val;
        p = func_02030698(*(void **)(arg0 + 0x118), 0x10);
        if (p != NULL) {
            pct += *(s16 *)(p + 2);
            flat += *(s16 *)(p + 4);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 4);
        if (p != NULL) {
            pct += *(s16 *)(p + 2);
            flat += *(s16 *)(p + 4);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 5);
        if (p != NULL) {
            pct -= *(s16 *)(p + 2);
            flat -= *(s16 *)(p + 4);
        }
        mult = 100;
        if (arg1 != NULL) {
            mult = *(s16 *)(arg1 + 2);
        }
        val = (*(s16 *)(*(u8 **)(arg0 + 0x118) + 0x2c) * (pct + 100)) / 100;
        val = (mult * val) / 100 + flat;
        if (val <= 1) {
            val = 1;
        }
        return val;
    }
    case 2: {
        s16 pct = 0;
        s16 flat = 0;
        s16 val;
        p = func_02030698(*(void **)(arg0 + 0x118), 0xf);
        if (p != NULL) {
            pct += *(s16 *)(p + 2);
            flat += *(s16 *)(p + 4);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 0xb);
        if (p != NULL) {
            pct += *(s16 *)(p + 2);
            flat += *(s16 *)(p + 4);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 2);
        if (p != NULL) {
            pct += *(s16 *)(p + 2);
            flat += *(s16 *)(p + 4);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 3);
        if (p != NULL) {
            pct -= *(s16 *)(p + 2);
            flat -= *(s16 *)(p + 4);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 0xa);
        if (p != NULL) {
            pct -= *(s16 *)(p + 6);
        }
        val = (*(s16 *)(*(u8 **)(arg0 + 0x118) + 0x2a) * (pct + 100)) / 100 + flat;
        if (val <= 1) {
            val = 1;
        }
        return val;
    }
    case 3: {
        s16 pct = 0;
        s16 flat = 0;
        s16 val;
        p = func_02030698(*(void **)(arg0 + 0x118), 0x11);
        if (p != NULL) {
            pct += *(s16 *)(p + 2);
            flat += *(s16 *)(p + 4);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 0xc);
        if (p != NULL) {
            pct += *(s16 *)(p + 2);
            flat += *(s16 *)(p + 4);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 6);
        if (p != NULL) {
            pct += *(s16 *)(p + 2);
            flat += *(s16 *)(p + 4);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 7);
        if (p != NULL) {
            pct -= *(s16 *)(p + 2);
            flat -= *(s16 *)(p + 4);
        }
        val = (*(s16 *)(*(u8 **)(arg0 + 0x118) + 0x2e) * (pct + 100)) / 100 + flat;
        if (val <= 1) {
            val = 1;
        }
        return val;
    }
    }
    return 0;
}

void func_020dc4b8(void) {
u8 *p, *q, *r;
s8 i;
u16 id;
s32 one=1, zero=0;
p=func_020f0a5c(*(u16 *)(data_02160204+0x7c));
if(p){
*(u32 *)(p+0x14)|=1;
q=*(u8 **)p; r=data_0216025c[1];
*(u32 *)(q+0x6c)=*(u32 *)(r+0x6c);
*(u32 *)(q+0x70)=*(u32 *)(r+0x70);
*(u32 *)(q+0x74)=*(u32 *)(r+0x74);
*(u32 *)(q+0xf4)=one;
if(*(u16 *)(data_02160204+0x7c)==15){
*(u32 *)(data_0216025c[1]+0x6c)=0x160000;
*(u32 *)(data_0216025c[1]+0x74)=0x1ba000;
*(u16 *)(data_02160258+0x8e)=0x400;
*(u16 *)(data_02160258+0x90)=0x400;
*(u16 *)(data_02160258+0x92)=0x100;
*(u16 *)(data_02160258+0x94)=0x80;
r=data_0216025c[1];
*(u32 *)(q+0x6c)=*(u32 *)(r+0x6c);
*(u32 *)(q+0x70)=*(u32 *)(r+0x70);
*(u32 *)(q+0x74)=*(u32 *)(r+0x74);
*(u32 *)(q+0xf4)=one;
}}
if(*(u16 *)(data_02160204+0x72)==0 && data_02160204[0x89]==0){
func_020d67f8(); func_020d708c(0,0,*(u16 *)(data_02160204+0x6a),0);
}else if(*(u16 *)(data_02160204+0x72)==0 && data_02160204[0x89]==2){
func_020d67f8(); func_020d708c(zero,1,*(u16 *)(data_02160204+0x6a),zero); data_02160204[0x89]=zero;
}else if(data_02160204[0x89]==0 && *(s8 *)(data_02160204+0xe0)==1){
func_020d67f8(); func_020d708c((u16)((*(u16 *)(data_02160204+0x72)-1)/20+1),0,*(u16 *)(data_02160204+0x6a),0);
}else if(data_02160204[0x89]!=1){
func_020d67f8(); func_020d7e7c((u16)((*(u16 *)(data_02160204+0x72)-1)/20+1),0,*(u16 *)(data_02160204+0x6a));
}
func_020d2e98(); func_020d91bc(1); func_020d08d0();
p=*(u8 **)(data_02160a6c+0xac);
while(p){id=*(u16 *)(p+0x90); func_020e2834(p,(u8)func_020bd490(3,(u8)id),(u8)id); p=*(u8 **)(p+0x16c);}
func_02092b04();func_020c0e64();func_020c1038();func_020c11f4();func_0202b398();func_0202b41c();func_0202b694();func_020a31c8(1);
p=*(u8 **)(data_02160a6c+0xb8);
while(p){if(*(u32 *)(*(u8 **)(p+0x118)+0x8c)&8)data_02160244[0x170]=one;p=*(u8 **)(p+0x174);}
for(i=0;i<3;i++){p=func_020ddb90((u16)i);if(p){
*(u8 **)(data_02160244+0x60+i*4)=func_020bf4dc(i);
**(u32 **)(data_02160244+0x60+i*4)=*(u16 *)(p+0x90)+1;
*(u32 *)(*(u8 **)(data_02160244+0x60+i*4)+0x20)=*(u32 *)(p+0x1c0);
}}
data_02160204[0x140]=zero;
if(!*(void **)(data_02160204+0x10c))*(void **)(data_02160204+0x10c)=func_020de270();
}

