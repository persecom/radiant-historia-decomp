/* 5 functions from 0x0209D0F0 to 0x0209DFDC (main), found by ds-decomp. */
#include "common.h"
extern void func_02033138(void *);
extern void func_0209625c(void);
extern void func_02096740(void *,s32);
extern u8 *func_020c2dd8(u16);
extern void func_02031da0(u32,u32,u32,void *,u16);
extern void func_020df9dc(void *,void *);
extern void func_020df9c8(void *);
extern void func_020960dc(void);
extern void func_02096670(s32,s32,s32);
extern void func_020d0a40(s32);
extern void func_02096cfc(void *);
extern void func_02093424(void *,s32);
extern void func_02095f68(void *);
extern void func_0209353c(u32,s32,s32);
extern void func_02033144(void *,void *);
extern void func_02031fbc(void *,s32,s32);
extern void func_02031ec8(u32,u32,u32,void *,u16);
extern void func_0209568c(s32,u8);
extern void func_02095770(s32);
extern void func_020934ac(void *);
extern void func_020de078(void);
extern u8 *data_02160a74;
extern u8 *data_02160110;
extern u16 data_021626a8,data_021626a6;

extern u32 data_02155c3c;
extern u8 data_02148958[];
extern void *func_0210c594(u32, u32);
extern void func_0210c5dc(void *);
extern void *func_020a94b8(void *);
extern void *func_020a8604(s32, s32);
extern void func_020a8810(void *, u32);
extern void func_020a957c(void ***);

extern int func_020df38c(int,int);
extern int func_02064b84(int,int,int,int);
extern void func_0210d27c(int);
extern void func_020e86c0(int);
extern void func_020e8410(int,int,int);
extern void func_0209cbac(void);
extern u8 *func_02032254(u16);
extern void func_02095a9c(u32,u32,u16,u8);
extern void func_020e24bc(void *,int,int,int,int);
extern void func_020e8504(int);
void func_0209d0f0(void) {
void *screen=*(void **)(data_02160a74+0x94);
int one=1;
u8 *obj,*other;
int changed=0;
*(u32 *)(data_02160a74+0x58)|=0x80000;
if(*(s16 *)(data_02160110+0xde)<*(s16 *)(data_02160110+0xe2))
*(s16 *)(data_02160110+0xde)=*(s16 *)(data_02160110+0xe2);
if(!func_020df38c(3,0x384000) && ((data_021626a8&2)||func_02064b84(4,0x80,0x12,0x12))) {
func_020df38c(1,1); func_0210d27c(5); func_020e86c0(0x13);
}
if(!func_020df38c(3,0x380001) && ((data_021626a8&0x400)||func_02064b84(0xcf,4,0x2d,0xe))) {
u8 *p; u32 bits;
func_020df38c(one,0x4000); *(u32 *)(data_02160a74+0x19c)=0x4000;
p=data_02160a74; bits=*(u32 *)(p+0x58)&0x4000;
if(bits) {*(u32 *)(p+0x58)&=~0x4000; func_020e8410(one,3,0);}
else if(bits==0) {*(u32 *)(p+0x58)|=0x4000; func_020e8410(one,3,one);}
changed=1; func_0210d27c(1);
}
if(!func_020df38c(3,0x304001) && ((data_021626a6&0x40)||func_02064b84(0xb,0x2f,0x94,0xe))) {
func_020df38c(1,0x80000); *(u32 *)(data_02160a74+0x19c)=0x80000; func_0210d27c(0x1f);
(*(s16 *)(data_02160110+0xde))--;
if(*(s16 *)(data_02160110+0xde)<*(s16 *)(data_02160110+0xe2)) *(s16 *)(data_02160110+0xde)=8;
func_0209cbac();
}
if(!func_020df38c(3,0x184001) && ((data_021626a6&0x80)||func_02064b84(0xb,0x53,0x94,0xe))) {
func_020df38c(1,0x200000); *(u32 *)(data_02160a74+0x19c)=0x200000; func_0210d27c(0x1f);
(*(s16 *)(data_02160110+0xde))++;
if(*(s16 *)(data_02160110+0xde)>8) *(s16 *)(data_02160110+0xde)=*(s16 *)(data_02160110+0xe2);
func_0209cbac();
}
if(!func_020df38c(3,0x384001) && ((data_021626a8&1)||func_02064b84(0xb,0x41,0x94,0xe))) {
if(data_02160a74[0x1c3]==0) {
func_020df38c(1,0x100000); *(u32 *)(data_02160a74+0x19c)=0x100000;
if(data_02160a74[0x1cd]==0) {
u8 *entry=func_02032254((u16)(*(s16 *)(data_02160110+0xde)+1));
if(**(u8 **)(*(u8 **)entry+0x118)==1) {
entry=func_02032254((u16)(*(s16 *)(data_02160110+0xb6)-1));
func_02095a9c(*(u32 *)(entry+20),*(u32 *)(entry+8),*(u16 *)(data_02160110+0x108),data_02160110[0x10a]);
func_020e24bc(screen,0x2a,0x43,0xd,0); func_020e86c0(0x14);
}
} else if(data_02160a74[0x1cd]==1) {
u8 *entry=func_02032254((u16)(*(s16 *)(data_02160110+0xb6)-1));
obj=*(u8 **)entry;
other=*(u8 **)func_02032254((u16)(*(s16 *)(data_02160110+0xde)+1));
u32 value=*(u32 *)(entry+8);
func_0210d27c(0x10);
if(**(u8 **)(obj+0x118)==0 && obj!=other) {
func_020e24bc(screen,0x2a,0x43,0xe,0);
func_02095a9c(*(u32 *)(entry+20),value,*(u16 *)(data_02160110+0x108),data_02160110[0x10a]);
func_020e86c0(0x16);
}
}
} else func_0210d27c(7);
}
if(changed) {
if(data_02160a74[0x1cd]==0) func_020e8504(8);
else if(data_02160a74[0x1cd]==1) func_020e8504(9);
}
}

