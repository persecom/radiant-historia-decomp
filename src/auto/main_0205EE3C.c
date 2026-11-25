/* 2 functions from 0x0205EE3C to 0x0205FA44 (main), found by ds-decomp. */
#include "common.h"

extern u8 **data_02160244;
extern void func_020d9da8(int);
extern void func_020d9ea8(int, int);
extern int func_0205bcb0(void *, u16);
extern s32 func_020db1f4(void *, void *, int, int);
extern s32 func_020db298(void *,void *,s32,s32);
extern s32 func_020230c8(u32,s32);
extern void func_020d60b8(s32),func_020d3f38(s32),func_020d9090(void),func_020619c8(void *);
extern void func_0206e7a0(s32,void *,void *,s32);
extern void func_02060110(void *,void *,void *,s32,void *);
typedef struct {s32 x,y,z;u8 f0c,pad0d;u16 f0e;u8 f10,pad11;u16 f12;u8 f14;} ActionEffect;
extern void func_0210d27c(int);
extern void func_020daefc(void *, void *, void *, int, void *, int, int);
extern u8 *func_0205bad4(void *);
extern void func_020d3fe8(void *, void *, void *);
extern int func_020d3160(int, int, void *, int);
extern void func_02030468(void *, int);
extern void func_020d907c(void *);
extern void func_020d56d8(void *, void *, int, int);
extern void func_020dd810(void *, int, int);
extern void func_020bfff4(u16);
static inline void apply_self_action(u8 *self,u8 *action,u8 *ctx) {
s32 zero=0;
func_020daefc(self,self,action,zero,0,0,zero);
if(*(s16*)(ctx+0x90)){func_0210d27c(*(s16*)(ctx+0x90));*(s16*)(ctx+0x90)=zero;}
}

