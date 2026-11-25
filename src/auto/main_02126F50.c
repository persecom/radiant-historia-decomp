/* 40 functions from 0x02126F50 to 0x02127E74 (main), found by ds-decomp. */
#include "common.h"
static inline void init_playback_02127ad0(u8 *obj) {
    *(s16 *)(obj + 0x46) = 0;
    obj[0x6c] = 1;
    *(s32 *)(obj + 0x54) = 0;
    *(s32 *)(obj + 0x58) = 0;
    *(s32 *)(obj + 0x5c) = 0;
    *(s16 *)(obj + 0x60) = 0;
    *(s32 *)(obj + 0x64) = 0;
    *(s16 *)(obj + 0x68) = 0;
    *(s16 *)(obj + 0x6a) = 0;
    obj[0x6d] = 1;
    obj[0x72] = 0;
    *(s32 *)(obj + 0x88) = 0;

}

extern void func_0212a9f4(void);
extern void func_0212a9f8(void);

extern u8 data_0215665c[60];
extern void *func_02127dec(void *, s32);
extern void *func_02127a9c(void *, void *, s32);
extern void *func_02127ad0(void *, void *, s32);
extern void func_02127e58(void *);
extern void func_0212c3b0(void *);
extern void func_021277f4();
extern void func_02126c20(void *);
extern void func_02127600(void *);
extern u8 data_021565f0[52];
extern u8 data_02156624[56];
extern void (*data_02173428[])(void *);
extern void func_02127e74(void *);

extern void func_02127600(void *);
extern double func_0201e690(double);
extern double func_0201e518(double);
extern double func_0201dea0(double);
extern double func_0201e69c(double);
extern double func_0201e6b4(double);
extern double func_0201e6c0(double, double);
s32 func_02126f50(u8 *arg0,s32 arg1) {
f32 val;
if(arg1==0)return -960;
if(arg1==3238200)return 0;
switch(*(s8 *)(arg0+0x18)){
default: case 0:
val=200.0*func_0201e6b4((f64)((f32)arg1/3238200.0f));
break;
case 1:
val=-960.0f+960.0f*((f32)arg1/3238200.0f);
break;
case 2:
val=3238200.0f*(f32)func_0201e518((f64)(1.57079637f*(f32)arg1/3238200.0f));
val=200.0*func_0201e6b4((f64)(val/3238200.0f));
break;
case 3:
val=3238200.0f*(1.0f-(f32)func_0201dea0((f64)(1.57079637f*(f32)arg1/3238200.0f)));
val=200.0*func_0201e6b4((f64)(val/3238200.0f));
break;
case 4:
{
f32 scale=(f32)func_0201e6b4(960.0);
val=0.0f-(f32)func_0201e6c0(10.0,(f64)(scale*(f32)(3238200-arg1)/3238200.0f));
}
break;
}
if(val<=-960.0f)val=-960.0f;
if(val>=0.0f)val=0.0f;
return (s32)val;
}

s32 func_0212716c(u8 *arg0, s32 arg1) {
    f32 val;

    if (arg1 == 0) {
        return 0x316938;
    }
    if (arg1 == -0x3c0) {
        return 0;
    }

    switch (*(s8 *)(arg0 + 0x18)) {
    case 0:
    default:
        val = 3238200.0f * (f32)func_0201e6c0(10.0, (f64)((f32)arg1 / 200.0f));
        break;
    case 1:
        val = 3238200.0f * ((f32)(arg1 + 0x3c0) / 960.0f);
        break;
    case 2:
        val = 3238200.0f * (f32)func_0201e6c0(10.0, (f64)((f32)arg1 / 200.0f));
        val = 3238200.0f * ((f32)func_0201e69c((f64)(val / 3238200.0f)) / 1.57079637f);
        break;
    case 3:
        val = 3238200.0f * (f32)func_0201e6c0(10.0, (f64)((f32)arg1 / 200.0f));
        val = 3238200.0f * ((f32)func_0201e690((f64)(1.0f - val / 3238200.0f)) / 1.57079637f);
        break;
    case 4:
        {
            f32 denom = (f32)func_0201e6b4(960.0);
            val = 3238200.0f * (f32)func_0201e6b4((f64)(-arg1)) / denom;
        }
        break;
    }

    if (val <= 0.0f) {
        val = 0.0f;
    }
    if (val >= 3238200.0f) {
        val = 3238200.0f;
    }
    return (s32)val;
}

