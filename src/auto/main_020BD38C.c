/* 25 functions from 0x020BD38C to 0x020BE330 (main), found by ds-decomp. */
#include "common.h"
typedef struct { u16 x, y; } BDPair;
extern u8 data_0215111c[], data_02151134[], data_02151144[];
extern u8 data_02151118[];
extern u8 *data_021600e4;
extern s32 func_020be1b0(void);
extern void func_020be330(void *);
extern void func_020be3a8(void *);
extern void func_020a9e38(s16 *, s16 *);

extern u8 *data_02160204;
extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_021167ac(void *, u32);
extern void func_021167f0(void *, void *);
extern void *func_020bd450(u8);

extern u8 *data_02160204;
extern u8 *data_02160078;
extern u8 *data_02160200;
extern void func_02008e68(s32, void *, s32);
extern u8 *func_020bd438(u8);
extern void func_020bd3b8(u8, u16, u8, u8);

void *func_020bd38c(void) {
    void *ptr = func_0210c594(0xc, data_02155c3c);
    func_021167ac(ptr, 8);
    return ptr;
}

void func_020bd3b8(u8 arg0, u16 arg1, u8 arg2, u8 arg3) {
    u8 *list = *(u8 **)(data_02160204 + 0x90);
    if (func_020bd438(arg0) != NULL) {
        return;
    }
    u8 *p = func_0210c594(4, data_02155c3c);
    u8 *q = func_0210c594(0x10, data_02155c3c);
    *(u16 *)(p + 0) |= arg1;
    *(u8 *)(p + 2) = arg2;
    *(u8 *)(p + 3) = arg3;
    *(void **)(q + 0) = p;
    *(u8 *)(q + 4) = arg0;
    func_021167f0(list, q);
}

u8 *func_020bd438(u8 arg0) {
    void *p = func_020bd450(arg0);
    if (p != NULL) {
        return *(u8 **)p;
    }
    return NULL;
}

void *func_020bd450(u8 arg0) {
    u8 *node = *(u8 **)(*(u8 **)(data_02160204 + 0x90));
    while (node != NULL) {
        if (node[4] == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0xc);
    }
    return NULL;
}

extern u8 *func_02021f10(u8);
u16 func_020bd490(u32 arg0, u8 arg1) {
    u8 *p = func_020bd438(arg1);
    if (p == NULL) {
        return 0;
    }
    switch (arg0) {
        case 0:
            if (p == NULL) {
                return 0;
            }
            return (*(u16 *)p & 1) ? 1 : 0;
        case 1:
            if (*(u16 *)p & 2) {
                return p[3];
            }
            return func_02021f10(p[2])[0x42];
        case 2:
            return (*(u16 *)p & 2) ? 1 : 0;
        case 3:
            if (p == NULL) {
                break;
            }
            return p[2];
        case 4:
            return (*(u16 *)p & 4) ? 1 : 0;
        case 5:
            *(u16 *)p |= 4;
            break;
    }
    return 0;
}

void func_020bd574(void) {
    u8 i;
    for (i = 0; i < 7; i++) {
        u8 *p = func_020bd438(i);
        if (p == NULL) {
            func_020bd3b8(
                i,
                *(u16 *)(data_02160078 + 0x14d0 + i * 4),
                *(u8 *)(data_02160078 + 0x14d2 + i * 4),
                *(u8 *)(data_02160078 + 0x14d3 + i * 4)
            );
        } else {
            *(u16 *)(p + 0) = *(u16 *)(data_02160078 + 0x14d0 + i * 4);
            *(u8 *)(p + 2) = *(u8 *)(data_02160078 + 0x14d2 + i * 4);
            *(u8 *)(p + 3) = *(u8 *)(data_02160078 + 0x14d3 + i * 4);
        }
    }
}

void func_020bd608(void) {
    u8 i;
    for (i = 0; i < 3; i++) {
        u8 *p = func_020bd438(i);
        if (*(u16 *)p & 8) {
            *(u16 *)p |= 1;
            *(u16 *)p &= 0xfff7;
        }
        if (*(u16 *)p & 2) {
            *(u16 *)p &= 0xfffd;
            p[3] = 0;
        }
        if (*(u16 *)p & 0x10) {
            *(u16 *)p &= 0xfffe;
            *(u16 *)p &= 0xffef;
        }
    }
}

