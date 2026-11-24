/* 10 functions from 0x02098268 to 0x02098A28 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160244;
extern u32 data_02162868;
extern u32 data_0216bf84;
extern u8 *data_02160204;
extern u8 *data_02160120;
extern void func_0210968c(s32,s32,s32);
extern void func_02109790(s32);
extern void func_02108e54(s32);
extern void func_02098a28(void);
extern void func_02109264(s32);
extern void func_021089e8(s32,s32,s32);
extern void func_0210dc88(void);
extern void func_02108eec(s32,s32);
extern void func_02099480(void);
extern void func_020bd608(void);
extern void func_0205295c(void);
extern s32 func_020de3d8(void *);
extern void func_020b7350(s32);
extern u8 *data_02160a74;
extern void func_020e9384(void *);

typedef struct {
    u16 f0;
    u16 f1;
} Pair16;

extern s16 *data_0216011c;
extern Pair16 data_02141fdc[6];
extern Pair16 data_0214200c[8];
extern Pair16 data_0214202c[10];

void func_02098268(void) {
u8 *p=(u8 *)data_0216011c;
switch(*(u16 *)(p+0x2c)) {
case 0: break;
case 1: p[0x44]=1; *(u16 *)(p+0x38)=5; *(u16 *)(p+0x42)=0; break;
case 2: *(u16 *)(p+0x38)=1; *(u16 *)(data_02160a74+0x1b6)=2; break;
case 3: *(u16 *)(p+0x38)=2; *(u16 *)(data_02160a74+0x1b8)=1; break;
case 4: *(u16 *)(p+0x38)=3; *(u16 *)(data_02160a74+0x1ba)=2; break;
case 5: *(u16 *)(p+0x38)=5; p[0x45]=2; break;
case 6:
*(u16 *)(data_02160a74+0x1b6)=0xffff;
*(u16 *)(data_02160a74+0x1b0)=*(u16 *)(data_02160a74+0x1b6);
*(u16 *)(data_02160a74+0x1b8)=255;
*(u16 *)(data_02160a74+0x1ba)=7;
*(u32 *)(data_02160a74+0x58)&=~0x40000;
*(u16 *)(p+0x38)=0;
*(u16 *)(data_02160244+0xf4)=0;
break;
}
}

void func_020983ac(void) {
u8 *p=(u8 *)data_0216011c;
u8 **q=&data_02160a74;
switch(*(u16 *)(p+0x2c)) {
case 0: break;
case 1: *(u16 *)(p+0x38)=2; *(u16 *)(*q+0x1b8)=1; (*q)[0x1c8]=2; break;
case 2: *(u16 *)(p+0x38)=3; *(u16 *)(*q+0x1ba)=2; break;
case 3: *(u16 *)(p+0x38)=1; *(u16 *)(*q+0x1b6)=1; break;
case 4: *(u16 *)(p+0x38)=3; *(u16 *)(*q+0x1ba)=2; break;
case 5: *(u16 *)(p+0x38)=4; *(u16 *)(p+0x42)=0; break;
case 6:
*(u16 *)(*q+0x1b6)=0xffff;
*(u16 *)(*q+0x1b0)=*(u16 *)(*q+0x1b6);
func_020e9384(***(void ****)(*q+0xa0));
*(u16 *)(*q+0x1b8)=255;
*(u16 *)(*q+0x1ba)=7;
(*q)[0x1c8]=0;
*(u16 *)(p+0x38)=0;
break;
}
}

extern u8 *func_020ddb90(u16);
void func_020984e4(void) {
u8 **q=&data_02160a74;
s16 i;
u8 *p=(u8 *)data_0216011c;
switch(*(u16 *)(p+0x2c)) {
case 0: break;
case 1: *(u16 *)(*q+0x1b6)=4; *(u16 *)(p+0x38)=7; *(u16 *)(*q+0x1b8)=1; p[0x46]=1; (*q)[0x1ca]=1; break;
case 2: *(u16 *)(p+0x38)=1; *(u16 *)(*q+0x1b6)=4; break;
case 3: *(u16 *)(p+0x38)=7; p[0x46]=2; *(s8 *)(*q+0x1ca)=-1; break;
case 4: *(u16 *)(p+0x38)=1; *(u16 *)(*q+0x1ba)=4; break;
case 5: *(u16 *)(p+0x38)=4; *(u16 *)(p+0x42)=0; p[0x46]=0; *(u16 *)(*q+0x9c)=26; break;
case 6:
*(u16 *)(*q+0x9c)=2;
*(u16 *)(*q+0x1b6)=0xffff;
*(u16 *)(*q+0x1b0)=*(u16 *)(*q+0x1b6);
func_020e9384(***(void ****)(*q+0xa0));
*(u16 *)(*q+0x1b8)=255;
*(u16 *)(*q+0x1ba)=7;
(*q)[0x1c8]=0;
(*q)[0x1ca]=0;
*(u16 *)(p+0x38)=0;
for(i=0;i<3;i++) {
u8 *a=func_020ddb90((u16)i);
if(a && (*(u32 *)(a+0x80)&0x800)) *(u32 *)(a+0x80)&=~0x800;
}
break;
}
}

void func_02098694(u32 arg0) {
    u8 *out = (u8 *)data_0216011c;
    u16 buf[16];
    u16 *src = (u16 *)data_0214200c;
    u16 *dst = buf;
    u32 n = 8;
    u32 idx;
    s16 v0, v1;
    do {
        dst[1] = src[1];
        dst[0] = src[0];
        src += 2;
        dst += 2;
    } while (--n != 0);
    if (arg0 == 4 || arg0 == 6) {
        return;
    }
    idx = (arg0 << 17) >> 16;
    v0 = ((s16 *)buf)[idx];
    v1 = ((s16 *)buf)[idx + 1];
    *(s16 *)(out + 0x3a) = v0;
    *(s16 *)(out + 0x3c) = v1;
}

void func_02098710(u32 arg0) {
    u8 *out = (u8 *)data_0216011c;
    u16 buf[20];
    u16 *src = (u16 *)data_0214202c;
    u16 *dst = buf;
    u32 n = 10;
    u32 idx;
    s16 v0, v1;
    do {
        dst[1] = src[1];
        dst[0] = src[0];
        src += 2;
        dst += 2;
    } while (--n != 0);
    idx = (arg0 << 17) >> 16;
    v0 = ((s16 *)buf)[idx];
    v1 = ((s16 *)buf)[idx + 1];
    *(s16 *)(out + 0x3a) = v0;
    *(s16 *)(out + 0x3c) = v1;
}

void func_0209877c(u16 arg0) {
    u8 *out = (u8 *)data_0216011c;
    struct Table24 { s16 v[12]; } buf = *(const struct Table24 *)data_02141fdc;
    u16 idx = arg0 * 2;
    s16 v0 = buf.v[idx];
    s16 v1 = buf.v[idx + 1];
    *(s16 *)(out + 0x3a) = v0;
    *(s16 *)(out + 0x3c) = v1;
}

extern Pair16 data_02141ff4[6];
void func_020987e8(u16 arg0) {
    u8 *out = (u8 *)data_0216011c;
    struct Table24 { s16 v[12]; } buf = *(const struct Table24 *)data_02141ff4;
    u16 idx = arg0 * 2;
    s16 v0 = buf.v[idx];
    s16 v1 = buf.v[idx + 1];
    *(s16 *)(out + 0x3a) = v0;
    *(s16 *)(out + 0x3c) = v1;
}

extern Pair16 data_02141fc4[6];
void func_02098854(u16 arg0) {
    u8 *out = (u8 *)data_0216011c;
    struct Table24 { s16 v[12]; } buf = *(const struct Table24 *)data_02141fc4;
    u16 idx = arg0 * 2;
    s16 v0 = buf.v[idx];
    s16 v1 = buf.v[idx + 1];
    *(s16 *)(out + 0x3a) = v0;
    *(s16 *)(out + 0x3c) = v1;
}

void func_020988c0(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

s32 func_020988e8(void) {
s32 result=0;
s32 three=3,one=1;
data_02162868=one; data_0216bf84=result;
func_0210968c(three,-16,one);
func_02109790(three);
func_02108e54(one);
func_02098a28();
data_02160204[0x123]=result;
func_02109264(one);
func_021089e8(one,0x15,one);
func_0210968c(three,result,one);
func_02109790(three);
for(;;) { if(*(u32 *)(data_02160120+0x3c)!=0) break; func_0210dc88(); }
{
s32 three=3,one=1;
func_0210968c(three,-16,one);
func_02109790(three);
func_02108eec(one,0x1000);
}
func_02099480();
func_0210dc88();
func_020bd608();
func_0205295c();
if(data_02160204[0x135]==1) result=5;
else if(data_02160204[0x135]==0) result=2;
if(*(void **)(data_02160204+0x10c)!=0 && func_020de3d8(*(void **)(data_02160204+0x10c))) {
func_020b7350(result); result=30;
}
data_02162868=0;
return result;
}

