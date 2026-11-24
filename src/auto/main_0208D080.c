/* 9 functions from 0x0208D080 to 0x0208E000 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s16 f0, f1, f2, f3, f4, f5, f6, f7, f8, f9;
} Unk10;
extern const Unk10 data_0214124c, data_02141238, data_02141080;
extern u8 *func_02021f10(s32);
extern f32 func_0201f8cc(u32),func_0201f884(s32);
extern f32 func_02020888(f32,f32),func_020201f4(f32,f32);
extern s32 func_0201ff0c(f32);

extern const Unk10 data_02141184;
extern u8 *data_0216010c;
extern void func_0209250c(s32,s32,s32,s16,s32,s32,s32,s32,s32,s32,s32,s32,s32);
extern const Unk10 data_021411e8;
extern const Unk10 data_021411d4;
extern const Unk10 data_021411c0;
extern const Unk10 data_021411ac;
extern const Unk10 data_02141170, data_0214115c;
extern void func_020922bc(s16,s16,s16,s32,s32,s32,s32,s32);
extern const Unk10 data_02141210;
extern const Unk10 data_021411fc;
extern const Unk10 data_02141198;
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);

void func_0208d84c(s16 arg0, s16 arg1, s16 arg2, s16 arg3) {
    Unk10 a = data_02141210;
    Unk10 b = data_021411fc;
    func_020a3bbc(0x2a);
    a.f5 = arg0;
    a.f6 = arg1;
    a.f8 = arg2;
    a.f7 = arg3;
    func_021098ac(&a);
    b.f5 = arg0 + 1;
    b.f6 = arg1;
    b.f8 = arg2 - 2;
    b.f7 = arg3 + 1;
    func_021098ac(&b);
}

void func_0208d900(s32 x, s32 y, s32 z, s32 value) {
Unk10 a = data_021411e8;
Unk10 b = data_021411d4;
Unk10 c = data_021411c0;
s16 i;
s32 base;
s32 n;
func_020a3bbc(42);
a.f5=x; a.f6=y; a.f7=z;
func_021098ac(&a);
base=x+1;
n=(value%100)/9;
for(i=0;i<11;i++){
func_020a3bbc(42);
b.f5=base+i*3; b.f6=y+1; b.f7=z+1;
func_021098ac(&b);
if(value==100){func_020a3bbc(43);
c.f5=base+i*3; c.f6=y+1; c.f7=z+2;
func_021098ac(&c);} else if(i<n){
func_020a3bbc(43);
c.f5=base+i*3; c.f6=y+1; c.f7=z+2;
func_021098ac(&c);
}

}
}

void func_0208da7c(s16 arg0, s32 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6) {
    Unk10 sp;
    s32 v;
    sp = data_021411ac;
    func_020a3bbc(arg0);
    v = arg4 * arg1;
    sp.f1 = v;
    sp.f2 = 0;
    sp.f8 = arg4;
    sp.f3 = arg4;
    sp.f9 = arg5;
    sp.f4 = arg5;
    sp.f5 = arg2;
    sp.f6 = arg3;
    sp.f7 = arg6;
    func_021098ac(&sp);
}

void func_0208db04(s16 arg0, s32 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, u8 arg6, s16 arg7) {
    s32 pow10 = 1;
    u8 digit = 0;
    s32 done = 0;

    if (arg1 < 0) {
        arg1 = 0;
    }

    func_0208da7c(arg0, (u8)(arg1 % 10), arg2, arg3, arg4, arg5, arg7);

    do {
        s32 v;
        pow10 *= 10;
        v = arg1 - (arg1 % pow10);
        digit++;
        if (pow10 > arg1) {
            done = 1;
        } else {
            s32 d = v / pow10;
            func_0208da7c(arg0, (u8)(d % 10), arg2 - arg6 * digit, arg3, arg4, arg5, arg7);
        }
    } while (done != 1);
}

void func_0208dc14(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4) {
    Unk10 sp;
    sp = data_02141198;
    if (arg4 == 1) {
        func_020a3bbc(0x2e);
    } else {
        func_020a3bbc(0x2d);
    }
    sp.f1 = (arg0 % 3) * 18;
    sp.f2 = (arg0 / 3) * 19;
    sp.f5 = arg1;
    sp.f6 = arg2;
    sp.f7 = arg3;
    func_021098ac(&sp);
}

void func_0208dcc8(s16 x,s16 y,s16 height,s32 unused,u8 value) {
Unk10 sp=data_02141184;
u8 *p=data_0216010c;
s16 fraction=(height*100)/(*(s16 *)(p+0x50d4)-1)*value;
s32 pos;
if(*(s16 *)(p+0x5368)&2) {
pos=y+15+fraction/100;
func_0209250c(0x36,1,x,(s16)pos,14,p[0x50d8],14,16,4,4,4,4,177);
} else {
pos=y+15+fraction/100;
func_0209250c(0x35,1,x,(s16)pos,14,p[0x50d8],14,16,4,4,4,4,177);
}
*(s16 *)(data_0216010c+0x50da)=pos;
if(*(s16 *)(data_0216010c+0x5300)&2) func_020a3bbc(0x38);
else func_020a3bbc(0x37);
sp.f1=0;sp.f2=16;sp.f5=x;sp.f6=y;
func_021098ac(&sp);
if(*(s16 *)(data_0216010c+0x5334)&2) func_020a3bbc(0x38);
else func_020a3bbc(0x37);
sp.f1=16;sp.f2=16;sp.f5=x;sp.f6=y+height+18;
func_021098ac(&sp);
}

void func_0208dea4(u32 id,s32 mode,s16 x,s16 y,s16 z,u8 bank) {
 Unk10 a=data_02141170;
 Unk10 b=data_0214115c;
 func_020a3bbc(bank+0x3b);
 switch(mode) {
 case 1:a.f1=12;break;
 case 2:a.f2=11;break;
 case 3:a.f1=12;a.f2=11;break;
 }
 a.f5=x+3; a.f6=y+2; a.f7=z+1;
 func_021098ac(&a);
 func_020a3bbc(bank+0x39);
 if(id<5)b.f2=id*11;else {b.f1=32;b.f2=(id-5)*11;}
 b.f5=x+16;b.f6=y+2;b.f7=z+1;
 func_021098ac(&b);
 func_020922bc(bank+0x33,x,y,0x34,0x10,0x20,0x10,0x8e);
}

