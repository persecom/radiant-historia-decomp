/* 4 functions from 0x020DB864 to 0x020DC7EC (main), found by ds-decomp. */
#include "common.h"
extern u32 data_02162870[],data_02162868[];
extern volatile u32 data_02160668[];
extern char * volatile data_02160268[];
extern char data_021514bc[],data_021514cc[],data_021514d8[],data_021514e4[],data_021514f8[],data_0215150c[];
extern s32 data_02162814,data_02162884;
extern u64 func_02007904(void);
extern void func_02108d34(s32,f32);
extern void func_020a2c20(void);
extern void func_020dc170(void);

extern u32 data_02155c3c, data_02162830, data_02162834[], data_0216281c, data_02162820[], data_0216bf84;
extern void func_020dc994(void), func_020dc998(void), func_020dc99c(void);
extern u8 *func_0210c594(s32, u32);
extern u8 *func_020bb034(s32);
extern u8 *data_02160204, *data_02160258, *data_02160a6c, *data_02160244;
extern volatile u32 data_0216025c[];
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

extern void func_02109264(s32);
extern void func_021089e8(s32,s32,s32);
extern void func_0210d6a4(s32,s32);
s32 func_020dbd0c(void){
s32 zero=0,one=1;
data_02162870[0]=zero;
data_02160204[0x123]=zero;
data_02160204[0x137]|=1;
func_020bd608();
if(*(void **)(data_02160204+0x10c)){func_020de29c(*(void **)(data_02160204+0x10c));*(void **)(data_02160204+0x10c)=0;}
*(u16 *)(data_02160204+0x144)=zero;
*(u16 *)(data_02160204+0x142)=zero;
*(u32 *)(data_02160204+0x108)=zero;
*(u32 *)(data_02160204+0x13c)=zero;
data_02162868[0]=one;data_0216bf84=zero;
data_0216025c[0]=9;
func_0200781c();
data_0216025c[2]=zero;
data_02160668[0]=((u32)func_02007904()<<6)/33514;
data_02160268[0]=data_021514bc;
data_0216025c[2]++;
if(data_02160204[0x117] || data_02160204[0x118]){
s32 flags=3;
if(data_02160204[0x117])flags&=~2;
if(data_02160204[0x118])flags&=~1;
if(data_02160204[0x117]+data_02160204[0x118]<=1)func_0210968c(flags,-16,2);
}else func_0210968c(3,-16,2);
{u32 i=data_0216025c[2];data_02160668[i]=((u32)func_02007904()<<6)/33514;data_02160268[i]=data_021514cc;data_0216025c[2]++;}
func_02109790(3);
func_0210dc88();
{u32 i=data_0216025c[2];data_02160668[i]=((u32)func_02007904()<<6)/33514;data_02160268[i]=data_021514d8;data_0216025c[2]++;}
func_020212ec();
{u32 i=data_0216025c[2];data_02160668[i]=((u32)func_02007904()<<6)/33514;data_02160268[i]=data_021514e4;data_0216025c[2]++;}
func_020dc170();
{u32 i=data_0216025c[2];u32 ticks=((u32)func_02007904()<<6)/33514;data_02160268[i]=data_021514f8;data_02160668[i]=ticks;data_0216025c[2]++;}
func_02108d34(one,1.0f);
func_0210d6a4(127,one);
if(data_02160204[0x89]==0 || data_02160204[0x89]==2){func_02109264(one);
func_021089e8(one,5,3);}
func_020a2c38(*(u16 *)((u8 *)data_0216025c[1]+0x48),0);
{u32 i=data_0216025c[2];data_02160668[i]=((u32)func_02007904()<<6)/33514;data_02160268[i]=data_0215150c;data_0216025c[2]++;}
{
s32 done=0;
while(1) {
u32 flags=*(u32 *)((u8 *)data_0216025c[1]+0x60);
if(flags&4){done=one;data_0216025c[0]=9;}
else if(flags&8){if(data_02160204[0x7a])func_020414b0();done=one;data_0216025c[0]=15;}
else if(flags&64){if(data_02160204[0x7a])func_020414b0();done=one;}
if(*(u32 *)((u8 *)data_0216025c[1]+0x60)&16){done=one;data_0216025c[0]=2;}
if(done)break;
func_0210dc88();
}
}
data_02160204[0x117]=0;data_02160204[0x118]=0;
while(1){
if(*(s8 *)((u8 *)data_0216025c[1]+0x94)!=0)break;
data_02162814-=2;
if(data_02162814 < -16)data_02162814=-16;
data_02162884-=2;
if(data_02162884 < -16)data_02162884=-16;
if(data_02162814 == -16 && data_02162884 == -16) break;
func_0210dc88();
}
func_020a2c20();
func_02108eec(1,1000);
func_020dc7ec();
data_02160204[0xe0]=0;
func_0210dc88();
data_02162868[0]=0;
func_0205295c();
if(data_02162814==16){
while(1){data_02162814-=2;
if(data_02162814 < -16)data_02162814=-16;
data_02162884-=2;
if(data_02162884 < -16)data_02162884=-16;
if(data_02162814 == -16 && data_02162884 == -16) break;
func_0210dc88();}
}
return data_0216025c[0];
}

