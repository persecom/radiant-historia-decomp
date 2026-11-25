/* 1 function from 0x0203A3B0 to 0x0203AAE4 (main), found by ds-decomp. */
#include "common.h"
typedef struct {s32 x,y,z;} Vec_3A3B0;
typedef struct {u16 state; s16 timer, counter_a, counter_b; u16 flags; u8 pad[14]; Vec_3A3B0 position;} State_3A3B0;
extern u8 *data_02160244,*data_02160204,*data_02160260;
extern u8 *func_020f0a5c(u16),*func_020dda78(u16),*func_020dda2c(u16);
extern void func_020c1370(s32,void *,s32,s32,s32);
extern void func_020331d0(u8 *,u16,s32),func_020331b0(u8 *,s32);
extern void func_020dd810(u8 *,s32,s32),func_020d9ea8(s32,s32);
extern void func_020d907c(u8 *),func_020df56c(s32,s32),func_020a2c38(u16,s32);
extern s32 func_020d90bc(s32),func_0205bcb0(u8 *,s32),func_020ec950(s32);
extern void func_020ec548(void),func_0210d27c(s32),func_020df3f4(u8 *,s32);
extern void func_020daefc(u8 *,u8 *,s32,s32,s32,s32,s32),func_020d56d8(u8 *,u8 *,s32,s32);

