/* 36 functions from 0x0200F244 to 0x020101F8 (main), found by ds-decomp. */
#include "common.h"
extern u8 data_0215f660[256];
extern void func_02000b64(void *);
extern u32 func_0201068c(void);
extern void func_02009008(void *,void *,u32);

extern u32 data_0215f0a0[4];
extern void func_0200fa74(void *, s32);
extern u8 data_0215f120[1312];
extern void func_02006df4(void);
extern void func_02006e00(u32, u32);
extern s32 func_02006638(void *, s32);
extern void func_020065c8(void *);
extern u32 data_0213ea64[];
extern void func_02006d58(void);
extern void func_02006da8(u32, u32);
extern void func_02006d8c(u32, u32);
extern void func_02006de8(void);
extern void func_0200fddc(u8 *);
extern s32 func_0200fca4(void (*)(void *), s32);
extern u16 func_020081e0(void);
extern u32 func_02008128(void);
extern void func_0200813c(u32);
extern void func_02006510(void *);
extern void func_02006560(void *);
extern s32 func_0200fd64(u8 *, s32, u32, u32);
extern s32 func_02005da4(u16);
extern void func_0200851c(void *, s32);
extern void func_02007e58(void *, s32, s32, void *, void *);

extern void func_02008414(void);
extern void func_02008460(void *);
extern void func_02007e44(void *);
extern s32 func_0200f83c(u16 *);
extern void func_0200f7e4(u8 *);
extern void func_02008474(void *, s32, s32, s32);
extern void func_02005d88(void);
extern void func_0200faec(u32, s32);
extern s32 func_020106ac(void);
extern void func_020106a0(void);

extern s32 func_0200a6e4(s32, s32, s32);
s32 func_0200f6fc(s32 arg0);

extern void func_0200fa74(void *, s32);

extern u8 data_0215f0c0[];
extern void *data_0215f640[];
extern void func_02008e68(s32, void *, s32);
extern void func_02006dc4(void *, s32);
extern void func_0200a674(s32, void *);
extern void func_0200fedc(u32, u32, u32);

#pragma peephole off

typedef struct {
    u8 pad0[4];
    volatile u32 flag;
    u8 pad1[0x51c - 8];
    void *payload;
} RH0215f120;

extern u32 data_0215ce00[];
extern s32 func_0200a6c0(s32, s32);
extern void func_020081a4(s32);

s32 func_0200ff10(u8 *arg0, s32 arg1, s32 arg2) {
    u32 cpsr;
    u32 res;

    if ((*(volatile u32 *)(arg0 + 4) & 2) == 0) {
        *(volatile u32 *)(arg0 + 4) |= 2;
        while (!func_0200a6c0(0xb, 1)) {
            func_020081a4(0x32);
        }
        func_0200ff10(arg0, 0, 1);
    }
    func_02006dc4(*(void **)arg0, 0x60);
    func_02006de8();
    *(u32 *)(arg0 + 0x51c) = data_0215ce00[1];
    do {
        *(volatile u32 *)(arg0 + 4) |= 0x20;
        while (func_0200a6e4(0xb, arg1, 1) < 0) {
        }
        if (arg1 == 0) {
            s32 val = *(s32 *)arg0;
            while (func_0200a6e4(0xb, val, 1) < 0) {
            }
        }
        cpsr = func_02008128();
        while ((*(volatile u32 *)(arg0 + 4) & 0x20) != 0) {
            func_02006510(NULL);
        }
        func_0200813c(cpsr);
        func_02006d8c(*(u32 *)arg0, 0x60);
        res = **(u32 **)arg0;
    } while (res == 4 && --arg2 > 0);
    return res == 0;
}

#pragma peephole on
void func_02010060(u8 *p) {
s32 op=*(u32 *)(p+0x510);
u32 mode=*(u32 *)(p+0x518);
s32 retries=*(u32 *)(p+0x514);
s32 limit=256;
s32 size;
func_02000b64((void *)0x02000bac);
if(op==11) limit=func_0201068c();
else if(op==15) limit=(*(u32 **)data_0215f120)[8];
do {
size=*(u32 *)(p+0x504);
if((u32)limit<(u32)size) size=limit;
(*(u32 **)p)[5]=size;
if(*(volatile u32 *)(p+4)&0x40) {
*(volatile u32 *)(p+4)&=~0x40;
(*(u32 **)p)[0]=7;
return;
}
switch(mode) {
case 0:
func_02006d8c((u32)data_0215f660,size);
(*(u32 **)p)[3]=*(u32 *)(p+0x4fc);
(*(u32 **)p)[4]=(u32)data_0215f660;
break;
case 1: case 2:
func_02009008(*(void **)(p+0x4fc),data_0215f660,size);
func_02006dc4(data_0215f660,size);
func_02006de8();
(*(u32 **)p)[3]=(u32)data_0215f660;
(*(u32 **)p)[4]=*(u32 *)(p+0x500);
break;
case 3:
(*(u32 **)p)[3]=*(u32 *)(p+0x4fc);
(*(u32 **)p)[4]=*(u32 *)(p+0x500);
break;
}
if(!func_0200ff10(p,op,retries)) return;
if(mode==2) {if(!func_0200ff10(p,9,1)) break;}
else if(mode==0) func_02009008(data_0215f660,*(void **)(p+0x500),size);
*(u32 *)(p+0x4fc)+=size;
*(u32 *)(p+0x500)+=size;
*(u32 *)(p+0x504)-=size;
} while(*(u32 *)(p+0x504));
}
#pragma peephole off
