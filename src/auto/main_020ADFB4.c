/* 23 functions from 0x020ADE8C to 0x020AEDC0 (main), found by ds-decomp. */
#include "common.h"
extern u8 *func_020b3fd8(void);
extern u8 *func_020b4008(u32);
extern s32 func_020b3f14(u16);
extern u8 *func_020b3908(void);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
extern u8 data_02150c38[],data_02150c40[],data_02150c54[],data_02150c68[],data_02150c70[];
extern u8 data_02150c78[], data_02150c80[], data_02150c88[], data_02150c90[];
extern u32 func_020a94b8(void *);
extern u32 func_020a8604(int, int);
extern u32 func_020a84b8(int, int);
extern void func_020a8810(u32, int);
extern void func_020a9830(void *, void *, int, int, int, int);
extern void func_020a9610(void *, u32, int, u32, int, int);
extern u8 *func_020adda8(void);
extern void func_020a994c(void *);

typedef struct Unk_02150788 {
    u32 field_0;
    u32 field_4;
    u32 field_8;
    u32 field_c;
    u32 field_10;
} Unk_02150788;

extern Unk_02150788 data_02150788[];
extern void func_02008f74(void *, s32, u32);
extern void *func_020ade60(s32);
extern u8 *func_0203be10(s32);
extern s32 func_0203be60(u8 *, s32, s32);
extern void func_020aed5c(s32);
extern void func_020aea1c(void);
extern void func_020ae530(void);
extern void func_0203be4c(void *);
extern void func_021098ac(void *);

void func_020adfb4(void **arg0) {
    s32 i;
    for (i = 0; i < 0x3b; i++) {
        if (arg0[i] != NULL) {
            func_0203be4c(arg0[i]);
            arg0[i] = NULL;
        }
    }
}

void func_020adfe8(u16 arg0, u8 arg1) {
    *(u32 *)0x40004A4 = (arg1 << 24) | 0xC0 | (arg0 << 16);
}

void func_020ae004(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, s16 arg8) {
    s16 buf[10];
    buf[0] = 1;
    buf[1] = arg1;
    buf[2] = arg2;
    buf[3] = arg3;
    buf[4] = arg4;
    buf[5] = arg5;
    buf[6] = arg6;
    buf[7] = arg0;
    buf[8] = arg7;
    buf[9] = arg8;
    func_021098ac(buf);
}

u8 func_020ae05c(u32 arg0, u32 arg1) {
    u32 i;
    u32 pow10 = 1;
    u32 count;
    if (arg0 == 0 && arg1 == 1) {
        return 0;
    }
    count = arg1 - 1;
    for (i = 0; i < count; i++) {
        pow10 *= 10;
    }
    if (arg0 < pow10) {
        return 10;
    }
    for (i = 0; i < count; i++) {
        arg0 /= 10;
    }
    return arg0 % 10;
}

void func_020ae0f0(u32 arg0, s16 arg1, s32 arg2, s16 arg3, s16 arg4, s16 arg5)
{
  int new_var2;
  u8 i;
  int new_var;
  u8 d;
  for (i = 1; i < 10; i++)
  {
    d = func_020ae05c(arg0, i);
 do { if (d == 10) { break; } new_var2 = 1; if (i != new_var2) { arg2 -= arg4; } new_var = arg4 * d; func_020ae004(arg1, new_var, 0, arg4, arg5, arg2, arg3, arg4, arg5); } while (0);
  }

}