s32 func_020bdf24(volatile s32, ...);
void func_020bd690(void) {
u8 i,j;
if(data_02160200 == NULL) data_02160200=func_0210c594(0x1a0,data_02155c3c);
for(i=0;i<90;i++) *(u32*)(data_02160200+i*4)=*(u32*)(data_02160078+i*4+0x14f4);
for(i=0;i<4;i++) data_02160200[i+0x16c]=data_02160078[i+0x1674];
for(i=0;i<3;i++) {
*(BDPair*)(data_02160200+i*4+0x170)=*(BDPair*)(data_02160078+i*4+0x1668);
*(u16*)(data_02160200+i*2+0x17c)=*(u16*)(data_02160078+i*2+0x167a);
*(u32*)(data_02160200+i*4+0x184)=*(u32*)(data_02160078+i*4+0x165c);
for(j=0;j<5;j++) *(s8*)((u8*)(i*5)+(u32)data_02160200+j+0x190)=*(s8*)((u8*)(i*5)+(u32)data_02160078+j+0x1681);
}
data_02160204[0x110]=data_02160078[0x32];
data_02160204[0x113]=*(s8*)(data_02160078+0x34);
data_02160204[0x114]=data_02160078[0x35];
data_02160204[0x11c]=data_02160078[0x36];
*(u16*)(data_02160204+0x148)=*(u16*)(data_02160078+0x22);
*(u16*)(data_02160204+0x72)=*(u16*)(data_02160078+0x1690);
*(BDPair*)(data_02160204+0x74)=*(BDPair*)(data_02160078+0x1692);
*(u16*)(data_02160204+0x78)=*(u16*)(data_02160078+0x1696);
func_020bdf24((s32)data_0215111c);
func_020bdf24((s32)data_02151134,*(s16*)(data_02160204+0xf6));
func_020bdf24((s32)data_02151144,*(u16*)(data_02160204+0x72));
}

extern u8 *data_021600ac;
extern u8 data_02151154[], data_0215116c[], data_0215117c[];
void func_020bd8c8(void) {
    u8 i, j;
    if (data_02160200 == NULL) {
        return;
    }
    for (i = 0; i < 90; i++) {
        *(u32 *)(data_02160078 + i * 4 + 0x14f4) = *(u32 *)(data_02160200 + i * 4);
    }
    for (i = 0; i < 4; i++) {
        data_02160078[i + 0x1674] = data_02160200[i + 0x16c];
    }
    for (i = 0; i < 3; i++) {
        *(BDPair *)(data_02160078 + i * 4 + 0x1668) = *(BDPair *)(data_02160200 + i * 4 + 0x170);
        *(u16 *)(data_02160078 + i * 2 + 0x167a) = *(u16 *)(data_02160200 + i * 2 + 0x17c);
        *(u32 *)(data_02160078 + i * 4 + 0x165c) = *(u32 *)(data_02160200 + i * 4 + 0x184);
        for (j = 0; j < 5; j++) {
            *(s8 *)((u8 *)(i * 5) + (u32)data_02160078 + j + 0x1681) = *(s8 *)((u8 *)(i * 5) + (u32)data_02160200 + j + 0x190);
        }
    }
    data_02160078[0x32] = data_02160204[0x110];
    data_02160078[0x34] = *(s8 *)(data_02160204 + 0x113);
    data_02160078[0x35] = data_02160204[0x114];
    data_02160078[0x36] = data_02160204[0x11c];
    *(u16 *)(data_02160078 + 0x22) = *(u16 *)(data_02160204 + 0x148);
    if (*(u32 *)(data_02160200 + 0x160) & 0x80) {
        *(u16 *)(data_02160078 + 0x1690) = *(u16 *)(data_02160204 + 0x72);
        if (data_021600ac != NULL && *(u8 **)(data_021600ac + 0x68) != NULL) {
            u8 *p = *(u8 **)(data_021600ac + 0x68);
            if (data_021600ac != NULL && p != NULL) {
                *(u16 *)(data_02160078 + 0x1692) = *(s32 *)(p + 0x0) >> 12;
                *(u16 *)(data_02160078 + 0x1694) = *(s32 *)(p + 0x8) >> 12;
                *(u16 *)(data_02160078 + 0x1696) = *(u16 *)(p + 0x92);
            }
        }
    }
    func_020bdf24((s32)data_02151154);
    func_020bdf24((s32)data_0215116c, *(s16 *)(data_02160204 + 0xf6));
    func_020bdf24((s32)data_0215117c, *(u16 *)(data_02160204 + 0x72));
}