#pragma scheduling off
void func_0203a3b0(u8 *actor){
u8 *ctx=*(u8 **)(actor+0x128);
u8 *state=*(u8 **)(ctx+0x8c);
s32 zero=0,two=2;
s16 next=0;
Vec_3A3B0 pos;
switch(*(u16 *)state){
case 0:
if(!(*(u16 *)(state+8)&1)){
func_020d9ea8(8,0);
*(Vec_3A3B0 *)(state+0x18)=*(Vec_3A3B0 *)actor;
(*(u8 **)data_02160244)[0x6c]=1;
func_020d907c(actor);
func_020331d0(state,1,1);
}
if(func_020d90bc(1))next=1;
break;
case 1:
if(!(*(u16 *)(state+8)&2)){
u8 *obj=func_020f0a5c(*(u16 *)(data_02160204+0x7c));
*(u32 *)(obj+0x14)&=~1;
func_020df56c(0,1);
*(u16 *)(data_02160260+0x4a)=0;
func_020a2c38(*(u16 *)(data_02160260+0x4a),0);
pos.x=0x80000;pos.y=0x60000;pos.z=0x258000;
func_020c1370(0,&pos,0x82d,3,0);
func_020331d0(state,2,1);
}
next=3;
break;
case 3:
if(!(*(u16 *)(state+8)&4)){func_020dd810(actor,14,0);func_020331d0(state,4,1);}
if((*(u16 *)(state+8)&4)&&!(*(u16 *)(state+8)&8)){
*(s16 *)(state+2)=(s16)(*(s16 *)(state+2)+1);
if(*(s16 *)(state+2)>7){func_0210d27c(0x94);*(s16 *)(state+2)=0;func_020331d0(state,8,1);}
}
if(func_0205bcb0(actor,6)&2){
func_020dd810(actor,16,0);
func_020331d0(state,1,0);func_020331d0(state,2,0);func_020331d0(state,4,0);func_020331d0(state,8,0);
next=4;
}
break;
case 4:
if(!(*(u16 *)(state+8)&1)){
pos.x=0x80000;pos.y=0x70000;pos.z=0x259000;
func_020c1370(1,&pos,0x82d,0,0x180);
func_020331d0(state,1,1);
}
if(!(*(u16 *)(state+8)&2)){
*(s16 *)(state+2)=(s16)(*(s16 *)(state+2)+1);
if(*(s16 *)(state+2)%6==0){func_0210d27c(4);func_0210d27c(0x61);}
if(*(s16 *)(state+2)>30){func_020ec950(1);func_020ec548();func_020dd810(actor,17,0);func_020331d0(state,2,1);}
}
if((*(u16 *)(state+8)&2) && (func_0205bcb0(actor,6)&2)){
func_020dd810(actor,0,0);
func_020331d0(state,1,0);func_020331d0(state,2,0);func_020331d0(state,4,0);
*(s16 *)(state+2)=0;*(s16 *)(state+4)=0;*(s16 *)(state+6)=0;
next=5;
}
break;
case 5:
if(!(*(u16 *)(state+8)&1)){
*(s16 *)(state+2)=(s16)(*(s16 *)(state+2)+1);
if(*(s16 *)(state+2)>10){
*(s16 *)(state+2)=0;
pos.x=0x80000;pos.y=0x60000;pos.z=0x259000;
func_020c1370(2,&pos,0x82d,1,0x280);func_020331d0(state,1,1);
}
}
if(*(u16 *)(state+8)&1){
*(s16 *)(state+4)=(s16)(*(s16 *)(state+4)+1);
if(*(s16 *)(state+4)%4==0)func_0210d27c(0x46);
}
if((*(u16 *)(state+8)&1)&&!(*(u16 *)(state+8)&2)){
*(s16 *)(state+2)=(s16)(*(s16 *)(state+2)+1);
if(*(s16 *)(state+2)>10){
*(s16 *)(state+2)=0;
pos.x=0x80000;pos.y=0x60000;pos.z=0x2bc000;
func_020c1370(3,&pos,0x82d,5,0x380);func_020331d0(state,2,1);
}
}
if(*(u16 *)(state+8)&2){
*(s16 *)(state+6)=(s16)(*(s16 *)(state+6)+1);
if(*(s16 *)(state+6)%6==0)func_0210d27c(0x83);
}
if((*(u16 *)(state+8)&1)&&(*(u16 *)(state+8)&2)&&!(*(u16 *)(state+8)&4)){
*(s16 *)(state+2)=(s16)(*(s16 *)(state+2)+1);
if(*(s16 *)(state+2)>30){
s16 i;
*(s16 *)(state+4)=0;
func_020ec950(2);func_020ec548();
for(i=0;i<3;i++){
u8 *obj=func_020dda78((u16)i);
if(obj){
obj[0x192]=0;
func_020daefc(actor,obj,*(s32 *)(ctx+8),0,0,0,0);
func_0210d27c(0x83);
func_020d56d8(actor,obj,0,1);func_020d56d8(actor,obj,0,2);
}
}
*(s16 *)(state+2)=0;next=6;
}
}
break;
case 6:
if(!(*(u16 *)(state+8)&8)){
*(s16 *)(state+6)=(s16)(*(s16 *)(state+6)+1);
if(*(s16 *)(state+6)%6==0)func_0210d27c(0x83);
}
if(!(*(u16 *)(state+8)&8)){
*(s16 *)(state+2)=(s16)(*(s16 *)(state+2)+1);
if(*(s16 *)(state+2)>40){func_020ec950(3);func_020ec548();func_020331d0(state,8,1);}
}
if(*(u16 *)(state+8)&8)next=7;
break;
case 7:{
u8 *obj=func_020f0a5c(*(u16 *)(data_02160204+0x7c));
*(u32 *)(obj+0x14)|=1;
func_020a2c38(*(u16 *)(data_02160260+0x48),0);
func_020df3f4(actor,0);
for(next=0;next<3;next++){
obj=func_020dda2c((u16)next);if(obj)obj[0x192]=0;
}
func_020df56c(0,0);
if(func_020ec950(0))func_020ec548();
if(func_020ec950(1))func_020ec548();
if(func_020ec950(2))func_020ec548();
if(func_020ec950(3))func_020ec548();
if(func_020ec950(4))func_020ec548();
next=26;
break;
}
}
if(next)func_020331b0(state,next);
}
#pragma scheduling reset
