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

