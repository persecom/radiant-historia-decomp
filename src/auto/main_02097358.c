/* 4 functions from 0x02097358 to 0x02098268 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160244;
extern u16 data_021626a8,data_021628f8,data_02160a78;
extern void func_020a8810(void *,s32);
extern void func_020e24bc(void *,s16,s16,s32,s32);
extern void func_020e267c(void *,s16,s16,s32);
extern s32 func_02064b84(s32,s32,s32,s32);
extern void func_0210d27c(s32);
extern void func_020e25c4(void);
extern u8 *func_020ddb90(u16);
extern void func_02098694(u16),func_02098710(u16),func_0209877c(u16),func_020987e8(u16),func_02098854(u16);
extern void func_020e25fc(s32,u16,s32);
extern void func_020e9384(void *);
extern void func_02098268(void),func_020983ac(void),func_020984e4(void);
typedef struct { u16 v[10]; } Draw_02097fb4;
typedef struct { u16 f0,f1,f2,f3,f4,f5,f6,f7,f8,f9; } DrawFields_02097fb4;
extern const Draw_02097fb4 data_02141fb0;
extern u8 *data_02160a74;
void func_020e1bc4(s32, s32);
void func_020a3bbc(s32);
void func_021098ac(void *);
void func_020e3f30(s32, s32, s32);

extern u8 *data_0216011c;
void func_02097358(void) {
 u8 *base=data_0216011c; s32 z=0x2d4,two=2,zero=0,one=1;
 switch(*(u16 *)(base+0x2a)) {
 case 0:goto done;
 case 1: {
 u8 *a=*(u8 **)(base+0x30),*b=*(u8 **)(base+0x34);
 if(*(u16 *)(base+0x2c)==0) {
 u16 i;for(i=zero;i<2;i++)*(s32 *)(a+i*4+8)=0xff000;
 *(u16 *)(b+0x94)=zero;*(u16 *)(b+0x96)=zero;*(u16 *)(b+0x98)=240;*(u16 *)(b+0x9a)=35;
 *(s32 *)(b+0x8c)=0xf0000;*(s32 *)(b+0x90)=zero;
 *(s32 *)(b+0x9c)=-(*(s16 *)(b+0x98)-*(s16 *)(b+0x96))*4096;*(s32 *)(b+0xa0)=0x2a000;
 {s32 id=19;func_020a8810(*(u8 **)((*(u8 **)(data_02160a74+0x88))+0x4),id);func_020e24bc(*(u8 **)(data_02160a74+0x88),id+244,148,1,zero);func_020a8810(*(u8 **)((*(u8 **)(data_02160a74+0x8c))+0x4),20);func_020e24bc(*(u8 **)(data_02160a74+0x8c),id+244,171,2,zero);func_020a8810(*(u8 **)((*(u8 **)(data_02160a74+0x90))+0x4),21);
 {s32 three=3;func_020e24bc(*(u8 **)(data_02160a74+0x90),three-141,(*(s32 *)(b+0xa0)>>12)+4,three,three);}}
 (*(u16 *)(base+0x2c))++;goto done;
 }else if(*(u16 *)(base+0x2c)==1){
 u16 i;for(i=zero;i<2;i++){if(*(u16 *)(a+0x98)>i*3){s32 *x=(s32 *)(a+i*4+8);*x-=*x/9;if(*x<=0x89000)*x=0x89000;}}
 if(a){(*(volatile u16 *)(a+0x98))++;if(*(volatile u16 *)(a+0x98)>10)*(volatile u16 *)(a+0x98)=10;}
 *(s32 *)(b+0x8c)-=*(s32 *)(b+0x8c)/3;*(s32 *)(b+0x9c)=*(s32 *)(b+0x90)-*(s32 *)(b+0x8c);
 func_020e267c(*(u8 **)(data_02160a74+0x88),(*(s32 *)(a+0x8)>>12)+8,148,z);
 func_020e267c(*(u8 **)(data_02160a74+0x8c),(*(s32 *)(a+0xc)>>12)+8,171,z);
 func_020e267c(*(u8 **)(data_02160a74+0x90),(*(s32 *)(b+0x9c)>>12)+5,(*(s32 *)(b+0xa0)>>12)+4,z);
 if(*(s32 *)(b+0x8c)<15 && *(s32 *)(a+0xc)==0x89000)(*(u16 *)(base+0x2c))++;goto done;
 }else if(*(u16 *)(base+0x2c)==2){
 s32 hit=zero;
 if(*(u16 *)(data_02160a74+0x1be)==0) {
 if(data_021626a8&0x40){do {if(a[2]==0)a[2]=one;else a[2]--;}while(a[3+a[2]]==0);func_0210d27c(2);}
 if(data_021626a8&0x80){do {a[2]=(u8)(a[2]+1)%2;}while(a[3+a[2]]==0);func_0210d27c(2);}
 if(func_02064b84(137,146,119,18)){u8 selected=a[2];if(selected!=0)a[2]=0;else if(selected==0)hit=1;}
 else if(func_02064b84(137,169,119,18)){u8 selected=a[2];if(selected!=1)a[2]=1;else if(selected==1)hit=1;}
 touch_done:
 if(*(s16 *)(data_02160a74+0x1bc)!=a[2]) {
 if(a[2]==0){func_020a8810(*(u8 **)((*(u8 **)(data_02160a74+0x88))+0x4),19);func_020a8810(*(u8 **)((*(u8 **)(data_02160a74+0x8c))+0x4),20);}
 else if(a[2]==1){func_020a8810(*(u8 **)((*(u8 **)(data_02160a74+0x88))+0x4),20);func_020a8810(*(u8 **)((*(u8 **)(data_02160a74+0x8c))+0x4),19);}
 func_0210d27c(2);*(u16 *)(data_02160a74+0x1bc)=a[2];
 }
 if((data_021626a8&1)||hit){
 *(u16 *)(data_02160a74+0x1be)=1;
 if(a[2]==0){func_020e267c(*(u8 **)(data_02160a74+0x88),(*(s32 *)(a+0x8)>>12)+9,149,724);}
 else if(a[2]==1){func_020e267c(*(u8 **)(data_02160a74+0x8c),(*(s32 *)(a+0xc)>>12)+9,172,724);}
 func_0210d27c(11);
 }
 }else {
 (*(u16 *)(data_02160a74+0x1be))++;
 if(*(u16 *)(data_02160a74+0x1be)>5){*(s32 *)(b+0x8c)=0x100000;*(s32 *)(b+0x90)=-0x100000;*(u16 *)(a+0x98)=hit;(*(u16 *)(base+0x2c))++;}
 }goto done;
 }else if(*(u16 *)(base+0x2c)==3) {
 u16 i;for(i=zero;i<2;i++){if(*(u16 *)(a+0x98)>i*3){s32 *x=(s32 *)(a+i*4+8);*x+=*x/9;if(*x>=0x100000)*x=0x100000;}}
 if(a){(*(volatile u16 *)(a+0x98))++;if(*(volatile u16 *)(a+0x98)>10)*(volatile u16 *)(a+0x98)=10;}
 *(s32 *)(b+0x8c)-=*(s32 *)(b+0x8c)/3;*(s32 *)(b+0x9c)=*(s32 *)(b+0x90)+*(s32 *)(b+0x8c);
 if(*(s32 *)(b+0x8c)<15 && *(s32 *)(a+0xc)==0x100000){*(s32 *)(b+0x9c)=-0x100000;(*(u16 *)(base+0x2c))++;}
 {s32 d=0;if(a[2]==0)d=1;func_020e267c(*(u8 **)(data_02160a74+0x88),(*(s32 *)(a+0x8)>>12)+8+d,148+d,724);}
 {s32 d=0;if(a[2]==0)d=1;func_020e267c(*(u8 **)(data_02160a74+0x8c),(*(s32 *)(a+0xc)>>12)+8+d,171+d,z);}
 func_020e267c(*(u8 **)(data_02160a74+0x90),(*(s32 *)(b+0x9c)>>12)+5,(*(s32 *)(b+0xa0)>>12)+4,z);
 goto done;
 }else if(*(u16 *)(base+0x2c)==4) {
 func_020e25c4();*(s32 *)(data_02160a74+0x58)&=~0x8000;
 if(a[2]==0){
 *(u16 *)(base+0x28)|=7;*(u16 *)(base+0x2a)=two;*(u16 *)(base+0x2c)=zero;
 *(u16 *)(data_02160a74+0x1b6)=one;
 if(*(u16 *)(data_02160244+0xf4)==4)*(u16 *)(data_02160a74+0x1b6)=two;
 else if(*(u16 *)(data_02160244+0xf4)==5)*(u16 *)(data_02160a74+0x1b6)=4;
 else if(*(u16 *)(data_02160244+0xf4)==3)*(u16 *)(data_02160a74+0x1b8)=zero;
 *(u16 *)(data_02160a74+0x1b0)=*(u16 *)(data_02160a74+0x1b6);*(u16 *)(base+0x38)=one;
 }else if(a[2]==1) {
 u16 i=zero;*(u16 *)(base+0x28)|=1;*(u16 *)(base+0x2a)=i;*(u16 *)(data_02160244+0xf4)=i;
 *(u16 *)(data_02160a74+0x1b6)=0xffff;*(u16 *)(data_02160a74+0x1b0)=*(u16 *)(data_02160a74+0x1b6);*(u16 *)(data_02160a74+0x1b8)=255;*(u16 *)(data_02160a74+0x1ba)=7;data_02160a74[0x1ca]=i;base[0x46]=i;
 for(;i<3;i++){u8 *p=func_020ddb90(i);if(p && (*(s32 *)(p+0x80)&0x800))*(s32 *)(p+0x80)&=~0x800;}
 }goto done;
 }
 }break;
 case 2: {
 if(!(*(u16 *)(base+0x28)&8))goto done;
 *(s32 *)(data_02160a74+0x58)|=0x40000;
 if(!(*(u16 *)(base+0x28)&16)) {
 *(u16 *)(base+0x28)|=16;*(volatile u16 *)(base+0x28)&=0xfffd;*(volatile u16 *)(base+0x28)|=32;
 if(*(u16 *)(data_02160244+0xf4)==1)func_02098694(*(u16 *)(base+0x2c));
 else if(*(u16 *)(data_02160244+0xf4)==2)func_02098710(*(u16 *)(base+0x2c));
 else if(*(u16 *)(data_02160244+0xf4)==3)func_0209877c(*(u16 *)(base+0x2c));
 else if(*(u16 *)(data_02160244+0xf4)==4)func_020987e8(*(u16 *)(base+0x2c));
 else if(*(u16 *)(data_02160244+0xf4)==5)func_02098854(*(u16 *)(base+0x2c));
 func_020e25fc(9,*(u16 *)(base+0x3a),1);
 }
 if(!(data_021626a8&1) && !data_021628f8)goto done;
 if(*(u16 *)(base+0x3c)==0) {
 func_0210d27c(two);(*(u16 *)(base+0x2c))++;
 func_020e25fc(9,5,zero);
 *(volatile u16 *)(base+0x28)&=0xfff7;*(volatile u16 *)(base+0x28)&=0xffef;*(volatile u16 *)(base+0x28)&=0xffdf;*(volatile u16 *)(base+0x28)|=2;
 data_02160a78=zero;
 switch(*(u16 *)(data_02160244+0xf4)) {
 case 1:
 switch(*(u16 *)(base+0x2c)) {
 case 1:*(u16 *)(base+0x38)=two;*(u16 *)(data_02160a74+0x1b8)=one;break;
 case 2:*(u16 *)(base+0x38)=3;*(u16 *)(data_02160a74+0x1ba)=two;break;
 case 3:*(u16 *)(base+0x38)=4;*(u16 *)(base+0x42)=zero;break;
 case 4:*(u16 *)(base+0x38)=6;*(u16 *)(data_02160a74+0x1b6)=0xffff;*(u16 *)(data_02160a74+0x1b0)=*(u16 *)(data_02160a74+0x1b6);func_020e9384(**(void ***)(*(u8 **)(data_02160a74+0xa0)));*(u16 *)(data_02160a74+0x1b8)=255;*(u16 *)(data_02160a74+0x1ba)=7;*(u16 *)(base+0x40)=one;*(u16 *)(base+0x3e)=5;break;
 case 6:*(u16 *)(base+0x38)=6;*(u16 *)(data_02160a74+0x1b6)=0xffff;*(u16 *)(data_02160a74+0x1b0)=*(u16 *)(data_02160a74+0x1b6);func_020e9384(**(void ***)(*(u8 **)(data_02160a74+0xa0)));*(u16 *)(data_02160a74+0x1b8)=255;*(u16 *)(data_02160a74+0x1ba)=7;*(u16 *)(base+0x40)=one;*(u16 *)(base+0x3e)=7;break;
 case 8:*(u16 *)(base+0x38)=zero;break;
 }break;
 case 2:
 switch(*(u16 *)(base+0x2c)) {
 case 1:*(u16 *)(base+0x38)=two;*(u16 *)(data_02160a74+0x1b8)=one;break;
 case 2:*(u16 *)(base+0x38)=3;*(u16 *)(data_02160a74+0x1ba)=two;break;
 case 3:*(u16 *)(base+0x38)=one;break;
 case 4:*(u16 *)(base+0x38)=two;*(u16 *)(data_02160a74+0x1b8)=one;break;
 case 5:*(u16 *)(base+0x38)=3;*(u16 *)(data_02160a74+0x1ba)=two;break;
 case 6:*(u16 *)(base+0x38)=4;*(u16 *)(base+0x42)=one;break;
 case 7:*(u16 *)(base+0x38)=one;break;
 case 8:*(u16 *)(base+0x38)=two;*(u16 *)(data_02160a74+0x1b8)=63;break;
 case 9:*(u16 *)(base+0x38)=4;*(u16 *)(base+0x42)=one;break;
 case 10:*(u16 *)(data_02160a74+0x1b6)=0xffff;*(u16 *)(data_02160a74+0x1b0)=*(u16 *)(data_02160a74+0x1b6);func_020e9384(**(void ***)(*(u8 **)(data_02160a74+0xa0)));*(u16 *)(data_02160a74+0x1b8)=255;*(u16 *)(data_02160a74+0x1ba)=7;*(u16 *)(base+0x38)=zero;break;
 }break;
 case 3:func_02098268();break;
 case 4:func_020983ac();break;
 case 5:func_020984e4();break;
 default:break;
 }
 } else {
 (*(volatile u16 *)(base+0x3a))++;func_020e25fc(9,*(volatile u16 *)(base+0x3a),1);(*(u16 *)(base+0x3c))--;func_0210d27c(2);
 }
 }break;
 }
 done:
 if(*(u16 *)(base+0x38)==0)*(s32 *)(data_02160a74+0x58)&=~0x40000;
}

void func_02097fb4(void) {
u8 *base=data_0216011c;
u8 *a=*(u8 **)(base+0x30), *b=*(u8 **)(base+0x34);
Draw_02097fb4 d=data_02141fb0;
u16 i;
switch(*(u16 *)(base+0x2a)) {
case 0: return;
case 1:
func_020e1bc4(0x2d2,0);
*(volatile u32 *)0x40004a4=0x1f0080;
func_020a3bbc(0x5f);
for(i=0;i<2;i++) {
if(a[3+i]) {
if(a[2]==i) {
if(*(u16 *)(data_02160a74+0x1be)==0) func_020a3bbc(0x60);
else func_020a3bbc(0x61);
} else func_020a3bbc(0x5f);
d.v[5]=*(s32 *)(a+8+4*i)>>12;
d.v[6]=192-(2-i)*23;
d.v[7]=0x2d3;
func_021098ac(&d);
}
}
*(volatile u32 *)0x40004a4=0x1f0080;
func_020a3bbc(0x5e);
d.v[1]=0; d.v[2]=1; d.v[3]=1; d.v[4]=33; d.v[8]=163; d.v[9]=33;
d.v[5]=*(s32 *)(b+0x9c)>>12;
d.v[6]=*(s32 *)(b+0xa0)>>12;
d.v[7]=0x2d3; func_021098ac(&d);
d.v[1]=54; d.v[2]=1; d.v[3]=10; d.v[8]=10; d.v[4]=33; d.v[9]=33;
d.v[5]=(*(s32 *)(b+0x9c)>>12)+163;
d.v[6]=*(s32 *)(b+0xa0)>>12;
d.v[7]=0x2d3; func_021098ac(&d);
break;
case 2:
if(!(*(u16 *)(base+0x28)&2)) func_020e1bc4(0x2d2,0);
if(*(u16 *)(base+0x28)&0x20) {
*(volatile u32 *)0x40004a4=0x1f0080;
func_020e3f30(0,-96,0x2d3);
}
break;
}
}

s32 func_020981fc(u16 arg0) {
    u8 *p = data_0216011c;
    if (p == NULL) {
        return 0;
    }
    if ((*(u16 *)(p + 0x28) & 4) != 0 &&
        *(u16 *)(p + 0x38) == arg0 &&
        *(u16 *)(p + 0x42) == 0 &&
        *(u8 *)(p + 0x45) == 0) {
        return 1;
    }
    return 0;
}

void func_02098248(s32 arg0) {
    if (arg0 != 0 && data_0216011c != NULL) {
        *(u16 *)(data_0216011c + 0x42) = 0;
    }
}
