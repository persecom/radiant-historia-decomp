/* 20 functions from 0x0202B4D8 to 0x0202C328 (main), found by ds-decomp. */
#include "common.h"
typedef struct { u32 seed, multiplier, increment; } RandomState_0202b4d8;
extern RandomState_0202b4d8 data_0216263c;
static inline u16 RandomRange_0202b4d8(u16 max) {
 RandomState_0202b4d8 *state=&data_0216263c;
 u32 value=state->multiplier*state->seed+state->increment;
 state->seed=value;
 if(max==0) return (u16)(value>>16);
 else return (u16)(((value>>16)*max)>>16);
}
extern u8 data_021461ec[];
extern void func_02005e80(void *,void *,...);
extern void *func_021092d8(void *);
extern s32 func_02092994(void *,s32);
extern s32 func_02109444(void *);
extern void func_021093b0(void *);

extern u8 *data_02160080;
extern u8 *data_02160a6c;
extern u8 *data_02160244;
extern void func_02026fbc(void);
extern void func_02027004(void *, void *);
extern u8 *func_0203222c(void);
extern u32 data_0214618c[];
extern void *func_0210c594(s32, void *);
extern u32 data_02155c3c;
extern void func_021167ac(void *, s32);
extern void func_021167f0(void *, void *);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void func_0202e874(void *);
typedef struct { u8 f0, f1, f2, f3; } Node0202bd60;

u8 *func_0202b4d8(s32 type) {
u16 count=0;
switch(type) {
case 1: do {
u8 *p=*(u8 **)(data_02160a6c+0xb8); u16 index;
while(p) {count++;p=*(u8 **)(p+0x174);}
if(count==0) break;
{
index=0;
if(count>=2) index=RandomRange_0202b4d8(count);
p=*(u8 **)(data_02160a6c+0xb8);
count=0;
while(p) { if(count==index)break;count++;p=*(u8 **)(p+0x174); }
*(u8 **)(data_02160080+0x38)=p; return p;
}
} while(0); break;
case 2: do {
u8 *p=*(u8 **)(data_02160a6c+0xac); u16 index;
while(p) {if(*(u32 *)(*(u8 **)(p+0x118)+0x70))count++;p=*(u8 **)(p+0x16c);}
if(count==0) break;
{
index=0;
if(count>=2) index=RandomRange_0202b4d8(count);
p=*(u8 **)(data_02160a6c+0xac);
count=0;
while(p) { if(*(u32 *)(*(u8 **)(p+0x118)+0x70)) {if(count==index)break;count++;}p=*(u8 **)(p+0x16c); }
*(u8 **)(data_02160080+0x3c)=p; return p;
}
} while(0); break;
default: goto end;
}
count=0;
end: return (u8 *)count;
}

void func_0202b694(void) {
    u8 *node;
    s32 i;
    i = 0;
    node = func_0203222c();
    while (node != NULL) {
        u8 *p = *(u8 **)(node + 0);
        if (*(u8 *)(*(u8 **)(p + 0x118)) == 1) {
            if ((*(u16 *)(node + 0xe) & 0x100) == 0) {
                func_02027004(p, node);
            }
        }
        i++;
        if (i > 10) {
            return;
        }
        node = *(u8 **)(node + 0x1c);
    }
}

void func_0202b6ec(void) {
    u8 *node = func_0203222c();
    while (node != NULL) {
        *(u16 *)(node + 0xe) &= 0xfeff;
        node = *(u8 **)(node + 0x1c);
    }
    {
        u8 *p = *(u8 **)(data_02160a6c + 0xb8);
        if (p == NULL) {
            return;
        }
        do {
            u8 *q = *(u8 **)(p + 0x12c);
            *(u32 *)(q + 0x10) &= ~1;
            p = *(u8 **)(p + 0x174);
        } while (p != NULL);
    }
}

extern s32 func_0202c658(void *);
void func_0202b754(void) {
u8 *p;
if(data_02160a6c==0)return;
*(u32 *)(data_02160244+0xf0)=0;
*(u16 *)(data_02160244+0xf6)=0;
*(u16 *)(data_02160244+0xf8)=0;
*(u16 *)data_02160080 &= 0xfffe;
*(u16 *)data_02160080 |= 2;
p=*(u8 **)(data_02160a6c+0xb8);
while(p){
func_02027004(p,0);
if((*(u32 *)(*(u8 **)(p+0x12c)+0x10)&2) && p){
s32 bit=func_0202c658(p);
*(u32 *)(data_02160244+0xf0) |= 1<<bit;
}
p=*(u8 **)(p+0x174);
}
*(u16 *)data_02160080 &= 0xfffd;
*(u16 *)data_02160080 |= 1;
if(*(u32 *)(data_02160244+0xf0)==0) data_02160244[0x10a]=0;
}

