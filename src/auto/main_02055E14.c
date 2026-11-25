/* 8 functions from 0x02055E14 to 0x02056D10 (main), found by ds-decomp. */
#include "common.h"
extern u16 data_021626a8, data_021628f8;
extern u16 data_02162908[4];
extern u8 *data_02160204;
extern void func_020a8810(void *, s32);
extern void func_020a957c(void *);
extern void *func_020a94b8(void *);
extern void func_0210d27c(s32);
extern void func_0210c5dc(void *);
typedef struct Unk_02055ebc { s16 field[44]; } Unk_02055ebc;
extern const Unk_02055ebc data_0213f344;
extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern void func_021167f0(void *, void *);
typedef struct { u16 unk[10]; } Unk20;
extern const Unk20 data_0213f3b0;
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
extern u8 *data_021600c0;
extern u8 *data_021600ac;
typedef struct Unk_02056460 { s16 field[10]; } Unk_02056460;
extern const Unk_02056460 data_0213f39c;
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);

void func_02055e14(u16 arg0) {
    u8 *p;
    u8 *node;
    p = data_021600c0;
    if (p == NULL) return;
    node = *(u8 **)(p + 0x40);
    if (node == NULL) return;
    for (;;) {
        if (*(u16 *)(node + 4) == arg0) {
            u8 *d = *(u8 **)node;
            *(volatile u32 *)0x040004a8 = (*(u32 *)(d + 4) >> 3) | (*(u32 *)(d + 0x18) << 26) |
                                          0x40000000 | (*(u32 *)(d + 0x10) << 20) |
                                          (*(u32 *)(d + 0x14) << 23) | 0x20000000;
            *(volatile u32 *)0x040004ac = *(u32 *)(d + 0xc) >> (4 - (*(u32 *)(d + 0x18) == 2));
            *(volatile u32 *)0x04000480 = 0x7fff;
            return;
        }
        node = *(u8 **)(node + 0xc);
        if (node == NULL) return;
    }
}

void func_02055ebc(void) {
 Unk_02055ebc buf = data_0213f344;
 u8 i;
 for(i=0;i<4;i++) {
  u8 *p=func_0210c594(0x34,data_02155c3c);
  s32 idx=i*11;
*(s16 *)(p+4)=buf.field[idx+0];
*(s16 *)(p+6)=buf.field[idx+1];
*(s16 *)(p+8)=buf.field[idx+2];
*(s16 *)(p+10)=buf.field[idx+3];
*(s16 *)(p+16)=buf.field[idx+4];
*(s16 *)(p+18)=buf.field[idx+5];
*(s16 *)(p+12)=buf.field[idx+6];
*(s16 *)(p+14)=buf.field[idx+7];
*(s16 *)(p+0x24)=buf.field[idx+8]+101;
p[2]=0;
*(s16 *)(p)=buf.field[idx+10];
p[3]=buf.field[idx+9];
p[0x26]=31;
func_021167f0(data_021600c0+0x34,p);
}
}

