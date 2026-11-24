/* 26 functions from 0x020A7598 to 0x020A84B8 (main), found by ds-decomp. */
#include "common.h"
extern s32 data_02162868;
extern u8 *data_02160204;
extern void func_02108e54(s32);
extern void func_0210968c(s32,s32,s32);
extern void func_02109790(s32);
extern void func_0210dc88(void);
extern void func_020a7ec8(void);

extern u8 *data_02160140;
extern u32 data_02155c3c;
extern u32 data_02162830, data_02162834[3], data_0216281c, data_02162820[4];
extern void func_020a83a8(void),func_020a83c4(void),func_020a83e4(void);
extern u8 *func_0210c594(u32,u32);
extern void *func_020c3ca8(void),*func_020c3c78(void);
extern u8 data_02150088[16];
extern u8 data_021601d0[4];
extern u32 data_02160148[34];
extern u32 data_02160144;
extern u32 data_0216bf84;
extern u32 data_02162858[2];
extern u32 data_02162854;
extern u8 data_021436cc[264];
extern u32 (*data_02156158)(s32, s32, s32);
extern u32 func_02109c60(void *, void *);
extern void func_020a8440(void);
extern void func_020a3b84(void);
extern void func_0210e290(s32);
extern void func_020c3cd4(void *);
extern void func_020c3c94(void *);
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_0210dbe8(void *);
extern void func_0210c5dc(void *);
extern void func_0210f138(void);
extern void func_02004588(void);
extern void func_020045bc(void *, u32, s32);
extern void func_0200462c(void);
extern u8 *data_0216013c;
extern u32 data_02162850;
extern u8 data_0216242c[];
extern u8 *data_02155984;
extern void func_020c3df4(void *, s32);
extern void func_020c49ec(void *);
extern void func_020c3fa0(void *);
extern void func_020c48b8(void);
extern u8 *data_021600e4;
extern void func_020c3850(void *);
extern void func_020a78f0(void);
extern void *func_020c6d5c(s32);
extern void func_020c7654(void *, s32, u32, s32, s32, s32, s32, s32, s32);
extern void func_020a7834(void);
extern void func_020a773c(void);
extern s32 func_020aa818(void *, u16);
extern void func_020c7734(void *, s32);
extern void func_020c7760(void *, s16, s16);
extern void func_020c3df4(void *, s32);
extern void func_020c6d4c(u8 *);
extern void *func_020a6360(void *, u8);

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
} Struct20_020a7598;

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
    u32 unk_1c;
    u32 unk_20;
} Struct36_020a7598;

typedef struct {
    Struct36_020a7598 entries[3];
} Struct108_020a7598;

extern const Struct20_020a7598 data_0214364c;
extern const Struct108_020a7598 data_02143660;
extern void *func_020a7460(void);
extern void *func_020f4d40(u32);
extern void *func_020f4c2c(u32);
extern s32 func_020f50bc(void *, void *);
extern void func_020f5114(void *, s32);
extern void func_021167f0(void *, void *);

void func_020a7598(void *arg0) {
    Struct20_020a7598 s0 = data_0214364c;
    Struct108_020a7598 s1 = data_02143660;
    u8 i;

    for (i = 0; i < 3; i++) {
        u8 *p5 = func_020a7460();
        u8 *p6 = *(u8 **)(p5 + 4);
        u32 id = ((u32 *)&s1)[i * 9 + 4];
        u8 *p2 = func_020f4d40(id);
        if (p2 == NULL) {
            p2 = func_020f4c2c(id);
        }
        *(u16 *)(p5 + 8) = 0;
        *(u16 *)(p5 + 0xa) = 0;
        *(u8 *)(p5 + 0) = (u8)((u32 *)&s1)[i * 9 + 8];
        *(u32 *)(p2 + 0x20) = 0x1000;
        *(u32 *)(p2 + 0x24) = 0x1000;
        *(u32 *)(p6 + 0x48) = ((u32 *)&s1)[i * 9 + 5];
        *(u32 *)(p6 + 0x8) = ((u32 *)&s1)[i * 9 + 0];
        *(u32 *)(p6 + 0xc) = ((u32 *)&s1)[i * 9 + 1];
        *(u8 *)(p6 + 0x10) = 0;
        *(u16 *)(p6 + 0x44) = 3;
        s0.unk_04 = ((u32 *)&s1)[i * 9 + 2];
        s0.unk_08 = ((u32 *)&s1)[i * 9 + 3];
        s0.unk_0c = ((u32 *)&s1)[i * 9 + 7];
        if (func_020f50bc(p6, &s0) == 0) {
            return;
        }
        func_020f5114(p6, 1);
        func_021167f0(arg0, p5);
    }
}

