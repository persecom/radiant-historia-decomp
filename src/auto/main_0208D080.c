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

extern const Unk10 data_021412b0, data_0214129c, data_02141288, data_02141274, data_02141260;
extern u8 *data_02160204;
extern s32 func_02085158(s32);
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

void func_0208d84c(s16,s16,s16,s16);
void func_0208db04(s16,s32,s16,s16,s16,s16,u8,s16);
void func_0208d900(s32,s32,s32,s32);
void func_0208d080(s32 id,s16 x,s16 y,s32 mode) {
Unk10 a=data_021412b0,b=data_0214129c,c=data_02141288,d=data_02141274,e=data_02141260;
u8 *p=func_02021f10(id);
u8 level;
s16 hp,mp;
level=p[0x43];hp=*(s16 *)(p+0x10);mp=*(s16 *)(p+0x14);
f32 value,ratio;
s32 exp,total;
a.f5=x+2;a.f6=y+2;
switch(id) {
case -1:break;
case 0:func_020a3bbc(0x22);break;
case 1:func_020a3bbc(0x24);break;
case 2:func_020a3bbc(0x28);break;
case 3:func_020a3bbc(0x25);break;
case 4:func_020a3bbc(0x26);break;
case 6:func_020a3bbc(0x23);break;
case 7:func_020a3bbc(0x29);break;
}
func_021098ac(&a);
b.f5=x+0x2a;b.f6=y+2;
func_020a3bbc(0x2a);func_021098ac(&b);
func_0208db04(0x2c,level,x+0x45,y+2,6,8,5,0x8f);
b.f1=12;b.f5=x+0x2a;b.f6=y+11;
func_020a3bbc(0x2a);func_021098ac(&b);
func_0208db04(0x2c,hp,x+0x45,y+11,6,8,5,0x8f);
value=func_0201f8cc(*(u16 *)(p+0x10));
ratio=func_02020888(value,func_0201f884(*(u16 *)(p+0x12)+*(s16 *)(p+0x24)));
func_0208d84c(x+0x2a,y+0x13,0x22,0x8f);
c.f5=x+0x2b;c.f6=y+0x14;
c.f8=func_0201ff0c(func_020201f4(func_0201f884(c.f8),ratio));
func_020a3bbc(0x2b);func_021098ac(&c);
b.f2=8;b.f1=0;b.f5=x+0x2a;b.f6=y+0x18;
func_020a3bbc(0x2a);func_021098ac(&b);
func_0208db04(0x2c,mp,x+0x45,y+0x18,6,8,5,0x8f);
value=func_0201f8cc(*(u16 *)(p+0x14));
ratio=func_02020888(value,func_0201f884(*(u16 *)(p+0x16)+*(s16 *)(p+0x26)));
func_0208d84c(x+0x2a,y+0x20,0x22,0x8f);
if(ratio>0.0f){
d.f5=x+0x2b;d.f6=y+0x21;
d.f8=func_0201ff0c(func_020201f4(func_0201f884(d.f8),ratio));
func_020a3bbc(0x2b);func_021098ac(&d);
}
if(mode==1)return;
if(data_02160204[0x11c]==1)func_0208d900((s16)(x+0x2a),(s16)(y+0x25),0x8f,*(u16 *)(p+0x34));
b.f1=12;b.f2=9;b.f5=x+2;b.f6=y+0x2b;b.f8=17;b.f3=17;b.f9=7;b.f4=7;
func_020a3bbc(0x2a);func_021098ac(&b);
func_0208d84c(x+0x14,y+0x2d,0x39,0x8f);
exp=*(s32 *)(p+4)-*(s32 *)(data_0216010c+0x53d4+(p[0x43]-1)*4);
total=func_02085158(id);
level=p[0x43];
value=func_0201f884(exp);
ratio=func_02020888(value,func_0201f884(total-*(s32 *)(data_0216010c+0x53d4+(level-1)*4)));
if(level==99)ratio=1.0f;
if(ratio>0.0f){
e.f5=x+0x15;e.f6=y+0x2e;
e.f8=func_0201ff0c(func_020201f4(func_0201f884(e.f8),ratio));
func_020a3bbc(0x2b);func_021098ac(&e);
}
}

void func_0208d5c0(s32 id,s16 x,s16 y,s16 z) {
Unk10 a=data_0214124c;
Unk10 b=data_02141238;
Unk10 c=data_02141080;
u8 *p=func_02021f10(id);
s16 mp,hp;
hp=*(s16 *)(p+0x10);
mp=*(s16 *)(p+0x14);
f32 value,ratio;
a.f1=12;a.f5=x+0x36;a.f6=y;a.f7=z;
func_020a3bbc(0x2a);func_021098ac(&a);
func_0208db04(0x2c,hp,x+0x51,y,6,8,5,z);
value=func_0201f8cc(*(u16 *)(p+0x10));
ratio=func_02020888(value,func_0201f884(*(u16 *)(p+0x12)+*(s16 *)(p+0x24)));
func_0208d84c(x+0x36,y+8,0x22,z);
b.f5=x+0x37;b.f6=y+9;
b.f8=func_0201ff0c(func_020201f4(func_0201f884(b.f8),ratio));
b.f7=z+1;func_020a3bbc(0x2b);func_021098ac(&b);
a.f2=8;a.f1=0;a.f5=x+0x5a;a.f6=y;
func_020a3bbc(0x2a);func_021098ac(&a);
func_0208db04(0x2c,mp,x+0x75,y,6,8,5,z);
value=func_0201f8cc(*(u16 *)(p+0x14));
ratio=func_02020888(value,func_0201f884(*(u16 *)(p+0x16)+*(s16 *)(p+0x26)));
func_0208d84c(x+0x5a,y+8,0x22,z);
if(ratio>0.0f){
c.f5=x+0x5b;c.f6=y+9;
c.f8=func_0201ff0c(func_020201f4(func_0201f884(c.f8),ratio));
c.f7=z+1;func_020a3bbc(0x2b);func_021098ac(&c);
}
}

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

void func_0208d900(s32 x, s32 y, s32 z, s32 value)
{
  int new_var2;
  Unk10 a = data_021411e8;
  Unk10 b = data_021411d4;
  Unk10 c = data_021411c0;
  s16 i;
  s32 base;
  s32 n;
  s32 new_var;
  func_020a3bbc(42);
  a.f5 = x;
  new_var = value;
  a.f6 = y;
  a.f7 = z;
  func_021098ac(&a);
  base = x + 1;
  n = (value % 100) / 9;
  for (i = 0; i < 11; i++)
  {
    func_020a3bbc(42);
    b.f5 = base + (i * 3);
    s16 z1 = z + 1;
 new_var2 = z + 2;
    b.f6 = y + 1;
    b.f7 = z1;
    func_021098ac(&b);
    if (new_var == 100)
    {
      func_020a3bbc(43);
      c.f5 = base + (i * 3);
      c.f6 = y + 1;
      c.f7 = new_var2;
      func_021098ac(&c);
    }
    else
      if (i < n)
    {
      func_020a3bbc(43);
      c.f5 = base + (i * 3);
      c.f6 = y + 1;
      c.f7 = z + 2;
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
 if(id>=5) {
  b.f1=32;
  b.f2=(id-5)*11;
 } else {
  b.f2=id*11;
 }
 b.f5=x+16;b.f6=y+2;b.f7=z+1;
 func_021098ac(&b);
 func_020922bc(bank+0x33,x,y,0x34,0x10,0x20,0x10,0x8e);
}

