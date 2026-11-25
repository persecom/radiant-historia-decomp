/* 32 functions from 0x020C93F4 to 0x020CA10C (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160a80;
extern u8 *data_0216020c;
extern u16 data_02151fc8;
extern u32 data_02162830,data_02162834[],data_0216281c,data_02162820[];
extern u8 *func_020ea100(void);
extern void func_020ea188(void *,s32,s32);
extern void func_02108680(void *,s32,s32);
extern void func_021167f0(void *,void *);
extern void func_02002fb0(s32,s32,s32,s32,s32);
extern void func_020ca10c(void);
extern void func_020be6a0(void);
extern void func_020be704(void);
extern void func_020cb1f4(void);
extern void func_020cb1f8(void);
extern void func_020be764(void);
extern void func_020be774(void);
extern void func_020be650(void);
extern void func_020be678(void);
extern void func_0210f6d4(void);
extern void func_0210b894(void);
extern void func_020f40a4(void);
extern void func_020be784(void);
extern void func_020be874(void);
extern void func_020e9eb0(void);
extern void func_021070c4(void);
extern void func_0210d9e4(void *);
extern void func_0210dab0(void *);
extern void func_0210db70(void *);
extern void func_0210dbd0(void *);
extern void func_0210dae0(void *);
extern void func_0210db40(void *);
extern void func_0210b750(s32);
extern void func_020bf414(s32);
extern void func_02120524(s32);
extern void func_020eff5c(s32);

extern u8 *data_02160234;
extern u32 data_02162858[], data_02162854, data_02162850;
extern u8 data_0216242c[];
extern void *data_02155984;

extern void func_020c9980();
extern void func_020c9404(u8 *, u16);
extern void func_020c94dc(u8 *);
extern void func_020c9348(u8 *, s32);
extern u8 *func_020c9c10(void *, s32);
extern void func_020c9590(u8 *);
extern u16 func_020c9808(u8 *);
extern s32 func_020c9888(u8 *);
extern s32 func_0201f884(s32);
extern s32 func_02020604(s32, s32);
extern s32 func_02020888(s32, s32);
extern u16 data_021445f8[];
extern u16 data_02162908[];
extern s32 func_0201f8cc(u32);
extern s32 func_020201f4(s32, s32);
extern s32 func_0201ff0c(void);
extern void func_020c7930(void *);
extern void func_020c9680(u8 *, s16 *, s16 *);
extern s32 func_020c992c(u8 *);
extern u16 func_020c9924(u8 *);
void func_020c93f4(u8 *arg0, u16 arg1) {
    *(u16 *)(arg0 + 0x3a) = arg1;
    func_020c9404(arg0, arg1);
}

void func_020c9404(u8 *arg0, u16 arg1) {
    u16 max = *(u16 *)(arg0 + 0x42);
    s16 diff = max - *(u16 *)(arg0 + 0x40);
    u16 old = *(u16 *)(arg0 + 0x3a);
    if (max != 0) {
        if (old >= max) {
            *(u16 *)(arg0 + 0x3a) = max - 1;
        }
    } else {
        *(u16 *)(arg0 + 0x3a) = 0;
    }
    if (diff > 0) {
        if (*(u16 *)(arg0 + 0x3e) > diff) {
            *(u16 *)(arg0 + 0x3e) = diff;
        }
    } else {
        *(u16 *)(arg0 + 0x3e) = 0;
    }
    if (old != *(u16 *)(arg0 + 0x3a)) {
        func_020c9348(arg0, 1);
        *(u8 *)(arg0 + 0x44) = 1;
    }
}

u8 func_020c9488(u8 *arg0) {
    return *(u8 *)(arg0 + 0x44);
}

u32 func_020c9490(u8 *arg0) {
    return arg0[0x44] | arg0[0x45];
}

u16 func_020c94a0(u8 *arg0) {
    return *(u16 *)(arg0 + 0x3a);
}

u16 func_020c94a8(u8 *arg0) {
    return *(u16 *)(arg0 + 0x3e);
}

s16 func_020c94b0(u8 *arg0) {
    return *(u16 *)(arg0 + 0x3a) - *(u16 *)(arg0 + 0x3e);
}

void func_020c94c8(u8 *arg0, u16 arg1, u16 arg2) {
    *(u16 *)(arg0 + 0x52) = arg1;
    *(u16 *)(arg0 + 0x54) = arg2;
    func_020c94dc(arg0);
}

void func_020c94dc(u8 *arg0) {
    u8 *obj = func_020c9c10(*(void **)(arg0 + 0x30), 0);
    ((void (*)(u8 *, s16))(*(void **)(obj + 0x10)))(obj, *(s16 *)(arg0 + 0x34) + *(u16 *)(arg0 + 0x52) - *(s16 *)(obj + 0x3e));
    ((void (*)(u8 *, s16))(*(void **)(obj + 0x14)))(obj, *(s16 *)(arg0 + 0x36) + *(u16 *)(arg0 + 0x54) - *(s16 *)(obj + 0x40));
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 1);
    ((void (*)(u8 *, s16))(*(void **)(obj + 0x10)))(obj, *(s16 *)(arg0 + 0x34) + *(u16 *)(arg0 + 0x52) - *(s16 *)(obj + 0x3e));
    ((void (*)(u8 *, s16))(*(void **)(obj + 0x14)))(obj, *(s16 *)(arg0 + 0x36));
    func_020c9590(arg0);
}

void func_020c9590(u8 *arg0) {
    s16 v = func_020c9808(arg0);
    s16 diff = (s16)(*(u16 *)(arg0 + 0x42) - *(u16 *)(arg0 + 0x40));
    u8 *obj1 = func_020c9c10(*(void **)(arg0 + 0x30), 1);
    s16 v1 = *(s16 *)(obj1 + 0x3e);
    u8 *obj2 = func_020c9c10(*(void **)(arg0 + 0x30), 2);
    if (diff <= 0) {
        return;
    }
    {
        s16 val = v - (s16)(diff + func_020c9924(obj2 + 0x30));
        if (val < 0xc) {
            val = 0xc;
        }
        *(u16 *)(obj2 + 0x40) = val;
        *(u16 *)(obj2 + 0x3e) = v1;
    }
}

void func_020c9610(u8 *arg0) {
    s16 b = 0;
    s16 a = 0;
    s32 v;
    s32 q;
    u8 *obj;
    func_020c9680(arg0, &b, &a);
    v = func_020c9888(arg0);
    q = func_0201f8cc(*(u16 *)(arg0 + 0x3e));
    func_020201f4(q, v);
    a += func_0201ff0c();
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 2);
    *(s16 *)(obj + 0x3c) = a;
    *(s16 *)(obj + 0x3a) = b;
    func_020c7930(obj);
}

void func_020c9680(u8 *arg0, s16 *arg1, s16 *arg2) {
    u8 *obj = func_020c9c10(*(void **)(arg0 + 0x30), 1);
    *arg2 = *(s16 *)(obj + 0x3c) + *(s16 *)(obj + 0x40);
    *arg1 = *(s16 *)(obj + 0x3a);
}

void func_020c96b4(u8 *arg0, u8 *arg1) {
    s16 b = 0;
    s16 a = 0;
    s32 sum;
    func_020c9680(arg0, &b, &a);
    sum = a + func_020c9808(arg0);
    {
        s16 lim = (s16)sum;
        *(volatile s16 *)(arg1 + 0x3c) = *(s16 *)(arg0 + 0x5a) + (s16)(data_02162908[1] - *(s16 *)(arg0 + 0x5e));
        if (*(volatile s16 *)(arg1 + 0x3c) < a) {
            *(volatile s16 *)(arg1 + 0x3c) = a;
        }
        {
            s16 f40 = *(volatile s16 *)(arg1 + 0x40);
            if (*(volatile s16 *)(arg1 + 0x3c) + f40 > lim) {
                *(volatile s16 *)(arg1 + 0x3c) = lim - f40;
            }
        }
    }
    func_020c7930(arg1);
}

u16 func_020c9744(u8 *arg0, u8 *arg1) {
 s16 x=0,y=0;
 s16 delta;
 s32 scale, value;
 u16 result;
 s16 quotient, remainder;
 func_020c9680(arg0,&x,&y);
 delta=*(s16 *)(arg1+0x3c)-y;
 func_020201f4(0x447a0000,func_020c9888(arg0));
 scale=func_0201ff0c();
 value=delta*1000;
 quotient=(s16)(value/scale);
 remainder=(s16)((value%scale)/1000);
 result=quotient;
 if(remainder > (scale/1000)/2) result++;
 return result;
}

u16 func_020c9808(u8 *arg0) {
    u16 vals[4];
    u16 *dst = vals;
    u16 i;
    u16 r5 = *(u16 *)(arg0 + 0x54);
    vals[0] = data_021445f8[0];
    vals[1] = data_021445f8[1];
    vals[2] = data_021445f8[2];
    vals[3] = data_021445f8[3];
    for (i = 0; i < 2; i++) {
        r5 -= *(u16 *)((u8 *)func_020c9c10(*(void **)(arg0 + 0x30), dst[i * 2]) + 0x40);
    }
    return r5;
}

s32 func_020c9888(u8 *arg0) {
    s16 v = (s16)(*(u16 *)(arg0 + 0x42) - *(u16 *)(arg0 + 0x40));
    s32 r4 = func_0201f8cc(func_020c9808(arg0));
    if (v <= 0) {
        return 0;
    }
    r4 = func_02020604(r4, func_0201f884(*(s16 *)((u8 *)func_020c9c10(*(void **)(arg0 + 0x30), 2) + 0x40)));
    return func_02020888(r4, func_0201f884(v));
}

void func_020c98f8(u8 *arg0) {
    func_020c9590(arg0);
    func_020c9610(arg0);
    func_020c9348(arg0, 1);
    ((void (*)(u8 *))func_020c9404)(arg0);
}

u16 func_020c9924(u8 *arg0) {
    return *(u16 *)(arg0 + 8);
}

s32 func_020c992c(u8 *arg0) {
    *(u32 *)arg0 = 0;
    *(u16 *)(arg0 + 4) = 0;
    return 0;
}

void func_020c9940(void) {
    func_020c9980();
}

extern void func_0210c5dc(void *);
extern void func_020c99e4(u8 *, void *);
void func_020c994c(u8 *arg0) {
    if (*(void **)arg0 == NULL) {
        return;
    }
    if (*(void **)arg0 != NULL) {
        func_0210c5dc(*(void **)arg0);
        *(void **)arg0 = NULL;
    }
    *(void **)arg0 = NULL;
    *(u16 *)(arg0 + 4) = 0;
}

void func_020c9980(u8 *arg0) {
    u16 i;
    if (*(void **)arg0 == NULL) {
        return;
    }
    for (i = 0; i < *(u16 *)(arg0 + 4); i++) {
        func_020c99e4(arg0, (*(void ***)arg0)[i]);
        (*(void ***)arg0)[i] = NULL;
    }
    func_020c994c(arg0);
}

void func_020c99e4(u8 *arg0, void *arg1) {
    if (arg0 == NULL || arg1 == NULL) {
        return;
    }
    ((void (*)(void *))(*(void **)((u8 *)arg1 + 4)))(arg1);
}

extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
void func_020c9a04(u8 *p,u16 count) {
void **tmp=func_0210c594(count*4,data_02155c3c);
u16 i;
for(i=0;i<*(u16 *)(p+4);i++) {
if(i>=count)break;
tmp[i]=(*(void ***)p)[i];
}
for(;i<count;i++) tmp[i]=NULL;
for(i=count;i<*(u16 *)(p+4);i++) func_020c99e4(p,(*(void ***)p)[i]);
func_020c994c(p);
*(u16 *)(p+4)=count;
*(void ***)p=func_0210c594(count*4,data_02155c3c);
for(i=0;i<count;i++) (*(void ***)p)[i]=tmp[i];
if(tmp)func_0210c5dc(tmp);
}

extern u8 *func_020c641c(s32);
extern void func_0210968c(s32, s32, s32);
extern void func_02108eec(s32, s32);
extern void func_020c9cec(void);
extern void func_02109790(s32);
extern void func_0210dc88(void);
extern void func_020a2c20(void);
extern void func_020ca010(void);
extern s32 data_02162868;
extern s32 data_0216bf84;
extern u8 *data_02160234;
u8 *func_020c9b24(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *obj = (*(u8 ***)arg0)[arg1];
    if (obj != NULL) {
        return obj;
    }
    obj = func_020c641c(arg2);
    (*(u8 ***)arg0)[arg1] = obj;
    ((void (*)(u8 *))(*(void **)obj))(obj);
    return obj;
}

u32 func_020c9b64(u8 *arg0) {
    u16 count = *(u16 *)(arg0 + 4);
    u16 i;
    u32 ret = 0;
    for (i = 0; i < count; i++) {
        u8 *obj = (*(u8 ***)arg0)[i];
        if (obj != NULL) {
            ret |= ((u32 (*)(u8 *))(*(void **)(obj + 8)))(obj);
        }
    }
    return ret;
}

u32 func_020c9bb8(u8 *arg0) {
void *p=arg0;
u32 ret=0;
u16 count=*(u16 *)((u8 *)p+4);
u16 i;
for(i=0;i<count;i++){
u8 *obj=(*(u8 ***)p)[i];
if(obj != NULL && *(void **)(obj+12) != NULL)
ret = ((u32 (*)(u8 *))(*(void **)(obj+12)))(obj) | ret;
}
return ret;
}

extern u16 func_020c9c34(u8 *);
u8 *func_020c9c10(void *arg0, s32 arg1) {
    if ((u32)arg1 >= func_020c9c34(arg0)) {
        return NULL;
    }
    return (*(u8 ***)arg0)[arg1];
}

u16 func_020c9c34(u8 *arg0) {
    return *(u16 *)(arg0 + 4);
}

s32 func_020c9c3c(void) {
    data_02162868 = 0;
    data_0216bf84 = 0;
    func_0210968c(3, -16, 1);
    func_02108eec(0, 1000);
    func_02108eec(1, 1000);
    func_020c9cec();
    func_0210968c(3, 0, 30);
    func_02109790(3);
    for (;;) {
        if (*(u32 *)(data_02160234 + 0x90) != 0) {
            break;
        }
        func_0210dc88();
    }
    func_020a2c20();
    func_020ca010();
    func_0210dc88();
    data_02162868 = 0;
    return 2;
}

void func_020c9cec(void) {
u8 *obj;
s32 zero,one,two;
if(data_02160234)return;
data_02160234=func_0210c594(0xb4,data_02155c3c);
*(void (**)(void))(data_02160234+0)=func_020ca10c;
*(u32*)(*(u8* volatile*)&data_02160234+4)=1011;
func_0210d9e4(*(u8* volatile*)&data_02160234+0);
*(void (**)(void))(*(u8* volatile*)&data_02160234+20)=func_020be6a0;
*(u32*)(*(u8* volatile*)&data_02160234+24)=1016;
func_0210d9e4(*(u8* volatile*)&data_02160234+20);
*(void (**)(void))(*(u8* volatile*)&data_02160234+40)=func_020be704;
*(u32*)(*(u8* volatile*)&data_02160234+44)=1016;
func_0210dab0(*(u8* volatile*)&data_02160234+40);
*(void (**)(void))(*(u8* volatile*)&data_02160234+60)=func_020cb1f4;
*(u32*)(*(u8* volatile*)&data_02160234+64)=1000;
func_0210db70(*(u8* volatile*)&data_02160234+60);
*(void (**)(void))(*(u8* volatile*)&data_02160234+80)=func_020cb1f8;
*(u32*)(*(u8* volatile*)&data_02160234+84)=1000;
func_0210dbd0(*(u8* volatile*)&data_02160234+80);
*(void (**)(void))(*(u8* volatile*)&data_02160234+100)=func_020be764;
*(u32*)(*(u8* volatile*)&data_02160234+104)=1002;
func_0210dae0(*(u8* volatile*)&data_02160234+100);
*(void (**)(void))(*(u8* volatile*)&data_02160234+120)=func_020be774;
*(u32*)(*(u8* volatile*)&data_02160234+124)=1002;
func_0210db40(*(u8* volatile*)&data_02160234+120);
func_0210f6d4();
data_02162858[0]=(u32)func_020be650;data_02162854=(u32)func_020be678;
func_0210b894();
one=1;data_02162850=one;func_0210b750(1006);
zero=0;data_02162850=zero;func_020a2c20();
func_02002fb0(zero,31,32767,zero,zero);
func_020f40a4();func_020be784();func_020be874();
func_020bf414(one);func_02120524(one);func_020eff5c(one);
func_020e9eb0();
obj=func_020ea100();two=2;
func_020ea188(obj,one,two);
*(u32*)(obj+4)=one;*(u32*)(obj+8)=one;
*(s32*)(obj+28)=0x80000;*(s32*)(obj+32)=0x60000;*(s32*)(obj+36)=0x1f4000;
*(u32*)(obj+24)|=1;
func_02108680(*(void**)obj,3,one);
func_021167f0(data_02160a80+0x3c,obj);
obj=func_020ea100();
func_020ea188(obj,5,two);
*(u32*)(obj+4)=two;*(u32*)(obj+8)=two;
*(s32*)(obj+28)=0x80000;*(s32*)(obj+32)=0x60000;*(s32*)(obj+36)=0x1f4000;
*(u32*)(obj+24)|=1;
func_02108680(*(void**)obj,3,one);
func_021167f0(data_02160a80+0x3c,obj);
func_021070c4();
*(u32*)(data_02160234+0x90)=zero;
*(u32*)(*(u8* volatile*)&data_0216020c+0xac)=zero;
*(u32*)(*(u8* volatile*)&data_0216020c+0xb4)=zero;
*(u16*)(*(u8* volatile*)&data_02160234+0x8c)=4;
*(u16*)(*(u8* volatile*)&data_02160234+0xb0)=zero;
data_02151fc8=0x8000;
*(u8*)(data_0216020c+0xd8)=one;
data_02162830=30;data_02162834[0]=one;data_0216281c=two;
data_02162820[0]=two;data_0216bf84=one;
}

