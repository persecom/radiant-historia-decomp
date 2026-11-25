/* 16 functions from 0x020447A4 to 0x020451FC (main), found by ds-decomp. */
#include "common.h"
extern u32 data_0216263c[3];
extern u8 *data_0216009c;
extern u8 *data_02155984;
extern void func_02108c24(s32,s32);
extern void func_02077688(void);
extern void func_02044cfc(void);
extern void func_020a4c98(s32);
extern void func_020468b0(s32);
extern void func_02052904(s32);
extern void func_0207c124(void);
extern void func_0203d970(void *);
extern void func_0203df40(void *);
static inline u16 random_4487c(u16 max) {
 u32 seed=data_0216263c[1]*data_0216263c[0]+data_0216263c[2];
 u32 value;
 data_0216263c[0]=seed;
 value=seed>>16;
 if(max) value=(value*max)>>16;
 return (u16)value;
}
extern s32 data_02162870[2], data_02162868[2], data_02162814[2], data_02162884[2];
static inline s32 abs_4487c(s32 x) { return x < 0 ? -x : x; }
static inline s32 random_signed_4487c(u8 **obj) {
 if((*obj)[13]) return (s32)random_4487c((*obj)[13]*2)-(*obj)[13];
 return 0;
}
extern u8 *data_021600ac;
extern u8 *func_020f52dc(void *, s32, s32);
extern void func_020f5364(void *, void *);

extern u32 data_021600b0[3];
extern void *data_021600b8;
extern u8 *data_021600a8[2];

typedef struct {
    u32 a;
    u32 b;
    u32 c;
    u32 d;
    u32 e;
} S_02044a98;

extern S_02044a98 data_0213f2d0;
extern void func_0210c5dc(void *);
extern void func_021168f8(void *, void *);
extern void func_020a994c(void *);
extern void func_020a98a0(void *);
extern void func_020a9544(void *);
extern void func_020a9610(void *, u32, u32, u32, u32, u32);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
extern void *func_02044aec(void *, u16);
extern u8 *data_02160200;
extern void *data_02155c3c;
extern void func_0205a3cc(void *);
extern void *func_0210c594(u32, void *);
extern void *func_0203be60(void *, void *, void *);
extern void func_021167f0(void *, void *);
extern void func_020ecaa4(void *);
extern void *func_020eca60(void);
extern void func_020ecd10(void *, u32, u32);
extern s16 data_02162908[2];
extern u8 *data_021600f0;
extern u32 data_0216bf84;
extern u8 *data_02160204;
extern u8 *data_021600bc;
extern u32 func_02109754(u32);
extern void func_02059888(void);
void func_020447a4(u8 *arg0) {
    u8 *node;
    if (arg0 == NULL) {
        return;
    }
    node = *(u8 **)data_021600b8;
    while (node != NULL) {
        if (node == arg0) {
            func_021168f8(data_021600b8, node);
            break;
        }
        node = *(u8 **)(node + 0x1dc);
    }
    if (*(void **)(arg0 + 0x128) != NULL && **(void ***)(arg0 + 0x128) != NULL) {
        (*(u32 *)(arg0 + 0x178))++;
        func_020a994c(arg0 + 0x144);
        func_020a98a0(arg0 + 0x144);
        func_020a9544(*(void **)(arg0 + 0x128));
    }
}

extern u8 data_02146334[];
void func_02044820(u32 arg0) {
    u32 r4;
    u8 *p = data_021600a8[1];
    r4 = *(u32 *)(p + 0x2e4);
    func_020a994c(p + 0x300);
    func_020a9610(p + 0x2e8, *(u32 *)(p + 0xa8), arg0, r4, 0, 0);
    func_020a98ac(p + 0x300);
    func_020a98f4(p + 0x300);
}