void func_020a76cc(void)
{
  u8 *p = data_021600e4;
  void **new_var2;
  void **new_var;
  func_020a78f0();
  new_var = (void **) (p + 0x154);
  new_var2 = new_var;
  if ((*new_var2) == NULL)
  {
    *new_var2 = func_020c6d5c(6);
    func_020c7654(*new_var2, 2, 0x80008000, 0, 0, 0xa0, 0, 6, 0);
    func_020a7834();
  }
  func_020a773c();
}

void func_020a773c(void) {
    u8 *p = data_021600e4;
    void *obj;
    u8 *node = *(u8 **)(p + 0x148);
    if (node == NULL) {
        return;
    }
    while (node != NULL) {
        s32 val = 4;
        obj = *(void **)(node + 0);
        if (func_020aa818(*(void **)(p + 0x13f4), *(u16 *)(node + 0xc)) != 0) {
            val = 6;
        }
        func_020c7734(obj, val);
        node = *(u8 **)(node + 8);
    }
}

void func_020a779c(void) {
    u8 *p = data_021600e4;
    s32 a = *(s32 *)(p + 0x7c);
    s32 b = *(s32 *)(p + 0x80);
    s32 c = *(s32 *)(p + 0xc8);
    s32 d = *(s32 *)(p + 0xd0);
    s32 x = ((c >> 12) * a) / 0x1000 + (0x80 + (a * -235) / 0x1000);
    s32 y = ((d >> 12) * b) / 0x1000 + (0x60 + (b * -235) / 0x1000);
    func_020c7760(*(void **)(p + 0x154), (s16)(x - 8), (s16)(y - 0x18));
}

void func_020a7834(void) {
    u8 *p = data_021600e4;
    if (*(u8 *)(p + 0x159) == 0) {
        (*(s8 *)(p + 0x158))++;
    } else {
        (*(s8 *)(p + 0x158))--;
    }
    if (*(s8 *)(p + 0x158) < 0) {
        *(u8 *)(p + 0x159) = 0;
        func_020a7834();
        return;
    }
    if (*(s8 *)(p + 0x158) < 8) {
        func_020c7734(*(void **)(p + 0x154), 0);
        return;
    }
    if (*(s8 *)(p + 0x158) < 0x10) {
        func_020c7734(*(void **)(p + 0x154), 6);
        return;
    }
    if (*(s8 *)(p + 0x158) < 0x18) {
        func_020c7734(*(void **)(p + 0x154), 2);
        return;
    }
    if (*(s8 *)(p + 0x158) < 0x20) {
        func_020c7734(*(void **)(p + 0x154), 4);
        return;
    }
    *(s8 *)(p + 0x158) = 0;
    func_020a7834();
}

void func_020a78f0(void) {
    u8 *p = data_021600e4;
    u8 *q = *(u8 **)(p + 0x148);
    while (q != NULL) {
        u8 *next = *(u8 **)(q + 8);
        func_021168f8(p + 0x148, q);
        func_020c6d4c(*(u8 **)(q + 0));
        if (q != NULL) {
            func_0210c5dc(q);
        }
        q = next;
    }
    if (*(void **)(p + 0x154) != NULL) {
        func_020c6d4c(*(u8 **)(p + 0x154));
        *(void **)(p + 0x154) = NULL;
    }
}

volatile char func_020a795c(u32 arg0, u32 *arg1, u32 *arg2)
{
  u8 *p = data_021600e4;
  u8 *result = func_020a6360(p + 0x118, ((arg0 - (*((u32 *) (p + 0x184)))) + 1) & 0xff);
  *arg1 = *((u32 *) (result + 4));
  *arg2 = *((u32 *) (result + 8));
}

static s32 func_020a79a4(void) {
s32 result;
s32 three=3, zero=0;
data_02162868=1; data_0216bf84=zero;
func_0210968c(three,16,1);
func_02108e54(zero); func_020a7b18(); func_02109264(zero);
func_021089e8(zero,zero,three); func_0210968c(three,zero,30); func_02109790(three);
for (;;) { if (*(u32 *)(data_0216013c+0x238)!=0) break; func_0210dc88(); }
if(data_0216013c[0x23c]==0){
*(u16 *)(data_02160204+0x72)=331; *(u16 *)(data_02160204+0xdc)=231;
*(u16 *)(data_02160204+0x74)=0; *(u16 *)(data_02160204+0x76)=0;
*(u16 *)(data_02160204+0xd4)=1; *(u16 *)(data_02160204+0xda)=999;
data_02160204[0x138]=1; func_02021c7c(); func_020bd690(); result=2;
} else if(data_0216013c[0x23c]==1) result=(u16)func_020f5574();
data_02160204[0x116]=1;
func_0210968c(3,-16,30); func_02109790(3);
func_02108eec(0,1000); func_020a7ec8(); func_0210dc88();
data_02162868=0; data_0216bf84=0; return result;
}

