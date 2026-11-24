/* 16 functions from 0x020C3DF4 to 0x020C4C60 (main), found by ds-decomp. */
#include "common.h"
extern s32 data_0215118c[][7];
void func_021098ac(void *);

typedef struct { u16 v[7]; } Unk14;
extern const Unk14 data_021444d0;
extern void func_021099f8(void *);
extern void func_020c4720(int, u32);
extern u8 data_0216242c[];
extern u8 data_02162360[];
extern u8 *data_02155984;
extern void func_02107c70(void *);
extern void func_02107cb8(int, int, int, int, int);

extern void func_0210c5dc(void *);
extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern u8 *data_0216013c;
extern u8 data_02151288[];
extern u8 data_021512a0[];
extern u8 *func_0203be10(s32);
extern void func_0203be60(void *, void *, void *);
extern void func_0203be4c(void *);
void func_020c4454(void) {
data_02155984=data_0216242c;
func_02107c70(data_0216242c);
func_02107cb8(0x165,0xff0,0x1555,0x64000,0x800000);
*(s32 *)(data_02155984+0x20)=0;
*(s32 *)(data_02155984+0x24)=0x15a000;
*(s32 *)(data_02155984+0x28)=0;
*(s32 *)(data_02155984+0x14)=0;
*(s32 *)(data_02155984+0x18)=0x15a000;
*(s32 *)(data_02155984+0x1c)=-0x3e8000;
func_02009008(data_02162360,data_0216013c+0x94,0xcc);
data_02155984=data_02162360;
func_02107c70(data_02162360);
func_02107cb8(0x165,0xff0,0x1555,0x64000,0x800000);
*(s32 *)(data_02155984+0x20)=0;
*(s32 *)(data_02155984+0x24)=0;
*(s32 *)(data_02155984+0x28)=0;
*(s32 *)(data_02155984+0x14)=0;
*(s32 *)(data_02155984+0x18)=0x190000;
*(s32 *)(data_02155984+0x1c)=0x3e8000;
func_02009008(data_02162360,data_0216013c+0x160,0xcc);
}

void func_020c4574(void) {
data_02155984=data_0216242c;
func_02107c70(data_0216242c);
func_02107cb8(0x165,0xff0,0x1555,0x64000,0x800000);
*(s32 *)(data_02155984+0x20)=0xc26a0;
*(s32 *)(data_02155984+0x24)=0x156000;
*(s32 *)(data_02155984+0x28)=0x184f8e;
*(s32 *)(data_02155984+0x14)=0xfff01e60;
*(s32 *)(data_02155984+0x18)=0x2cf0bb;
*(s32 *)(data_02155984+0x1c)=0xffcb7b51;
func_02009008(data_0216242c,data_0216013c+0x94,0xcc);
data_02155984=data_02162360;
func_02107c70(data_02162360);
func_02107cb8(0x165,0xff0,0x1555,0x64000,0x800000);
*(s32 *)(data_02155984+0x20)=0xc26a0;
*(s32 *)(data_02155984+0x24)=-0x4000;
*(s32 *)(data_02155984+0x28)=0x184f8e;
*(s32 *)(data_02155984+0x14)=0xfff01e60;
*(s32 *)(data_02155984+0x18)=0x2cf0bb;
*(s32 *)(data_02155984+0x1c)=0xffcb7b51;
func_02009008(data_02162360,data_0216013c+0x160,0xcc);
}

u8 *func_020c46ac(void) {
    return *(u8 **)(data_0216013c + 0x90) + 8;
}

void func_020c46c4(void) {
    u8 *base = func_020c46ac();
    u8 *obj = func_0203be10(1);
    func_0203be60(obj, data_02151288, data_021512a0);
    *(s32 *)(obj + 0x10) = 5;
    *(s32 *)(obj + 0x14) = 5;
    *(s32 *)(obj + 0x18) = 1;
    *(u8 **)(base + 0x10) = obj;
}

void func_020c470c(void) {
    func_0203be4c(*(void **)(func_020c46ac() + 0x10));
}

void func_020c4720(int idx,u32 frame) {
s16 buf[10];
s32 *p=data_0215118c[idx];
s32 count,elapsed,x,y,end,width,alpha;
elapsed=(s32)frame-p[5]; if(elapsed<0)return;
end=p[6]; if((s32)frame>=end+32)return;
x=p[0];y=p[1];
count=elapsed/30; if(count>p[4])count=p[4];
if(count!=0) {

if((s32)frame>=end)alpha=end+31-frame;else alpha=31;
if(alpha==0)return;
if(alpha>=32)alpha=31;
*(volatile u32 *)0x040004a4=0x10000c0|(alpha<<16);
width=count*212;
buf[0]=1;buf[1]=p[2];buf[2]=p[3];buf[3]=(s16)width;buf[4]=16;
buf[5]=x;buf[6]=y;buf[7]=101;buf[8]=(s16)width;buf[9]=16;
func_021098ac(buf);
}
if(count==p[4])return;
alpha=elapsed-count*30;
if(alpha>=32)alpha=31;
if(alpha==0)return;
{
*(volatile u32 *)0x040004a4=0x10000c0|(alpha<<16);
width=count*212;
buf[0]=1;buf[1]=p[2]+width;buf[2]=p[3];buf[3]=212;buf[4]=16;
buf[5]=x+width;buf[6]=y;buf[7]=101;buf[8]=212;buf[9]=16;
func_021098ac(buf);
}
}

void func_020c48b8(void) {
u8 *base=func_020c46ac();
u32 *obj=*(u32 **)(base+0x10);
Unk14 table=data_021444d0;
*(volatile u32 *)0x40004a4=0x1f00c0;
func_021099f8(&table);
*(volatile u32 *)0x40004a8=(obj[1]>>3 | obj[6]<<26 | 0x40000000 | obj[4]<<20 | obj[5]<<23 | 0x20000000);
*(volatile u32 *)0x40004ac=obj[3] >> (4-(obj[6]==2));
*(volatile u32 *)0x4000480=0x7fff;
func_020c4720(0,*(u32 *)(base+4));
func_020c4720(1,*(u32 *)(base+4));
func_020c4720(2,*(u32 *)(base+4));
func_020c4720(3,*(u32 *)(base+4));
func_020c4720(4,*(u32 *)(base+4));
func_020c4720(5,*(u32 *)(base+4));
func_020c4720(6,*(u32 *)(base+4));
func_020c4720(7,*(u32 *)(base+4));
func_020c4720(8,*(u32 *)(base+4));
}

void *func_020c4bd0(void) {
    return func_0210c594(0x10, data_02155c3c);
}

void func_020c4bec(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_020c4c00(void) {
    return func_0210c594(0xe, data_02155c3c);
}

void func_020c4c1c(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_020c4c30(void) {
    return func_0210c594(0x80, data_02155c3c);
}

extern void func_020a5858(void *);
void func_020c4c4c(void *arg0) {
    if (arg0 != NULL) {
        func_020a5858(arg0);
    }
}

