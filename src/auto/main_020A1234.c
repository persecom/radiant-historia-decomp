/* 5 functions from 0x020A1234 to 0x020A18F8 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_021600ac;
extern u8 *data_02160204;
extern void func_0209f3a0(int);
extern void func_020a25c8(void);
extern void func_020f1dfc(int,int);
extern void func_0209ed00(void);
extern void func_020ec98c(int);
extern void func_02046448(void);

extern u8 *data_021600b0;
extern void func_020a1750(u32 arg0);

typedef struct {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u16 unk_0e;
    u16 unk_10;
    u16 unk_12;
} UnkSprite_020A1564;

extern const UnkSprite_020A1564 data_02142c54;
extern const UnkSprite_020A1564 data_02142cf4;
extern void func_020a3bbc(s32);
extern void func_021098ac(UnkSprite_020A1564 *);

void func_020a1234(s32 index,s32 start,s32 end,s32 y) {
UnkSprite_020A1564 d=data_02142cf4;
u8 *p=data_021600b0;
s16 x;
*(s8*)(p+0x206+index*12)&=~1;
x=start+(end-start)* *(s16*)(p+0x204+index*12)/7;
if(*(s32*)(p+0x200+index*12)==1) {
if(*(s16*)(p+0x204+index*12)<7) ++*(s16*)(p+0x204+index*12);
else *(s8*)(p+0x206+index*12)|=1;
} else if(*(s32*)(p+0x200+index*12)==0) {
if(*(s16*)(p+0x204+index*12)>0) --*(s16*)(p+0x204+index*12);
}
s8 *flags=(s8*)(p+0x206);
if((flags[index*12]&2)||(flags[index*12]&4))func_020a3bbc(24);else func_020a3bbc(23);
d.unk_02=0;d.unk_04=0;d.unk_06=4;d.unk_08=16;d.unk_0a=x;d.unk_0c=y;d.unk_0e=115;d.unk_10=4;d.unk_12=16;
func_021098ac(&d);
if((flags[index*12]&2)||(flags[index*12]&4))func_020a3bbc(24);else func_020a3bbc(23);
d.unk_02=4;d.unk_04=0;d.unk_06=41;d.unk_08=16;d.unk_0a=x+4;d.unk_0c=y;d.unk_0e=115;d.unk_10=73;d.unk_12=16;
func_021098ac(&d);
if((flags[index*12]&2)||(flags[index*12]&4))func_020a3bbc(24);else func_020a3bbc(23);
d.unk_02=46;d.unk_04=0;d.unk_06=6;d.unk_08=16;d.unk_0a=x+77;d.unk_0c=y;d.unk_0e=115;d.unk_10=6;d.unk_12=16;
func_021098ac(&d);
if((flags[index*12]&2)||(flags[index*12]&4))func_020a3bbc(26);else func_020a3bbc(25);
if(index==0){d.unk_04=0;d.unk_02=0;}else if(index==1){d.unk_02=12;d.unk_04=11;}
d.unk_06=12;d.unk_08=11;d.unk_0a=x+2;s32 py=y+2;d.unk_0c=py;d.unk_0e=116;d.unk_10=12;d.unk_12=11;
func_021098ac(&d);
if((flags[index*12]&2)||(flags[index*12]&4))func_020a3bbc(28);else func_020a3bbc(27);
if(index==0){d.unk_02=58;d.unk_06=57;d.unk_0a=x+20;d.unk_10=57;}
else if(index==1){d.unk_02=8;d.unk_06=45;d.unk_0a=x+18;d.unk_10=45;}
d.unk_04=12;d.unk_08=12;d.unk_0c=py;d.unk_0e=116;d.unk_12=12;
func_021098ac(&d);
if(flags[index*12]&4)flags[index*12]&=~4;
}

void func_020a1564(s32 arg0, s32 arg1) {
    UnkSprite_020A1564 s = data_02142c54;
    s8 *p = (s8 *)data_021600b0;

    if (arg1 == 1) {
        s8 flags = p[0x22a];
        if ((flags & 2) || (flags & 4)) {
            if (flags & 4) {
                p[0x22a] &= ~4;
            }
            func_020a3bbc(0x1f);
        } else {
            func_020a3bbc(0x1e);
        }
        s.unk_04 = 0;
        s.unk_02 = 0;
        s.unk_06 = 0x10;
        s.unk_08 = 0xe;
        s.unk_0a = 0xa;
        s.unk_0c = 0x50;
        s.unk_10 = 0x10;
        s.unk_12 = 0xe;
        func_021098ac(&s);
        func_020a3bbc(0x20);
        s.unk_04 = 0;
        s.unk_02 = 0;
        s.unk_06 = 8;
        s.unk_08 = 0xc;
        s.unk_0a = 0;
        s.unk_0c = 0x51;
        s.unk_10 = 8;
        s.unk_12 = 0xc;
        func_021098ac(&s);
    }

    if (arg0 == 1) {
        s8 flags = p[0x236];
        if ((flags & 2) || (flags & 4)) {
            if (flags & 4) {
                p[0x236] &= ~4;
            }
            func_020a3bbc(0x1f);
        } else {
            func_020a3bbc(0x1e);
        }
        s.unk_02 = 0x10;
        s.unk_04 = 0;
        s.unk_06 = 0x10;
        s.unk_08 = 0xe;
        s.unk_0a = 0xe7;
        s.unk_0c = 0x50;
        s.unk_10 = 0x10;
        s.unk_12 = 0xe;
        func_021098ac(&s);
        func_020a3bbc(0x20);
        s.unk_02 = 8;
        s.unk_04 = 0;
        s.unk_06 = 8;
        s.unk_08 = 0xc;
        s.unk_0a = 0xf9;
        s.unk_0c = 0x51;
        s.unk_10 = 8;
        s.unk_12 = 0xc;
        func_021098ac(&s);
    }
}

u32 func_020a1734(u32 arg0) {
    return (arg0 >= 1 && arg0 <= 8) ? 1 : 0;
}

void func_020a1750(u32 state) {
u8 *p=data_021600b0;
switch(state) {
case 0: *(u16 *)(p+0xe0)=0; break;
case 2:
*(u16 *)(p+0x126)=0; *(u16 *)(p+0x128)=0; *(u16 *)(p+0x12a)=0;
*(u16 *)(p+0x12c)=0; *(u16 *)(p+0x12e)=0; *(u16 *)(p+0x130)=0;
*(u16 *)(p+0xe0)|=1;
func_0209f3a0(0);
*(int *)(data_021600ac+0x10)=11; break;
case 3: {
s32 index;
p[0x1bc]=2;
index=*(s16 *)(p+0x1c6)*5+*(s16 *)(p+0x1c8);
*(s16 *)(p+0x24e + index*40)&=~0x100;
state=4; break;
}
case 5: {
u8 old;
func_020a25c8();
func_020f1dfc(0x3e5,1);
*(u16 *)(p+0xe0)=(*(u16 *)(p+0xe0)|1)&0xfffd;
func_0209ed00();
func_0209f3a0(1);
func_020ec98c(0);
old=data_02160204[0xd6];
data_02160204[0xd6]=19;
func_02046448();
data_02160204[0xd6]=old; break;
}
case 4:
func_020f1dfc(0x3e5,0);
func_020ec98c(1);
*(u16 *)(p+0xe0)=(*(u16 *)(p+0xe0)|2)&0xfffe;
p[0x1bc]=0; p[0x1c4]=0; break;
}
*(u16 *)(p+0xde)=state;
}

void func_020a18c8(u16 arg0) {
    u8 *ptr = data_021600b0;
    func_020a1750(0xc);
    *(u16 *)(ptr + 0x1a8) = 0;
    *(u16 *)(ptr + 0x1a6) = arg0;
}