BOOL func_020bdb30(s32 arg0, s32 arg1) {
    if (data_02160200 != NULL) {
        if (arg1 != 0) {
            ((u32 *)data_02160200)[(u32)arg0 >> 5] |= 1 << (arg0 % 32);
        } else {
            ((u32 *)data_02160200)[(u32)arg0 >> 5] &= ~(1 << (arg0 % 32));
        }
        return 1;
    }
    return 0;
}

s8 func_020bdba0(s32 arg0) {
    if (data_02160200 != NULL) {
        return (((u32 *)data_02160200)[(u32)arg0 >> 5] & (1 << (arg0 % 32))) != 0;
    }
    return -1;
}

void func_020bdbe8(s32 arg0, volatile s32 x, s32 unused, volatile s32 arg3, ...)
{
  u16 *new_var;
  s32 y = arg3;
  u8 index = data_02151118[2];
  u32 bits;
  u8 i;
  for (i = 0; i < 32; i++)
  {
    bits = ((u32 *) data_02160200)[index];
    if (!data_02160200)
    {
    }
    if (bits & (1 << i))
    {
      break;
    }
  }

  *((u16 *) ((data_02160200 + (arg0 * 2)) + 0x17c)) = *((u16 *) (data_02160204 + 0x72));
  *((u16 *) ((data_02160200 + (arg0 * 4)) + 0x170)) = x >> 12;
  new_var = (u16 *) ((data_02160200 + (arg0 * 4)) + 0x172);
  *new_var = y >> 12;
  *((u16 *) (data_02160204 + 0x74)) = 0;
  *((u16 *) (data_02160204 + 0x76)) = 0;
  (data_02160200 + (arg0 + 1))[0x16c] = data_02160200[0x16c];
  *((u32 *) ((data_02160200 + (arg0 * 4)) + 0x184)) = ((u32 *) data_02160200)[index];
}

s32 func_020bdcc0(s32 arg0) {
    u8 *table = data_02160200;
    u16 v = *(u16 *)(table + arg0 * 2 + 0x17c);
    if (v == 0 || *(void **)(table + arg0 * 4 + 0x184) == NULL) {
        return 0;
    }
    *(u16 *)(data_02160204 + 0x72) = v;
    *(u16 *)(data_02160204 + 0x74) = *(u16 *)(table + arg0 * 4 + 0x170);
    *(u16 *)(data_02160204 + 0x76) = *(u16 *)(table + arg0 * 4 + 0x172);
    table[0x16c] = table[arg0 + 1 + 0x16c];
    return 1;
}

s8 func_020bdd40(void) {
    u8 i;
    u32 mask = *(u32 *)(data_02160200 + 0x1c);
    for (i = 0; i < 32; i++) {
        if (mask & (1 << i)) {
            return i;
        }
    }
    return -1;
}

void func_020bdd80(void) {
}

void func_020bdd84(void) {
}

void func_020bdd88(void) {
    if (data_02160200 != NULL) {
        func_02008e68(0, data_02160200, 0x1a0);
    }
}

void func_020bddb0(u8 *arg0) {
    u32 zero = 0;
    u16 one = 1;
    *(u32 *)(arg0 + 0) = zero;
    *(u16 *)(arg0 + 4) = one;
}

