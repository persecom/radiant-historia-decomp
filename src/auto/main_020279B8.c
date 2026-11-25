/* 1 function from 0x020279B8 to 0x02028420 (main), found by ds-decomp. */
#include "common.h"
typedef struct { u8 cells[9]; } Grid_020279b8;
typedef struct {u32 seed, multiplier, increment;} RandomState_020279b8;
extern RandomState_020279b8 data_0216263c;
extern const Grid_020279b8 data_0213ee7c, data_0213ee70, data_0213ee64, data_0213ee88, data_0213ee58;
extern char data_0214615c[], data_02146160[];
extern char *func_020929f4(void *,s32);
extern s32 func_02092994(void *,s32);
extern s32 func_02026e9c(s32,char *,char *);
extern s16 func_02026f38(char *);
extern s32 func_0202b3b0(u8);
extern s32 func_0202e63c(void *,s32);
extern void func_0202b3d4(void *,u8);
extern u8 *func_0202c820(u8);
extern s32 func_0202c658(void *);
extern u8 *func_0202e548(u8);
static inline u16 Random_020279b8(u16 max) {
 RandomState_020279b8 *state=&data_0216263c;
 u32 value;
 state->seed=state->multiplier*state->seed+state->increment;
 value=state->seed>>16;
 if(max)value=(value*max)>>16;
 return value;
}

s32 func_020279b8(u8 *self,u8 *parser) {
 u32 count=0;
 u8 *info=*(u8 **)(self+0x12c);
 s32 zero=0;
 char *word=func_020929f4(parser,zero);
 if(func_02026e9c(2,word,data_0214615c)) {
 s16 cmd=func_02026f38(word);
 s16 row,col;
 func_02092994(parser,zero);
 row=func_02092994(parser,zero);
 col=func_02092994(parser,zero);
 switch(cmd) {
 case 1: {
 u8 idx=(row-1)*3+col-1;
 if(func_0202b3b0(idx) && func_0202e63c(self,idx)) {func_0202b3d4(self,idx);return 1;}
 break;
 }
 case 2: {
 u8 cells[3]={0};u32 i;u8 base=(row-1)*3;
 for(i=0;i<3;i++) {u32 k=base+i;if(func_0202c820(k)==self || !func_0202c820(k))cells[count++]=k;}
 if(count==0)break;
 if(count==1) {if(func_0202e63c(self,cells[0])){func_0202b3d4(self,cells[0]);return 1;}}
 else if(count==2) {
 u16 start=Random_020279b8(100)<=50?1:0;
 for(i=0;i<2;i++)if(func_0202e63c(self,cells[(i+start)%2])){func_0202b3d4(self,cells[(i+start)%2]);return 1;}
 }else if(count==3) {
 u32 start;u16 roll=Random_020279b8(100);
 if(roll>=66)start=0;else if(roll>=33)start=1;else start=2;
 for(i=0;i<3;i++)if(func_0202e63c(self,cells[(i+start)%3])){func_0202b3d4(self,cells[(i+start)%3]);return 1;}
 }break;
 }
 case 3:{
 u8 available[9]={0};Grid_020279b8 order=data_0213ee7c;u32 i;
 for(i=0;i<9;i++)if(func_0202c820(i)==self || !func_0202c820(i))available[i]=1;
 for(i=0;i<16;i++){u8 a=Random_020279b8(9),b=Random_020279b8(9);u8 tmp=order.cells[b];order.cells[b]=order.cells[a];order.cells[a]=tmp;}
 for(i=0;i<9;i++){u8 k=order.cells[i];if(available[k]==1 && func_0202e63c(self,k)){func_0202b3d4(self,k);return 1;}}
 break;
 }
 case 4:case 5:case 6:case 7:{
 Grid_020279b8 available=data_0213ee70,order=data_0213ee64;u32 i;
 if((u16)(s16)(cmd-4)<=1){s8 row=func_0202c658(self)/3;available.cells[row*3]=zero;available.cells[row*3+1]=zero;available.cells[row*3+2]=zero;}
 else if((u16)(s16)(cmd-6)<=1){s8 col=func_0202c658(self)%3;available.cells[col]=zero;available.cells[col+3]=zero;available.cells[col+6]=zero;}
 for(i=0;i<9;i++)if(available.cells[i]==1 && func_0202b3b0(i) && func_0202c820(i))available.cells[i]=zero;
 if((u16)(s16)(cmd-4)<=1) {
 for(i=0;i<3;i++){u8 *p=&available.cells[i*3];s8 sum=p[0]+p[1]+p[2];
 if(cmd==4){if(sum==0 || sum==3){p[0]=zero;p[1]=zero;p[2]=zero;}}
 else if(cmd==5){if((u8)sum<=2){p[0]=zero;p[1]=zero;p[2]=zero;}}
 }
 } else if((u16)(s16)(cmd-6)<=1) {
 for(i=0;i<3;i++){u8 *p=&available.cells[i];s8 sum=p[0]+p[3]+p[6];
 if(cmd==6){if(sum==0 || sum==3){p[0]=zero;p[3]=zero;p[6]=zero;}}
 else if(cmd==7){if((u8)sum<=2){p[0]=zero;p[3]=zero;p[6]=zero;}}
 }
 }
 for(i=0;i<16;i++){u8 a=Random_020279b8(9),b=Random_020279b8(9);u8 tmp=order.cells[b];order.cells[b]=order.cells[a];order.cells[a]=tmp;}
 for(i=0;i<9;i++){u8 k=order.cells[i];if(available.cells[k]==1 && func_0202e63c(self,k)){func_0202b3d4(self,k);return 1;}}
 break;
 }
 case 8:case 9:{
 s8 available[9]={0};Grid_020279b8 order=data_0213ee88,offset=data_0213ee58;u32 i;
 for(i=0;i<9;i++)if(func_0202b3b0(i) && !func_0202c820(i))available[i]=1;
 for(i=0;i<16;i++){s8 a=Random_020279b8(9),b=Random_020279b8(9);s8 tmp=((s8 *)order.cells)[b];((s8 *)order.cells)[b]=((s8 *)order.cells)[a];((s8 *)order.cells)[a]=tmp;}
 for(i=0;i<9;i++){
 s8 k=((s8 *)order.cells)[i];s32 found=0;u16 j;
 for(j=0;j<8;j++){s8 pos=k+((s8 *)offset.cells)[j];if(pos>=0 && pos<=8 && available[pos]==0)found=1;}
 if(available[k]==1 && found==1 && cmd==8){if(func_0202e63c(self,k)){func_0202b3d4(self,order.cells[i]);return 1;}}
 else if(available[k]==1 && found==0 && cmd==9){if(func_0202e63c(self,k)){func_0202b3d4(self,order.cells[i]);return 1;}}
 }break;
 }
 case 10:
 for(;count<9;count++)if(func_0202e548(count)[0x1c] && func_0202e63c(self,count) && !func_0202c820(count)){func_0202b3d4(self,count);return 1;}
 break;
 default:break;
 }
 return 0;
 }else if(func_02026e9c(3,word,data_02146160)){
 s16 val;
 func_02092994(parser,zero);val=func_02092994(parser,zero);func_02092994(parser,zero);
 info[0x22]|=(u8)(1<<(val-1));
 }
 return 0;
}