void func_02056460(void);
void func_0205654c(s32,s32);
void func_02055fb8(void) {
u8 i;
s32 stride=0x50;
u8 *p=*(u8 **)(data_021600ac+0x3a8);
if(!p)return;
switch(p[1]){
case 0:
for(i=0;i<4;i++){
*(s32 *)(p+i*4+8)=0x100000;
if(i==p[2])func_020a8810(*(void **)(data_021600ac+i*stride+0xb4),19);else func_020a8810(*(void **)(data_021600ac+i*stride+0xb4),20);
*(s32 *)(*(u8 **)(data_021600ac+i*stride+0xb4)+0x40)=1;
}
if(*(void **)(data_021600ac+0xac))func_020a957c(data_021600ac+0xac);
*(void **)(data_021600ac+0xac)=func_020a94b8(p+0x18);
p[1]=1;break;
case 1:
for(i=0;i<4;i++){
if(*(u16 *)(p+0x98)>i*3){
*(s32 *)(p+i*4+8)-=*(s32 *)(p+i*4+8)/7;
if(*(s32 *)(p+i*4+8)<=0x78000)*(s32 *)(p+i*4+8)=0x78000;
}
func_0205654c(i,*(s32 *)(p+i*4+8)+0xa000);
}
if(*(s32 *)(p+0x14)==0x78000)p[1]=2;
func_02056460();break;
case 2:
if(data_021626a8&0x40){
do{if(p[2]==0)p[2]=3;else p[2]--;}while(p[3+p[2]]==0);
func_0210d27c(2);
}
if(data_021626a8&0x80){
do{p[2]++;p[2]=(s32)p[2]%4;}while(p[3+p[2]]==0);
func_0210d27c(2);
}
if(data_021626a8&1){*(u16 *)(p+0x98)=0;p[1]=3;func_0210d27c(3);}
if((data_021626a8&2)&&p[1]!=3){
for(i=0;i<4;i++)if(p[3+i]==2){p[2]=i;*(u16 *)(p+0x98)=0;p[1]=3;func_0210d27c(5);break;}
}
if(p[1]!=3){
for(i=0;i<4;i++){
s32 y=192-(4-i)*24;
s32 bottom=y+22;
s32 touchY;
s32 x;
s32 inside;
if(!p[3+i])continue;
touchY=data_02162908[1];x=data_02162908[0];
if(x>=120&&x<=256&&touchY>=y&&touchY<=bottom)inside=1;else inside=0;
if(inside&&data_021628f8){
if(p[2]==i){*(u16 *)(p+0x98)=0;p[1]=3;func_0210d27c(11);}else{p[2]=i;func_0210d27c(2);}
}
}
}
for(i=0;i<4;i++)if(i==p[2])func_020a8810(*(void **)(data_021600ac+i*stride+0xb4),19);else func_020a8810(*(void **)(data_021600ac+i*stride+0xb4),20);
func_02056460();break;
case 3:
for(i=0;i<4;i++){
if(*(u16 *)(p+0x98)>i*3){
*(s32 *)(p+i*4+8)+=*(s32 *)(p+i*4+8)/6;
if(*(s32 *)(p+i*4+8)>=0x100000)*(s32 *)(p+i*4+8)=0x100000;
}
func_0205654c(i,*(s32 *)(p+i*4+8)+0xa000);
}
if(*(s32 *)(p+0x14)==0x100000){
p[1]=4;data_02160204[0x86]=p[2];
for(i=0;i<4;i++)*(s32 *)(*(u8 **)(data_021600ac+i*stride+0xb4)+0x40)=0;
func_020a957c(data_021600ac+0xac);
if(p)func_0210c5dc(p);
*(void **)(data_021600ac+0x3a8)=0;return;
}
func_02056460();break;
case 4:
*(s8 *)(data_02160204+0x86)=-1;
func_020a957c(data_021600ac+0xac);
if(p)func_0210c5dc(p);
*(void **)(data_021600ac+0x3a8)=0;return;
}
(*(u16 *)(p+0x98))++;
}

void func_02056460(void) {
 u8 i;
 Unk_02056460 buf = data_0213f39c;
 u8 *p = *(u8 **)(data_021600ac + 0x3a8);
 *(volatile u32 *)0x040004a4 = 0x1f00c0;
 for (i=0;i<4;i++) {
  if (p[3+i] != 0) {
   if(p[2]==i) {if(p[1]==3) func_020a3bbc(3); else func_020a3bbc(2);} else func_020a3bbc(1);
   buf.field[5]=*(s32 *)(p+8+i*4)>>12;
   buf.field[6]=194-(4-i)*25;
   func_021098ac(&buf);
  }
 }
}

extern u8 *data_021600ac;
extern void func_020a994c(void *);
extern void func_020a9610(void *,s32,s32,void *,s32,s32);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
void func_0205654c(s32 n,s32 x){
s32 off=n*0x50;
func_020a994c(data_021600ac+0xb8+off);
func_020a9610(data_021600ac+0xec+off,*(s32 *)(data_021600ac+0xac),n+1,*(void **)(data_021600ac+off+0xb4),0,0);
func_020a98ac(data_021600ac+0xb8+off);
func_020a98f4(data_021600ac+0xb8+off);
*(s32 *)(*(u8 **)(data_021600ac+off+0xb4)+0x4c)=0x2bc000;
*(s32 *)(*(u8 **)(data_021600ac+off+0xb4)+0x44)=x;
*(s32 *)(*(u8 **)(data_021600ac+off+0xb4)+0x48)=(0xc5-(4-n)*25)<<12;
}

