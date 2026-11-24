/* 15 functions from 0x020CEC8C to 0x020CFC10 (main), found by ds-decomp. */
#include "common.h"
extern u16 data_021626a8;
extern void func_0210968c(s32, s32, s32);
extern void func_02109790(s32);
extern u8 *data_02160200;
extern void func_020bd574(void);
extern void func_020bd690(void);
extern void func_0207afc8(void);

extern void func_0210c5dc(void *);
extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern u8 *data_02160238;
extern u32 data_0216023c;
extern u8 data_021512f0;
extern u8 *func_020cda08(u32, u16);
extern void func_020ccc30(void);
extern void func_02021a3c(void);
extern void func_0210dc88(void);
extern s32 func_02021a50(void);
extern void func_020bdd88(void);
extern void func_02021c7c(void);
extern void func_020cf110(void);
extern u32 data_02160240;
extern void *data_02160204;
extern void *data_02160078;
extern u8 *func_020bd438(u32);
extern void func_020bd2fc(u32, u16, u8, u8);
extern void func_020bd8c8(void);
extern void func_02021a28(void);
extern void func_020cf3b4(void);
void func_020cec8c(void) {
    u8 *p = data_02160238;
    switch (p[0]) {
    case 0:
        p[0x771] = 1;
        break;
    case 1:
    case 6:
        {
            u8 v = 0;
            func_020ccc30();
            p[0] = v;
        }
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    default:
        break;
    }
}

void func_020cecfc(void) {
    u8 *p = data_02160238;
    switch (p[0x774]) {
    case 0:
        {
            u32 v = p[0x773] + 1;
            if ((u8)v >= 0xff) {
                p[0x774] = 1;
            }
            p[0x773] = v;
        }
        break;
    case 1:
        {
            u32 v = p[0x773] - 1;
            p[0x773] = v;
            if ((v & 0xff) == 0) {
                p[0x774] = 0;
            }
        }
        break;
    default:
        break;
    }
}

void func_020cef00(void) {
u8 *p=data_02160238;
if (p[0x70a]==0) {
func_0210d27c(11);
if (data_021512f0 != 0) return;
func_020cda64(0,0x12000,0x2d000,30,0,2,0,0,0);
*(u32 *)(*(u8 **)(data_02160238+0x60)+0x40)=1;
func_020a994c(p+0xb4);
func_020a994c(p+0x104);
func_020cda08(2,7)[2]=0;
func_020cda08(2,8)[2]=0;
p[0x70b]=4;
p[0]=2;
} else {
((void (*)(s32))func_020ccc30)(0);
p[0x70b]=0;
p[0]=0;
func_0210d27c(5);
}
}

extern void func_020ccb10(void);
void func_020cefe4(void) {
    u8 *p = data_02160238;
    switch (p[0x70a]) {
    case 0:
        func_0210d27c(11);
        if (p[0x70b] == 0) {
            func_020cda64(0, 0x12000, 0x2d000, 30, 0, 5, 0, 0, 0);
            *(u32 *)(*(u8 **)(data_02160238 + 0x60) + 0x40) = 1;
            p[0x70b] = 1;
            p[0x70a] = 1;
            func_020ccb10();
        } else {
            func_020cda64(0, 0x12000, 0x2d000, 30, 0, 11, 0, 0, 0);
            *(u32 *)(*(u8 **)(data_02160238 + 0x60) + 0x40) = 1;
            func_020a994c(p + 0xb4);
            func_020a994c(p + 0x104);
            func_020cda08(2, 7)[2] = 0;
            func_020cda08(2, 8)[2] = 0;
            p[0] = 7;
        }
        break;
    case 1:
        ((void (*)(s32))func_020ccc30)(0);
        p[0] = 0;
        func_0210d27c(5);
        break;
    }
}

#pragma optimization_level 0
void func_020cf110(void) {
func_020bd574();
*(s16 *)((u8 *)data_02160204+0xf6)=*(s16 *)((u8 *)data_02160078+0x30);
*(u16 *)((u8 *)data_02160204+0x14a)=*(u16 *)((u8 *)data_02160078+0x20);
func_020bd690();func_0207afc8();
*((u8 *)data_02160204+0x7a)=0;
*((u8 *)data_02160204+0x7e)=0;
*((u8 *)data_02160204+0x11d)=0;
*((u8 *)data_02160204+0x85)=0;
*((u8 *)data_02160204+0xde)=0;
*(u16 *)((u8 *)data_02160204+0xda)=0;
*(u16 *)((u8 *)data_02160204+0xdc)=0;
if(*(u32 *)(data_02160200+0x160)&0x80) {
*(u32 *)(data_02160200+0x160)&=~0x80;
} else {
*(u16 *)((u8 *)data_02160204+0x74)=0;
*(u16 *)((u8 *)data_02160204+0x76)=0;
}
}
#pragma optimization_level 4

void func_020cf228(void) {
    s32 x = 0;
    func_02021a3c();
    goto check;
loop:
    func_0210dc88();
check:
    if (func_02021a50() == 1) {
        goto loop;
    }
    if (func_02021a50() != 0) {
        func_020bdd88();
        func_02021c7c();
        data_0216023c = 2;
    } else {
        func_020cf110();
        data_0216023c = 1;
    }
    (void)x;
}

s32 func_020cf284(void) {
func_0210968c(3,0,30);
data_0216023c=0;
for (;;) {
func_0210dc88();
if (data_021626a8 & 1) {
if(data_0216023c) data_0216023c=0;
else {func_020bdd88();func_02021c7c();func_020cf228();}
} else if(data_021626a8 & 2) break;
if(data_0216023c) continue;
if(data_021626a8 & 16) {
((u8 *)data_02160204)[0x7f]++;
((u8 *)data_02160204)[0x7f] %= 3;
} else if(data_021626a8 & 32) {
((u8 *)data_02160204)[0x7f]--;
((u8 *)data_02160204)[0x7f] %= 3;
}
}
func_0210968c(3,-16,1);func_02109790(3);
*(u16 *)((u8 *)data_02160204+0x102)=1;
return 36;
}

void func_020cf3b4(void) {
    u8 i;
    u8 *src;
    void **pp1;
    void **pp2;
    for (i = 0; i < 3; i++) {
        src = func_020bd438(i);
        func_020bd2fc(i, *(u16 *)src, *(u8 *)(src + 2), *(u8 *)(src + 3));
    }
    pp1 = &data_02160204;
    pp2 = &data_02160078;
    *(s16 *)((u8 *)*pp2 + 0x30) = *(s16 *)((u8 *)*pp1 + 0xf6);
    *(u16 *)((u8 *)*pp2 + 0x20) = *(u16 *)((u8 *)*pp1 + 0x14a);
    func_020bd8c8();
}

void func_020cf424(void) {
    func_020cf3b4();
    func_02021a28();
    do {
        func_0210dc88();
    } while (func_02021a50() == 1);
    if (func_02021a50() == 0) {
        *(u32 *)&data_02160240 = 1;
    } else {
        *(u32 *)&data_02160240 = 2;
    }
}

void *func_020cf5a0(void) {
    return func_0210c594(0x20, data_02155c3c);
}

void func_020cf5bc(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}
