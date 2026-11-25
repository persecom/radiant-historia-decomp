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