BOOL func_02127350(void *arg0) {
    void (*cb)(void *, void *) = *(void (**)(void *, void *))((u8 *)arg0 + 0x2c);
    if (cb == NULL) {
        return FALSE;
    }
    cb(*(void **)((u8 *)arg0 + 0x30), *(void **)((u8 *)arg0 + 0x34));
    return TRUE;
}

BOOL func_0212737c(void *arg0) {
    void (*cb)(void *, void *) = *(void (**)(void *, void *))((u8 *)arg0 + 0x38);
    if (cb == NULL) {
        return FALSE;
    }
    cb(*(void **)((u8 *)arg0 + 0x3c), *(void **)((u8 *)arg0 + 0x40));
    return TRUE;
}

void *func_021273a8(void *arg0, u32 arg1) {
    if (arg0 == NULL) {
        func_02126c20(data_021565f0);
        return NULL;
    }
    if (arg1 < 0xc) {
        func_02126c20(data_02156624);
        return NULL;
    }
    func_02127600(arg0);
    return arg0;
}

void func_021273f0(void *arg0) {
    if (arg0 != NULL) {
        func_02127600(arg0);
    }
}

#pragma push
#pragma optimization_level 2
BOOL func_02127404(void *arg0, void *arg1, void *arg2, s32 arg3) {
    void *p;
    if (*(s32 *)((u8 *)arg1 + 8) != 0) {
        p = func_02127dec(arg2, arg3 - 0xc);
    } else {
        p = func_02127a9c(*(void **)arg1, arg2, arg3 - 0xc);
    }
    *(void **)((u8 *)arg0 + 4) = p;
    if (p == NULL) {
        func_02126c20(data_0215665c);
        return FALSE;
    }
    *(void **)((u8 *)arg0 + 8) = *(void **)arg1;
    return TRUE;
}
#pragma pop
void func_02127468(void *arg0) {
    if (*(void **)((u8 *)arg0 + 4) != NULL) {
        func_02127e58(*(void **)((u8 *)arg0 + 4));
        *(void **)((u8 *)arg0 + 4) = NULL;
    }
}

extern void func_0212789c();
extern void func_02126c20(void *);
extern u8 data_021565f0[52];
extern u8 data_02156624[56];
void func_0212748c(void *arg0) {
    func_0212789c(*(void **)((u8 *)arg0 + 4));
}

void func_0212749c(void *arg0) {
    func_0212c3b0(*(void **)((u8 *)arg0 + 4));
}

void func_021274ac(void *arg0) {
    func_021277f4(*(void **)((u8 *)arg0 + 4));
}

extern void func_02139bbc(void *);
extern void func_021278d8();
extern void func_02127988();
extern void func_02127904(void *, u32, s32);
extern void func_021279b4(void *, u32, s32);
extern void func_0212824c(void *);
void func_021274bc(void *arg0) {
    func_02139bbc(*(void **)((u8 *)arg0 + 4));
}

void func_021274cc(void *arg0) {
    func_021278d8(*(void **)((u8 *)arg0 + 4));
}

void func_021274dc(void *arg0) {
    func_02127988(*(void **)((u8 *)arg0 + 4));
}

void func_021274ec(void *arg0) {
    func_0212824c(*(void **)((u8 *)arg0 + 4));
}

extern void func_0212879c(void *);
extern void func_021287d0(void *);
void func_021274fc(void *arg0) {
    func_0212879c(*(void **)((u8 *)arg0 + 4));
}

void func_0212750c(void *arg0) {
    func_021287d0(*(void **)((u8 *)arg0 + 4));
}

extern s32 func_021282cc(void *);
extern void func_021284bc(void *, s32);
s32 func_0212751c(void *arg0) {
    switch (func_021282cc(*(void **)((u8 *)arg0 + 4))) {
    case 0:
        return 0;
    case 1:
    case 2:
        return 1;
    case 3:
    case 4:
        return 2;
    case 5:
        return 3;
    case 6:
        return 4;
    default:
        return 4;
    }
}

void func_02127580(void *arg0, s32 arg1) {
    if (arg1 < -960) {
        arg1 = -960;
    }
    func_021284bc(*(void **)((u8 *)arg0 + 4), arg1);
}