void func_020ae180(u8 *p) {
u8 i;
*(u32 *)(p+316)=func_020a94b8(data_02150c38);
*(u32 *)(p+320)=func_020a94b8(data_02150c40);
*(u32 *)(p+324)=func_020a94b8(data_02150c54);
*(u32 *)(p+328)=func_020a94b8(data_02150c68);
*(u32 *)(p+332)=func_020a94b8(data_02150c70);
for(i=0;i<5;i++){
if(i!=0 && i!=3) *(u32 *)(p+i*0x50+0x16c)=func_020a8604(4,1);
else *(u32 *)(p+i*0x50+0x16c)=func_020a84b8(4,1);
func_020a8810(*(u32 *)(p+i*0x50+0x16c),22);
func_020a9830(p+0x170+i*0x50,p+0x1a4+i*0x50,240,16,0,0);
func_020a9610(p+0x1a4+i*0x50,*(u32 *)(p+i*4+0x13c),1,*(u32 *)(p+i*0x50+0x16c),0,0);
}
*(u32 *)(p+0x2fc)=func_020a84b8(5,1);
func_020a8810(*(u32 *)(p+0x2fc),22);
func_020a9830(p+0x300,p+0x334,240,16,0,0);
func_020a9610(p+0x334,*(u32 *)(p+0x14c),2,*(u32 *)(p+0x2fc),0,0);
for(i=6;i<8;i++){
*(u32 *)(p+i*0x50+0x16c)=func_020a8604(5,1);
func_020a8810(*(u32 *)(p+i*0x50+0x16c),22);
func_020a9830(p+0x170+i*0x50,p+0x1a4+i*0x50,240,16,0,0);
func_020a9610(p+0x1a4+i*0x50,*(u32 *)(p+0x13c),1,*(u32 *)(p+i*0x50+0x16c),0,0);
}
}

void func_020ae35c(u8 *arg0) {
 s32 i,j;
 for(i=0;i<8;i++){ u8 *node=*(u8 **)(arg0+i*4+0x13c); if(node){func_020a9544(node); ((u32 *)(arg0+0x13c))[i]=0;} }
 for(j=0;j<8;j++){ u8 *obj;
 i=j*0x50;
 func_020a994c(arg0+0x170+i); func_020a98a0(arg0+0x170+i);
 obj=*(u8 **)(arg0+i+0x16c);
 if(obj){ if(j!=0&&j!=3&&j!=5) ((void (*)(u8 *))(*(void **)(obj+12)))(obj);
 else ((s32 (*)(u8 *))(*(void **)(obj+12)))(obj);
 *(u32 *)(arg0+i+0x16c)=0; }
 }
}

void func_020ae3f8(s32 index,s32 arg1,s32 arg2,s16 x,s16 y,s8 z){
u8 *p;
u32 data=0;
s32 off;
p=func_020adda8();
off=index*0x50;
func_020a994c(p+0x170+off);
*(u32 *)(*(u8 **)(p+0x16c+off)+0x40)=1;
func_020a8810(*(u8 **)(p+0x16c+off),arg1);
*(s32 *)(*(u8 **)(p+0x16c+off)+0x4c)=z<<12;
*(s32 *)(*(u8 **)(p+0x16c+off)+0x44)=x<<12;
*(s32 *)(*(u8 **)(p+0x16c+off)+0x48)=y<<12;
if(index<5)data=*(u32 *)(p+0x13c+index*4);
else if(index==5)data=*(u32 *)(p+0x14c);
else if(index==6)data=*(u32 *)(p+0x13c);
else if(index==7){
if((u32)(func_020b3f14((u16)arg2)-1)<=2)data=*(u32 *)(p+0x160);
else data=*(u32 *)(p+0x15c);
}
func_020a9610(p+0x1a4+index*0x50U,data,arg2,*(u8 **)(p+0x16c+off),0,0);
func_020a98ac(p+0x170+index*0x50U);
func_020a98f4(p+0x170+index*0x50U);
}

void func_020ae50c(s32 arg0) {
    u8 *base = (u8 *)func_020adda8();
    u8 *obj = *(u8 **)(base + arg0 * 0x50 + 0x16c);
    *(u32 *)(obj + 0x40) = 0;
}

void func_020ae530(void) {
    u8 *base = (u8 *)func_020adda8();
    s32 i;
    for (i = 0; i < 8; i++) {
        u8 *obj = *(u8 **)(base + i * 0x50 + 0x16c);
        *(u32 *)(obj + 0x40) = 0;
    }
}