void func_020dc4b8(void);
void func_020dc170(void){
u8 *created;
s32 zero=0, one=1, priority=1002;
func_020a2c20();
*(volatile u16 *)0x4000304 &= ~0x8000;
func_0210f7b0();func_020f4928();func_020df6d4();func_020bf65c();func_020c0d1c();
func_020d8e5c(zero);func_02120524(one);func_020eb180(zero,zero);
func_020eaaa0(priority);func_020f25b0(priority);
func_020ec12c();func_020d850c();func_020dcad8();func_020eff5c(zero);
func_020d8e80();func_020d0418();func_020d8f78();func_020bc794();func_020bcf78(0x38);
func_020b485c();func_0202f388();func_02063e84();func_02065a30();func_02065bbc();func_021070c4();func_02026cec();func_020de458();func_020a2dd0();func_020a2fe4();
func_020e9d0c(priority);func_0203157c();func_0202f508();
created=func_0210c594(0xa8,data_02155c3c);
data_0216025c[1]=(u32)created;
*(void (**)(void))created=func_020dc994;
*(u32 *)((u8 *)data_0216025c[1]+4)=priority+9;
func_0210d9e4(data_0216025c[1]);
*(void (**)(void))((u8 *)data_0216025c[1]+0x14)=func_020dc998;
*(u32 *)((u8 *)data_0216025c[1]+0x18)=priority-1;
func_0210db70((u8 *)data_0216025c[1]+0x14);
*(void (**)(void))((u8 *)data_0216025c[1]+0x28)=func_020dc99c;
*(u32 *)((u8 *)data_0216025c[1]+0x2c)=priority;
func_0210dae0((u8 *)data_0216025c[1]+0x28);
*(u32 *)((u8 *)data_0216025c[1]+0x50)=10;
*(u32 *)((u8 *)data_0216025c[1]+0x54)=zero;
*(u32 *)((u8 *)data_0216025c[1]+0x58)=zero;
*(u32 *)((u8 *)data_0216025c[1]+0x5c)=zero;
*(u32 *)((u8 *)data_0216025c[1]+0x64)=zero;
*(u32 *)((u8 *)data_0216025c[1]+0x6c)=0x200000;
*(u32 *)((u8 *)data_0216025c[1]+0x70)=0x1f000;
*(u32 *)((u8 *)data_0216025c[1]+0x74)=0x200000;
*(u32 *)((u8 *)data_0216025c[1]+0x78)=zero;
*(u32 *)((u8 *)data_0216025c[1]+0x7c)=zero;
*(u32 *)((u8 *)data_0216025c[1]+0x88)=zero;
if(data_02160204[0x89]==0 || data_02160204[0x89]==2){
if(*(u16 *)(data_02160204+0xfc)==0) *(u16 *)(data_02160204+0x7c)=3;
else{
*(u16 *)(data_02160204+0x7c)=*(u16 *)(data_02160204+0xfc);
*(u16 *)((u8 *)data_0216025c[1]+0x48)=data_02160204[0xfe]|(data_02160204[0xff]<<5)|(data_02160204[0x100]<<10);
}
*(u16 *)((u8 *)data_0216025c[1]+0x48)=0;
func_020f0154(*(u16 *)(data_02160204+0x7c));
if(*(u16 *)(data_02160204+0x7c)==24) *(u16 *)((u8 *)data_0216025c[1]+0x8e)=1;
if(data_02160204[0x135]==1){func_020d6724();data_02160204[0x11c]=1;}
func_020dc4b8();
}else if(data_02160204[0x89]==1){func_020b4c60(*(u16 *)(data_02160204+0xd4),*(u16 *)(data_02160204+0x8a),one,zero,zero,zero);
}
*(u8 **)((u8 *)data_0216025c[1]+0x4c)=func_020bb034(0);
*(u16 *)(*(u8 **)((u8 *)data_0216025c[1]+0x4c)+0x112)=9;
func_020b52e0(*(u8 **)((u8 *)data_0216025c[1]+0x4c));
*(u32 *)(data_02160244+0x78)=0;
data_02162830=30;data_02162834[0]=1;data_0216281c=2;data_02162820[0]=2;data_0216bf84=1;
func_020a4c98(1);
}

extern s32 func_020bd490(s32, u8);
extern void func_020e2834(u8 *, u8, u8);
void func_020dc4b8(void) {
s32 kind=3;
u8 *p, *q, *r, *node;
s8 i;
u16 id;
s32 one=1, zero=0;
p=func_020f0a5c(*(u16 *)(data_02160204+0x7c));
if(p){
q=*(u8 **)p;
*(u32 *)(p+0x14)|=1; r=((u8 *)data_0216025c[1]);
*(u32 *)(q+0x6c)=*(u32 *)(r+0x6c);
*(u32 *)(q+0x70)=*(u32 *)(r+0x70);
*(u32 *)(q+0x74)=*(u32 *)(r+0x74);
*(u32 *)(q+0xf4)=one;
if(*(u16 *)(data_02160204+0x7c)==15){
*(u32 *)(((u8 *)data_0216025c[1])+0x6c)=0x160000;
*(u32 *)(((u8 *)data_0216025c[1])+0x74)=0x1ba000;
*(u16 *)(data_02160258+0x8e)=0x400;
*(u16 *)(data_02160258+0x90)=0x400;
*(u16 *)(data_02160258+0x92)=0x100;
*(u16 *)(data_02160258+0x94)=0x80;
r=((u8 *)data_0216025c[1]);
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
node=*(u8 **)(data_02160a6c+0xac);
while(node){id=*(u16 *)(node+0x90); func_020e2834(node,func_020bd490(kind,id),id); node=*(u8 **)(node+0x16c);}
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

