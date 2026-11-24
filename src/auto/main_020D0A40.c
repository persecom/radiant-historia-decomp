/* 2 functions from 0x020D0A40 to 0x020D0D1C (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160110,*data_02160090,*data_02160a74,*data_02160258;
extern void func_020d91bc(s32);
extern void func_020df944(void *,s32,void *);
extern void func_020df9c8(void);
extern u8 *func_02032254(u16);
extern void func_020e86c0(s32);
extern void func_020960dc(void);
extern void func_020e1850(void);
extern void func_020d9ea8(s32,s32);
extern void func_020da0c8(u16);
extern void func_02097114(void);

extern u8 *data_02160244;
void func_020d0cd4(s32,u32);
#pragma optimization_level 0
void func_020d0a40(u16 state) {
u8 *ctx=*(u8 **)data_02160244;
u32 unused=0;
*(u16 *)(ctx+0x6e)=*(u16 *)ctx;
*(u16 *)ctx=state;
switch(state) {
case 0:case 1:case 2:case 3:case 4:case 6:case 7:case 8:case 9:case 10:case 11:case 12:case 14:case 15:case 22:case 24:case 25:case 26:case 27:case 28:case 29:case 30:case 31:case 32:case 33:break;
case 16: if(!ctx[0x8d])func_020d91bc(3);break;
case 13:func_020d0cd4(1,4);break;
case 34:*(u32 *)(ctx+4)=0;break;
case 5:{
u8 *obj=0,*node=0;
s32 i=0;
if(*(s16 *)(data_02160110+0xb6)<*(s16 *)(data_02160110+0xe2)) *(s16 *)(data_02160110+0xb6)=*(s16 *)(data_02160110+0xe2);
node=*(u8 **)(data_02160090+8);
while(node) {
obj=*(u8 **)node;
if(*(s16 *)(data_02160110+0xb6)==i && *(s8 *)(data_02160110+0xc4)==**(u8 **)(obj+0x118)){
func_020df944(data_02160a74+0x4c,0,node);func_020df9c8();break;
}
++i;node=*(u8 **)(node+0x1c);
}
node=func_02032254((u16)*(s16 *)(data_02160110+0xb6));
obj=*(u8 **)node;
if(*(s16 *)(data_02160110+0xb6)<10 && *(s8 *)(data_02160110+0xc4)==**(u8 **)(obj+0x118)) func_020e86c0(1);
else {func_020960dc();func_020d0a40(34);func_020e1850();func_020e86c0(0);func_020d9ea8(8,48);func_020da0c8(*(u16 *)(data_02160258+0x90));}
return;}
case 17:*(u32 *)(ctx+4)=0;break;
case 18:func_02097114();break;
case 19:*(u16 *)(ctx+0x74)=0;break;
case 20:case 21:*(u16 *)(ctx+0x7c)=0;break;
case 23:*(u16 *)(ctx+0x80)=0;return;
}
}
#pragma optimization_level reset
void func_020d0cd4(s32 arg0, u32 arg1) {
    if (arg0 == 1) {
        *(u32 *)(data_02160244 + 0x7c) |= arg1;
    } else if (arg0 == 0) {
        *(u32 *)(data_02160244 + 0x7c) &= ~arg1;
    }
}
