/* 8 functions from 0x02055E14 to 0x02056D10 (main), found by ds-decomp. */
#include "common.h"
typedef struct Unk_02055ebc { s16 field[44]; } Unk_02055ebc;
extern const Unk_02055ebc data_0213f344;
extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern void func_021167f0(void *, void *);
typedef struct { u16 unk[10]; } Unk20;
extern const Unk20 data_0213f3b0;
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
extern u8 *data_021600c0;
extern u8 *data_021600ac;
typedef struct Unk_02056460 { s16 field[10]; } Unk_02056460;
extern const Unk_02056460 data_0213f39c;
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);

void func_02055e14(u16 arg0) {
    u8 *p;
    u8 *node;
    p = data_021600c0;
    if (p == NULL) return;
    node = *(u8 **)(p + 0x40);
    if (node == NULL) return;
    for (;;) {
        if (*(u16 *)(node + 4) == arg0) {
            u8 *d = *(u8 **)node;
            *(volatile u32 *)0x040004a8 = (*(u32 *)(d + 4) >> 3) | (*(u32 *)(d + 0x18) << 26) |
                                          0x40000000 | (*(u32 *)(d + 0x10) << 20) |
                                          (*(u32 *)(d + 0x14) << 23) | 0x20000000;
            *(volatile u32 *)0x040004ac = *(u32 *)(d + 0xc) >> (4 - (*(u32 *)(d + 0x18) == 2));
            *(volatile u32 *)0x04000480 = 0x7fff;
            return;
        }
        node = *(u8 **)(node + 0xc);
        if (node == NULL) return;
    }
}

void func_02056460(void) {
 u8 i;
 Unk_02056460 buf = data_0213f39c;
 u8 *p = *(u8 **)(data_021600ac + 0x3a8);
 *(volatile u32 *)0x040004a4 = 0x1f00c0;
 for (i=0;i<4;i++) {
  if (p[3+i] != 0) {
   if(p[2]==i) {if(p[1]==3) func_020a3bbc(3); else func_020a3bbc(2);} else func_020a3bbc(1);
   buf.field[5]=*(s32 *)(p+8+i*4)>>12;
   buf.field[6]=194-(4-i)*25;
   func_021098ac(&buf);
  }
 }
}

extern u8 *data_021600ac;
extern void func_020a994c(void *);
extern void func_020a9610(void *,s32,s32,void *,s32,s32);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
void func_0205654c(s32 n,s32 x){
s32 off=n*0x50;
func_020a994c(data_021600ac+0xb8+off);
func_020a9610(data_021600ac+0xec+off,*(s32 *)(data_021600ac+0xac),n+1,*(void **)(data_021600ac+off+0xb4),0,0);
func_020a98ac(data_021600ac+0xb8+off);
func_020a98f4(data_021600ac+0xb8+off);
*(s32 *)(*(u8 **)(data_021600ac+off+0xb4)+0x4c)=0x2bc000;
*(s32 *)(*(u8 **)(data_021600ac+off+0xb4)+0x44)=x;
*(s32 *)(*(u8 **)(data_021600ac+off+0xb4)+0x48)=(0xc5-(4-n)*25)<<12;
}

void func_02056ac0(void) {
Unk20 buf=data_0213f3b0;u8 i;
*(volatile u32 *)0x040004a4=0x1f00c0;
for(i=0;i<7;i++){
u8 *p=data_021600ac+0x3b0+i*0xa4;
if(!p[0])continue;
func_020a3bbc(p[8]);
buf.unk[1]=*(s16 *)(p+0x94);buf.unk[2]=*(s16 *)(p+0x96);
buf.unk[3]=*(s16 *)(p+0x98)-*(s16 *)(p+0x94);
buf.unk[8]=*(volatile s16 *)&buf.unk[3];
buf.unk[4]=*(s16 *)(p+0x9a)-*(s16 *)(p+0x96);
buf.unk[9]=*(volatile s16 *)&buf.unk[4];
buf.unk[5]=*(s32 *)(p+0x9c)>>12;buf.unk[6]=*(s32 *)(p+0xa0)>>12;
func_021098ac(&buf);
}
}