void func_020d5fd0(void *);
void func_020d4eb8(void *);
void func_0205ee3c(u8 *self,s32 arg1) {
u8 *target,*aux,*ctx,*action,*node,*entry;
u8 *filter;
s32 done,flags,one;
s32 zero;
ctx=*(u8**)(self+0x128);one=1;filter=0;zero=0;
func_020d9da8(32);func_020d9ea8(8,48);
flags=func_0205bcb0(self,(u16)*(u32*)(ctx+52));
if((flags&1) && *(s16*)(ctx+28)==0){
*(s16*)(ctx+28)=one;
if(!(ctx[0x76]&1)){action=*(u8**)(ctx+8);aux=*(u8**)(ctx+12);}
else {u8 *p=*(u8**)(ctx+0x78);action=*(u8**)(p+4);aux=*(u8**)(p+12);}
switch(action[7]){
case 8:{
s32 ok;
if((*(u8**)(self+0x118))[0]==0){
s32 res;ok=0;res=func_020db298(self,action,aux[0x43],*(u16*)(aux+0x50));
if(res!=-1){*(s32*)(*data_02160244+0x84)=res;ok=1;}
else{func_020d60b8(91);((u8*)data_02160244)[0x16e]=1;((u8*)data_02160244)[0x16c]=0;((u8*)data_02160244)[0x16d]=1;}
}else{
s32 res;ok=0;res=func_020db1f4(self,action,aux[0x43],511);
if(res!=-1){*(s32*)(*data_02160244+0x84)=res;ok=1;}
}
s32 one=1,zero=0;
if(ok){
if(*(s16*)(ctx+0x90)){func_0210d27c(*(s16*)(ctx+0x90));*(s16*)(ctx+0x90)=zero;}
(*data_02160244)[0x6c]=4;*(u16*)(*data_02160244+0x7e)=one;
func_020d3160(6,(**(u8**)(self+0x118)),(void*)zero,*(u16*)(self+0x90)&255);
func_020d3f38(*(s16*)(action+0x16)&255);
func_020d3160(one,*(s16*)(action+0x16)&255,(void*)zero,*(u16*)(self+0x90)&255);
{s16 n=func_020d3160(8,zero,(void*)zero,zero);u8 *p=*(u8**)(self+0x118);if(p[0]==0 && n>=2)func_02030468(p,5);}
}else{func_020d3160(7,zero,(void*)zero,zero);func_020d3160(zero,zero,(void*)zero,zero);}
break;
}
case 10:{s32 zero=0;func_020daefc(self,self,action,0,0,0,zero);if(*(s16*)(ctx+0x90)){func_0210d27c(*(s16*)(ctx+0x90));*(s16*)(ctx+0x90)=zero;}break;}
default:{
s16 count;
if(action[0]!=5){
func_020d3fe8(self,func_0205bad4(ctx),action);
func_020d3160(1,*(s16*)(action+0x16)&255,aux,*(u16*)(self+0x90)&255);
{s16 n=func_020d3160(8,0,0,0);u8 *p=*(u8**)(self+0x118);if(p[0]==0 && n>=2)func_02030468(p,5);}
}
if(func_020230c8(*(u32*)(action+0x2c),150)){
filter=0;node=func_0205bad4(ctx);
while(node){if(*(u32*)ctx==*(u32*)node){filter=*(u8**)(aux+4);break;}node=*(u8**)(node+24);}
}
count=0;
for(node=func_0205bad4(ctx);node;node=*(u8**)(node+24)){
s32 ok=0;
target=*(u8**)node;
if(target && *(u8**)(target+0x118)){if(filter){if(target==filter)ok=1;}else ok=1;}
if(ok){
entry=*(u8**)(target+0x118);
if(entry[0]==0 && (**(u8**)(self+0x118))==1){
if(*(u16*)(*data_02160244+0x7e)==0){(*data_02160244)[0x6c]=2;*(u16*)(*data_02160244+0x7e)=1;}
}else if(entry[0]==1 && (**(u8**)(self+0x118))==0 && *(u16*)(*data_02160244+0x7e)==0){
func_020d907c(target+0x1a8);(*data_02160244)[0x6c]=1;*(u16*)(*data_02160244+0x7e)=1;
}
entry=*(u8**)(target+0x118);
if(entry[0]==0){if(*(u16*)(ctx+0x40)&2)*(u16*)(node+4)|=16;
func_020daefc(self,target,action,0,node,0,0);
if(*(s16*)(ctx+0x90))func_0210d27c(*(s16*)(ctx+0x90));
if(action[0]==5){
ActionEffect effect;
s16 id=*(s16*)(action+0x16);
u8 q;
effect.f14=id%10;q=(u8)(u16)(id/10);
effect.f0c=0;effect.f0e=0;effect.f10=0;effect.f12=0;effect.x=0;effect.y=0;effect.z=0;
func_0206e7a0(q,target,&effect,0);
if(action[0x1e])func_0210d27c(action[0x1e]);
}
func_020d56d8(self,target,0,1);func_020d56d8(self,target,0,2);}
else if(entry[0]==1 && *(u32*)(entry+0x70)){if(*(u16*)(ctx+0x40)&2)*(u16*)(node+4)|=16;
func_020daefc(self,target,action,0,node,0,0);
if(*(s16*)(ctx+0x90))func_0210d27c(*(s16*)(ctx+0x90));
if(action[0]==5){
ActionEffect effect;
s16 id=*(s16*)(action+0x16);
u8 q;
effect.f14=id%10;q=(u8)(u16)(id/10);
effect.f0c=0;effect.f0e=0;effect.f10=0;effect.f12=0;effect.x=0;effect.y=0;effect.z=0;
func_0206e7a0(q,target,&effect,0);
if(action[0x1e])func_0210d27c(action[0x1e]);
}
func_020d56d8(self,target,0,1);func_020d56d8(self,target,0,2);func_02060110(target,action,node,1,ctx);count++;}
}
}
if(action[0]!=5 && (**(u8**)(self+0x118))==0 && count)func_02030468(*(u8**)(self+0x118),1);
if(*(s16*)(ctx+0x90))*(s16*)(ctx+0x90)=0;
break;
}
}
}
if(flags&2){func_020dd810(self,0,0);*(s16*)(ctx+28)=2;}
if(*(s16*)(ctx+28)==2 && ((u8*)data_02160244)[0x16e]==0){
if(*(u16*)(*data_02160244+0x7e)){
func_020d9090();*(u16*)(*data_02160244+0x7e)+=2;
if(*(u16*)(*data_02160244+0x7e)>10){*(u16*)(*data_02160244+0x7e)=zero;*(s16*)(ctx+28)=3;}
}else *(s16*)(ctx+28)=3;
if(*(void**)(*data_02160244+0x84)){func_020619c8(*(void**)(*data_02160244+0x84));*(s32*)(*data_02160244+0x84)=done;}
}
if(*(s16*)(ctx+28)!=3)return;
done=0;
{
s16 limit=*(s16*)(ctx+0xa4);
(*(s32*)(ctx+20))++;
if(limit==0)done=1;else if(*(s32*)(ctx+20)>limit){*(s32*)(ctx+20)=done;done=1;}
}
if(done==1){
func_020bfff4(*(u16*)(self+0x90));
if((**(u8**)(self+0x118))==0){
*(u16*)(ctx+0x1e)|=0x100;
if((*(u8**)(ctx+8))[7]!=8)*(s32*)(ctx+36)=299;
else {func_020d5fd0(self);func_020d4eb8(self);}
}else if((**(u8**)(self+0x118))==1){
if(arg1==0)*(s32*)(ctx+36)=9999;
else if(arg1==1){func_020d5fd0(self);func_020d4eb8(self);}
}
}
}