extern void func_02056bb4(s32, s32, s32, s32, s32, u8);
extern void func_020468b0(s32);
extern void func_0205443c(s32);
void func_02056618(void) {
    u8 i;
    u8 *p;

    p = NULL;
    for (i = 0; i < 7; i++) {
        if (data_021600ac[0x3ac] & (1 << i)) {
            s32 off = i * 0xa4;
            if (data_021600ac[0x3b0 + off] == 0) {
                data_021600ac[0x3b0 + off] = 1;
                *(u16 *)(data_021600ac + 0x3b0 + off + 0x8a) = 0;
            }
        }
    }

    if (data_021600ac[0x4f8] != 0) {
        p = data_021600ac + 0x4f8;
        switch (data_021600ac[0x4f8]) {
        case 1:
            *(s16 *)(p + 0x94) = 0;
            *(s16 *)(p + 0x96) = 0;
            *(s16 *)(p + 0x98) = 0x8c;
            *(s16 *)(p + 0x9a) = 0x16;
            *(s32 *)(p + 0x8c) = 0x8a000;
            *(s32 *)(p + 0x90) = 0;
            *(s32 *)(p + 0x9c) = -(*(s16 *)(p + 0x98) - *(s16 *)(p + 0x96)) << 12;
            *(s32 *)(p + 0xa0) = 0x43000;
            p[8] = 1;
            p[0] = 2;
            break;
        case 2:
            *(s32 *)(p + 0x8c) -= *(s32 *)(p + 0x8c) / 3;
            *(s32 *)(p + 0x9c) = *(s32 *)(p + 0x90) - *(s32 *)(p + 0x8c);
            if (*(s32 *)(p + 0x8c) < 0xf) {
                p[0] = 3;
            }
            break;
        case 3:
            if (!(data_021600ac[0x3ac] & 4)) {
                p[0] = 4;
                *(s32 *)(p + 0x8c) = 0x8a000;
                *(s32 *)(p + 0x90) = -0x8a000;
            }
            break;
        case 4:
            *(s32 *)(p + 0x8c) -= *(s32 *)(p + 0x8c) / 3;
            *(s32 *)(p + 0x9c) = *(s32 *)(p + 0x90) + *(s32 *)(p + 0x8c);
            if (*(s32 *)(p + 0x8c) < 0xf) {
                p[0] = 0;
            }
            break;
        }
    }

    if (data_021600ac[0x59c] != 0) {
        p = data_021600ac + 0x59c;
        switch (data_021600ac[0x59c]) {
        case 1:
            *(s16 *)(p + 0x94) = 0;
            *(s16 *)(p + 0x96) = 0;
            *(s16 *)(p + 0x98) = 0x8c;
            *(s16 *)(p + 0x9a) = 0x16;
            *(s32 *)(p + 0x8c) = 0x5a000;
            *(s32 *)(p + 0x90) = -0x32000;
            *(s32 *)(p + 0x9c) = -(*(s16 *)(p + 0x98) - *(s16 *)(p + 0x96)) << 12;
            *(s32 *)(p + 0xa0) = 0x2a000;
            p[8] = 1;
            p[0] = 2;
            break;
        case 2:
            *(s32 *)(p + 0x8c) -= *(s32 *)(p + 0x8c) / 3;
            *(s32 *)(p + 0x9c) = *(s32 *)(p + 0x90) - *(s32 *)(p + 0x8c);
            if (*(s32 *)(p + 0x8c) < 0xf) {
                p[0] = 3;
            }
            break;
        case 3:
            if (!(data_021600ac[0x3ac] & 8)) {
                p[0] = 4;
                *(s32 *)(p + 0x8c) = 0x5a000;
                *(s32 *)(p + 0x90) = -0x8c000;
            }
            break;
        case 4:
            *(s32 *)(p + 0x8c) -= *(s32 *)(p + 0x8c) / 3;
            *(s32 *)(p + 0x9c) = *(s32 *)(p + 0x90) + *(s32 *)(p + 0x8c);
            if (*(s32 *)(p + 0x8c) < 0xf) {
                p[0] = 0;
            }
            break;
        }
        if (p[0] != 0) {
            func_02056bb4(0, *(s32 *)(p + 0x9c) + 0x73000, *(s32 *)(p + 0xa0) + 0x5000, 3, *(u16 *)(data_02160204 + 0x72), 2);
        }
    }

    if (data_021600ac[0x640] != 0) {
        p = data_021600ac + 0x640;
        switch (data_021600ac[0x640]) {
        case 1:
            p[0] = 2;
            func_020a8810(*(void **)(data_021600ac + 0x1f4), 0x10);
            func_02056bb4(4, 0x80000, 0x52000, 5, *(s32 *)(p + 4), 2);
            break;
        case 2:
            if (data_021626a8 & 1) {
                *(u32 *)(*(u8 **)(data_021600ac + 0x68) + 0xac) &= ~0x800;
                func_020468b0(0);
                func_0205443c(0);
                func_020a994c(data_021600ac + 0x1f8);
                func_020a957c(data_021600ac + 0xb0);
                p[0] = 0;
                data_021600ac[0x3ac] &= 0xef;
            }
            break;
        }
    }

    if (data_021600ac[0x6e4] != 0) {
        p = data_021600ac + 0x6e4;
        switch (data_021600ac[0x6e4]) {
        case 1:
            *(s16 *)(p + 0x94) = 0;
            *(s16 *)(p + 0x96) = 0;
            *(s16 *)(p + 0x98) = 0x2e;
            *(s16 *)(p + 0x9a) = 0xd;
            *(s32 *)(p + 0x8c) = 0x2e000;
            *(s32 *)(p + 0x90) = 0;
            *(s32 *)(p + 0x9c) = -0x2e000;
            *(s32 *)(p + 0xa0) = 0xb3000;
            p[8] = 5;
            p[0] = 2;
            break;
        case 2:
            *(s32 *)(p + 0x8c) -= *(s32 *)(p + 0x8c) / 3;
            *(s32 *)(p + 0x9c) = *(s32 *)(p + 0x90) - *(s32 *)(p + 0x8c);
            if (*(s32 *)(p + 0x8c) < 0xc0) {
                *(s32 *)(p + 0x9c) = 0;
                p[0] = 3;
            }
            break;
        case 3:
            if (!(data_021600ac[0x3ac] & 0x20)) {
                p[0] = 4;
                *(s32 *)(p + 0x8c) = 0x2e000;
                *(s32 *)(p + 0x90) = -0x2e000;
            }
            break;
        case 4:
            *(s32 *)(p + 0x8c) -= *(s32 *)(p + 0x8c) / 3;
            *(s32 *)(p + 0x9c) = *(s32 *)(p + 0x90) + *(s32 *)(p + 0x8c);
            if (*(s32 *)(p + 0x8c) < 0xf) {
                p[0] = 0;
            }
            break;
        }
    }

    if (p != NULL) {
        (*(u16 *)(p + 0x8a))++;
    }
}