void func_020ae560(u8 *p) {
u8 i;
*(u32 *)(p+0x15c)=func_020a94b8(data_02150c78);
*(u32 *)(p+0x164)=func_020a94b8(data_02150c80);
*(u32 *)(p+0x160)=func_020a94b8(data_02150c88);
*(u32 *)(p+0x168)=func_020a94b8(data_02150c90);
for(i=0;i<5;i++){
*(u32 *)(p+i*0x50+0x3ec)=func_020a8604(4,1);
func_020a8810(*(u32 *)(p+i*0x50+0x3ec),22);
func_020a9830(p+0x3f0+i*0x50,p+0x424+i*0x50,240,16,0,0);
func_020a9610(p+0x424+i*0x50,*(u32 *)(p+0x15c),1,*(u32 *)(p+i*0x50+0x3ec),0,0);
}
*(u32 *)(p+0x57c)=func_020a84b8(4,1);
func_020a8810(*(u32 *)(p+0x57c),22);
func_020a9830(p+0x580,p+0x5b4,240,16,0,0);
func_020a9610(p+0x5b4,*(u32 *)(p+0x15c),1,*(u32 *)(p+0x57c),0,0);
*(u32 *)(p+0x5cc)=func_020a84b8(5,3);
func_020a8810(*(u32 *)(p+0x5cc),30);
func_020a9830(p+0x5d0,p+0x604,240,16,0,0);
func_020a9610(p+0x604,*(u32 *)(p+0x168),1,*(u32 *)(p+0x5cc),0,0);
}

void func_020ae6e8(u8 *arg0) {
 s32 i;
 if (*(void **)(arg0+0x15c) != NULL) {func_020a9544(*(void **)(arg0+0x15c)); *(u32 *)(arg0+0x15c)=0;}
 if (*(void **)(arg0+0x164) != NULL) {func_020a9544(*(void **)(arg0+0x164)); *(u32 *)(arg0+0x164)=0;}
 if (*(void **)(arg0+0x160) != NULL) {func_020a9544(*(void **)(arg0+0x160)); *(u32 *)(arg0+0x160)=0;}
 if (*(void **)(arg0+0x168) != NULL) {func_020a9544(*(void **)(arg0+0x168)); *(u32 *)(arg0+0x168)=0;}
for (i=0;i<5;i++) {s32 off=i*0x50; u8 *obi; func_020a994c(arg0+0x3f0+off);func_020a98a0(arg0+0x3f0+off);obi=*(u8 **)(arg0+off+0x3ec);if(obi!=NULL){((void (*)(u8 *))(*(void **)(obi+0xc)))(obi);*(u8 **)(arg0+i*0x50+0x3ec)=NULL;}}
for (i=0;i<2;i++) {s32 off=i*0x50; u8 *obi; func_020a994c(arg0+0x580+off);func_020a98a0(arg0+0x580+off);obi=*(u8 **)(arg0+off+0x57c);if(obi!=NULL){((void (*)(u8 *))(*(void **)(obi+0xc)))(obi);*(u8 **)(arg0+i*0x50+0x57c)=NULL;}}
}

