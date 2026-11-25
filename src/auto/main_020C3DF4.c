/* 16 functions from 0x020C3DF4 to 0x020C4C60 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160204;
typedef struct { u8 flag : 1; u8 rest : 7; } MenuFlag;
extern u16 data_021626a6;
u8 *func_020c3d64(int);
void func_020c3da4(u8 *, int, int);
u8 *func_020f0a5c(int);
u8 *func_020f0aa4(int);
int func_02064b84(int,int,int,int);
extern u16 data_021626a8,data_021628f8;
extern u8 *data_02160af0;
extern s32 data_02162830,data_02162834[],data_0216281c,data_02162820[];
void func_0210d27c(int);
void func_0210968c(int,int,int);
int func_02109754(int);
extern s32 data_0215118c[][7];
void func_021098ac(void *);

typedef struct { s32 x, y; } Unk8;
typedef struct { u16 v[7]; } Unk14;
typedef struct { u16 v[10]; } Unk20;
extern const Unk14 data_021444d0;
extern const Unk14 data_021444e0;
extern const Unk20 data_021444f0;
extern void func_020a3c54(s32);
extern void func_020a3bbc(s32);
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
void func_020c3df4(u8 **arg0, s32 arg1) {
    Unk20 buf1 = data_021444f0;
    Unk14 buf2 = data_021444e0;
    u8 *p = *arg0;

    while (p != NULL) {
        if ((arg1 == 1 && (*(u16 *)(p + 0x2a) & 2)) || (arg1 == 0 && !(*(u16 *)(p + 0x2a) & 2))) {
            if (*(u16 *)(p + 0x2a) & 1) {
                if (!(*(u16 *)(p + 0x2a) & 8)) {
                    *(volatile u32 *)0x040004a4 = 0x20000880 | ((*(s8 *)(p + 0x18)) << 16);
                    if (*(u16 *)(p + 0x2a) & 4) {
                        func_020a3c54(*(u16 *)(p + 0x14));
                    } else {
                        func_020a3bbc(*(u16 *)(p + 0x14));
                    }
                    buf1.v[1] = *(s16 *)(p + 0x22);
                    buf1.v[2] = *(s16 *)(p + 0x24);
                    buf1.v[3] = *(s16 *)(p + 0x26);
                    buf1.v[4] = *(s16 *)(p + 0x28);
                    {
                        s32 x = *(s32 *)(p + 0x0);
                        s32 y = *(s32 *)(p + 0x4);
                        buf1.v[5] = x;
                        buf1.v[6] = y;
                    }
                    buf1.v[7] = *(s32 *)(p + 0x8);
                    {
                        s32 h = (*(s16 *)(p + 0x28) * *(s32 *)(p + 0x10)) >> 12;
                        s32 w = (*(s16 *)(p + 0x26) * *(s32 *)(p + 0xc)) >> 12;
                        buf1.v[8] = w;
                        buf1.v[9] = h;
                    }
                    func_021098ac(&buf1);
                } else {
                    *(volatile u32 *)0x040004a4 = 0x20000880 | ((*(s8 *)(p + 0x18)) << 16);
                    buf2.v[1] = *(s32 *)(p + 0x0);
                    buf2.v[2] = *(s32 *)(p + 0x4);
                    buf2.v[3] = *(s32 *)(p + 0x8);
                    buf2.v[4] = *(s16 *)(p + 0x1e);
                    buf2.v[5] = *(s16 *)(p + 0x20);
                    buf2.v[6] = *(u16 *)(p + 0x14);
                    func_021099f8(&buf2);
                }
            }
        }
        p = *(u8 **)(p + 0x30);
    }
}

void func_020c4574(void);
void func_020c3fa0(u8 *p) {
int zero=0, one=1;
u8 *q; s32 *v; int hit; int timer;
switch (*(u32 *)(p+4)) {
case 0: case 4: case 6: break;
case 1:
func_020c3da4(func_020c3d64(2),one,one);
func_020c3da4(func_020c3d64(zero),one,one);
func_020c3da4(func_020c3d64(4),one,one);
func_020c3da4(func_020c3d64(one),one,one);
func_020c3da4(func_020c3d64(6),one,zero);
func_020c3da4(func_020c3d64(7),one,zero);
func_020c3da4(func_020c3d64(10),one,zero);
func_020c3da4(func_020c3d64(12),one,zero);
func_020c3da4(func_020c3d64(11),one,zero);
if (((MenuFlag *)(data_02160204+0x68))->flag) {p[0x24]=one;func_020c3da4(func_020c3d64(11),one,one);
func_020c3da4(func_020c3d64(13),one,zero);}
q=func_020f0a5c(*(u16 *)(data_0216013c+0x230));
if(q) *(u32 *)(q+0x14)|=1;
q=func_020f0aa4(*(u16 *)(data_0216013c+0x232));
*(u32 *)(q+0x14)|=0x11;
v=*(s32 **)(*(u8 **)q+0x100);if(v)*v=0x320000;
func_020c4574();
*(s16 *)(p+0x1c)=0;p[0x23]|=1;
func_0210968c(3,0,30);*(s32 *)(p+4)=2;break;
case 2:
q=func_020c3d64(5);*(s8 *)(q+0x18)-=2;if(*(volatile s8 *)(q+0x18)<=1)func_020c3da4(q,one,one);
q=func_020c3d64(3);*(s8 *)(q+0x18)-=2;if(*(volatile s8 *)(q+0x18)<=1)func_020c3da4(q,1,1);
++*(s16 *)(p+0x1c);if(*(volatile s16 *)(p+0x1c)>16){*(s16 *)(p+0x1c)=zero;*(s32 *)(p+4)=3;}break;
case 3:
if(p[0x23]&1){++*(s16 *)(p+0x1c);if(*(volatile s16 *)(p+0x1c)>4){*(s16 *)(p+0x1c)=zero;*(s32 *)(p+4)=5;}}break;
case 5:
hit=zero;
if(!(p[0x23]&2)){
if((data_021626a6&0x40)||(data_021626a6&0x80)){p[0x24]++;p[0x24]=(int)p[0x24]%2;func_0210d27c(9);}
else if(func_02064b84(77,118,94,17)){if(p[0x24]==0)hit=one;else func_0210d27c(9);p[0x24]=0;}
else if(func_02064b84(77,139,94,17)){if(p[0x24]==1)hit=one;else func_0210d27c(9);p[0x24]=one;}
if((data_021626a8&8)||(data_021626a8&1)||hit){p[0x23]|=2;func_0210d27c(132);}
}
if(p[0x24]==0){func_020c3da4(func_020c3d64(11),one,0);func_020c3da4(func_020c3d64(13),one,one);}
else if(p[0x24]==1){func_020c3da4(func_020c3d64(11),one,one);func_020c3da4(func_020c3d64(13),one,0);}
if(p[0x23]&2){
++*(s16 *)(p+0x1c);
timer=*(volatile s16 *)(p+0x1c);
if(timer==1){
if(p[0x24]==0){func_020c3da4(func_020c3d64(10),1,1);q=func_020c3d64(11);++*(s32 *)q;++*(s32 *)(q+4);}
else if(p[0x24]==1){func_020c3da4(func_020c3d64(12),1,1);q=func_020c3d64(13);++*(s32 *)q;++*(s32 *)(q+4);}
}else if(timer>4){*(s32 *)(data_0216013c+0x238)=one;data_0216013c[0x23c]=p[0x24];}
}
break;
}
q=func_020f0aa4(*(u16 *)(data_0216013c+0x232));v=*(s32 **)(*(u8 **)q+0x100);if(v)*v=0x320000;
}

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

void func_020c49ec(u8 *arg) {
s32 *p=(s32 *)func_020c46ac();
p[1]++;
switch(p[0]) {
case 0:
if(p[1]>=1000) {p[0]=50;return;}
if((data_021626a8&1)||(data_021626a8&8)||data_021628f8) {p[0]=50;p[2]=1;}
break;
case 50:
func_0210d27c(98);data_02160af0[0x7d]=1;p[0]=51;break;
case 51:
if(data_02160af0[0x7d]==2) {func_0210d27c(131);p[0]=100;}break;
case 100:
func_0210968c(3,16,30);p[0]++;break;
case 101:
if(func_02109754(3)!=0)return;
if(p[2]==0) {p[0]=102;p[3]=0;}
else {data_02162830=30;data_02162834[0]=0;data_0216281c=1;data_02162820[0]=2;p[0]=104;}
break;
case 102:
p[3]++;if(p[3]>=30)p[0]=104;break;
case 104:
*(s32 *)(arg+4)=1;break;
}
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