void func_0209d550(void){
u8 *a,*b,*obj;
s32 zero=0;
s32 i,count;
switch(*(u16 *)(data_02160110+0xec)){
case 0:
a=func_02032254((u16)(*(s16 *)(data_02160110+0xb6)-1));
func_020960dc();func_02096670(2,zero,zero);
*(u16 *)(data_02160110+0xd2)&=0xfffe;func_020d0a40(32);
b=*(u8 **)(*(u8 **)(a+0x14)+8);
*(s16 *)(data_02160110+0xee)=*(s16 *)(b+12);*(s16 *)(data_02160110+0xf0)=*(s16 *)(b+14);*(s16 *)(data_02160110+0xf2)=*(s16 *)(b+14);
a=func_02032254((u16)(*(s16 *)(data_02160110+0xde)+1));
b=*(u8 **)(*(u8 **)(a+0x14)+8);
*(s16 *)(data_02160110+0xf4)=*(s16 *)(b+14);
data_02160110[0xf6]=1;data_02160110[0xf7]=zero;data_02160110[0xf8]=zero;data_02160110[0xf9]=8;data_02160110[0xfa]=zero;data_02160110[0xfb]=9;data_02160110[0xfc]=zero;*(u16 *)(data_02160110+0xec)=1;break;
case 1:
a=func_02032254((u16)(*(s16 *)(data_02160110+0xb6)-1));
b=*(u8 **)(*(u8 **)(a+0x14)+8);
*(s16 *)(data_02160110+0xee)=*(s16 *)(b+12);*(s16 *)(data_02160110+0xf0)=*(s16 *)(b+14);
switch(data_02160110[0xf6]){
case 0:break;
case 1:*(s16 *)(data_02160110+0xee)+=10;if(*(s16 *)(data_02160110+0xee)>20){*(s16 *)(data_02160110+0xee)=20;data_02160110[0xf6]=3;}break;
}
func_0209353c(*(u16 *)b,*(s16 *)(data_02160110+0xee),*(s16 *)(data_02160110+0xf0));
a=func_02032254((u16)(*(s16 *)(data_02160110+0xde)+1));
b=*(u8 **)(*(u8 **)(a+0x14)+8);
*(s16 *)(data_02160110+0xee)=*(s16 *)(b+12);*(s16 *)(data_02160110+0xf0)=*(s16 *)(b+14);
if(data_02160110[0xf7]==0){
*(s16 *)(data_02160110+0xee)+=data_02160110[0xfb];
if(*(s16 *)(data_02160110+0xee)>100){data_02160110[0xfb]--;if(data_02160110[0xfb]<3)data_02160110[0xfb]=3;}
if(*(s16 *)(data_02160110+0xee)>256)*(s16 *)(data_02160110+0xee)=-256;
func_0209353c(*(u16 *)b,*(s16 *)(data_02160110+0xee),*(s16 *)(data_02160110+0xf0));
data_02160110[0xfa]++;
if(data_02160110[0xfa]>6){data_02160110[0xfa]=0;data_02160110[0xf9]-=2;if(data_02160110[0xf9]==0){func_02093424(b,0);data_02160110[0xf7]=1;}}
data_02160110[0xfc]++;data_02160110[0xf8]++;
if(data_02160110[0xf8]>(data_02160110[0xf9]>>1)){
if(data_02160110[0xfc]<26)func_0210d27c(128);
func_02093424(b,zero);
if(data_02160110[0xf8]>data_02160110[0xf9])data_02160110[0xf8]=zero;
}else func_02093424(b,1);
if(data_02160110[0xfc]==28)func_0210d27c(53);
if(data_02160110[0xfc]>60)data_02160110[0xfc]=60;
}
if(data_02160110[0xf7]==1&&data_02160110[0xf6]==3)*(u16 *)(data_02160110+0xec)=2;break;
case 2:
a=func_02032254((u16)(*(s16 *)(data_02160110+0xb6)-1));
b=func_02032254((u16)(*(s16 *)(data_02160110+0xde)+1));
func_02033138(*(void **)(b+0x48));
i=zero;func_02031fbc(b,i,4);
func_0209625c();func_02096740(a,1);
obj=*(u8 **)a;
*(u32 *)(obj+0x80)&=~0x1000;
*(u16 *)(*(u8 **)(obj+0x118)+0x5a)=i;
count=i;
for(;;i++){
u8 *info=func_020c2dd8((u16)i);
if(info){
if(count==10)func_02031da0(*(u32 *)(info+4),*(u32 *)(info+12),*(u32 *)(info+8),info,(u16)i);
count++;if(count==11)break;
}
}
func_0209568c(3,zero);
if(obj&&**(u8 **)(obj+0x118)==0){
if(*(u32 *)(obj+0x80)&0x20000){*(u32 *)(obj+0x80)&=~0x20000;*(u16 *)(*(u8 **)(obj+0x118)+0xbc)=zero;}
}
if(*(void **)(data_02160a74+0x50)){
func_020df9dc(data_02160a74+0x4c,*(void **)(data_02160a74+0x50));
func_020df9c8(*(void **)(data_02160a74+0x50));
}
*(u16 *)(data_02160110+0xec)=3;break;
case 3:*(u16 *)(data_02160110+0xec)=zero;func_020e86c0(21);break;
}}

