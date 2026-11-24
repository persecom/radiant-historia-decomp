/* 28 functions from 0x0211A178 to 0x0211B0E8 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s32 v[6]; } Mtx23;
typedef struct { s32 m00,m01,m10,m11,m20,m21; } Mtx23Fields;
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
void func_0211a4e0();
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
void func_0211a178(s32 x, s32 y, s32 z) {
volatile s32 m[6];
if(data_0216f234[1]) {
s32 i=data_0216f234[3];
*(volatile s32 *)((u8 *)data_0216f3d4+i*24)+=x;
{
s32 a=*(volatile s32 *)((u8 *)data_0216f3d8+i*24);
s32 b=((volatile s32 *)data_0216f244)[i];
*(s32 *)((u8 *)data_0216f3d8+i*24)=a+y;
data_0216f244[i]=b+z;
}
return;
}
m[0]=0x1000; m[1]=0; m[2]=0; m[3]=0x1000; m[5]=y; m[4]=x;
{ void *p=data_0216f3c4[data_0216f234[3]]; func_0211a4e0((void *)m,p,p); }
{ void *p=data_0216f6c4[data_0216f234[3]]; func_0211a4e0((void *)m,p,p); }
data_0216f244[data_0216f234[3]]+=z;
}

void func_0211a3ac(s32 sine,s32 cosine) {
 s32 storage[6];
 volatile s32 *m=storage;
 s32 stride=24;
 s32 *state=data_0216f234;
 s32 index=*(volatile s32 *)&state[3];
 u16 *entry;
 s32 active;
 m[1]=sine;m[0]=cosine;m[3]=cosine;m[2]=-sine;m[4]=0;m[5]=0;
 func_0211a4e0((void *)m,(u8 *)data_0216f3c4+index*stride,data_0216f3c4[data_0216f234[3]]);
 func_0211a4e0((void *)m,(u8 *)data_0216f6c4+state[3]*stride,data_0216f6c4[data_0216f234[3]]);
 active=Active0211a3ac();
 if(!active) data_02155eb0[0]=data_0216f234[3];
 entry=data_0216f2c4[(u16)data_0216f234[3]];
 switch(entry[2]) {
 case 1: break;
 case 0: case 2: case 3:
 { u16 n=((u16 *)data_0216f234)[1]; ((u16 *)data_0216f234)[1]=n+1; entry[1]=n; }
 entry[2]=1;
 break;
 }
}

void func_0211a4c0(void) {
    func_0211c5fc();
}

u32 func_0211a4cc(u8 *arg0) {
    return *(u32 *)(arg0 + 0x78);
}

extern void func_0211c52c(void);
void func_0211a4d4(void) {
    func_0211c52c();
}

void func_0211a4e0(void *arg0, void *arg1, void *arg2) {
s32 *a=arg0,*b=arg1;
Mtx23 tmp;
void *out=arg2;
s32 x,y,x2,y2,x3,y3;
s64 t0,t1;
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
void func_0211a5fc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u32 arg4, u32 arg5, u32 arg6, u32 arg7) {
    u8 *ptr = (u8 *)data_021701cc[2] + arg0 * 0x30;
    func_02118e68(ptr);
    if (arg1 != -1) {
        func_02118e84(ptr, 0, arg1);
    }
    if (arg2 != -1) {
        func_02118e84(ptr, 1, arg2);
    }
    if (arg3 != -1) {
        func_02118e84(ptr, 2, arg3);
    }
    *(u32 *)(ptr + 0xc) = arg4;
    *(u32 *)(ptr + 0x10) = arg5;
    *(u32 *)(ptr + 0x14) = arg6;
    *(u32 *)(ptr + 0x18) = arg7;
}

void func_0211a698(u32 arg0, u32 count, u32 arg2) {
    u32 i = 0;

    data_021701cc[0] = arg2;
    data_021701cc[1] = count;
    data_021701cc[2] = arg0;
    if (count == 0) {
        return;
    }
    do {
        u8 *p = (u8 *)arg0 + i * 0x30;
        func_02118e68(p);
        *(u32 *)(p + 0xc) = 0;
        *(u32 *)(p + 0x10) = 0;
        *(u32 *)(p + 0x14) = 0;
        *(u32 *)(p + 0x18) = 0;
        *(u32 *)(p + 0x1c) = 0;
        *(u32 *)(p + 0x20) = 0;
        *(u32 *)(p + 0x24) = 0;
        *(u32 *)(p + 0x28) = 0;
        *(u32 *)(p + 0x2c) = 0;
        i++;
    } while (i < count);
}

void func_0211a700(void) {
u32 i;
s32 j;
u8 *p;
u32 base;
u32 kind;
s32 flag;
s32 value;
for(i=0;i<data_021701cc[1];i++){
p=(u8 *)data_021701cc[2]+i*0x30;
if(*(u32 *)(p+0x1c)!=0){
j=0;
while(j<3){
flag=0;
if((*(u32 *)(p+0x24)&(1<<j)) && (*(u32 *)(p+0x20)&(1<<j))) flag=1;
if(flag){
kind=data_02144d9c[j];
base=j==0 ? *(u32 *)(p+0x14) : *(u32 *)(p+0x10);
value=func_02118e8c(p,j);
if(((s32 (*)(u32,s32,u32,u32))data_021701cc[0])(kind,value,base+*(u32 *)(p+0x28),*(u32 *)(p+0x2c))!=0) *(u32 *)(p+0x24)&=~(1<<j);
}
j++;
}
*(u32 *)(p+0x20)=0;
}
}
}

void func_0211a7ec(s32 arg0, u32 arg1, u32 arg2) {
    u8 *p = func_0211a5e4(arg0);
    *(u32 *)(p + 0x24) = -1;
    *(u32 *)(p + 0x28) = arg1;
    *(u32 *)(p + 0x2c) = arg2;
}

s32 func_0211a810(void) {
    u32 i = 0;
    u32 count = data_021701cc[1];

    for (; i < count; i++) {
        u8 *p = (u8 *)data_021701cc[2] + i * 0x30;
        if (*(u32 *)(p + 0x1c) != 1) {
            *(u32 *)(p + 0x1c) = 1;
            return i;
        }
    }
    return -1;
}

void func_0211a860(u32 arg0) {
    u8 *p = (u8 *)data_021701cc[2] + arg0 * 0x30;
    func_02118e68(p);
    *(u32 *)(p + 0xc) = 0;
    *(u32 *)(p + 0x10) = 0;
    *(u32 *)(p + 0x14) = 0;
    *(u32 *)(p + 0x18) = 0;
    *(u32 *)(p + 0x1c) = 0;
    *(u32 *)(p + 0x20) = 0;
    *(u32 *)(p + 0x24) = 0;
    *(u32 *)(p + 0x28) = 0;
    *(u32 *)(p + 0x2c) = 0;
}

void func_0211ab04(u32 arg0) {
    data_021701d8[2] = arg0;
}

void func_0211ab14(void) {
    data_021701d8[1] = 0;
}

void func_0211ab28(u32 arg0) {
    data_02155ed0[0] = arg0;
}

extern u32 data_02155ed0[4];
u32 func_0211ab38(void) {
    return data_02155ed0[0];
}

extern u32 data_021701d8[4];
void func_0211ad90(u32 arg0) {
    data_021701d8[0] = arg0;
}

void func_0211ada0(void) {
    data_021701d8[0] = 0;
}

u8 *func_0211adb4(u8 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    for (i = 0; i < 4; i++) {
        u8 *p = arg0 + i * 6;
        if (arg1 <= *(u16 *)p && arg2 <= *(u16 *)(p + 2)) {
            return p;
        }
    }
    return arg0 + 0x12;
}

s32 func_0211adf4(u8 *arg0) {
    u32 v1 = *(volatile u32 *)0x04000000;
    u32 v2 = *(volatile u32 *)0x04000000;
    u32 idx = v1 & 7;
    s32 flag = (v2 & 8) != 0;
    s32 arg2 = 0;
    s32 val = arg0[idx];

    if (flag != 0) {
        arg2 = 1;
    }
    if (val >= 8) {
        val -= 8;
    }
    return func_020027d4(1, val, arg2);
}

s32 func_0211ae38(u8 *arg0) {
    u32 idx = *(volatile u32 *)0x04001000 & 7;
    s32 val = arg0[idx];

    if (val >= 8) {
        val -= 8;
    }
    return func_0200283c(val);
}

u32 func_0211b0bc(u32 arg0) {
    u16 val = data_02144e48[arg0];
    if (val == 0) {
        return arg0;
    }
    if (*(u16 *)(val + 0x4000000) & 0x2000) {
        return arg0 + 2;
    }
    return arg0;
}

