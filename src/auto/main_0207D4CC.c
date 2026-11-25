/* 1 function from 0x0207D4CC to 0x0208038C (main), found by ds-decomp. */
#include "common.h"

#pragma optimization_level 0
void func_0207d4cc(void)
{
extern u8 *data_0216010c;
extern u16 data_02162908[4], data_021626a6, data_021626a8;
extern char data_021484e4[], data_021484ec[];
extern u8 func_02085110(u32);
extern u32 func_02084f80(u16);
extern u32 func_02085128(u32);
extern s32 func_020851bc(s32,s32,s32,s32,u8), func_020851f8(s32,s32,s32,s32,u8);
extern BOOL func_02089ae4(s32,s32,s32,s32);
extern int func_020895a0(int,int,int,int,u8,void*,u8,int,int);
extern void func_02080c68(void), func_0207d464(void), func_02089a98(void);
extern void func_0210d27c(s32), func_02080b58(u32), func_02080930(u8);
extern void func_0208038c(u8,u8), func_02092010(s32,s32);
extern void func_020a9544(void**), func_020a994c(u8*);
extern void *func_020a94b8(s32), *func_02021f10(s32);
extern void func_020220b0(s32,s32,...);
u16 i=0;
u8 *state=*(u8**)(data_0216010c+0x44);
u8 *saved=data_0216010c;
s32 handled=0;
volatile u8 limit=6;
s16 delta;
u8 *actor;
u8 *actor7;
volatile u8 old1,old4;
volatile u16 oldCount,oldRow,oldTop;
switch(state[0xe]) {
case 0:
for(i=0;i<data_0216010c[0x614];i++) func_020895a0((u16)(i+0),0xc000,((i)*0x13+0x22)<<12,0x5a,4,(void*)(u32)(u16)(func_02085110((u8)(i))+1),0,0,0);
state[0xe]=1;
break;
case 1:
func_02080c68();
if(data_02162908[2]!=0){
(*(s16*)((data_0216010c+((0x5382)&0xff))+((0x5382)&~0xff)))&=~2;
for(i=0;i<data_0216010c[0x614];i++){
if((func_02089ae4(8,(s16)(i*0x13+0x21),0x7f,0x11)==1)){
delta=(s16)(data_0216010c[0x50dc]-i);
if(delta==0){if((*(s16*)(data_0216010c+(0x52e6)))&2)(*(s16*)((data_0216010c+((0x5382)&0xff))+((0x5382)&~0xff)))|=2;}
else{
(*(u8*)((data_0216010c+0xdc)+0x5000))-=(u8)delta;
(*(s16*)((data_0216010c+((0x52e6)&0xff))+((0x52e6)&~0xff)))&=~2;func_0210d27c(2);
func_02080b58((u8)func_02085128(data_0216010c[0x50dc]));
}
handled=1;
}
}
if(!handled&&(func_02089ae4(0xc5,0x89,0x34,0x10)==1)){(*(s16*)((data_0216010c+((0x5382)&0xff))+((0x5382)&~0xff)))|=2;handled=1;}
(*(s16*)((data_0216010c+((0x51ae)&0xff))+((0x51ae)&~0xff)))&=~2;
if(!handled&&(func_02089ae4(0xe8,2,0x14,0x14)==1))(*(s16*)((data_0216010c+((0x51ae)&0xff))+((0x51ae)&~0xff)))|=2;
}else{
(*(s16*)((data_0216010c+((0x52e6)&0xff))+((0x52e6)&~0xff)))|=2;
if((data_021626a8&1)||((*(s16*)(data_0216010c+(0x5382)))&2)){
state[0xe]=2;func_0210d27c(0xb);(*(s16*)((data_0216010c+((0x5382)&0xff))+((0x5382)&~0xff)))&=~2;(*(s16*)((data_0216010c+((0x5382)&0xff))+((0x5382)&~0xff)))|=4;
}else if((data_021626a8&2)||((*(s16*)(data_0216010c+(0x51ae)))&2)){
for(i=0;i<2;i++){if((*(void***)((data_0216010c+(i)*4)+0x48))&&*(*(void***)((data_0216010c+(i)*4)+0x48))){func_020a9544((*(void***)((data_0216010c+(i)*4)+0x48)));(*(void***)((data_0216010c+(i)*4)+0x48))=0;}}
func_0207d464();func_0210d27c(5);(*(s16*)((data_0216010c+((0x51ae)&0xff))+((0x51ae)&~0xff)))&=~2;(*(s16*)((data_0216010c+((0x51ae)&0xff))+((0x51ae)&~0xff)))|=4;
func_02092010(2,(u16)((*(s8*)(data_0216010c+0x50d2))+(*(s8*)(data_0216010c+0x50d1))*2));
}else{
old1=(u8)func_02085128(data_0216010c[0x50dc]);
if(data_021626a6&0x80){data_0216010c[0x50dc]=(u8)func_020851bc(data_0216010c[0x50dc],1,(s16)(data_0216010c[0x614]-1),0,2);if((old1)!=func_02085128(data_0216010c[0x50dc])){func_02080b58((u8)func_02085128(data_0216010c[0x50dc]));func_0210d27c(2);}}
else if(data_021626a6&0x40){data_0216010c[0x50dc]=(u8)func_020851f8(data_0216010c[0x50dc],1,0,(s16)(data_0216010c[0x614]-1),2);if((old1)!=func_02085128(data_0216010c[0x50dc])){func_02080b58((u8)func_02085128(data_0216010c[0x50dc]));func_0210d27c(2);}}
}
}
break;
case 2:
func_02080c68();state[0xe]=4;saved[0x50dd]=0;
for(i=0;i<8;i++)func_020a994c(data_0216010c+0x74+i*0x50);
for(i=0;i<2;i++){if((*(void***)((data_0216010c+(i)*4)+0x48))&&*(*(void***)((data_0216010c+(i)*4)+0x48))){func_020a9544((*(void***)((data_0216010c+(i)*4)+0x48)));(*(void***)((data_0216010c+(i)*4)+0x48))=0;}}
(*(void***)((data_0216010c+(0)*4)+0x48))=func_020a94b8((s32)data_021484e4);
(*(void***)((data_0216010c+(1)*4)+0x48))=func_020a94b8((s32)data_021484ec);
(*(s16*)((data_0216010c+((0x5382)&0xff))+((0x5382)&~0xff)))&=~2;(*(s16*)(data_0216010c+(0x5382)))&=~4;
break;
case 4:
func_02080c68();
if(data_02162908[2]!=0){
(*(s16*)((data_0216010c+((0x5382)&0xff))+((0x5382)&~0xff)))&=~2;
if(!handled&&(func_02089ae4(6,0x33,0xb5,0x13)==1)){
if(data_0216010c[0x50dd]!=0){data_0216010c[0x50dd]=0;func_0210d27c(2);handled=1;(*(s16*)((data_0216010c+((0x52e6)&0xff))+((0x52e6)&~0xff)))&=~2;}
else if((*(s16*)(data_0216010c+(0x52e6)))&2)(*(s16*)((data_0216010c+((0x5382)&0xff))+((0x5382)&~0xff)))|=2;
}
if(!handled&&(func_02089ae4(6,0x47,0xb5,0x13)==1)){
if(data_0216010c[0x50dd]!=1){data_0216010c[0x50dd]=1;func_0210d27c(2);handled=1;(*(s16*)((data_0216010c+((0x52e6)&0xff))+((0x52e6)&~0xff)))&=~2;}
else if((*(s16*)(data_0216010c+(0x52e6)))&2)(*(s16*)((data_0216010c+((0x5382)&0xff))+((0x5382)&~0xff)))|=2;
}
if(!handled){
for(i=0;i<3;i++){
if((func_02089ae4(6,(s16)(i*0x14+0x5d),0xb5,0x13)==1)){
if(data_0216010c[0x50dd]!=i+2){data_0216010c[0x50dd]=(u8)(i+2);func_0210d27c(2);handled=1;(*(s16*)((data_0216010c+((0x52e6)&0xff))+((0x52e6)&~0xff)))&=~2;}
else if((*(s16*)(data_0216010c+(0x52e6)))&2)(*(s16*)((data_0216010c+((0x5382)&0xff))+((0x5382)&~0xff)))|=2;
}
}
}
(*(s16*)((data_0216010c+((0x534e)&0xff))+((0x534e)&~0xff)))&=~2;
if(!handled&&(func_02089ae4(0xa,0x1f,0xe,0xe)==1)){
if(data_0216010c[0x614]==1)break;
(*(s16*)((data_0216010c+((0x534e)&0xff))+((0x534e)&~0xff)))|=2;handled=1;
}
(*(s16*)((data_0216010c+((0x531a)&0xff))+((0x531a)&~0xff)))&=~2;
if(!handled&&(func_02089ae4(0x57,0x1f,0xe,0xe)==1)){
if(data_0216010c[0x614]==1)break;
(*(s16*)((data_0216010c+((0x531a)&0xff))+((0x531a)&~0xff)))|=2;handled=1;
}
if(!handled&&(func_02089ae4(0xc5,0x89,0x34,0x10)==1)){(*(s16*)((data_0216010c+((0x5382)&0xff))+((0x5382)&~0xff)))|=2;handled=1;}
(*(s16*)((data_0216010c+0x39c)+0x5000))&=~2;
if(!handled&&(func_02089ae4(0xc5,0x9a,0x34,0x10)==1)){
if((*(s16*)(data_0216010c+(0x539c)))&1){(*(s16*)((data_0216010c+0x39c)+0x5000))|=2;handled=1;}
}
(*(s16*)((data_0216010c+((0x51ae)&0xff))+((0x51ae)&~0xff)))&=~2;
if(!handled&&(func_02089ae4(0xe8,2,0x14,0x14)==1))(*(s16*)((data_0216010c+((0x51ae)&0xff))+((0x51ae)&~0xff)))|=2;
}else{
(*(s16*)((data_0216010c+((0x52e6)&0xff))+((0x52e6)&~0xff)))|=2;
old4=(u8)func_02085128(data_0216010c[0x50dc]);
if((data_021626a6&0x100)||(data_021626a6&0x10)||((*(s16*)(data_0216010c+(0x531a)))&2)){
data_0216010c[0x50dc]=(u8)func_020851bc(data_0216010c[0x50dc],1,(s16)(data_0216010c[0x614]-1),0,2);
if(old4!=func_02085128(data_0216010c[0x50dc])){
func_02080b58((u8)func_02085128(data_0216010c[0x50dc]));func_0210d27c(2);(*(s16*)((data_0216010c+((0x531a)&0xff))+((0x531a)&~0xff)))|=4;
}
}else if((data_021626a6&0x200)||(data_021626a6&0x20)||((*(s16*)(data_0216010c+(0x534e)))&2)){
data_0216010c[0x50dc]=(u8)func_020851f8(data_0216010c[0x50dc],1,0,(s16)(data_0216010c[0x614]-1),2);
if(old4!=func_02085128(data_0216010c[0x50dc])){
func_02080b58((u8)func_02085128(data_0216010c[0x50dc]));func_0210d27c(2);(*(s16*)((data_0216010c+((0x534e)&0xff))+((0x534e)&~0xff)))|=4;
}
}else if((data_021626a8&1)||((*(s16*)(data_0216010c+(0x5382)))&2)){
func_0210d27c(0xb);(*(s16*)((data_0216010c+((0x5382)&0xff))+((0x5382)&~0xff)))&=~2;(*(s16*)((data_0216010c+((0x5382)&0xff))+((0x5382)&~0xff)))|=4;state[0xe]=5;
}else if((data_021626a8&2)||((*(s16*)(data_0216010c+(0x51ae)))&2)){
state[0xe]=6;func_0210d27c(5);(*(s16*)((data_0216010c+((0x51ae)&0xff))+((0x51ae)&~0xff)))&=~2;(*(s16*)((data_0216010c+((0x51ae)&0xff))+((0x51ae)&~0xff)))|=4;
}else if(data_021626a6&0x80){data_0216010c[0x50dd]++;(u8)(data_0216010c[0x50dd]%=5);func_0210d27c(2);}
else if(data_021626a6&0x40){if(data_0216010c[0x50dd]==0)data_0216010c[0x50dd]=4;else data_0216010c[0x50dd]--;func_0210d27c(2);}
else if((*(s16*)(data_0216010c+(0x539c)))&1){
if((data_021626a8&0x400)||((*(s16*)(data_0216010c+(0x539c)))&2)){
state[0xe]=7;(*(s16*)((data_0216010c+0x39c)+0x5000))&=~2;(*(s16*)((data_0216010c+0x39c)+0x5000))|=4;
}
}
(*(s16*)((data_0216010c+((0x5382)&0xff))+((0x5382)&~0xff)))&=~2;(*(s16*)((data_0216010c+((0x531a)&0xff))+((0x531a)&~0xff)))&=~2;(*(s16*)((data_0216010c+((0x534e)&0xff))+((0x534e)&~0xff)))&=~2;
}
break;
case 5:
func_02080c68();func_02089a98();func_0208038c(saved[0x50dd],(u8)func_02084f80(data_0216010c[0x50dc]));data_0216010c[0x50d6]=0;data_0216010c[0x50d7]=data_0216010c[0x50d6];
(*(s16*)((data_0216010c+((0x5382)&0xff))+((0x5382)&~0xff)))&=~2;(*(s16*)(data_0216010c+(0x5382)))&=~4;state[0xe]=8;
break;
case 6:
func_02080c68();state[0xe]=1;
func_020a994c(data_0216010c+0x2a4);
for(i=0;i<7;i++){
if(i<data_0216010c[0x614])func_020895a0((u16)(i),0xc000,((i)*0x13+0x22)<<12,0x5a,4,(void*)(u32)(u16)(func_02085110((u8)(i))+1),0,0,0);
else func_020a994c(data_0216010c+0x74+i*0x50);
}
func_020a994c(data_0216010c+0x2f4);func_020a994c(data_0216010c+0x344);
for(i=0;i<2;i++){if((*(void***)((data_0216010c+(i)*4)+0x48))&&*(*(void***)((data_0216010c+(i)*4)+0x48))){func_020a9544((*(void***)((data_0216010c+(i)*4)+0x48)));(*(void***)((data_0216010c+(i)*4)+0x48))=0;}}
break;
case 7:
func_02080c68();actor7=0;actor7=func_02021f10(func_02085110(data_0216010c[0x50dc]));
func_020a994c(data_0216010c+0x74+(data_0216010c[0x50dd]+1)*0x50);
switch(data_0216010c[0x50dd]){case 0:func_020220b0((*(u16*)(actor7+(0x38))),1);(*(u16*)(actor7+(0x38)))=0;(*(s16*)(actor7+(0x7c)))=0;(*(s16*)(actor7+((0x7c)+2)))=0;(*(s16*)(actor7+((0x7c)+4)))=0;(*(s16*)(actor7+((0x7c)+6)))=0;(*(s16*)(actor7+((0x7c)+8)))=0;(*(s16*)(actor7+((0x7c)+10)))=0;(*(s16*)(actor7+((0x7c)+12)))=0;(*(s16*)(actor7+((0x7c)+14)))=0;break;
case 1:func_020220b0((*(u16*)(actor7+(0x3a))),1);(*(u16*)(actor7+(0x3a)))=0;(*(s16*)(actor7+(0x9e)))=0;(*(s16*)(actor7+((0x9e)+2)))=0;(*(s16*)(actor7+((0x9e)+4)))=0;(*(s16*)(actor7+((0x9e)+6)))=0;(*(s16*)(actor7+((0x9e)+8)))=0;(*(s16*)(actor7+((0x9e)+10)))=0;(*(s16*)(actor7+((0x9e)+12)))=0;(*(s16*)(actor7+((0x9e)+14)))=0;break;
default:func_020220b0((*(u16*)((actor7+(data_0216010c[0x50dd]-2)*2)+0x3c)),1);(*(u16*)((actor7+(data_0216010c[0x50dd]-2)*2)+0x3c))=0;(*(s16*)((actor7+(data_0216010c[0x50dd]-2)*0x22)+(0xc0)))=0;(*(s16*)((actor7+(data_0216010c[0x50dd]-2)*0x22)+((0xc0)+2)))=0;(*(s16*)((actor7+(data_0216010c[0x50dd]-2)*0x22)+((0xc0)+4)))=0;(*(s16*)((actor7+(data_0216010c[0x50dd]-2)*0x22)+((0xc0)+6)))=0;(*(s16*)((actor7+(data_0216010c[0x50dd]-2)*0x22)+((0xc0)+8)))=0;(*(s16*)((actor7+(data_0216010c[0x50dd]-2)*0x22)+((0xc0)+10)))=0;(*(s16*)((actor7+(data_0216010c[0x50dd]-2)*0x22)+((0xc0)+12)))=0;(*(s16*)((actor7+(data_0216010c[0x50dd]-2)*0x22)+((0xc0)+14)))=0;break;}
func_02080930(data_0216010c[0x50dc]);func_0210d27c(0xc);(*(s16*)((data_0216010c+0x39c)+0x5000))&=~2;(*(s16*)((data_0216010c+0x39c)+0x5000))&=~4;state[0xe]=4;
break;
case 8:
func_02080c68();
if(data_02162908[2]!=0){
(*(s16*)((data_0216010c+((0x5382)&0xff))+((0x5382)&~0xff)))&=~2;
if(!handled&&(func_02089ae4(0xc5,0x89,0x34,0x10)==1)){
if((*(s16*)(data_0216010c+(0x50d4)))==0)break;
(*(s16*)((data_0216010c+((0x5382)&0xff))+((0x5382)&~0xff)))|=2;handled=1;
}
(*(s16*)((data_0216010c+((0x51ae)&0xff))+((0x51ae)&~0xff)))&=~2;
if(!handled&&(func_02089ae4(0xe8,2,0x14,0x14)==1)){(*(s16*)((data_0216010c+((0x51ae)&0xff))+((0x51ae)&~0xff)))|=2;handled=1;}
if(!handled){
if(limit>(*(s16*)(data_0216010c+(0x50d4))))limit=(u8)(*(s16*)(data_0216010c+(0x50d4)));
for(i=0;i<6;i++){
if(i<limit){
if((func_02089ae4(0xa,(s16)(i*0x13+0x35),0x9c,0x12)==1)){
delta=(s16)(data_0216010c[0x50d6]-i);
if(delta==0){if((*(s16*)(data_0216010c+(0x52e6)))&2)(*(s16*)((data_0216010c+((0x5382)&0xff))+((0x5382)&~0xff)))|=2;}
else{data_0216010c[0x50d6]-=(u8)delta;data_0216010c[0x50d7]-=(u8)delta;(*(s16*)((data_0216010c+((0x52e6)&0xff))+((0x52e6)&~0xff)))&=~2;func_0210d27c(2);}
handled=1;
}
}
}
}
for(i=0;i<5;i++){
(*(s16*)(((data_0216010c+0xf8)+0x5000)+(i+8)*0x1a))&=~2;
if((func_02089ae4((s16)(i*0x15+4),0x1d,0x12,0x13)==1)&&data_0216010c[0x50dd]!=i){
(*(s16*)(((data_0216010c+0xf8)+0x5000)+(i+8)*0x1a))|=2;data_0216010c[0x50dd]=(u8)i;func_0208038c(saved[0x50dd],(u8)func_02084f80(data_0216010c[0x50dc]));data_0216010c[0x50d6]=0;data_0216010c[0x50d7]=data_0216010c[0x50d6];handled=1;func_0210d27c(1);
}
}
(*(s16*)((data_0216010c+((0x5300)&0xff))+((0x5300)&~0xff)))&=~2;
if(!handled){if((func_02089ae4(0xaa,0x35,0xe,0xe)==1)){
if((*(s16*)(data_0216010c+(0x50d4)))<=5)break;
if(data_0216010c[0x50d7]-data_0216010c[0x50d6]==0)break;
(*(s16*)((data_0216010c+((0x5300)&0xff))+((0x5300)&~0xff)))|=2;handled=1;data_0216010c[0x50d7]=(u8)func_020851f8(data_0216010c[0x50d7],1,data_0216010c[0x50d6],(s16)((*(s16*)(data_0216010c+(0x50d4)))-6),1);func_0210d27c(2);
}}else (*(s16*)((data_0216010c+((0x5300)&0xff))+((0x5300)&~0xff)))&=~2;
(*(s16*)((data_0216010c+0x334)+0x5000))&=~2;
if(!handled){if((func_02089ae4(0xaa,0x95,0xe,0xe)==1)){
if((*(s16*)(data_0216010c+(0x50d4)))<=5)break;
if(data_0216010c[0x50d7]>=(*(s16*)(data_0216010c+(0x50d4)))-6+data_0216010c[0x50d6])break;
(*(s16*)((data_0216010c+0x334)+0x5000))|=2;handled=1;data_0216010c[0x50d7]=(u8)func_020851bc(data_0216010c[0x50d7],1,(s16)((*(s16*)(data_0216010c+(0x50d4)))-6+data_0216010c[0x50d6]),0,1);func_0210d27c(2);
}}else (*(s16*)((data_0216010c+0x334)+0x5000))&=~2;
(*(s16*)((data_0216010c+0x368)+0x5000))&=~2;
if(!handled){
if((func_02089ae4(0xaa,0x44,0xe,(s16)((*(s16*)(data_0216010c+(0x50da)))-0x44))==1)){
if((*(s16*)(data_0216010c+(0x50d4)))<=5)break;
data_0216010c[0x50d7]=(u8)func_020851f8(data_0216010c[0x50d7],1,data_0216010c[0x50d6],(s16)((*(s16*)(data_0216010c+(0x50d4)))-6),1);func_0210d27c(2);handled=1;(*(s16*)((data_0216010c+0x368)+0x5000))|=2;
}else if((func_02089ae4(0xaa,(s16)((*(s16*)(data_0216010c+(0x50da)))+data_0216010c[0x50d8]),0xe,(s16)(0x92-((*(s16*)(data_0216010c+(0x50da)))+data_0216010c[0x50d8])))==1)){
if((*(s16*)(data_0216010c+(0x50d4)))<=5)break;
data_0216010c[0x50d7]=(u8)func_020851bc(data_0216010c[0x50d7],1,(s16)((*(s16*)(data_0216010c+(0x50d4)))-6+data_0216010c[0x50d6]),0,1);func_0210d27c(2);handled=1;(*(s16*)((data_0216010c+0x368)+0x5000))|=2;
}else if((func_02089ae4(0xaa,0x44,0xe,0x92)==1)){
if((*(s16*)(data_0216010c+(0x50d4)))<=5)break;
handled=1;(*(s16*)((data_0216010c+0x368)+0x5000))|=2;
}
}
}else{
(*(s16*)((data_0216010c+((0x5300)&0xff))+((0x5300)&~0xff)))&=~2;(*(s16*)((data_0216010c+0x334)+0x5000))&=~2;(*(s16*)((data_0216010c+0x368)+0x5000))&=~2;(*(s16*)((data_0216010c+((0x52e6)&0xff))+((0x52e6)&~0xff)))|=2;
if(data_021626a6&0x10){data_0216010c[0x50dd]++;(u8)(data_0216010c[0x50dd]%=5);func_0208038c(saved[0x50dd],(u8)func_02084f80(data_0216010c[0x50dc]));data_0216010c[0x50d6]=0;data_0216010c[0x50d7]=data_0216010c[0x50d6];for(i=0;i<8;i++)func_020a994c(data_0216010c+0x74+i*0x50);func_0210d27c(1);}
else if(data_021626a6&0x20){if(data_0216010c[0x50dd]==0)data_0216010c[0x50dd]=4;else data_0216010c[0x50dd]--;func_0208038c(saved[0x50dd],(u8)func_02084f80(data_0216010c[0x50dc]));data_0216010c[0x50d6]=0;data_0216010c[0x50d7]=data_0216010c[0x50d6];for(i=0;i<8;i++)func_020a994c(data_0216010c+0x74+i*0x50);func_0210d27c(1);}
else if(data_021626a6&0x40){
if((*(s16*)(data_0216010c+(0x50d4)))<=1)break;
if(data_0216010c[0x50d7]==0){
if((*(s16*)(data_0216010c+(0x50d4)))>5){data_0216010c[0x50d7]=(u8)((*(s16*)(data_0216010c+(0x50d4)))-1);data_0216010c[0x50d6]=5;}
else{data_0216010c[0x50d7]=(u8)((*(s16*)(data_0216010c+(0x50d4)))-1);data_0216010c[0x50d6]=(u8)((*(s16*)(data_0216010c+(0x50d4)))-1);}
}else{
if(data_0216010c[0x50d6]!=0)data_0216010c[0x50d6]--;
data_0216010c[0x50d7]--;
}
func_0210d27c(2);
}else if(data_021626a6&0x80){
if((*(s16*)(data_0216010c+(0x50d4)))<=1)break;
if(data_0216010c[0x50d6]<5)data_0216010c[0x50d6]++;
data_0216010c[0x50d7]++;
if((*(s16*)(data_0216010c+(0x50d4)))==data_0216010c[0x50d7]){data_0216010c[0x50d6]=0;data_0216010c[0x50d7]=data_0216010c[0x50d6];}
func_0210d27c(2);
}
if((data_021626a8&1)||((*(s16*)(data_0216010c+(0x5382)))&2)){
if((*(s16*)(data_0216010c+(0x50d4)))==0)break;
(*(s16*)((data_0216010c+((0x5382)&0xff))+((0x5382)&~0xff)))&=~2;(*(s16*)((data_0216010c+((0x5382)&0xff))+((0x5382)&~0xff)))|=4;state[0xe]=9;
}else if((data_021626a8&2)||((*(s16*)(data_0216010c+(0x51ae)))&2)){
state[0xe]=0xa;func_0210d27c(5);(*(s16*)((data_0216010c+((0x51ae)&0xff))+((0x51ae)&~0xff)))&=~2;(*(s16*)((data_0216010c+((0x51ae)&0xff))+((0x51ae)&~0xff)))|=4;
}
}
break;
case 9:
actor=0;
oldCount=(u16)(*(s16*)(data_0216010c+(0x50d4)));oldRow=data_0216010c[0x50d7];oldTop=data_0216010c[0x50d6];
actor=func_02021f10(func_02085110(data_0216010c[0x50dc]));
func_020220b0((*(u16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+0x70)),-1);
switch(data_0216010c[0x50dd]){case 0:
if((*(u16*)(actor+(0x38)))!=0)func_020220b0((*(u16*)(actor+(0x38))),1);
(*(u16*)(actor+(0x38)))=(*(u16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+0x70));(*(s16*)(actor+(0x7c)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55b4)-0x5500)));(*(s16*)(actor+((0x7c)+2)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55b6)-0x5500)));(*(s16*)(actor+((0x7c)+4)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55b8)-0x5500)));(*(s16*)(actor+((0x7c)+6)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55ba)-0x5500)));(*(s16*)(actor+((0x7c)+8)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55bc)-0x5500)));(*(s16*)(actor+((0x7c)+10)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55be)-0x5500)));(*(s16*)(actor+((0x7c)+12)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55c0)-0x5500)));(*(s16*)(actor+((0x7c)+14)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55c2)-0x5500)));
break;
case 1:
if((*(u16*)(actor+(0x3a)))!=0)func_020220b0((*(u16*)(actor+(0x3a))),1);
(*(u16*)(actor+(0x3a)))=(*(u16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+0x70));(*(s16*)(actor+(0x9e)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55b4)-0x5500)));(*(s16*)(actor+((0x9e)+2)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55b6)-0x5500)));(*(s16*)(actor+((0x9e)+4)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55b8)-0x5500)));(*(s16*)(actor+((0x9e)+6)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55ba)-0x5500)));(*(s16*)(actor+((0x9e)+8)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55bc)-0x5500)));(*(s16*)(actor+((0x9e)+10)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55be)-0x5500)));(*(s16*)(actor+((0x9e)+12)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55c0)-0x5500)));(*(s16*)(actor+((0x9e)+14)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55c2)-0x5500)));
break;
default:
if((*(u16*)((actor+(data_0216010c[0x50dd]-2)*2)+0x3c))!=0)func_020220b0((*(u16*)((actor+(data_0216010c[0x50dd]-2)*2)+0x3c)),1);
(*(u16*)((actor+(data_0216010c[0x50dd]-2)*2)+0x3c))=(*(u16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+0x70));(*(s16*)((actor+(data_0216010c[0x50dd]-2)*0x22)+(0xc0)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55b4)-0x5500)));(*(s16*)((actor+(data_0216010c[0x50dd]-2)*0x22)+((0xc0)+2)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55b6)-0x5500)));(*(s16*)((actor+(data_0216010c[0x50dd]-2)*0x22)+((0xc0)+4)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55b8)-0x5500)));(*(s16*)((actor+(data_0216010c[0x50dd]-2)*0x22)+((0xc0)+6)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55ba)-0x5500)));(*(s16*)((actor+(data_0216010c[0x50dd]-2)*0x22)+((0xc0)+8)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55bc)-0x5500)));(*(s16*)((actor+(data_0216010c[0x50dd]-2)*0x22)+((0xc0)+10)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55be)-0x5500)));(*(s16*)((actor+(data_0216010c[0x50dd]-2)*0x22)+((0xc0)+12)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55c0)-0x5500)));(*(s16*)((actor+(data_0216010c[0x50dd]-2)*0x22)+((0xc0)+14)))=(*(s16*)((data_0216010c+data_0216010c[0x50d7]*0x64)+0x5500+((0x55c2)-0x5500)));
break;}
func_02080930(data_0216010c[0x50dc]);
func_0208038c(saved[0x50dd],(u8)func_02084f80(data_0216010c[0x50dc]));
if(oldCount!=(*(s16*)(data_0216010c+(0x50d4)))){
if(oldRow-oldTop>0){
oldRow=(u16)func_020851f8((s16)oldRow,1,0,0,1);
data_0216010c[0x50d7]=0;
data_0216010c[0x50d7]=(u8)func_020851bc(data_0216010c[0x50d7],(s16)oldRow,func_020851f8((*(s16*)(data_0216010c+(0x50d4))),1,0,0,1),0,1);
}else{
data_0216010c[0x50d7]=(u8)func_020851bc(data_0216010c[0x50d7],0,func_020851f8((*(s16*)(data_0216010c+(0x50d4))),1,0,0,1),0,1);
}
data_0216010c[0x50d6]=(u8)func_020851bc(data_0216010c[0x50d6],0,func_020851f8((*(s16*)(data_0216010c+(0x50d4))),1,0,0,1),0,1);
}
func_0210d27c(0x4c);(*(s16*)((data_0216010c+((0x5382)&0xff))+((0x5382)&~0xff)))&=~2;(*(s16*)(data_0216010c+(0x5382)))&=~4;state[0xe]=8;
break;
case 10:
for(i=0;i<8;i++)func_020a994c(data_0216010c+0x74+i*0x50);state[0xe]=4;(*(s16*)((data_0216010c+((0x51ae)&0xff))+((0x51ae)&~0xff)))&=~2;(*(s16*)(data_0216010c+(0x51ae)))&=~4;
break;
}
}
#pragma optimization_level 4