void func_0205f6cc(u8 *self) {
u8 *target, *aux, *ctx, *node, *entry, *action;
s16 count;
int flags;
int one=1, eight=8;
ctx=*(u8**)(self+0x128);
func_020d9da8(0x20);
func_020d9ea8(eight,0x30);
flags=func_0205bcb0(self,(u16)*(u32*)(ctx+0x34));
if ((flags&1) && *(s16*)(ctx+0x1c)==0) {
*(s16*)(ctx+0x1c)=one;
action=*(u8**)(ctx+8); aux=*(u8**)(ctx+12);
switch(action[7]) {
case 8:
func_020db1f4(self,action,aux[0x43],0x200-one);
if (*(s16*)(ctx+0x90)) {func_0210d27c(*(s16*)(ctx+0x90)); *(s16*)(ctx+0x90)=0;}
break;
case 10:
func_020daefc(self,self,action,0,0,0,0);
if (*(s16*)(ctx+0x90)) {func_0210d27c(*(s16*)(ctx+0x90)); *(s16*)(ctx+0x90)=0;}
break;
default:
if(action[0]!=5) {
func_020d3fe8(self,func_0205bad4(ctx),action);
func_020d3160(one,*(s16*)(action+0x16)&255,aux,*(u16*)(self+0x90)&255);
{ s16 n=func_020d3160(eight,0,0,0);
u8 *p=*(u8**)(self+0x118);
if(p[0]==0 && n>=2) func_02030468(p,5); }
}
count=0;
node=func_0205bad4(ctx);
while(node) {
target=*(u8**)node;
if(target && *(u32*)(*(u8**)(target+0x118)+0x70)) {
entry=*(u8**)(target+0x118);
if(entry[0]==0 && (*(u8**)(self+0x118))[0]==1) {
if(*(u16*)(*data_02160244+0x7e)==0) {(*data_02160244)[0x6c]=2; *(u16*)(*data_02160244+0x7e)=one;}
} else if(entry[0]==1 && (*(u8**)(self+0x118))[0]==0 && *(u16*)(*data_02160244+0x7e)==0) {
func_020d907c(target);
(*data_02160244)[0x6c]=one;
*(u16*)(*data_02160244+0x7e)=one;
}
if(*(u16*)(ctx+0x40)&2) *(u16*)(node+4)|=0x10;
func_020daefc(self,target,action,0,node,0,0);
if(*(s16*)(ctx+0x90)) func_0210d27c(*(s16*)(ctx+0x90));
count++;
func_020d56d8(self,target,0,one);
func_020d56d8(self,target,0,2);
}
node=*(u8**)(node+0x18);
}
if(action[0]!=5 && (*(u8**)(self+0x118))[0]==0 && count!=0) func_02030468(*(u8**)(self+0x118),1);
if(*(s16*)(ctx+0x90)) *(s16*)(ctx+0x90)=0;
break;
}
}
if(flags&2) {func_020dd810(self,0,0); *(s16*)(ctx+0x1c)=2;}
if(*(s16*)(ctx+0x1c)!=2) return;
if(++*(int*)(ctx+0x14)<=10) return;
func_020bfff4(*(u16*)(self+0x90));
if((*(u8**)(self+0x118))[0]==0) {*(u16*)(ctx+0x1e)|=0x100; *(int*)(ctx+0x24)=0x12b; return;}
if((*(u8**)(self+0x118))[0]==1) *(int*)(ctx+0x24)=0x270f;
}
