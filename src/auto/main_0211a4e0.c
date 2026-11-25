/* 28 functions from 0x0211A178 to 0x0211B0E8 (main), found by ds-decomp. */
#include "common.h"
typedef union {
 u32 word[2];
 struct { u32 unused0:13; u32 format:1; u32 unused1:14; u32 flipX:1; u32 flipY:1; u32 size:2;
 u32 tile:10; u32 unused2:2; u32 palette:4; u32 unused3:16; } bits;
} SpriteOam_1a8ac;
typedef struct { s32 width,height,format,palette,transparent,mapping; } SpriteTex_1a8ac;
static inline void set_tex_1a8ac(s32 format, u32 address, s32 width, s32 height, s32 transparent) {
 *(volatile u32 *)0x40004a8 = (format<<26)|(address>>3)|0x40000000|(width<<20)|(height<<23)|(transparent<<29);
}
extern u16 data_02144d84[][4];
extern u16 data_02144d6c[][4];
extern s32 data_02144db8[8];
extern s32 data_02144dd8[][4];
extern s32 data_02144e08[][4];
extern s32 data_02144db0[2];
extern u32 data_02145ba4;
void func_02006dc4(void *, u32);
void func_02008690(u32, void *, void *, u32, s32);
void func_02008e08(void *, void *, u32);
typedef struct { s32 v[6]; } Mtx23;

extern s32 data_0216f234[4];
extern u16 data_02155eb0[];
extern u16 data_0216f2c4[][4];
static inline s32 Active0211a3ac(void) {
 if(data_0216f234[1]==0 && data_02155eb0[0]!=0xfffe) return 1;
 return 0;
}
extern s32 data_0216f3d4[];
extern s32 data_0216f3d8[];
extern s32 data_0216f244[];
extern s32 data_0216f3c4[][6];
extern s32 data_0216f6c4[][6];
void func_0211a4e0(void *, void *, void *);
extern u32 data_02144d9c[5];
extern u32 data_021701d8[4];
extern u32 data_021701cc[3];
extern u16 data_02144e48[8];

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} U32x3;

extern u32 data_02155ed0[4];


extern void func_0211c5fc(void);

s32 func_02001fc0(s32);

extern void func_0211c52c(void);

void func_0211a4e0(void *arg0, void *arg1, void *arg2) {
register s32 x asm("r8"), y asm("r6");
s32 *a=arg0,*b=arg1;
Mtx23 tmp;
void *out=arg2;
s32 x2,y2,x3,y3;
if(arg2==arg1) arg2=&tmp;
x=a[0];y=a[1];
((s32 *)arg2)[0]=((s64)b[0]*x+(s64)b[2]*y)>>12;
((s32 *)arg2)[1]=((s64)b[1]*x+(s64)b[3]*y)>>12;
x2=a[2];y2=a[3];
((s32 *)arg2)[2]=((s64)b[0]*x2+(s64)b[2]*y2)>>12;
((s32 *)arg2)[3]=((s64)b[1]*x2+(s64)b[3]*y2)>>12;
x3=a[4];y3=a[5];
((s32 *)arg2)[4]=b[4]+(s32)(((s64)b[0]*x3+(s64)b[2]*y3)>>12);
((s32 *)arg2)[5]=b[5]+(s32)(((s64)b[1]*x3+(s64)b[3]*y3)>>12);
if(arg2==&tmp) *(Mtx23 *)out=tmp;
}

u8 *func_0211a5e4(s32 arg0) {
    return (u8 *)data_021701cc[2] + arg0 * 0x30;
}

extern void func_02118e68(void *);
extern void func_02118e84(void *, s32, s32);
extern s32 func_0200283c(s32);
extern s32 func_020027d4(s32, s32, s32);
