/* 38 functions from 0x02032488 to 0x020333B8 (main), found by ds-decomp. */
#include "common.h"
extern void func_020c2694(s32);
extern void func_020c2734(s32,s32,s32);
extern void func_020c2870(s32);
extern u8 *func_020c2a98(s32,s32);
extern u8 *func_020c2584(void *,s32);
extern void func_020c31f0(void);
extern void func_020c27b4(s32,s32,s32);
extern void func_020322ec(s32);
extern void func_020c3244(s32);
extern void func_020c30f8(s32);
extern void func_020c2824(s32,s32,s32,s32);
static inline u16 count_020327b4(u8 *p) {
u16 n=0;
while(p) { n++; p=*(u8 **)(p+0x24); }
return n;
}
extern u8 *data_02160244;
extern u8 *data_02160204;
extern void func_020321cc(s32);
extern void func_02032488(s32);
extern void func_02032354(s32);
extern u8 *func_020c2dd8(u16);
extern u8 *func_02031da0(u8 *, s32, u8 *, s32, u16);

extern u8 *data_02160a6c;
extern u8 *data_02160090;
extern u8 *data_02160110;
extern void func_021168f8(void *, void *);
extern void func_021167f0(void *, void *);
extern void *func_0203222c(void);
extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_021167ac(void *, s32);
s32 func_02032c14(u8 *, void *);
extern void func_02031c60(s32, s32);
extern void func_0209568c(s32, s32);
extern void func_0209625c(void);
extern void func_02031fcc(void *, s32);
extern void *func_020de56c(void *);
extern void func_0210c5dc(void *);
extern void func_0203218c(void *);
extern s32 func_020bd490(s32, u8);
extern u8 *func_02021f10(s32);
extern void *func_02064cb8(void *, s32);
extern void func_0205bc60(void *, u8 *, s32);
extern void func_020020f8(void *, void *, void *);

extern void func_020c2e80(void);

void func_020327b4(void) {
u16 i, count;
u8 *p;
func_020321cc(4);
if (*(u16 *)(data_02160090+0x50)==0) {
register volatile u16 n=0;
data_02160090[0x7f]=0;
if (*(u32 *)(data_02160244+0x7c)&0x20) {
if (*(u16 *)(data_02160244+0xf4)==3) func_02032488(3);
else if (*(u16 *)(data_02160244+0xf4)==4) func_02032488(4);
else if (*(u16 *)(data_02160244+0xf4)==5) func_02032488(5);
} else {
if(data_02160204[0x8d]==1) func_02032488(1);
else if(data_02160204[0x8d]==2) func_02032488(2);
else {
func_02032354(1);
p=*(u8 **)(data_02160090+0x48);
while(p) { n++; p=*(u8 **)(p+0x24); }
}
}
} else func_02032354(0);
i=0; count=0;
for (;;) {
p=func_020c2dd8(i);
if(p) {
func_02031da0(*(u8 **)(p+4),*(s32 *)(p+12),*(u8 **)(p+8),(s32)p,i);
count++;
if(count==11) return;
}
i++;
}
}
