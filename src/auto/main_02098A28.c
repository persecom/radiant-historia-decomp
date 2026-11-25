/* 2 functions from 0x02098A28 to 0x020996E0 (main), found by ds-decomp. */
#include "common.h"
typedef struct { u32 slot, value, gain, bonus; s16 level; } InitProgress_02098a28;
extern void func_0209a8d0(void),func_0209a548(void),func_020988c0(void);
extern u8 *func_020bd438(u32),*func_0209c888(s32,u32),*func_0209c14c(u32);
extern void *func_020a8604(s32,s32);
extern u32 data_02162830,data_02162834[],data_0216281c,data_02162820,data_0216bf84;
extern u32 data_02155c3c;
extern u8 data_021488d0[],data_021488d8[];
extern void *func_0210c594(u32,u32);
extern void *func_0209c0d0(void);
extern void *func_020a94b8(void *);
extern void *func_020a84b8(s32,s32);
extern void func_020eaaa0(s32),func_020f25b0(s32);
extern void func_020996e0(void),func_020996e4(void),func_020996e8(void);
extern u8 *data_02160120, *data_02160204;
extern u32 data_02162858[2], data_02162854;

extern void func_020a2c20(void);
extern void func_0210f6d4(void);
extern void func_020a31c8();
extern void func_020a2dd0(void);
extern void func_020a2e64(void);
extern void func_020eb180(u32, u32);
extern s32 func_020bd490(s32, u32);
extern void func_0209c510(u32, u8);
extern u8 *func_02021f10(s32);
extern u32 data_02162854;
extern u32 data_02162858[2];
extern u32 data_02160a6c;
extern u32 data_021488c4[3];
#pragma push
#pragma opt_common_subs off
void func_02098a28(void) {
s32 zero=0;
s16 i,j,k,n; s32 index; u8 *p,*work,*node; s32 highest,id,diff;
func_020a2c20();func_0210f6d4();
data_02162854=(u32)func_020988c0;data_02162858[0]=(u32)func_020988c0;
*(volatile u16*)0x4000304|=0x8000;
func_020a31c8(3);func_020a2dd0();func_020a2e64();
func_020eb180(zero,zero);func_020eaaa0(1002);func_020f25b0(1002);func_020dcad8();
*(u32*)((u8*)data_02160a6c+0x100)=zero;
work=func_0210c594(0x7ac,data_02155c3c);data_02160120=work;
*(u32*)work=(u32)func_020996e0;*(u32*)(work+4)=1011;func_0210d9e4(work);
*(u32*)(work+0x14)=(u32)func_0209a8d0;*(u32*)(work+0x18)=1001;func_0210dbd0(work+0x14);
*(u32*)(work+0x28)=(u32)func_0209a548;*(u32*)(work+0x2c)=1001;func_0210db70(work+0x28);
*(u32*)(work+0x3c)=zero;
func_020d6c9c();func_020d2e98();func_0209b03c();func_02112e80();
func_02113630(work+0x6a4,work+0x6bc);
*(void**)(work+0x704)=func_0209c0d0();func_0209c198();
for(i=0;i<3;i++) {
if(func_020bd490(zero,(u8)i)) {
if(func_020bd490(2,(u8)i)) id=func_020bd490(1,(u8)i)-1;
else id=func_020bd490(3,(u8)i);
p=func_02021f10(id);if(p)func_0209c510((u16)i,p[0x42]);
}}
*(void**)(work+0x6a0)=func_020a94b8(data_021488c4);
*(void**)(work+0x794)=func_020a94b8(data_021488d0);
*(void**)(work+0x798)=func_020a94b8(data_021488d8);
*(void**)(work+0x79c)=func_020a84b8(5,1);
*(void**)(work+0x7a0)=func_020a84b8(5,1);
*(void**)(work+0x7a4)=func_020a84b8(4,1);
func_021167ac(work+0x6d4,0x34);func_021167ac(work+0x708,8);
func_021167ac(work+0x6ec,4);func_021167ac(work+0x6f8,4);
highest=0;work[0x694]=0;
for(j=0;j<3;j++) {
if(func_020bd490(zero,(u8)j)) {
if(func_020bd490(2,(u8)j)) id=func_020bd490(1,(u8)j)-1;
else id=func_020bd490(3,(u8)j);
p=func_02021f10(id);
if(!highest)highest=p[0x43];else if(highest<p[0x43])highest=p[0x43];
}}
for(k=0;k<3;k++) {
if(func_020bd490(zero,(u8)k)) {
if(func_020bd490(2,(u8)k)) id=func_020bd490(1,(u8)k)-1;
else id=func_020bd490(3,(u8)k);
p=func_02021f10(id);
if(p){
node=func_0210c594(0x48,data_02155c3c);func_021167ac(node+0x3c,4);
func_020bd490(2,(u8)k);node[0]=k;
diff=(s16)(highest-p[0x43]);if(diff<0)diff=0;else if(diff>10)diff=10;
if(!*(u32*)(p+8)){*(u32*)(node+4)=*(u32*)(p+4);*(u32*)(node+8)=0;*(u32*)(node+12)=0;}
else {
*(u32*)(node+4)=*(u32*)(p+4);
*(u32*)(node+8)=((*(u32*)(p+8)+*(u16*)(data_02160204+0x144)) * *(s16*)(data_02160120+0x742+diff*2))/1000;
if(*(s32*)(node+8)>9999)*(u32*)(node+8)=9999;
*(u32*)(node+12)=*(u16*)(data_02160204+0x144);
*(u32*)(node+8)-=*(u32*)(node+12);
}
*(u16*)(node+0x10)=p[0x43];
*(void**)(node+0x30)=func_020a84b8(4,1);func_020a8810(*(void**)(node+0x30),20);
func_021167f0(work+0x6d4,node);
}
work[0x694]++;func_0209c2ac((u16)k);
}}
for(n=0;n<3;n++){
if(func_020bd490(0,(u8)n)){
if(func_020bd490(2,(u8)n))id=func_020bd490(1,(u8)n)-1;else id=func_020bd490(3,(u8)n);
p=func_02021f10(id);node=func_0210c594(12,data_02155c3c);*(u8**)node=p;func_021167f0(work+0x6f8,node);
}}

for(i=0;i<7;i++){
u8 *entry=func_020bd438((u8)i);
if(entry && ((*(u16*)entry & 1) || (*(u16*)entry & 8))){
u8 *link; s32 found;
p=func_02021f10(entry[2]);found=0;
for(link=*(u8**)(work+0x6f8);link;link=*(u8**)(link+8)){
if(*(u8**)link==p){found=1;break;}
}
if(!found){
*(u32*)(p+8)=*(u32*)(data_02160204+0x13c)+*(u16*)(data_02160204+0x144);
if(p){
node=func_0210c594(0x48,data_02155c3c);node[0]=entry[2];func_0209c64c(3,p[0x42]);
diff=(s16)(highest-p[0x43]);if(diff<0)diff=0;else if(diff>10)diff=10;
*(u32*)(node+4)=*(u32*)(p+4);
*(u32*)(node+8)=(*(u32*)(p+8) * *(s16*)(data_02160120+0x742+diff*2))/1000;
if(*(s32*)(node+8)>9999)*(u32*)(node+8)=9999;
*(s16*)(node+0x10)=p[0x43];
for(;;){
u32 limit=*(u32*)(data_02160120+0x508+*(s16*)(node+0x10)*4);
if(limit>*(u32*)(node+4)+*(u32*)(node+8))break;
++*(s16*)(node+0x10);func_0209acdc(node,1);
}
*(u32*)(p+4)+=*(u32*)(node+8);*(u32*)(node+8)=0;if(node)func_0210c5dc(node);
}
}
}
}
while((work=data_02160120,(node=*(u8**)(work+0x6f8)))!=0){
func_021168f8(work+0x6f8,node);if(node)func_0210c5dc(node);
}
*(u32*)(data_02160204+0x13c)=0;
if(!*(u32*)(data_02160204+0x10c))*(u32*)(data_02160204+0x10c)=func_020de270();
work=data_02160120;*(u16*)(work+0x714)=0;func_0209c778();
for(index=0;index<*(u16*)(work+0x714);index=(s16)(index+1)){
s32 row,ypos,kind;u16 item;
if(index>=7)break;
p=func_0209c888(1,(u16)index);
if(p[6]==0){
node=func_0209c14c((u16)(index+0x62));*(u16*)(node+2)|=1;row=index*19;ypos=row+35;*(s32*)(node+20)=ypos;
node=func_0209c14c((u16)(index+0x69));*(u16*)(node+2)|=1;*(s32*)(node+20)=ypos;
node=func_0209c14c((u16)(index+0x70));*(u16*)(node+2)|=1;*(s32*)(node+20)=ypos;
node=func_0209c14c((u16)(index+0x77));*(u16*)(node+2)|=1;*(s32*)(node+20)=row+41;
}else if(p[6]==1){
node=func_0209c14c((u16)(index+0x7e));*(u16*)(node+2)|=1;row=index*19;ypos=row+35;*(s32*)(node+20)=ypos;
node=func_0209c14c((u16)(index+0x85));*(u16*)(node+2)|=1;*(s32*)(node+20)=ypos;
node=func_0209c14c((u16)(index+0x8c));*(u16*)(node+2)|=1;*(s32*)(node+20)=ypos;
node=func_0209c14c((u16)(index+0x93));*(u16*)(node+2)|=1;*(s32*)(node+20)=row+41;
}
*(void**)(work+0x718+index*4)=func_020a8604(4,1);
if(p[6]==0)func_020a8810(*(void**)(work+0x718+index*4),20);
else func_020a8810(*(void**)(work+0x718+index*4),32);
item=*(u16*)(p+2);kind=0;
if(item>=1 && item<=0x33){}
else if(item>=0x12d && item<=0x1a9)kind=1;
else if(item>=0x208 && item<=0x26c)kind=2;
else if(item>=0x2bd && item<=0x31e)kind=3;
else if(item>=0xc9 && item<=0x10f)kind=4;
func_0209ca18(*(void**)(work+0x718+index*4),*(void**)(work+0x6a4+kind*4),item,60,(s16)((s16)index*19+36),17);
}
*(u16*)(work+0x734)=0;*(u16*)(work+0x736)=0;*(u16*)(work+0x60)=0;
*(u32*)(work+0x780)=*(u32*)(data_02160204+0x108);
if(*(s32*)(work+0x780)>99999)*(u32*)(work+0x780)=99999;
*(u32*)(work+0x784)=*(u16*)(data_02160204+0x142);
*(u32*)(data_02160204+0x108)+=*(u16*)(data_02160204+0x142);
if(*(u32*)(data_02160204+0x108)>99999)*(u32*)(data_02160204+0x108)=99999;
*(u16*)(data_02160204+0x142)=0;
data_02162830=30;data_02162834[0]=1;data_0216281c=2;data_02162820=2;data_0216bf84=1;
}
#pragma pop
void func_02099480(void) {
s32 zero; u8 *node; s32 i;
func_020eaacc();func_020f25dc();func_020a3b84();func_02112ed8();func_020a2e24();
zero=0; func_020eb344(zero,zero);func_020dcca4();
if(data_02160120) {
func_0209c0fc(*(void **)(data_02160120+0x704)); *(s32 *)(data_02160120+0x704)=zero;
while((node=*(u8 **)(data_02160120+0x6d4))!=0) {
u8 *p;
func_0209c920(node);func_021168f8(data_02160120+0x6d4,node);
p=*(u8 **)(node+0x30); (*(void (**)(void *))(p+12))(p);
if(node) func_0210c5dc(node);
}
while((node=*(u8 **)(data_02160120+0x708))!=0) {
func_021168f8(data_02160120+0x708,node); if(node) func_0210c5dc(node);
}
for(i=0;i<7;i++) {
u8 *p=*(u8 **)(data_02160120+0x718+4*i);
if(p) { (*(void (**)(void *))(p+12))(p); *(s32 *)(data_02160120+0x718+4*i)=zero; }
}
for(i=0;i<5;i++) {
func_020a9544(*(void **)(data_02160120+0x6a4+4*i));
func_020a9544(*(void **)(data_02160120+0x6bc+4*i));
}
func_020a9544(*(void **)(data_02160120+0x6a0));
while((node=*(u8 **)(data_02160120+0x6ec))!=0) {
func_021168f8(data_02160120+0x6ec,node); if(node) func_0210c5dc(node);
}
func_020a9544(*(void **)(data_02160120+0x794));
func_020a9544(*(void **)(data_02160120+0x798));
{u8 *p=*(u8 **)(data_02160120+0x79c); (*(void (**)(void *))(p+12))(p);}
{u8 *p=*(u8 **)(data_02160120+0x7a0); (*(void (**)(void *))(p+12))(p);}
{u8 *p=*(u8 **)(data_02160120+0x7a4); (*(void (**)(void *))(p+12))(p);}
func_0210da14(data_02160120);func_0210dbe8(data_02160120+0x14);func_0210dba0(data_02160120+0x28);
if(data_02160120) {func_0210c5dc(data_02160120);data_02160120=0;}
}
func_0210e290(zero);
data_02162858[0]=zero;data_02162854=zero;
data_02160204[0x140]=zero;*(u16 *)(data_02160204+0x142)=zero;*(u16 *)(data_02160204+0x144)=zero;
func_0210f138();
}