void func_02056ac0(void) {
Unk20 buf=data_0213f3b0;u8 i;
*(volatile u32 *)0x040004a4=0x1f00c0;
for(i=0;i<7;i++){
u8 *p=data_021600ac+0x3b0+i*0xa4;
if(!p[0])continue;
func_020a3bbc(p[8]);
buf.unk[1]=*(s16 *)(p+0x94);buf.unk[2]=*(s16 *)(p+0x96);
buf.unk[3]=*(s16 *)(p+0x98)-*(s16 *)(p+0x94);
buf.unk[8]=*(volatile s16 *)&buf.unk[3];
buf.unk[4]=*(s16 *)(p+0x9a)-*(s16 *)(p+0x96);
buf.unk[9]=*(volatile s16 *)&buf.unk[4];
buf.unk[5]=*(s32 *)(p+0x9c)>>12;buf.unk[6]=*(s32 *)(p+0xa0)>>12;
func_021098ac(&buf);
}
}

extern s32 func_020a9738(void *,u16);
void func_02056bb4(s32 n,s32 x,s32 y,s32 bank,s32 arg,u8 mode) {
s32 off=n*0x50;
func_020a994c(data_021600ac+0xb8+off);
func_020a9610(data_021600ac+0xec+off,*(s32 *)(data_021600ac+bank*4+0x9c),arg,*(void **)(data_021600ac+off+0xb4),0,0);
func_020a98ac(data_021600ac+0xb8+off);
func_020a98f4(data_021600ac+0xb8+off);
*(s32 *)(*(u8 **)(data_021600ac+off+0xb4)+0x4c)=0x2bc000;
switch(mode) {
case 0: *(s32 *)(*(u8 **)(data_021600ac+off+0xb4)+0x44)=x; break;
case 1: {s32 w=func_020a9738(**(void ***)(data_021600ac+off+0xec),(u16)arg); *(s32 *)(*(u8 **)(data_021600ac+off+0xb4)+0x44)=x-(w<<12); break;}
case 2: {s32 w=func_020a9738(**(void ***)(data_021600ac+off+0xec),(u16)arg); *(s32 *)(*(u8 **)(data_021600ac+off+0xb4)+0x44)=x-((w/2)<<12); break;}
}
*(s32 *)(*(u8 **)(data_021600ac+off+0xb4)+0x48)=y;
}

