/* 1 function from 0x02080E00 to 0x02081D3C (main), found by ds-decomp. */
#include "common.h"
typedef struct Menu02080E00 {
u8 pad_0[0x44];
u8 * unk_44;
u8 pad_48[0x10];
u8 * unk_58;
u8 pad_5c[0x5b8];
u8 unk_614;
u8 pad_615[0x4abc];
s8 unk_50d1;
s8 unk_50d2;
u8 pad_50d3[0x1];
s16 unk_50d4;
u8 unk_50d6;
u8 unk_50d7;
u8 unk_50d8;
u8 pad_50d9[0x1];
s16 unk_50da;
u8 pad_50dc[0x2];
s8 unk_50de;
u8 unk_50df;
u8 pad_50e0[0xce];
s16 unk_51ae;
u8 pad_51b0[0x136];
s16 unk_52e6;
u8 pad_52e8[0x18];
s16 unk_5300;
u8 pad_5302[0x32];
s16 unk_5334;
u8 pad_5336[0x32];
s16 unk_5368;
u8 pad_536a[0x18];
s16 unk_5382;
} Menu02080E00;
extern u8 *data_0216010c;
extern u16 data_02162908[4];
extern u16 data_021626a8, data_021626a6;

void func_02080e00(void) {
u8 *state=*(u8 **)(data_0216010c+0x44);
int i,j; u8 count=6; int handled=0;
switch(state[0]){
case 0: state[0]=1; break;
case 1:
if(data_02162908[2]){
for(i=0;i<5;i++) if(func_02089ae4((s16)(i*21+4),29,18,19)==1 && state[2]!=i) {
handled=1;func_0210d27c(1);state[2]=i;switch(state[2]) {case 0: func_02089bb0(0,1); break;case 1: func_02089bb0(2,1); break;case 2: func_02089bb0(3,1); break;case 3: func_02089bb0(4,1); break;case 4: func_02089bb0(1,1); break;} for(j=0;j<8;j++) func_020a994c(data_0216010c+0x74+j*0x50);
}
(*(s16 *)(data_0216010c + 0x5382)) &=~2; (*(s16 *)(data_0216010c + 0x5382)) &=~4;
if(!handled && ((*(s16 *)(data_0216010c + 0x5382))&1) && func_02089ae4(197,137,52,16)==1){handled=1;(*(s16 *)(data_0216010c + 0x5382)) |=2;}
if(!handled){
if((*(s16 *)(data_0216010c + 0x50d4))<6) count=(*(s16 *)(data_0216010c + 0x50d4));
for(i=0;i<6;i++) if(i<count && func_02089ae4(10,(s16)(i*19+53),156,18)==1){
s16 delta=(s16)(data_0216010c[0x50d6]-i);
if(delta==0){if((*(s16 *)(data_0216010c + 0x52e6))&2) (*(s16 *)(data_0216010c + 0x5382)) |=2;}
else {u8 d=(u8)delta;data_0216010c[0x50d6]=data_0216010c[0x50d6]-d;data_0216010c[0x50d7]=data_0216010c[0x50d7]-d;(*(s16 *)(data_0216010c + 0x52e6)) &=~2;func_0210d27c(2);}
handled=1;
}}
(*(s16 *)(data_0216010c + 0x5300)) &=~2;
if(!handled){if(func_02089ae4(170,53,14,14)==1){
if((*(s16 *)(data_0216010c + 0x50d4))<=5)return;
if(data_0216010c[0x50d7]-data_0216010c[0x50d6]==0)return;
handled=1;(*(s16 *)(data_0216010c + 0x5300)) |=2;
data_0216010c[0x50d7]=func_020851f8(data_0216010c[0x50d7],1,data_0216010c[0x50d6],(s16)((*(s16 *)(data_0216010c + 0x50d4))-6),1);
func_0210d27c(2);}}else (*(s16 *)(data_0216010c + 0x5300)) &=~2;
(*(s16 *)(data_0216010c + 0x5334)) &=~2;
if(!handled){if(func_02089ae4(170,149,14,14)==1){
if((*(s16 *)(data_0216010c + 0x50d4))<=5)return;
if(data_0216010c[0x50d7]>=(*(s16 *)(data_0216010c + 0x50d4))-6+data_0216010c[0x50d6])return;
handled=1;(*(s16 *)(data_0216010c + 0x5334)) |=2;
data_0216010c[0x50d7]=func_020851bc(data_0216010c[0x50d7],1,(s16)((*(s16 *)(data_0216010c + 0x50d4))-6+data_0216010c[0x50d6]),0,1);
func_0210d27c(2);}}else (*(s16 *)(data_0216010c + 0x5334)) &=~2;
(*(s16 *)(data_0216010c + 0x5368)) &=~2;
if(!handled){
if(func_02089ae4(170,68,14,(s16)((*(s16 *)(data_0216010c + 0x50da))-68))==1){
if((*(s16 *)(data_0216010c + 0x50d4))<=5)return;handled=1;
data_0216010c[0x50d7]=func_020851f8(data_0216010c[0x50d7],1,data_0216010c[0x50d6],(s16)((*(s16 *)(data_0216010c + 0x50d4))-6),1);
func_0210d27c(2);(*(s16 *)(data_0216010c + 0x5368)) |=2;
}else if(func_02089ae4(170,(s16)((*(s16 *)(data_0216010c + 0x50da))+data_0216010c[0x50d8]),14,(s16)(146-((*(s16 *)(data_0216010c + 0x50da))+data_0216010c[0x50d8])))==1){
if((*(s16 *)(data_0216010c + 0x50d4))<=5)return;handled=1;
data_0216010c[0x50d7]=func_020851bc(data_0216010c[0x50d7],1,(s16)((*(s16 *)(data_0216010c + 0x50d4))-6+data_0216010c[0x50d6]),0,1);
func_0210d27c(2);(*(s16 *)(data_0216010c + 0x5368)) |=2;
}else if(func_02089ae4(170,68,14,146)==1){
if((*(s16 *)(data_0216010c + 0x50d4))<=5)return;handled=1;(*(s16 *)(data_0216010c + 0x5368)) |=2;
}}
(*(s16 *)(data_0216010c + 0x51ae)) &=~2; if(!handled && func_02089ae4(232,2,20,20)==1) (*(s16 *)(data_0216010c + 0x51ae)) |=2;
}else{
(*(s16 *)(data_0216010c + 0x5300)) &=~2;(*(s16 *)(data_0216010c + 0x5334)) &=~2;(*(s16 *)(data_0216010c + 0x5368)) &=~2;(*(s16 *)(data_0216010c + 0x52e6)) |=2;
if((data_021626a8&1)||((*(s16 *)(data_0216010c + 0x5382))&2)){(*(s16 *)(data_0216010c + 0x5382)) &=~2;func_02081d3c();return;}
if(data_021626a6&16){state[2]=func_020851bc(state[2],1,4,0,2);switch(state[2]) {case 0: func_02089bb0(0,1); break;case 1: func_02089bb0(2,1); break;case 2: func_02089bb0(3,1); break;case 3: func_02089bb0(4,1); break;case 4: func_02089bb0(1,1); break;}func_0210d27c(1);for(j=0;j<8;j++) func_020a994c(data_0216010c+0x74+j*0x50);}
else if(data_021626a6&32){state[2]=func_020851f8(state[2],1,0,4,2);switch(state[2]) {case 0: func_02089bb0(0,1); break;case 1: func_02089bb0(2,1); break;case 2: func_02089bb0(3,1); break;case 3: func_02089bb0(4,1); break;case 4: func_02089bb0(1,1); break;}func_0210d27c(1);for(j=0;j<8;j++) func_020a994c(data_0216010c+0x74+j*0x50);}
else if(data_021626a6&64){
if((*(s16 *)(data_0216010c + 0x50d4))<=1)return;
if(data_0216010c[0x50d7]==0){data_0216010c[0x50d7]=(*(s16 *)(data_0216010c + 0x50d4))-1;if((*(s16 *)(data_0216010c + 0x50d4))>5)data_0216010c[0x50d6]=5;else data_0216010c[0x50d6]=(*(s16 *)(data_0216010c + 0x50d4))-1;}
else {if(data_0216010c[0x50d6])data_0216010c[0x50d6]=data_0216010c[0x50d6]-1;data_0216010c[0x50d7]=data_0216010c[0x50d7]-1;}func_0210d27c(2);
}else if(data_021626a6&128){
if((*(s16 *)(data_0216010c + 0x50d4))<=1)return;
if(data_0216010c[0x50d6]<5)data_0216010c[0x50d6]=data_0216010c[0x50d6]+1;
data_0216010c[0x50d7]=data_0216010c[0x50d7]+1;
if((*(s16 *)(data_0216010c + 0x50d4))==data_0216010c[0x50d7]){data_0216010c[0x50d6]=0;data_0216010c[0x50d7]=data_0216010c[0x50d6];}
func_0210d27c(2);
}else if((data_021626a8&2)||((*(s16 *)(data_0216010c + 0x51ae))&2)){
func_02081e78();func_0210d27c(5);(*(s16 *)(data_0216010c + 0x51ae)) |=4;(*(s16 *)(data_0216010c + 0x51ae)) &=~2;
func_02092010(2,(u16)((*(s8 *)(data_0216010c + 0x50d2))+2*(*(s8 *)(data_0216010c + 0x50d1))));
}
(*(s16 *)(data_0216010c + 0x5382)) &=~4;
}break;
case 2:
(*(s16 *)(data_0216010c + 0x5382)) &=~4;(*(s16 *)(data_0216010c + 0x5382)) &=~2;(*(s16 *)(data_0216010c + 0x5382)) &=~1;state[0]=5;
if(func_02082328(data_0216010c[0x50d7])==1) (*(s16 *)(data_0216010c + 0x5382)) |=1; else (*(s16 *)(data_0216010c + 0x5382)) &=~1;for(j=0;j<7;j++) func_020a994c(data_0216010c+0x74+j*0x50);break;
case 5:
if(data_02162908[2]){
(*(s16 *)(data_0216010c + 0x5382)) &=~2;
if(((*(s16 *)(data_0216010c + 0x5382))&1)&&func_02089ae4(197,137,52,16)==1){handled=1;(*(s16 *)(data_0216010c + 0x5382)) |=2;}
if((*(s8 *)(data_0216010c + 0x50de))!=-1){
for(i=0;i<data_0216010c[0x614];i++) if(func_02089ae4(8,(s16)(i*19+33),127,17)==1){
if((*(s8 *)(data_0216010c + 0x50de))==i){if((*(s16 *)(data_0216010c + 0x52e6))&2)(*(s16 *)(data_0216010c + 0x5382)) |=2;}
else {(*(s8 *)(data_0216010c + 0x50de))=i;if(func_02082328(data_0216010c[0x50d7])==1) (*(s16 *)(data_0216010c + 0x5382)) |=1; else (*(s16 *)(data_0216010c + 0x5382)) &=~1;(*(s16 *)(data_0216010c + 0x52e6)) &=~2;func_0210d27c(2);}
handled=1;
}
}else{
for(i=0;i<data_0216010c[0x614];i++)if(func_02089ae4(8,(s16)(i*19+33),127,17)==1 && ((*(s16 *)(data_0216010c + 0x52e6))&2)){(*(s16 *)(data_0216010c + 0x5382)) |=2;handled=1;}
}
(*(s16 *)(data_0216010c + 0x51ae)) &=~2; if(!handled && func_02089ae4(232,2,20,20)==1) (*(s16 *)(data_0216010c + 0x51ae)) |=2;
}else{
(*(s16 *)(data_0216010c + 0x52e6)) |=2;
if((data_021626a8&1)||((*(s16 *)(data_0216010c + 0x5382))&2)){
(*(s16 *)(data_0216010c + 0x5382)) &=~2;
if(func_02081f4c(data_0216010c[0x50d7])==1){data_0216010c[0x50df]=0;state[0]=6;(*(s16 *)(data_0216010c + 0x5382)) |=4;}else func_0210d27c(7);
return;
}
if((data_021626a8&2)||((*(s16 *)(data_0216010c + 0x51ae))&2)){state[0]=4;(*(s16 *)(data_0216010c + 0x51ae)) |=4;(*(s16 *)(data_0216010c + 0x51ae)) &=~2;func_0210d27c(5);return;}
if(data_021626a6&128){if((*(s8 *)(data_0216010c + 0x50de))==-1)return;
(*(s8 *)(data_0216010c + 0x50de))=func_020851bc((*(s8 *)(data_0216010c + 0x50de)),1,(s16)(data_0216010c[0x614]-1),0,2);
func_0210d27c(2);if(func_02082328(data_0216010c[0x50d7])==1) (*(s16 *)(data_0216010c + 0x5382)) |=1; else (*(s16 *)(data_0216010c + 0x5382)) &=~1;
}else if(data_021626a6&64){if((*(s8 *)(data_0216010c + 0x50de))==-1)return;
(*(s8 *)(data_0216010c + 0x50de))=func_020851f8((*(s8 *)(data_0216010c + 0x50de)),1,0,(s16)(data_0216010c[0x614]-1),2);
func_0210d27c(2);if(func_02082328(data_0216010c[0x50d7])==1) (*(s16 *)(data_0216010c + 0x5382)) |=1; else (*(s16 *)(data_0216010c + 0x5382)) &=~1;
}
}break;
case 6:(*(s16 *)(data_0216010c + 0x5382)) &=~4;(*(s16 *)(data_0216010c + 0x5382)) &=~2;state[0]=7;break;
case 4:{
void *p=*(void **)(data_0216010c+0x58);
if(p && *(int *)p){func_020a9544(p);*(void **)(data_0216010c+0x58)=0;}
for(j=0;j<8;j++) func_020a994c(data_0216010c+0x74+j*0x50);func_020a994c(data_0216010c+0x2a4);state[0]=1;break;
}
case 7:
data_0216010c[0x50df]=data_0216010c[0x50df]+1;
if(data_0216010c[0x50df]<10)return;
state[0]=state[0x36];state[0x36]=0;
if(state[0]!=1)return;
for(j=0;j<8;j++) func_020a994c(data_0216010c+0x74+j*0x50);break;
}
}