#pragma opt_peephole off
void func_0204487c(u8 *obj) {
    u8 *p = data_021600a8[1];
    u8 *actor = *(u8 **)(p + 0x68);
    *(s32 *)(p + 0x10) = 1;
    *(u16 *)(*(u8 **)(actor + 0xb0) + 4) = 0;
    if (*(u16 *)(*(u8 **)(obj + 0xb0) + 10) == 0) {
        if (*(s8 *)(data_02160204 + 0xe0) == 0) {
            func_02108c24(0, 0);
            data_02160204[0x124] = 1;
            func_02077688();
            func_02044cfc();
        } else if (*(s8 *)(data_02160204 + 0xe0) == 1) {
            *(u16 *)(data_02160204 + 0x6a) = *(u16 *)(*(u8 **)(obj + 0xb0) + 8);
            if ((*(u8 **)(obj + 0xb0))[13] != 0) {
                s32 n = 0;
                if ((*(u8 **)(obj + 0xb0))[13]) {
                    u16 rand = random_4487c((*(u8 **)(obj + 0xb0))[13] * 2);
                    n = rand - (*(u8 **)(obj + 0xb0))[13];
                }
                *(u16 *)(data_02160204 + 0x6a) = *(u16 *)(*(u8 **)(obj + 0xb0) + 8) + abs_4487c(n);
            }
            *(u16 *)(data_021600a8[1] + 0x88) = *(u16 *)(obj + 0x90);
        }
    } else {
        data_02160204[0xe0] = 1;
        data_02160204[0x89] = 1;
        *(u16 *)(data_02160204 + 0xd4) = *(u16 *)(*(u8 **)(obj + 0xb0) + 10);
        *(u16 *)(data_02160204 + 0x8a) = *(u16 *)(*(u8 **)(obj + 0xb0) + 8);
        *(u16 *)(data_021600a8[1] + 0x88) = *(u16 *)(obj + 0x90);
        func_020a4c98(0);
        *(s32 *)(data_021600a8[1] + 0x10) = 10;
    }
    *(u16 *)(data_02160204 + 0x74) = *(s32 *)(actor + 0) >> 12;
    *(u16 *)(data_02160204 + 0x76) = *(s32 *)(actor + 8) >> 12;
    data_02160204[0x7a] = 1;
    func_020468b0(1);
    func_02052904(2);
    func_0207c124();
    func_0203d970(actor);
    func_0203df40(actor);
    if (*(u16 *)(data_0216009c + 0x60) == 0) return;
    if (*(u16 *)(data_0216009c + 0x60) == 5) {
        data_02160204[0x84] = 0;
        *(s32 *)(data_02160204 + 0x80) = *(s32 *)(actor + 8) - *(s32 *)(data_02155984 + 0x28);
    } else if (*(u16 *)(data_0216009c + 0x60) == 6) {
        data_02160204[0x84] = 1;
        *(s32 *)(data_02160204 + 0x80) = *(s32 *)(actor + 0) - *(s32 *)(data_02155984 + 0x20);
    }
    data_02160204[0x85] = 5;
}
#pragma opt_peephole on
void func_02044a98(s32 arg0)
{
  u8 **p = data_021600a8;
  S_02044a98 local[1];
  local[0] = data_0213f2d0;
  func_02044aec(&local[arg0], *(u16 *)(p[1] + 0xb4));
}

void *func_02044aec(void *arg0, u16 arg1) {
    u8 *p1;
    void *result;
    u8 *p2;
    p1 = func_0210c594(0x1c, data_02155c3c);
    p2 = func_0210c594(0x10, data_02155c3c);
    result = func_0203be60(p1, *(void **)arg0, *(void **)arg0);
    if (result != NULL) {
        *(s32 *)(p1 + 0x10) = *(s32 *)((u8 *)arg0 + 0x8);
        *(s32 *)(p1 + 0x14) = *(s32 *)((u8 *)arg0 + 0xc);
        *(s32 *)(p1 + 0x18) = *(s32 *)((u8 *)arg0 + 0x10);
        *(void **)p2 = p1;
        *(u16 *)(p2 + 0x4) = arg1;
        func_021167f0(data_021600a8[1] + 0x8ac, p2);
    } else {
        if (p1 != NULL) {
            func_0210c5dc(p1);
        }
        if (p2 != NULL) {
            func_0210c5dc(p2);
        }
    }
    return result;
}

