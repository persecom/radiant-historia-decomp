/* 3 functions from 0x020AC0B0 to 0x020ACE8C (main), found by ds-decomp. */
#include "common.h"
extern u16 data_02162908[];
extern s32 *func_020b442c(u8 *);
extern s32 func_020abf5c(s32,s32,s32,s32,s32);
extern void func_0210d27c(s32);
extern void func_020abf3c(void);
extern void func_020aed5c(s32);
extern void func_020ade30(s32);


#pragma optimization_level 3
s32 func_020ac0b0(u8 *self) {
s32 *state=func_020b442c(self);
s32 width=108,height=18,zero=0,x=148;
if(func_020abf5c(x,111,width,height,zero)) {
if(state[0]!=0) {
func_0210d27c(2);*(s32 *)(self+0x3438)=0;state[0]=0;
} else if(state[2]==1) {
func_0210d27c(11);*(s32 *)(self+0x3438)=0;state[0]=-1;func_020abf3c();return 1;
}
} else if(func_020abf5c(x,131,width,height,zero)) {
if(state[0]!=1) {
func_0210d27c(2);*(s32 *)(self+0x3438)=1;state[0]=1;
} else if(state[2]==1) {
func_0210d27c(11);*(s32 *)(self+0x3438)=1;state[0]=-1;func_020abf3c();return 1;
}
} else {
s32 selected=2;
if(func_020abf5c(x,151,width,height,zero)) {
if(state[0]!=2) {
func_0210d27c(selected);*(s32 *)(self+0x3438)=selected;
if(*(s32 *)(self+0x3438)==2)func_020aed5c(0);
state[0]=selected;
} else if(state[2]==1) {
func_0210d27c(5);*(s32 *)(self+0x3438)=selected;state[0]=-1;func_020abf3c();return 3;
}
}
}
if(func_020abf5c(234,3,18,18,1)) {
*(s32 *)(self+0x3438)=2;state[0]=-1;func_020ade30(2);func_020abf3c();func_0210d27c(5);return 3;
}
if(!data_02162908[2]) { state[1]=0;state[2]=1; } else state[2]=0;
return 0;
}
#pragma optimization_level 4