extern s32 func_02128530(void *);
s32 func_021275a0(void *arg0) {
    return func_02128530(*(void **)((u8 *)arg0 + 4));
}

void func_021275b0(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 != 0) {
        return;
    }
    func_021284bc(*(void **)((u8 *)arg0 + 4), arg2);
}

extern void func_0212869c(void *);
s32 func_021275cc(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        return 0;
    }
    return func_02128530(*(void **)((u8 *)arg0 + 4));
}

void func_021275e8(void *arg0) {
    func_0212869c(*(void **)((u8 *)arg0 + 4));
}

s32 func_021275f8(s32 *arg0) {
    return arg0[1];
}

extern u8 data_02145040[];
extern u8 data_02156698[48];
extern void func_0212bda8(void *);
extern void func_02132bf8(void *, s32, void *);
extern void func_02128880();
void func_02127600(void *arg0) {
    *(void **)arg0 = data_02145040;
    *(u32 *)((u8 *)arg0 + 4) = 0;
    *(u32 *)((u8 *)arg0 + 8) = 0;
}

extern void *func_02013858(void *, const void *, s32);
void func_0212761c(s16 *src, s32 srcLen, s16 *dst, s32 dstLen) {
    if (srcLen < dstLen) {
        s32 diff = dstLen - srcLen;
        s32 overlap = srcLen - diff;
        s32 i;
        for (i = 0; i < diff; i++) {
            dst[i] = src[i];
        }
        for (i = 0; i < overlap; i++) {
            s16 a = (s16)((overlap - i) * src[diff + i] / overlap);
            s16 b = (s16)(i * src[i] / overlap);
            s32 sum = a + b;
            if (sum > 0x7fff) {
                sum = 0x7fff;
            } else if (sum < -0x8000) {
                sum = -0x8000;
            }
            dst[diff + i] = sum;
        }
        for (i = 0; i < diff; i++) {
            dst[srcLen + i] = src[overlap + i];
        }
    } else if (srcLen == dstLen) {
        func_02013858(dst, src, dstLen * 2);
    } else if (srcLen > dstLen) {
        s32 diff = srcLen - dstLen;
        s32 i;
        for (i = 0; i < dstLen; i++) {
            s16 a = (s16)(src[i] * (dstLen - i) / dstLen);
            s16 b = (s16)(i * src[diff + i] / dstLen);
            s32 sum = a + b;
            if (sum > 0x7fff) {
                sum = 0x7fff;
            } else if (sum < -0x8000) {
                sum = -0x8000;
            }
            dst[i] = sum;
        }
    }
}

extern void func_02127828(void *, void *, s32, s32);
extern void func_021278c0(void *, void *);
void func_021277f4(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    func_0212a9f4();
    func_02127828(arg0, arg1, arg2, arg3);
    func_0212a9f8();
}

void func_02127828(void *arg0, void *arg1, s32 arg2, s32 arg3)
{
  u8 *new_var;
  u8 *new_var2;
  if ((arg0 == NULL) || (arg1 == NULL))
  {
    func_0212bda8(data_02156698);
    return;
  }
  func_0212824c(arg0);
  func_02132bf8(*((void **) (((u8 *) arg0) + 0xac)), 0x100, arg1);
  new_var = (u8 *) arg0;
  *((void **) (new_var + 0xb0)) = *((void **) (new_var + 0xac));
  *((s32 *) (new_var + 0xb4)) = 0;
  *((s32 *) (((u8 *) arg0) + 0xb8)) = arg2;
  new_var2 = ((u8 *) arg0) + 0xbc;
  *((s32 *) new_var2) = arg3;
  *(((u8 *) arg0) + 2) = 0;
  *(((u8 *) arg0) + 0xa8) = (*(((u8 *) arg0) + 1) = 1);
  *(((u8 *) arg0) + 1) = 1;
  func_02128880(arg0);
}

void func_0212789c(void *arg0, void *arg1) {
    func_0212a9f4();
    func_021278c0(arg0, arg1);
    func_0212a9f8();
}

extern void func_02127904(void *, u32, s32);
extern void func_021279b4(void *, u32, s32);
extern s32 func_02136b08(u32, s32);
extern void func_0212a9e8(void);
extern void func_02128030();
extern u8 data_021566c8[44];
extern u8 data_021566f4[44];
void func_021278c0(void *arg0, void *arg1) {
    func_02127828(arg0, arg1, 0, 0xfffff);
}