static void func_020a7ec8(void){
s32 zero,one;
if(data_0216013c==NULL)return;
zero=0;
data_0216bf84=zero;
func_020c470c();
func_020a3b84();
one=1;
func_020f0090(one);
func_0210e290(zero);
data_02162858[0]=zero;
data_02162854=zero;
data_02155984=data_0216242c;
data_02162850=one;
func_0210b894();
data_02162850=zero;
if(data_0216013c){
func_020c3cd4(*(void **)(data_0216013c+0x8c));
*(u32 *)(data_0216013c+0x8c)=zero;
func_020c3c94(*(void **)(data_0216013c+0x90));
*(u32 *)(data_0216013c+0x90)=zero;
func_0210da14(data_0216013c);
func_0210da14(data_0216013c+0x64);
func_0210dac8(data_0216013c+0x78);
func_0210dba0(data_0216013c+0x14);
func_0210dbe8(data_0216013c+0x28);
func_0210db10(data_0216013c+0x3c);
func_0210db58(data_0216013c+0x50);
if(data_0216013c){func_0210c5dc(data_0216013c);data_0216013c=NULL;}
}
func_0210f138();
}

void func_020a7fe8(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_020a8010(void) {
    u8 *p = *(u8 **)(data_0216013c + 0x90);
    if (*(s32 *)(p + 4) == 0) {
        func_020c49ec(p);
        return;
    }
    func_020c3fa0(p);
    *(s32 *)(data_0216013c + 0x22c) += 1;
    if (*(s32 *)(data_0216013c + 0x22c) >= 0x280) {
        *(s32 *)(data_0216013c + 0x22c) -= 0x280;
    }
}

void func_020a8064(void) {
    u8 *p = data_0216013c;
    if (*(s32 *)(*(u8 **)(p + 0x90) + 4) == 0) {
        func_020c48b8();
        return;
    }
    func_020c3df4(*(void **)(p + 0x8c), 1);
}

void func_020a809c(void) {
    u8 *p = data_0216013c;
    if (*(s32 *)(*(u8 **)(p + 0x90) + 4) != 0) {
        func_020c3df4(*(void **)(p + 0x8c), 0);
    }
}

void func_020a80cc(void) {
}

void func_020a80d0(void) {
}

void func_020a80d4(void) {
}

void func_020a80d8(void) {
}

extern s32 data_02162868;
extern void func_02108e54(s32);
extern void func_0210968c(s32, s32, s32);
extern void func_020a81a8(void);
extern void func_02109790(s32);
extern void func_0210dc88(void);
extern void func_020a82f0(void);
s32 func_020a80dc(void) {
    data_02162868 = 0;
    data_0216bf84 = 0;
    func_02108e54(0);
    func_0210968c(3, 16, 1);
    func_020a81a8();
    func_0210968c(3, 0, 30);
    func_02109790(3);
    for (;;) {
        if (*(u32 *)(data_02160140 + 0x4c) != 0) {
            break;
        }
        func_0210dc88();
    }
    if ((*(u8 **)(data_02160140 + 0x40))[0x25] != 0) {
        func_0210968c(3, 16, 15);
    } else {
        func_0210968c(3, 16, 30);
    }
    func_02109790(3);
    func_020a82f0();
    func_0210dc88();
    data_02162868 = 0;
    data_0216bf84 = 0;
    return 0x27;
}

void func_020a81a8(void){
s32 one;
if(data_02160140)return;
func_020a2c20();
func_0210f6d4();
one=1;
data_02162858[0]=(u32)func_020a7fe8;
data_02162854=(u32)func_020a7fe8;
func_02120524(one);
func_020a31c8(18);
data_02160140=func_0210c594(0x54,data_02155c3c);
*(u32 *)data_02160140=(u32)func_020a83a8;
*(u32 *)(data_02160140+4)=1011;
func_0210d9e4(data_02160140);
*(u32 *)(data_02160140+0x14)=(u32)func_020a83c4;
*(u32 *)(data_02160140+0x18)=1000;
func_0210db70(data_02160140+0x14);
*(u32 *)(data_02160140+0x28)=(u32)func_020a83e4;
*(u32 *)(data_02160140+0x2c)=1000;
func_0210dbd0(data_02160140+0x28);
*(void **)(data_02160140+0x3c)=func_020c3ca8();
*(void **)(data_02160140+0x40)=func_020c3c78();
func_020c3738(*(void **)(data_02160140+0x3c));
data_02162830=30;
data_02162834[0]=one;
data_0216281c=2;
data_02162820[0]=2;
data_0216bf84=0;
}