extern s32 func_020329a0(void);
extern u8 *func_02032254(u16);
void func_0202b864(void) {
u16 i;s32 count;
if(data_02160a6c==0)return;
*(u16 *)data_02160080 &= 0xfffe;
*(u16 *)data_02160080 |= 4;
count=func_020329a0();
for(i=0;i<count;i++){
u8 *node=func_02032254(i);u8 *p=*(u8 **)node;
if(**(u8 **)(p+0x118)==1)func_02027004(p,node);
}
*(u16 *)data_02160080 &= 0xfffb;
*(u16 *)data_02160080 |= 1;
}

void func_0202b928(void) {
    *(u16 *)data_02160080 |= 1;
    func_02026fbc();
    func_0202b694();
}

void func_0202b950(u32 arg0) {
    u16 mask = 0xfffe;
    s32 zero = 0;
    *(u16 *)data_02160080 &= mask;
    *(u16 *)data_02160080 |= 2;
    *(u16 *)data_02160080 |= 8;
    *(u16 *)(data_02160244 + 0xf8) = zero;
    *(u16 *)(data_02160244 + 0xf6) = zero;
    func_02027004(arg0, zero);
    *(u16 *)(data_02160244 + 0xf8) = zero;
    *(u16 *)(data_02160244 + 0xf6) = zero;
    *(u16 *)data_02160080 &= mask - 1;
    *(u16 *)data_02160080 &= mask - 7;
    *(u16 *)data_02160080 |= 1;
}

void func_0202ba04(u32 arg0) {
    u16 mask = 0xfffe;
    s32 zero = 0;
    *(u16 *)data_02160080 &= mask;
    *(u16 *)data_02160080 |= 2;
    *(u16 *)data_02160080 |= 0x10;
    *(u16 *)(data_02160244 + 0xf8) = zero;
    *(u16 *)(data_02160244 + 0xf6) = zero;
    func_02027004(arg0, zero);
    *(u16 *)(data_02160244 + 0xf8) = zero;
    *(u16 *)(data_02160244 + 0xf6) = zero;
    *(u16 *)data_02160080 &= mask - 1;
    *(u16 *)data_02160080 &= mask - 0xf;
    *(u16 *)data_02160080 |= 1;
}

void func_0202bab8(void) { void *file; u16 *p; u32 zero; u8 name[32]; p=func_0210c594(0x40,(void *)data_02155c3c); func_02005e80(name,data_021461ec); file=func_021092d8(name); zero=0;
p[0]=func_02092994(file,zero);
p[1]=func_02092994(file,zero);
p[2]=func_02092994(file,zero);
func_02109444(file);
p[3]=func_02092994(file,zero);
p[4]=func_02092994(file,zero);
p[5]=func_02092994(file,zero);
func_02109444(file);
p[6]=func_02092994(file,zero);
p[7]=func_02092994(file,zero);
p[8]=func_02092994(file,zero);
func_02109444(file);
p[9]=func_02092994(file,zero);
p[10]=func_02092994(file,zero);
p[11]=func_02092994(file,zero);
func_02109444(file);
*(u16 *)(data_02160244+0x140)=func_02092994(file,zero); func_02109444(file); *(u16 *)(data_02160244+0x142)=func_02092994(file,zero); func_02109444(file); if(file) func_021093b0(file); *(void **)(data_02160244+0x13c)=p; }

u8 *func_0202bc44(s32 arg0) {
u8 *p; s16 idx=arg0*2;
p=func_0210c594(0x3c,data_02155c3c);
p[0]=arg0;p[1]=0;
if((u32)arg0<=8)p[1]=arg0/3+1;
{
s32 x=data_0214618c[idx],z=((volatile s32 *)data_0214618c)[idx+1];
*(u32 *)(p+4)=x<<12;*(u32 *)(p+8)=0x20000;*(u32 *)(p+12)=z<<12;
}
func_021167ac(p+0x10,8);return p;
}