void func_020bddc4(void) {
s32 i;
data_02160204=func_0210c594(0x150,data_02155c3c);
*(u8 *)(data_02160204+0)=1;
*(u16 *)(data_02160204+114)=41;
*(u16 *)(data_02160204+116)=0;
*(u16 *)(data_02160204+118)=0;
*(u8 *)(data_02160204+126)=0;
*(u8 *)(data_02160204+127)=0;
*(u16 *)(data_02160204+124)=0;
*(s8 *)(data_02160204+275)=-1;
*(u8 *)(data_02160204+276)=0;
*(u32 *)(data_02160204+128)=0;
*(u8 *)(data_02160204+132)=9;
*(u8 *)(data_02160204+133)=0;
*(s8 *)(data_02160204+134)=-1;
*(u8 *)(data_02160204+136)=0;
*(u16 *)(data_02160204+112)=1;
for(i=0;i<32;i++) *(u16 *)(data_02160204+0x94+i*2)=1;
*(u16 *)(data_02160204+212)=1;
*(u8 *)(data_02160204+215)=0;
*(u8 *)(data_02160204+224)=0;
*(s16 *)(data_02160204+244)=-1;
*(s16 *)(data_02160204+246)=-1;
*(u8 *)(data_02160204+277)=0;
*(u8 *)(data_02160204+298)=0;
*(u8 *)(data_02160204+284)=1;
*(u8 *)(data_02160204+303)=0;
*(u16 *)(data_02160204+306)=0;
*(u16 *)(data_02160204+304)=0;
*(u8 *)(data_02160204+308)=0;
*(u8 *)(data_02160204+311)=0;
*(u8 *)(data_02160204+309)=0;
*(u8 *)(data_02160204+310)=0;
*(u16 *)(data_02160204+328)=0;
}

s32 func_020bdf24(volatile s32 arg0, ...) {
    arg0 = 0;
    return 0;
}

void func_020bdf38(void){
s32 mode=35;
s32 zero=0,otherZero=0,two=2,arg=35;
for(;;){
u8 next=data_02160204[0xd8];
if(next){mode=next;data_02160204[0xd8]=zero;func_020212fc();}
data_02160204[0xd6]=data_02160204[0xd7];
data_02160204[0xd7]=mode;
*(u16*)(data_02160204+0x104)=*(u16*)(data_02160204+0x102);
*(u16*)(data_02160204+0x102)=otherZero;
switch(mode){
case 1:mode=func_020dbd0c();break;
case 2:mode=func_0203fd08();break;
case 4:mode=func_02065cc8();break;
case 9:mode=func_020988e8();break;
case 11:mode=func_020824e0();break;
case 12:mode=func_020cf464();break;
case 13:mode=func_020cf284();break;
case 14:mode=func_020b3778();break;
case 15:mode=func_0203c3bc();break;
case 35:mode=func_020a80dc();break;
case 36:mode=func_020a79a4();break;
case 18:mode=func_02045034();break;
case 30:mode=func_020b72e4(two);break;
case 31:mode=func_020764f4(arg);break;
case 37:mode=func_020bac80();break;
case 38:mode=func_020c9c3c();break;
case 29:mode=func_020cbfa8();break;
case 39:mode=func_02139fc4();break;
}
}
}

void func_020be30c(s16 *, s16 *);
void func_020be0ec(void) {
u8 **list;
s16 i;
s32 n;
u8 *p = data_021600e4;
n = func_020be1b0();
s16 x,y;
i=0;
if(n<=0) return;
list=(u8 **)(p+0x1234);
do {
func_020be330(list[i]);
x=*(s16 *)(list[i]+0x1a);
y=*(s16 *)(list[i]+0x1c);
func_020be30c(&x,&y);
func_020a9e38(&x,&y);
y/=8; x/=4;
if(p[0x13c4]&1) func_020be3a8(list[i]);
i++;
}while(i<n);
}

void func_020be2d8(s16 *, s16 *);
s32 func_020be1b0(void) {
u8 *p=data_021600e4;
s16 x,y,a,b;
u8 *row;
s16 j,n,i;
s16 startx=-( *(s32 *)(p+0xfc)+0x80);
s16 starty=-( *(s32 *)(p+0x100)+0x60);
x=startx-32; y=starty-32;
func_020be2d8(&x,&y);
n=0;
for(i=x;i<12;i++) {
j=y;
if(j>=11) continue;
row=p+0x1b4+i*0x160;
do {
if(i<0) break;
a=i; b=j;
func_020be30c(&a,&b);
func_020a9e38(&a,&b);
if(a < -50 || a>306 || b>192) break;
*(u8 **)(p+0x1234+4*n)=row+j*32;
n++;
j++;
} while(j<11);
}
return n;
}

void func_020be2d8(s16 *arg0, s16 *arg1) {
    *arg0 = (*arg0 - 0x38) / 32;
    *arg1 = (*arg1 - 0x28) / 32;
}

void func_020be30c(s16 *arg0, s16 *arg1) {
    *arg0 = (*arg0 << 5) + 0x38;
    *arg1 = (*arg1 << 5) + 0x28;
}

