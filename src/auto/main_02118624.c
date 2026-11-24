/* 33 functions from 0x02118234 to 0x021191F0 (main), found by ds-decomp. */
#include "common.h"
static inline s32 has_02118f24_data(u8 *p) { s32 r = 1; if (!*(void **)(p + 12)) r = 0; return r; }
static inline s32 has_02118f24_handle(u8 *p) { s32 r = 1; if (*(s32 *)(p + 0x38) == -1) r = 0; return r; }

extern void func_02117df4(void *);
extern s32 func_02117d80(void *);
extern s32 func_02117d74(void *, void *);
extern u8 data_0216f234[16];
extern u8 data_0216f3d4[];
extern u8 data_0216f3d8[];
extern u8 data_0216f3c4[];
extern u8 data_0216f6c4[];
extern u32 data_0216f244[];
typedef struct {
    u32 w[6];
} S_02119150;

extern void func_02118234(void *);
extern void func_02118430(void *);

extern void func_02006dc4(void *, u32);
extern void func_0200439c(void);
extern void func_020043f8(void *, u32, u32);
extern void func_02004544(void);
extern void func_02003830(void *, u32, u32);
extern void func_02003894(void *, u32, u32);

void func_02118624(void *arg0, u32 arg1, s32 arg2, void *arg3) {
    u32 mapType = *(u32 *)((u8 *)arg0 + 8);
    u32 zero = 0;

    switch (arg2) {
        case 0:
            break;
        case 1:
            *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & 0xffcfffef) | mapType;
            break;
        case 2:
            *(volatile u32 *)0x04001000 = (*(volatile u32 *)0x04001000 & 0xffcfffef) | mapType;
            break;
    }

    func_02006dc4(*(void **)((u8 *)arg0 + 0x14), *(u32 *)((u8 *)arg0 + 0x10));

    switch (arg2) {
        case 0:
            func_0200439c();
            func_020043f8(*(void **)((u8 *)arg0 + 0x14), arg1, *(u32 *)((u8 *)arg0 + 0x10));
            func_02004544();
            break;
        case 1:
            func_02003830(*(void **)((u8 *)arg0 + 0x14), arg1, *(u32 *)((u8 *)arg0 + 0x10));
            break;
        case 2:
            func_02003894(*(void **)((u8 *)arg0 + 0x14), arg1, *(u32 *)((u8 *)arg0 + 0x10));
            break;
    }

    if (*(u32 *)((u8 *)arg0 + 8) == 0) {
        u32 val;
        switch (*(u16 *)((u8 *)arg0 + 2)) {
            case 1: val = 0; break;
            case 2: val = 1; break;
            case 4: val = 2; break;
            case 8: val = 3; break;
            case 16: val = 4; break;
            case 32: val = 5; break;
            default: val = 0; break;
        }
        *(u32 *)((u8 *)arg3 + 0xc) = val;

        switch (*(u16 *)((u8 *)arg0 + 0)) {
            case 1: val = 0; break;
            case 2: val = 1; break;
            case 4: val = 2; break;
            case 8: val = 3; break;
            case 16: val = 4; break;
            case 32: val = 5; break;
            default: val = 0; break;
        }
        *(u32 *)((u8 *)arg3 + 0x10) = val;
    } else {
        *(u32 *)((u8 *)arg3 + 0xc) = *(u16 *)((u8 *)arg0 + 2);
        *(u32 *)((u8 *)arg3 + 0x10) = *(u16 *)((u8 *)arg0 + 0);
    }

    *(u32 *)((u8 *)arg3 + 0x14) = *(u32 *)((u8 *)arg0 + 4);
    *(u32 *)((u8 *)arg3 + 0x18) = zero;
    *(u32 *)((u8 *)arg3 + 0x1c) = 1;
    *(u32 *)((u8 *)arg3 + 0x20) = *(u32 *)((u8 *)arg0 + 8);
    func_021185b0((s32 *)arg3, arg2, (s32)arg1);
}

extern void func_02004138(void);
extern void func_02004180(void *,u32,u32);
extern void func_020041f0(void);
extern void func_020036b8(void *,u32,u32);
extern void func_020042e4(void);
extern void func_020042fc(void *,u32,u32);
extern void func_02004364(void);
extern void func_02003714(void *,u32,u32);
extern void func_02004588(void);
extern void func_020045bc(void *,u32,u32);
extern void func_0200462c(void);
extern void func_021185f4(void *,s32,u32);
void func_02118c14(u32 *p,u32 addr,s32 type,u32 *out){
void *data=(void *)p[3];u32 size=p[2];
func_02006dc4(data,size);
switch(type){
case 1: if(p[1]){func_02004138();func_02004180(data,addr,size);func_020041f0();}else func_020036b8(data,addr,size);break;
case 2: if(p[1]){func_020042e4();func_020042fc(data,addr,size);func_02004364();}else func_02003714(data,addr,size);break;
case 0: func_02004588();func_020045bc(data,addr,size);func_0200462c();break;
}
{u32 a=((volatile u32 *)p)[0],b=((volatile u32 *)p)[1];out[0]=a;out[1]=b;}func_021185f4(out,type,addr);
}

void func_02118e68(s32 *arg0) {
    s32 i;
    for (i = 0; i < 3; i++) {
        arg0[i] = -1;
    }
}

void func_02118e84(s32 *arg0, s32 arg1, s32 arg2) {
    arg0[arg1] = arg2;
}

s32 func_02118e8c(s32 *arg0, s32 arg1) {
    return arg0[arg1];
}