s32 func_020ae7e0(s32 index,s32 arg1,s32 mode){
u8 *p;
s32 type;
s32 id;
s32 extra;
type=-1;
id=0;
extra=0;
p=func_020adda8();
u8 *base=func_020b3fd8();
u8 *item;
s32 y;
u32 resource;
if(mode==0){
if(index<0||index>=5)return 0;
item=func_020b4008(*(u32 *)(base+0x2a98)+index);
type=func_020b3f14(*(u16 *)(item+4));
id=*(u16 *)(item+4);
}else{
if(index<0||index>=5)return 0;
item=func_020b3908();
if(index==0){
if(*(u16 *)(item+0x38)){type=func_020b3f14(*(u16 *)(item+0x38));id=*(u16 *)(item+0x38);}
}else if(index==1){
if(*(u16 *)(item+0x3a)){type=func_020b3f14(*(u16 *)(item+0x3a));id=*(u16 *)(item+0x3a);}
}else{
if(*(u16 *)(item+index*2+0x38)){type=func_020b3f14(*(u16 *)(item+index*2+0x38));id=((u16 *)(item+0x38))[index];}
}}
if(type==-1)return 0;
func_020a994c(p+0x3f0+index*0x50);
*(u32 *)(*(u8 **)(p+0x3ec+index*0x50)+0x40)=1;
func_020a8810(*(u32 *)(p+0x3ec+index*0x50),arg1);
if(mode==0){
*(u32 *)(*(u8 **)(p+0x3ec+index*0x50)+0x4c)=0x68000;
y=index*18+55;
*(u32 *)(*(u8 **)(p+0x3ec+index*0x50)+0x44)=0x26000;
*(u32 *)(*(u8 **)(p+0x3ec+index*0x50)+0x48)=y<<12;
}else{
if(index>=2)extra=3;
y=index*20+(extra+61);
*(u32 *)(*(u8 **)(p+0x3ec+index*0x50)+0x4c)=0x6d000;
*(u32 *)(*(u8 **)(p+0x3ec+index*0x50)+0x44)=0x30000;
*(u32 *)(*(u8 **)(p+0x3ec+index*0x50)+0x48)=y<<12;
}
if((u32)(type-1)<=2)resource=*(u32 *)(p+0x160);else resource=*(u32 *)(p+0x15c);
func_020a9610(p+0x424+index*0x50,resource,id,*(u32 *)(p+0x3ec+index*0x50),0,0);
func_020a98ac(p+0x3f0+index*0x50);
func_020a98f4(p+0x3f0+index*0x50);
return 1;
}

s32 func_020ae9cc(u32 arg0, s32 arg1) {
    u8 *base = func_020adda8();
    u8 *p;
    if (arg1 == 0) {
        if (arg0 >= 5) {
            return 0;
        }
    } else if (arg0 >= 5) {
        return 0;
    }
    p = *(u8 **)(base + arg0 * 0x50 + 0x3ec);
    *(u32 *)(p + 0x40) = 0;
    return 1;
}

void func_020aea1c(void) {
    u8 *base = func_020adda8();
    s32 i;
    for (i = 0; i < 5; i++) {
        u8 *p = *(u8 **)(base + i * 0x50 + 0x3ec);
        if (p != NULL) {
            *(u32 *)(p + 0x40) = 0;
        }
    }
}

void func_020aea50(void) {
    u8 *base = func_020adda8();
    s32 i;
    for (i = 0; i < 5; i++) {
        u8 *p = *(u8 **)(base + i * 0x50 + 0x3ec);
        if (p != NULL) {
            *(u32 *)(p + 0x40) = 1;
        }
    }
}

extern u8 *func_020adda8(void);
extern void func_020a994c(void *);
void func_020aea84(void) {
    u8 *base = func_020adda8();
    s32 i;
    for (i = 0; i < 5; i++) {
        func_020a994c(base + 0x3f0 + i * 0x50);
    }
}

