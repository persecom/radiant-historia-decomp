/* 4 functions from 0x020416D4 to 0x02042634 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160204,*data_021600a8[2],*data_02160aec;
extern u16 data_02162908[4];
extern s32 data_02160144;
extern void func_02077684(void),func_02042118(void),func_02044618(void),func_02055fb8(void),func_02079874(void),func_020a4f04(void),func_0207cdd4(void),func_02056618(void),func_02056ac0(void);
extern s32 func_0203d960(s32),func_020a4f70(void);
extern u8 *func_02047820(u16);
extern void func_0203d970(void *),func_0203df40(void *);

void func_020423f8(void) {
u8 *obj,*p;
if(data_02160204[0x12a]&2) {func_02077684();return;}
p=data_021600a8[1];
if(data_02160204[0x7e]==0) {
obj=*(u8 **)(p+0x68);
switch(*(u32 *)(p+0x10)) {
case 0:func_02042118();break;
case 1:
if(func_0203d960(1))*(s32 *)(p+0xc)=1;
{u8 *q=func_02047820(*(u16 *)(p+0x88));if(q)*(s32 *)(q+0xc8)=1;}break;
case 4:if(data_02162908[2]==0)*(s32 *)(p+0x10)=0;break;
case 6:func_02044618();break;
case 7:data_02160144=-1;func_02055fb8();data_02160144=0;break;
case 8:func_02079874();break;
case 10:
p[0x3ac]&=0xdf;
if(func_020a4f70()) {
func_020a4f04();
*(u32 *)(obj+0xac)&=~0x800;
data_02160204[0x11e]=2;data_02160204[0xd8]=1;
*(s32 *)(p+0x10)=1;*(s32 *)(p+0xc)=1;
}break;
case 13:func_0207cdd4();break;
}
func_02056618();func_02056ac0();
if(data_02160aec) {
*(s32 *)(data_02160aec+0x58d28)=*(s32 *)obj;
*(s32 *)(data_02160aec+0x58d2c)=*(s32 *)(obj+4);
*(s32 *)(data_02160aec+0x58d30)=*(s32 *)(obj+8);
}
func_0203d970(obj);func_0203df40(obj);
}else{
if(*(s32 *)(p+0x10)==7) {data_02160144=-1;func_02055fb8();data_02160144=0;}
if(*(s32 *)(data_021600a8[1]+0x10)==10) {
data_021600a8[1][0x3ac]&=0xdf;
if(func_020a4f70()) {
func_020a4f04();
data_02160204[0x11e]=2;data_02160204[0xd8]=1;
*(s32 *)(data_021600a8[1]+0x10)=1;
*(s32 *)(data_021600a8[1]+0xc)=1;
}
}
func_02056618();func_02056ac0();
}
}