void func_02118e94(u8 *arg0, u16 arg1, u16 arg2) {
    if (*(s32 *)arg0 == 1) {
        *(u16 *)(arg0 + 0xc) = arg1;
        *(u16 *)(arg0 + 0xe) = arg2;
        *(u16 *)(arg0 + 0x12) |= 8;
    }
}

void func_02118eb4(u8 *arg0, u16 arg1) {
    if (*(s32 *)arg0 == 1) {
        *(u16 *)(arg0 + 0x10) = arg1;
        *(u16 *)(arg0 + 0x12) |= 4;
    }
}

void func_02118ed0(u8 *arg0, u32 arg1, u32 arg2) {
    if (*(s32 *)arg0 == 1) {
        *(u32 *)(arg0 + 4) = arg1;
        *(u32 *)(arg0 + 8) = arg2;
        *(u16 *)(arg0 + 0x12) |= 2;
    }
}

extern void func_02118efc(void *);
extern void func_02008df0(s32, void *, s32);
extern void func_02117d9c(void *);
extern void func_0211a5fc(void *, s32, s32, s32, u32, s32, s32, s32);
extern void func_021190bc(void *, void *);
void func_02118eec(u32 *arg0, u32 arg1) {
    *arg0 = arg1;
    func_02118efc(arg0);
}

void func_02118efc(void *arg0) {
    u8 *p = (u8 *)arg0;
    func_02008df0(0, p + 4, 0x18);
    *(s32 *)(p + 4) = 0x1000;
    *(s32 *)(p + 8) = 0x1000;
}

extern u8 *func_02117bd4(void *);
extern u32 func_021176b0(void *, u32);
extern void func_0211a7ec(s32, u32, u32);
void func_02118f24(void *arg0) {
u8 *p=arg0, *v, *res, *tbl; u32 kind;
if (*(u16 *)(*(u8 **)(p+4)+4)==0) return;
v=func_02117bd4(p); res=*(u8 **)(p+0x34);
*(u32 *)(p+0x30)=func_021176b0(res,*(u16 *)v);
kind=*(u32 *)(*(u8 **)(p+0x1c)+4)&255;
func_02118eec((u32 *)(p+0x3c),1);
if(kind!=0) {
if(kind==2) ((void (*)(u8 *, s32, s32))func_02118e94)(p+0x3c,*(s16 *)(v+4),*(s16 *)(v+6));
else {func_02118ed0(p+0x3c,*(u32 *)(v+4),*(u32 *)(v+8));func_02118eb4(p+0x3c,*(u16 *)(v+2));((void (*)(u8 *, s32, s32))func_02118e94)(p+0x3c,*(s16 *)(v+12),*(s16 *)(v+14));}
}
tbl=*(u8 **)(res+12);
if((u8)has_02118f24_data(res)) {if((u8)has_02118f24_handle(p)) {u32 *a=(u32 *)(*(u8 **)(tbl+4)+*(u16 *)v*8);func_0211a7ec(*(s32 *)(p+0x38),a[0],a[1]);}}
}

void func_02119000(u8 *arg0, void *arg1, void *arg2) {
    u8 *p = arg0;
    *(void **)(p + 0x34) = arg2;
    *(s32 *)(p + 0x38) = -1;
    func_02118eec((u32 *)(p + 0x3c), 1);
    func_02117d9c(p);
    func_021190bc(p, arg1);
}

void func_0211903c(u8 *arg0, void *arg1, u8 *arg2, void *arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9) {
    func_0211a5fc(arg3, arg4, arg5, arg6, **(u32 **)(arg2 + 0xc), arg7, arg8, arg9);
    *(void **)(arg0 + 0x34) = arg2;
    *(void **)(arg0 + 0x38) = arg3;
    func_02118eec((u32 *)(arg0 + 0x3c), 1);
    func_02117d9c(arg0);
    func_021190bc(arg0, arg1);
}

extern void func_02117e4c(void *, void *);
extern void func_02118f24(void *);
void func_021190bc(void *arg0, void *arg1) {
    func_02117e4c(arg0, arg1);
    func_02118f24(arg0);
}

void func_021190d4(u8 *arg0, u32 arg1)
{
  void *v = func_02117d80(arg0);
  *((u32 *) (arg0 - -0x1c)) = arg1;
  if (func_02117d74(arg0, v) == 0)
  {
    func_02117df4(arg0);
  }
  func_02118f24(arg0);
}

extern s32 func_02117be0(void *);
extern void func_02008df0(s32, void *, s32);
extern void func_02117d9c(void *);
extern void func_0211a5fc(void *, s32, s32, s32, u32, s32, s32, s32);
void func_02119110(void *arg0) {
    if (func_02117be0(arg0) != 0) {
        func_02118f24(arg0);
    }
}

void func_02119130(u8 *arg0) {
    func_02117df4(arg0);
    *(u32 *)(arg0 + 0xc) = 1;
    func_02118f24(arg0);
}

void func_02119150(void) {
    u32 index = *(u32 *)(data_0216f234 + 0xc);
    u32 offset = index * 0x18;
    if (*(u32 *)(data_0216f234 + 4) != 0) {
        *(u32 *)(data_0216f3d4 + offset) = 0;
        *(u32 *)(data_0216f3d8 + offset) = 0;
    } else {
        u8 *p = data_0216f3c4 + offset;
        u8 *dst = data_0216f6c4 + offset;
        *(u32 *)p = 0x1000;
        *(u32 *)(p + 4) = 0;
        *(u32 *)(p + 8) = 0;
        *(u32 *)(p + 0xc) = 0x1000;
        *(u32 *)(p + 0x10) = 0;
        *(u32 *)(p + 0x14) = 0;
        *(S_02119150 *)dst = *(S_02119150 *)p;
    }
    data_0216f244[index] = 0;
}