void func_021278d8(arg0, arg1, arg2)
void *arg0;
u32 arg1, arg2;
{
    func_0212a9f4();
    func_02127904(arg0, arg1, arg2);
    func_0212a9f8();
}

void func_02127904(void *arg0, u32 arg1, s32 arg2) {
    s32 ret;
    if (arg0 == NULL || arg1 == 0 || arg2 < 0) {
        func_0212bda8(data_021566c8);
        return;
    }
    func_0212824c(arg0);
    func_0212a9dc();
    ret = func_02136b08(arg1, arg2);
    if (ret == 0) {
        func_0212a9e8();
        func_0212bda8(data_021566f4);
        return;
    }
    *(u8 *)((u8 *)arg0 + 2) = 2;
    func_02128030(arg0, ret);
    func_02128880(arg0, 0);
    func_0212a9e8();
}

void func_02127988(arg0, arg1, arg2)
void *arg0;
u32 arg1, arg2;
{
    func_0212a9f4();
    func_021279b4(arg0, arg1, arg2);
    func_0212a9f8();
}

extern u8 data_02156720[], data_0215674c[];
void func_021279b4(void *arg0,u32 arg1,s32 arg2) {
s32 v, count,off,ret;
if(arg0==0 || arg1==0 || arg2<0){func_0212bda8(data_02156720);return;}
func_0212824c(arg0);
v=*(s32 *)(arg1+4);
count=((v>>24)&255)|((v>>8)&0xff00)|((v<<8)&0xff0000)|(v<<24);
if(arg2>=count)return;if(arg2<0)return;
func_0212a9dc();
v=*(s32 *)(arg1+arg2*8+8);
off=((v>>24)&255)|((v>>8)&0xff00)|((v<<8)&0xff0000)|(v<<24);
ret=func_02136b08(arg1+off,0x40000000);
if(ret==0){func_0212a9e8();func_0212bda8(data_0215674c);return;}
*((u8 *)arg0+2)=2;func_02128030(arg0,ret);func_02128880(arg0,0);func_0212a9e8();
}

void *func_02127a9c(void *arg0, void *arg1, s32 arg2) {
    void *ret;
    func_0212a9f4();
    ret = func_02127ad0(arg0, arg1, arg2);
    func_0212a9f8();
    return ret;
}

