/* 36 functions from 0x0210F550 to 0x02110518 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 v[10]; } Config_021100e4;
extern const Config_021100e4 data_02144bb8;
extern u8 *func_020c9b24(void *, u16, u8);
extern void func_020c7894(u8 *, u8);
static inline void ApplyConfig_021100e4(void *list, Config_021100e4 *p) {
 u8 *obj; s32 type;
 type=p->v[1];
 obj=func_020c9b24(list,(u16)p->v[0],(u8)type);
 *(s16 *)(obj+0x32)=p->v[2];
 *(s16 *)(obj+0x34)=p->v[3];
 *(s16 *)(obj+0x36)=p->v[4];
 *(s16 *)(obj+0x38)=p->v[5];
 *(s16 *)(obj+0x3e)=p->v[6];
 *(s16 *)(obj+0x40)=p->v[7];
 obj[0x43]+=(u8)p->v[9];
 if(type==5) func_020c7894(obj,(u8)p->v[8]);
}
extern u8 *data_02160204;
typedef struct { u8 bit0:1; u8 rest:7; } Flags_02110000;
extern void (*data_02162a70)(void);
extern s32 (*data_02162a6c)(void);

extern void *data_02162b80;
extern void *data_02155c3c;
extern void func_020c9b64(void *);
extern void func_0210c5dc(void *);
extern void *func_0210c518(u32, void *);
extern void func_02125424(void *, u32);
extern void func_021254a8(u32, u32, u32, u32);
extern void func_020c6d78(void *);
extern void func_020c992c(void);
extern void *func_0210c594(u32, void *);
extern BOOL func_020c7408(void);
extern void func_02110518(void *);
extern void func_02110a28(void *);
extern void func_02110abc(void *);

extern void func_020bdf38(void);
extern void func_020a8440(void);
s32 func_020a47c8(void);
void func_0210f550(void) {
s32 four=4, zero=0;
func_0210f448();
func_02004d70(15);func_02004ee8(16);func_02004aac(0x60);func_0200518c(0x80);func_02005228(0x100);
func_020027d4(1,four,1);func_020030e4(zero);
*(volatile u32 *)0x4000000 &= 0xffcfffef;
*(volatile u32 *)0x4000000 &= ~0x1f00;
*(volatile u32 *)0x4000000 = (*(volatile u32 *)0x4000000 & ~0x1f00)|0x100;
*(volatile u16 *)0x400000a &= ~3;
*(volatile u16 *)0x400000e = (*(volatile u16 *)0x400000e & ~3)|1;
*(volatile u16 *)0x400000c = (*(volatile u16 *)0x400000c & ~3)|2;
*(volatile u16 *)0x4000008 = (*(volatile u16 *)0x4000008 & ~3)|3;
*(volatile u16 *)0x4000060 &= 0xffffcffd;
*(volatile u16 *)0x4000060 = (*(volatile u16 *)0x4000060 & ~0x3000)|0x10;
*(volatile u16 *)0x4000060 = (*(volatile u16 *)0x4000060 & ~0x3000)|8;
func_02002fb0(zero,zero,0x7fff,0x3f,zero);
func_0210f410(four,0x10000);
*(volatile u32 *)0x4001000 &= 0xffcfffef;
func_0200283c(2);
*(volatile u32 *)0x4001000 &= ~0x1f00;
*(volatile u16 *)0x4001008 &= ~3;
*(volatile u16 *)0x400100a = (*(volatile u16 *)0x400100a & ~3)|1;
*(volatile u16 *)0x400100c = (*(volatile u16 *)0x400100c & ~3)|2;
*(volatile u16 *)0x400100e = (*(volatile u16 *)0x400100e & ~3)|3;
}

void func_0210f6d4(void) {
 s32 one=1, zero=0;
 func_0210f448(); func_0210e290(one); func_02005168(0x200-one);
 func_02008e68(zero,0x6800000,0xa4000); func_0200558c();
 func_02004d70(3); func_02004ee8(0x40); func_020048a8(0x10); func_02004aac(0x20);
 func_020027d4(one,zero,one);
 *(volatile u32 *)0x4000000=(*(volatile u32 *)0x4000000&~0x1f00)|0x100;
 *(volatile u16 *)0x4000008=*(volatile u16 *)0x4000008&~3;
 *(volatile u16 *)0x400000a=(*(volatile u16 *)0x400000a&~3)|1;
 *(volatile u16 *)0x400000c=(*(volatile u16 *)0x400000c&~3)|2;
 *(volatile u16 *)0x400000e=(*(volatile u16 *)0x400000e&~3)|3;
 func_02002fb0(zero,zero,0x8000-one,zero,zero);
 func_0210f410(2,0x4000);
}
