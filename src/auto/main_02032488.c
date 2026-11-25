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
void func_02032488(s32 type) {
u8 *p=data_02160090;
u8 *node;
s32 zero=0,one=1;
p[0x7d]=zero;
*(u16*)(p+0x78)=zero;
func_020c2694(type);
if(type==1) {
func_020c2734(zero,zero,one);
func_020c2870(zero);
node=func_020c2584(*(void**)(func_020c2a98(zero,one)+4),one);
node[0]=zero; node[0x14]=3;
node[1]=*(u16*)(data_02160090+0x50)+1;
func_021167f0(data_02160090+0x48,node);
func_020c31f0();
func_020c27b4(zero,4,one);
func_020c2870(zero);
func_020c31f0();
*(u16*)(p+0x78)=one;
func_020322ec(one);
func_020c31f0();
func_020c3244(zero);
node=*(u8**)(data_02160090+0x48);
while(node) node=*(u8**)(node+0x24);
} else if(type==2) {
func_020c27b4(zero,zero,one);
func_020c2870(zero);
func_020c31f0();
*(u16*)(p+0x78)=one;
func_020322ec(one);
func_020c31f0();
func_020c3244(zero);
func_020c30f8(zero);
node=*(u8**)(data_02160090+0x48);
while(node) node=*(u8**)(node+0x24);
} else if(type==3) {
func_020c2824(zero,zero,one,102);
func_020c2870(zero);
func_020c31f0();

func_020c2824(zero,one,one,zero);
func_020c2870(zero);
func_020c31f0();

func_020c2824(zero,2,one,102);
func_020c2870(zero);
func_020c31f0();

*(u16*)(p+0x78)=one;
func_020322ec(one);
func_020c31f0();
func_020c3244(zero);
func_020c30f8(zero);
} else if(type==4) {
func_020c2734(zero,zero,one);
func_020c2870(zero);
func_020c31f0();
func_020c27b4(zero,4,one);
func_020c2870(zero);
func_020c31f0();
*(u16*)(p+0x78)=one;
func_020322ec(one);
func_020c31f0();
func_020c3244(zero);
func_020c30f8(zero);
} else if(type==5) {
func_020c2824(zero,zero,one,zero);
func_020c2870(zero);
func_020c31f0();

func_020c2824(zero,one,one,103);
func_020c2870(zero);
func_020c31f0();

func_020c2824(zero,2,one,one);
func_020c2870(zero);
func_020c31f0();

func_020c2824(zero,3,one,105);
func_020c2870(zero);
func_020c31f0();

func_020c2824(zero,4,one,2);
func_020c2870(zero);
func_020c31f0();

func_020c2824(zero,5,one,107);
func_020c2870(zero);
func_020c31f0();

*(u16*)(p+0x78)=one;
func_020322ec(one);
func_020c31f0();
func_020c3244(zero);
func_020c30f8(zero);
}
}