extern u8 data_02156780[40];
extern u8 data_02173ad4[784];
extern u8 data_021567a8[44];
extern u8 data_021567d4[48];
extern void func_02013878(void *, s32, s32);
extern void *func_0213737c(void *, s32, s32);
extern void *func_0212d9cc(void *, s32);
extern void *func_0212c660(void *, s32, void *);
extern void *func_0212eaec(void *, s32, void *);
extern void *func_0212e5e4(void *);
extern void func_0212e5f4(void *, void *);
extern void func_021288a4(void *);
extern void func_02128578(void *, s32);
#pragma push
#pragma opt_loop_invariants off
void *func_02127ad0(void *arg0, void *arg1, s32 arg2) {
    u8 *obj;
    s32 i;
    s32 n = (s32)arg0;
    u32 aligned = ((u32)arg1 + 0x3f) & ~0x3f;
    s32 size = arg2 - (aligned - (u32)arg1);
    s32 ch_size;

    if (!(n >= 0 && arg1 != NULL && arg2 >= 0)) {
        func_0212bda8(data_02156780);
        return NULL;
    }

    for (i = 0; i < 4; i++) {
        if (((s8 *)data_02173ad4)[i * 0xc4] == 0) {
            break;
        }
    }
    if (i == 4) {
        func_0212bda8(data_021567a8);
        return NULL;
    }

    obj = &data_02173ad4[i * 0xc4];
    func_02013878(obj, 0, 0xc4);
    obj[3] = n;
    ch_size = n * 0x1460;
    *(u32 *)(obj + 0x20) = aligned + (ch_size << 1);
    *(s32 *)(obj + 0x24) = ((size - (ch_size << 1) - 0x124) / 0x800) * 0x800;
    if (*(s32 *)(obj + 0x24) < 0) {
        func_0212bda8(data_021567d4);
        return NULL;
    }

    *(s32 *)(obj + 0x28) = 0x24;
    *(u32 *)(obj + 0xac) = *(u32 *)(obj + 0x20) + (*(s32 *)(obj + 0x24) + 0x24);
    *(u32 *)(obj + 0x2c) = aligned;
    *(s32 *)(obj + 0x30) = 0x800;
    *(s32 *)(obj + 0x34) = 0x860;
    *(s32 *)(obj + 0x14) = 0;

    *(void **)(obj + 0x10) = func_0213737c(*(void **)(obj + 0x20), *(s32 *)(obj + 0x24), *(s32 *)(obj + 0x28));
    if (*(void **)(obj + 0x10) == NULL) {
        func_02127e74(obj);
        return NULL;
    }

    *(void **)(obj + 8) = func_0212d9cc(*(void **)(obj + 0x10), 0);
    if (*(void **)(obj + 8) == NULL) {
        func_02127e74(obj);
        return NULL;
    }

    for (i = 0; i < n; i++) {
        void *tmp = func_0213737c(
            (u8 *)(*(u32 *)(obj + 0x2c) + *(s32 *)(obj + 0x34) * i * 2),
            *(s32 *)(obj + 0x30) * 2,
            (*(s32 *)(obj + 0x34) - *(s32 *)(obj + 0x30)) * 2
        );
        *(void **)((obj + i * 4) + 0x18) = tmp;
        if (tmp == NULL) {
            func_02127e74(obj);
            return NULL;
        }
    }

    *(void **)(obj + 4) = func_0212c660(*(void **)(obj + 0x10), n, obj + 0x18);
    if (*(void **)(obj + 4) == NULL) {
        func_02127e74(obj);
        return NULL;
    }

    *(void **)(obj + 0xc) = func_0212eaec(obj + 0x18, n, (u8 *)(aligned + n * 0x10c0));
    if (*(void **)(obj + 0xc) == NULL) {
        func_02127e74(obj);
        return NULL;
    }

    *(void **)(obj + 0x94) = func_0212e5e4(*(void **)(obj + 0x10));
    if (*(void **)(obj + 0x94) == NULL) {
        func_02127e74(obj);
        return NULL;
    }

    func_0212e5f4(*(void **)(obj + 0x94), *(void **)(obj + 8));
    func_0212a9dc();
    *(u32 *)(obj + 0x38) = ((u32 *)data_02173428)[5];
    *(s16 *)(obj + 0x3c) = *(s32 *)(obj + 0x24) / 0x800;
    *(s16 *)(obj + 0x3e) = (s16)(0.85f * (f32)*(volatile s16 *)(obj + 0x3c));
    *(s16 *)(obj + 0x40) = 0;
    for (i = 0; i < n; i++) {
        *(s16 *)(obj + 0x42 + i * 2) = -128;
    }
    *(s16 *)(obj + 0x46) = 0;
    obj[0x6c] = 1;
    *(s32 *)(obj + 0x54) = 0;
    *(s32 *)(obj + 0x58) = 0;
    *(s32 *)(obj + 0x5c) = 0;
    *(s16 *)(obj + 0x60) = 0;
    *(s32 *)(obj + 0x64) = 0;
    *(s16 *)(obj + 0x68) = 0;
    *(s16 *)(obj + 0x6a) = 0;
    obj[0x6d] = 1;
    obj[0x72] = 0;
    *(s32 *)(obj + 0x88) = 0;
    func_021288a4(obj);
    func_02128578(obj, 1);
    obj[0] = 1;
    func_0212a9e8();
    return obj;
}
#pragma pop
extern void *func_02127e18(void *, s32);
extern void *func_02127ad0(void *, void *, s32);
extern void (*data_02173428[])(void *);
void *func_02127dec(void *arg0, s32 arg1) {
    void *ret;
    func_0212a9f4();
    ret = func_02127e18(arg0, arg1);
    func_0212a9f8();
    return ret;
}

void *func_02127e18(void *arg0, s32 arg1) {
    void *ret = func_02127ad0((void *)1, arg0, arg1);
    if (ret == NULL) {
        return NULL;
    }
    return ret;
}

void func_02127e38(void *arg0) {
    if (data_02173428[3] != NULL) {
        data_02173428[3](arg0);
    }
}

extern void func_0212a9f4(void);
extern void func_02127e74(void *);
extern void func_0212a9f8(void);
void func_02127e58(void *arg0) {
    func_0212a9f4();
    func_02127e74(arg0);
    func_0212a9f8();
}