void func_02044ba0(u16 arg0) {
    u8 *p;
    u8 *node;

    p = data_021600a8[1];
    if (p == NULL) return;
    node = *(u8 **)(p + 0x8ac);
    if (node == NULL) return;
    for (;;) {
        if (*(u16 *)(node + 4) == arg0) {
            u8 *d = *(u8 **)node;
            *(volatile u32 *)0x040004a8 = (*(u32 *)(d + 4) >> 3) | (*(u32 *)(d + 0x18) << 26) |
                                          0x40000000 | (*(u32 *)(d + 0x10) << 20) |
                                          (*(u32 *)(d + 0x14) << 23) | 0x20000000;
            *(volatile u32 *)0x040004ac = *(u32 *)(d + 0xc) >> (4 - (*(u32 *)(d + 0x18) == 2));
            *(volatile u32 *)0x04000480 = 0x7fff;
            return;
        }
        node = *(u8 **)(node + 0xc);
        if (node == NULL) return;
    }
}

void func_02044c48(u32 arg0) {
    u8 *p = data_021600a8[1];
    u8 *r5;
    if (p == NULL) return;
    r5 = *(u8 **)(p + 0x68);
    if (r5 == NULL) return;
    if (*(void **)(r5 + 0x108) == NULL) return;
    func_020ecaa4(*(void **)(r5 + 0x108));
    *(void **)(r5 + 0x108) = NULL;
    *(void **)(r5 + 0x108) = func_020eca60();
    func_020ecd10(*(void **)(r5 + 0x108), arg0, 0);
}

#pragma opt_propagation off
u8 func_02044c98(void)
{
  u8 *p = data_021600a8[1];
  s32 *q = *(s32 **)(p + 0x68);
  s32 y = data_02162908[1];
  s32 a = q[0x3f];
  s32 b = q[0x40];
  s32 xmin = a - 0x10;
  s32 xmax = a + 0x10;
  s32 x = data_02162908[0];
  s32 ymin = b - 0x20;
  return (((x >= xmin) && (x <= xmax)) && (y >= ymin)) && (y <= b);
}
#pragma opt_propagation on
extern void func_020544d8(void *, s32);
extern void func_020a4c98(s32);
#pragma opt_propagation off
void func_02044cfc(void)
{
    u8 *r6;
    u8 *node;
    s32 flag;

    for (r6 = *(u8 **)(data_021600bc + 0x40); r6 != NULL; r6 = *(u8 **)(r6 + 0x13c)) {
        flag = 0;
        for (node = *(u8 **)(*(u8 **)(data_02160204 + 0x6c)); node != NULL; node = *(u8 **)(node + 0xc)) {
            if (*(u16 *)(r6 + 0x90) == *(u16 *)(node + 4)) {
                flag = 1;
                break;
            }
        }
        if (flag != 0) {
            continue;
        }
        if (*(u16 *)(r6 + 0x8e) > 100 && *(u16 *)(r6 + 0x8e) < 700) {
            *(u32 *)(r6 + 0x84) = *(u32 *)(r6 + 0x80);
            *(u32 *)(r6 + 0x80) = (*(u32 *)(r6 + 0x80) & ~2) | 0x400;
            func_020544d8(r6, 1);
        }
    }
    func_020a4c98(0);
    *(u32 *)(data_021600a8[1] + 0x10) = 10;
}
#pragma opt_propagation on
u32 func_02044dd0(void) {
    u8 *q;
    u8 *p = data_021600a8[1];
    u8 *base = data_021600f0;
    u32 val = data_0216bf84;
    q = *(u8 **)(p + 0x68);
    u8 *s = *(u8 **)(base + 4);
    if (val != 1) return 0;
    if ((*(u32 *)(q + 0xac) & 0x800) && *s == 0) return 0;
    if (func_02109754(3) == 1) return 0;
    switch (*(u32 *)(p + 0x10)) {
    case 0: case 8:
        if (*(u8 *)(data_02160204 + 0x85) != 0 || (*(u32 *)(q + 0xac) & 0x400)) return 0;
        return 1;
    default: return 0;
    }
}