void func_0202bcd4(u32 *arg0, s32 arg1) {
    s16 idx = arg1 * 2;
    u32 v1 = data_0214618c[idx + 1] << 12;
    u32 v0 = data_0214618c[idx] << 12;
    arg0[2] = v1;
    arg0[0] = v0;
    arg0[1] = 0x20000;
}

void func_0202bd08(u8 *arg0) {
    u8 *node = *(u8 **)(arg0 + 0x10);
    while (node != NULL) {
        func_021168f8(arg0 + 0x10, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
        node = *(u8 **)(arg0 + 0x10);
    }
    func_0202e874(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

u8 *func_0202bd60(s32 arg0, s32 arg1) {
    u8 *node = func_0210c594(0x28, data_02155c3c);
    node[0] = arg0;
    node[1] = arg1;
    node[3] = 0;
    node[2] = node[3] - 1;
    func_021167f0(data_02160244 + 0x50, node);
    return node;
}

void func_0202bdbc(void *arg0) {
    func_021168f8(data_02160244 + 0x50, arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_0202bdf0(void *arg0, u32 arg1, u8 arg2) {
    u8 *entry = NULL;
    if (arg1 <= 0xb) {
        u8 *node;
        entry = *(u8 **)(data_02160244 + arg1 * 4 + 8);
        *(u8 *)(entry + 2) += 1;
        node = func_0210c594(0x10, (void *)data_02155c3c);
        *(void **)(node + 0) = arg0;
        *(u8 *)(node + 4) = arg2;
        func_021167f0(entry + 0x10, node);
    }
    return entry;
}

void func_0202be58(void *arg0, u32 arg1) {
    u8 *entry;
    u8 *node;
    if (arg1 > 0xb) {
        return;
    }
    entry = *(u8 **)(data_02160244 + arg1 * 4 + 8);
    *(u8 *)(entry + 2) -= 1;
    node = *(u8 **)(entry + 0x10);
    while (node != NULL) {
        if (*(void **)(node + 0) == arg0) {
            break;
        }
        node = *(u8 **)(node + 0xc);
    }
    func_021168f8(entry + 0x10, node);
    if (node != NULL) {
        func_0210c5dc(node);
    }
}

extern void func_021167f0(void *, void *);
void func_0202bec8(void *arg0) {
    u8 i;
    for (i = 0; i < 0xc; i++) {
        if (func_0202bf08(arg0, i)) {
            func_0202be58(arg0, i);
        }
    }
}

s32 func_0202bf08(void *arg0, u32 arg1) {
    u8 *entry = *(u8 **)(data_02160244 + arg1 * 4 + 8);
    u8 *node = *(u8 **)(entry + 0x10);
    while (node != NULL) {
        if (*(void **)(node + 0) == arg0) {
            return 1;
        }
        node = *(u8 **)(node + 0xc);
    }
    return 0;
}

s32 func_0202bf4c(u16 arg0, u32 arg1) {
    u8 *entry = *(u8 **)(data_02160244 + arg1 * 4 + 8);
    u8 *node = *(u8 **)(entry + 0x10);
    while (node != NULL) {
        u8 *obj = *(u8 **)(node + 0);
        if (obj != NULL) {
            u32 flags = *(u32 *)(*(u8 **)(obj + 0x118) + 0x78);
            if ((flags & 0x30) == 0 && *(u16 *)(obj + 0x8c) == arg0) {
                return 1;
            }
        }
        node = *(u8 **)(node + 0xc);
    }
    return 0;
}

extern void func_020020f8(s32 *, s32 *, s32 *);
void func_0202bfa8(u8 *arg0, s32 arg1) {
    u8 *p128 = *(u8 **)(arg0 + 0x128);
    u8 *r5 = *(u8 **)(p128 + 0x54);
    s32 vec[3];
    u8 *res;
    u8 i;

    if (arg0 == NULL) {
        return;
    }

    switch (*(s8 *)(r5 + 1)) {
    case 0:
        res = func_0202bdf0(arg0, arg1, 0);
        *(s32 *)(arg0 + 0) = *(s32 *)(res + 4);
        *(s32 *)(arg0 + 4) = *(s32 *)(res + 8);
        *(s32 *)(arg0 + 8) = *(s32 *)(res + 0xc);
        *(s32 *)(r5 + 0x18) = *(s32 *)(res + 4);
        *(s32 *)(r5 + 0x1c) = *(s32 *)(res + 8);
        *(s32 *)(r5 + 0x20) = *(s32 *)(res + 0xc);
        break;
    case 1:
        if ((arg1 % 3) + 1 > 2) {
            return;
        }
        res = func_0202bdf0(arg0, arg1, 0);
        vec[0] = *(s32 *)(res + 4);
        vec[1] = *(s32 *)(res + 8);
        vec[2] = *(s32 *)(res + 0xc);
        res = func_0202bdf0(arg0, (u8)(arg1 + 1), 2);
        func_020020f8(vec, (s32 *)(res + 4), vec);
        *(s32 *)(arg0 + 0) = vec[0] / 2;
        *(s32 *)(arg0 + 4) = vec[1] / 2;
        *(s32 *)(arg0 + 8) = vec[2] / 2;
        *(s32 *)(r5 + 0x18) = *(s32 *)(arg0 + 0);
        *(s32 *)(r5 + 0x1c) = *(s32 *)(arg0 + 4);
        *(s32 *)(r5 + 0x20) = *(s32 *)(arg0 + 8);
        break;
    case 2:
        if ((arg1 / 3) - 1 < 0) {
            return;
        }
        res = func_0202bdf0(arg0, arg1, 0);
        vec[0] = *(s32 *)(res + 4);
        vec[1] = *(s32 *)(res + 8);
        vec[2] = *(s32 *)(res + 0xc);
        res = func_0202bdf0(arg0, (u8)(arg1 - 3), 1);
        func_020020f8(vec, (s32 *)(res + 4), vec);
        *(s32 *)(arg0 + 0) = vec[0] / 2;
        *(s32 *)(arg0 + 4) = vec[1] / 2;
        *(s32 *)(arg0 + 8) = vec[2] / 2;
        *(s32 *)(r5 + 0x18) = *(s32 *)(arg0 + 0);
        *(s32 *)(r5 + 0x1c) = *(s32 *)(arg0 + 4);
        *(s32 *)(r5 + 0x20) = *(s32 *)(arg0 + 8);
        break;
    case 3:
        if ((arg1 / 3) - 1 < 0) {
            return;
        }
        if ((arg1 % 3) + 1 > 2) {
            return;
        }
        res = func_0202bdf0(arg0, arg1, 0);
        vec[0] = *(s32 *)(res + 4);
        vec[1] = *(s32 *)(res + 8);
        vec[2] = *(s32 *)(res + 0xc);
        res = func_0202bdf0(arg0, (u8)(arg1 - 3), 1);
        func_020020f8(vec, (s32 *)(res + 4), vec);
        res = func_0202bdf0(arg0, (u8)(arg1 + 1), 2);
        func_020020f8(vec, (s32 *)(res + 4), vec);
        func_0202bdf0(arg0, (u8)(arg1 - 2), 3);
        *(s32 *)(arg0 + 0) = vec[0] / 3;
        *(s32 *)(arg0 + 4) = vec[1] / 3;
        *(s32 *)(arg0 + 8) = vec[2] / 3;
        *(s32 *)(r5 + 0x18) = *(s32 *)(arg0 + 0);
        *(s32 *)(r5 + 0x1c) = *(s32 *)(arg0 + 4);
        *(s32 *)(r5 + 0x20) = *(s32 *)(arg0 + 8);
        break;
    case 4:
        res = func_0202bdf0(arg0, arg1, 0);
        vec[0] = *(s32 *)(res + 4);
        vec[1] = *(s32 *)(res + 8);
        vec[2] = *(s32 *)(res + 0xc);
        *(s32 *)(arg0 + 0) = vec[0];
        *(s32 *)(arg0 + 4) = vec[1];
        *(s32 *)(arg0 + 8) = vec[2];
        *(s32 *)(r5 + 0x18) = *(s32 *)(arg0 + 0);
        *(s32 *)(r5 + 0x1c) = *(s32 *)(arg0 + 4);
        *(s32 *)(r5 + 0x20) = *(s32 *)(arg0 + 8);
        for (i = 0; i < 9; i++) {
            if (arg1 != i) {
                func_0202bdf0(arg0, i, 4);
            }
        }
        break;
    }
}