void func_0209da34(void){
u8 *a,*b,*obj,*info;
switch(*(u16 *)(data_02160110+0xec)){
case 0:
func_020960dc();func_02096670(2,0,0);
*(u16 *)(data_02160110+0xd2)&=0xfffe;func_020d0a40(32);
a=func_02032254((u16)(*(s16 *)(data_02160110+0xb6)-1));
b=*(u8 **)(*(u8 **)(a+0x14)+8);
*(s16 *)(data_02160110+0xee)=*(s16 *)(b+12);*(s16 *)(data_02160110+0xf0)=*(s16 *)(b+14);*(s16 *)(data_02160110+0xf2)=*(s16 *)(b+14);
a=func_02032254((u16)(*(s16 *)(data_02160110+0xde)+1));
b=*(u8 **)(*(u8 **)(a+0x14)+8);
*(s16 *)(data_02160110+0xf4)=*(s16 *)(b+14);
data_02160110[0xf6]=0;data_02160110[0xf7]=0;data_02160110[0xf8]=0;data_02160110[0xf9]=8;data_02160110[0xfa]=0;data_02160110[0xfb]=9;*(u16 *)(data_02160110+0xec)=1;
func_02096cfc(*(void **)a);
obj=*(u8 * *)(data_02160110+0x104);*(s16 *)(obj+12)=0;*(s16 *)(obj+14)=0;func_02093424(obj,0);break;
case 1:
a=func_02032254((u16)(*(s16 *)(data_02160110+0xb6)-1));
b=*(u8 **)(*(u8 **)(a+0x14)+8);
*(s16 *)(data_02160110+0xee)=*(s16 *)(b+12);*(s16 *)(data_02160110+0xf0)=*(s16 *)(b+14);
if(data_02160110[0xf6]==0){*(s16 *)(data_02160110+0xee)+=16;if(*(s16 *)(data_02160110+0xee)>256){*(s16 *)(data_02160110+0xee)=-100;data_02160110[0xf6]=1;func_02095f68(*(void **)(a+0x14));}}
func_0209353c(*(u16 *)b,*(s16 *)(data_02160110+0xee),*(s16 *)(data_02160110+0xf0));
obj=*(u8 * *)(data_02160110+0x104);
if(data_02160110[0xf7]<=1){
*(s16 *)(data_02160110+0xee)=20;*(s16 *)(data_02160110+0xf0)=*(s16 *)(data_02160110+0xf4);func_0209353c(0x321,*(s16 *)(data_02160110+0xee),*(s16 *)(data_02160110+0xf0));data_02160110[0xf7]++;
}else if(data_02160110[0xf7]==2){
*(s16 *)(data_02160110+0xee)+=4;if(*(s16 *)(data_02160110+0xee)>82)data_02160110[0xf7]=3;
goto horizontal;
}else if(data_02160110[0xf7]==3){
*(s16 *)(data_02160110+0xf0)=*(s16 *)(obj+14);*(s16 *)(data_02160110+0xee)=*(s16 *)(obj+12);
if(*(s16 *)(data_02160110+0xf2)<*(s16 *)(data_02160110+0xf0)){*(s16 *)(data_02160110+0xf0)-=8;if(*(s16 *)(data_02160110+0xf2)>=*(s16 *)(data_02160110+0xf0)){*(s16 *)(data_02160110+0xf0)=*(s16 *)(data_02160110+0xf2);data_02160110[0xf7]=4;}}
else if(*(s16 *)(data_02160110+0xf2)>*(s16 *)(data_02160110+0xf0)){*(s16 *)(data_02160110+0xf0)+=8;if(*(s16 *)(data_02160110+0xf2)<=*(s16 *)(data_02160110+0xf0)){*(s16 *)(data_02160110+0xf0)=*(s16 *)(data_02160110+0xf2);data_02160110[0xf7]=4;}}
func_0209353c(0x321,*(s16 *)(data_02160110+0xee),*(s16 *)(data_02160110+0xf0));
}else if(data_02160110[0xf7]==4){
*(s16 *)(data_02160110+0xee)=*(s16 *)(obj+12);*(s16 *)(data_02160110+0xee)-=4;
if(*(s16 *)(data_02160110+0xee)<20){func_0210d27c(19);*(s16 *)(data_02160110+0xee)=20;data_02160110[0xf7]=5;}
horizontal:
*(s16 *)(data_02160110+0xf0)=*(s16 *)(obj+14);
func_0209353c(0x321,*(s16 *)(data_02160110+0xee),*(s16 *)(data_02160110+0xf0));
}
if(data_02160110[0xf7]==5)*(u16 *)(data_02160110+0xec)=2;break;
case 2:
a=func_02032254((u16)(*(s16 *)(data_02160110+0xb6)-1));
b=func_02032254((u16)(*(s16 *)(data_02160110+0xde)+1));
func_02033144(*(void **)(a+0x48),*(void **)(b+0x48));
obj=*(u8 **)a;info=*(u8 **)(a+0x48);
func_02031fbc(a,0,4);
if(obj&&**(u8 **)(obj+0x118)==0){
if(*(u32 *)(obj+0x80)&0x20000){*(u32 *)(obj+0x80)&=~0x20000;*(u16 *)(*(u8 **)(obj+0x118)+0xbc)=0;}
}
func_02031ec8(*(u32 *)(info+4),*(u32 *)(info+12),*(u32 *)(info+8),info,(u16)(*(s16 *)(data_02160110+0xb6)-1));
func_0209568c(0,(u8)(*(s16 *)(data_02160110+0xb6)-1));func_02095770(0);
if(*(u8 * *)(data_02160110+0x104)){func_020934ac(*(u8 * *)(data_02160110+0x104));*(u8 * *)(data_02160110+0x104)=0;}
*(u16 *)(data_02160110+0xec)=3;break;
case 3:*(u16 *)(data_02160110+0xec)=0;func_020de078();func_020e86c0(23);data_02160a74[0x1cd]=0;break;
}}

void *func_0209decc(void)
{
  void **p = (void **) func_0210c594(0x94, data_02155c3c);
  u16 i;
  void **heap = (void **) (&data_02155c3c);
  p[0] = func_020a94b8(data_02148958);
  for (i = 0; i < 7; i++)
  {
    p[i + 1] = func_0210c594(4, *heap);
    *((void **) p[i + 1]) = func_020a8604(4, 1);
    func_020a8810(*((void **) p[i + 1]), 7);
  }

  return p;
}

void func_0209df60(void **arr) {
    s16 i;
    for (i = 0; i < 7; i++) {
        void *obj = arr[i + 1];
        void **vt = *(void ***)obj;
        ((void (*)(void *))vt[3])(vt);
        obj = arr[i + 1];
        if (obj != NULL) func_0210c5dc(obj);
        arr[i + 1] = NULL;
    }
    if (arr[0] != NULL) func_020a957c((void ***)arr);
    if (arr != NULL) func_0210c5dc(arr);
}