void func_02044e8c(void) {
    data_021600b0[1] = (u32)func_0210c594(0x14, data_02155c3c);
    *(u32 *)((u8 *)data_021600b0[1] + 0x4) = 0x7d0;
    *(u32 *)((u8 *)data_021600b0[1] + 0x8) = 0;
    *(u32 *)((u8 *)data_021600b0[1] + 0x10) = 0;
    *(u32 *)((u8 *)data_021600b0[1] + 0x0) = 1;
    *(u32 *)((u8 *)data_021600b0[1] + 0xc) = 0;
    if (*(u32 *)(data_02160200 + 0x15c) & 0x80000000) {
        *(u32 *)((u8 *)data_021600b0[1] + 0xc) |= 1;
        if ((*(u32 *)(data_02160200 + 0x160) & 1) == 0) {
            *(u32 *)((u8 *)data_021600b0[1] + 0xc) |= 2;
        }
    }
    *(u32 *)((u8 *)data_021600b0[1] + 0x4) = (*(u32 *)((u8 *)data_021600b0[1] + 0xc) == 0) ? 0x7d0 : 0x7d1;
}

void func_02044f48(void) {
    if (data_021600b0[1] != 0) {
        func_0210c5dc((void *)data_021600b0[1]);
        data_021600b0[1] = 0;
    }
}

u32 func_02044f70(void) {
    return data_021600b0[1];
}

void func_02044f80(void) {
    u8 *p = (u8 *)func_02044f70();
    if (*(u32 *)(data_02160200 + 0x15c) & 0x80000000) {
        *(u32 *)(p + 0xc) = 0;
        *(u32 *)(p + 0xc) |= 9;
    }
    func_0205a3cc(p);
}

void func_02044fb0(u32 arg0, u32 arg1) {
    u8 *p = (u8 *)func_02044f70();
    if (*(u32 *)(data_02160200 + 0x15c) & 0x80000000) {
        *(u32 *)(p + 0xc) = 0;
        *(u32 *)(p + 0xc) |= 5;
        if (arg0 == 1) {
            *(u32 *)(p + 0xc) |= 0x10;
            if (arg1 != 0) *(u32 *)(p + 0xc) |= 0x40;
        } else if (arg0 == 2) {
            *(u32 *)(p + 0xc) |= 0x20;
            if (arg1 != 0) *(u32 *)(p + 0xc) |= 0x40;
        }
    }
    if (!(*(u32 *)(p + 0xc) & 0x40)) func_02059888();
}

extern void func_02045800(void);
#pragma optimization_level 3
s32 func_02045034(void) {
u8 *obj=NULL,*state;
s32 result;
func_02044e8c();
data_02162870[0]=0;data_02162868[0]=1;data_0216bf84=0;
func_0210968c(3,-16,1);func_02109790(3);func_020451fc();
state=(u8 *)func_02044f70();
if(state) {
if(*(s32 *)(state+4)==2000)obj=func_020f52dc(data_021600b8,100,2000);
else if(*(s32 *)(state+4)==2001)obj=func_020f52dc(data_021600b8,100,2001);
if(obj)for(;;){if(*(s32 *)(*(u8 **)(obj+20)+8)!=0)break;func_0210dc88();}
func_02108c24(0,0);func_02108c24(1,0);
}
func_02046448();
if(obj) {
if(obj)func_020f5364(data_021600b8,obj);
func_02045800();data_0216bf84=1;func_020468e0(1);
*(s32 *)(data_021600ac+16)=12;
do { func_0210dc88(); if(*(s32 *)(data_021600ac+12)!=0) break; } while(obj);
}
fade:
do {
if(data_02162814[0]!=-16) {data_02162814[0]--;if(data_02162814[0]<-16)data_02162814[0]=-16;}
if(data_02162884[0]!=-16) {data_02162884[0]--;if(data_02162884[0]<-16)data_02162884[0]=-16;}
func_0210dc88();
}while(data_02162814[0]!=-16||data_02162884[0]!=-16);
result=*(s32 *)state;
func_02045b44();func_02045a78();func_02044f48();func_0210dc88();
data_02162868[0]=0;
return result;
}
#pragma optimization_level 4