extern u8 *func_020b4044(void);
s32 func_020aeab0(u8 *state,u8 *p,s32 mode) {
 s32 one=1,zero=0;
 s16 y=*(s32 *)((u8 *)func_020ade60(one)+4)+135;
 u8 *item=func_020b4044();
 u32 resource;
 if(mode==0) {
 if(*(u16 *)(item+4)) {
 s32 type=func_020b3f14(*(u16 *)(item+4));
 if(type==-1)return zero;
 func_020a994c(p+0x580);
 *(u32 *)(*(u8 **)(p+0x57c)+0x40)=one;
 func_020a8810(*(u32 *)(p+0x57c),24);
 *(s32 *)(*(u8 **)(p+0x57c)+0x4c)=0x6b000;
 *(s32 *)(*(u8 **)(p+0x57c)+0x44)=0xf000;
 *(s32 *)(*(u8 **)(p+0x57c)+0x48)=(y+1)<<12;
 if((u32)(type-1)<=2)resource=*(u32 *)(p+0x160);else resource=*(u32 *)(p+0x15c);
 func_020a9610(p+0x5b4,resource,*(u16 *)(item+4),*(u32 *)(p+0x57c),zero,zero);
 func_020a98ac(p+0x580);
 func_020a98f4(p+0x580);
 func_020a994c(p+0x5d0);
 *(u32 *)(*(u8 **)(p+0x5cc)+0x40)=1;
 func_020a8810(*(u32 *)(p+0x5cc),22);
 *(s32 *)(*(u8 **)(p+0x5cc)+0x4c)=0x6b000;
 *(s32 *)(*(u8 **)(p+0x5cc)+0x44)=0xf000;
 *(s32 *)(*(u8 **)(p+0x5cc)+0x48)=(y+18)<<12;
 if((u32)(type-1)<=2)resource=*(u32 *)(p+0x168);else resource=*(u32 *)(p+0x164);
 func_020a9610(p+0x604,resource,*(u16 *)(item+4),*(u32 *)(p+0x5cc),zero,zero);
 func_020a98ac(p+0x5d0);
 func_020a98f4(p+0x5d0);
 return 1;
 }
 *(u32 *)(*(u8 **)(p+0x57c)+0x40)=zero;
 *(u32 *)(*(u8 **)(p+0x5cc)+0x40)=zero;
 }else{
 if(*(s32 *)(state+0x3438)!=2) {
 func_020a994c(p+0x580);
 *(u32 *)(*(u8 **)(p+0x57c)+0x40)=one;
 func_020a8810(*(u32 *)(p+0x57c),24);
 *(s32 *)(*(u8 **)(p+0x57c)+0x4c)=0x6b000;
 *(s32 *)(*(u8 **)(p+0x57c)+0x44)=0xf000;
 *(s32 *)(*(u8 **)(p+0x57c)+0x48)=(y+1)<<12;
 func_020a9610(p+0x5b4,*(u32 *)(p+0x13c),9,*(u32 *)(p+0x57c),zero,zero);
 func_020a98ac(p+0x580);
 func_020a98f4(p+0x580);
 }
 func_020a994c(p+0x5d0);
 *(u32 *)(*(u8 **)(p+0x5cc)+0x40)=1;
 func_020a8810(*(u32 *)(p+0x5cc),22);
 *(s32 *)(*(u8 **)(p+0x5cc)+0x4c)=0x6b000;
 *(s32 *)(*(u8 **)(p+0x5cc)+0x44)=0xf000;
 *(s32 *)(*(u8 **)(p+0x5cc)+0x48)=(y+18)<<12;
 if(state[0x3440]==0)resource=*(u32 *)(p+0x140);else resource=*(u32 *)(p+0x144);
 func_020a9610(p+0x604,resource,*(s32 *)(state+0x3438)+1,*(u32 *)(p+0x5cc),zero,zero);
 func_020a98ac(p+0x5d0);
 func_020a98f4(p+0x5d0);
 }
 return 0;
}

void func_020aed5c(s32 arg0) {
    u8 *ptr = func_020adda8();
    if (arg0 == 0) {
        u8 *sub = *(u8 **)(ptr + 0x57c);
        if (sub != NULL) {
            *(u32 *)(sub + 0x40) = 0;
        }
    } else if (arg0 == 1) {
        u8 *sub = *(u8 **)(ptr + 0x5cc);
        if (sub != NULL) {
            *(u32 *)(sub + 0x40) = 0;
        }
    }
}

void func_020aeda0(void) {
    func_020aed5c(0);
    func_020aed5c(1);
    func_020aea1c();
    func_020ae530();
}

