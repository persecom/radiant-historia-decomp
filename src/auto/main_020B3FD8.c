/* 34 functions from 0x020B34D0 to 0x020B44CC (main), found by ds-decomp. */
#include "common.h"
typedef struct { u32 value; u16 id, order; u8 owned; u8 pad[3]; } Entry_020b41b8;
typedef struct { Entry_020b41b8 entries[901], selected; u16 ids[40]; s32 unk_2a98, count, unk_2aa0, filter, unk_2aa8, active; u8 flags; } Work_020b41b8;

extern u8 *func_020b3890(void);
extern u8 *func_020b3fd8(void);
extern void func_020b3a9c(void);
extern void func_02009008(void *, void *, s32);
extern u8 *func_020b4044(void);
extern u8 data_021601e0;

extern u8 *func_02021f10(u8);

extern void func_020b3a9c(void);
extern void func_02009008(void *, void *, s32);
extern u8 *func_020b4044(void);
extern s32 func_020b3f14(u32);
extern void func_020b38c0(s32);
extern void *func_0210c594(u32, u32);
extern u32 data_02155c3c;
extern void func_0210dab0(void *);
extern void func_0210db70(void *);
extern void func_0210dbd0(void *);
extern void func_020b4670(void);
extern void func_020b0cfc(void);
extern void func_020b35e8(void);

u8 *func_020b3fd8(void) {
    return func_020b3880() + 0x96c;
}

extern void func_02008f74(void *, s32, s32);
void func_020b3fec(void) {
    func_02008f74(func_020b3fd8(), 0, 0x2ab8);
}

u8 *func_020b4008(s32 arg0) {
    if (arg0 >= *(s32 *)(func_020b3fd8() + 0x2a9c) || arg0 < 0) {
        return NULL;
    }
    return func_020b3fd8() + arg0 * 0xc;
}

u8 *func_020b4044(void) {
    return func_020b3fd8() + 0x2a3c;
}

void func_020b4058(s32 arg0) {
    if (func_020b4008(arg0) != NULL) {
        func_02009008(func_020b4008(arg0), func_020b4044(), 0xc);
        return;
    }
    func_02008f74(func_020b4044(), 0, 0xc);
}

void func_020b40a4(s32 arg0, u32 *arg1, u32 *arg2) {
    u8 *work;
    s32 i;
    s32 n = 0;
    s32 first = -1;
    s32 cat = 0;
    work = func_020b3fd8();
    if (arg0 == 0) {
        cat = 1;
    } else if (arg0 == 1) {
        cat = 2;
    } else if (arg0 == 2) {
        cat = 3;
    }
    for (i = 0; i < *(s32 *)(work + 0x2a9c); i++) {
        u8 *item = func_020b4008(i);
        if (item != NULL) {
            s32 x = func_020b3f14(*(u16 *)(item + 4));
            if (x != -1 && x == cat) {
                if (first == -1) {
                    first = i;
                }
                n++;
            }
        }
    }
    *arg1 = n + first;
    *arg2 = first;
}

void func_020b4150(void) {
    u8 *base = func_020b3fd8();
    u8 *p = func_020b3890();
    *(u8 *)(base + 0x2ab0) = 0;
    *(u32 *)(base + 0x2a98) = 0;
    *(u32 *)(base + 0x2aa0) = 0;
    *(u32 *)(base + 0x2aa8) = 0;
    *(u32 *)(base + 0x2aac) = 1;
    *(u32 *)(base + 0x2aa4) = -1;
    *(u32 *)(p + 0x250) = 0;
    func_020b38c0(0);
}

s32 func_020b4198(u8 *arg0, u8 *arg1) {
    s32 ret = 0;
    u16 b = *(u16 *)((u8 *)arg1 + 6);
    u16 a = *(u16 *)((u8 *)arg0 + 6);
    if (a > b) {
        return 1;
    }
    if (a < b) {
        ret = -1;
    }
    return ret;
}

extern u8 *func_020bd058(u16);
extern s32 func_02022068(u16);
extern u16 func_020bd294(u16);
extern void func_02015a3c(void *,s32,s32,void *);
void func_020b41b8(s32 mode) {
u8 *base,*item,*entry;
s32 count=0,i,owned;
u32 end,start;
base=func_020b3fd8();
func_02008f74(base,0,0x2a3c);
*(s32 *)(base+0x2aac)=1;
if(mode==0) {
if(*((u8 *)func_020b3880()+0x3440)==1) {base[0x2ab0]|=7;*(s32 *)(base+0x2aa4)=0;}
else if(*((u8 *)func_020b3880()+0x3440)==0){base[0x2ab0]|=8;*(s32 *)(base+0x2aa4)=3;}
else {base[0x2ab0]|=15;*(s32 *)(base+0x2aa4)=3;}
for(i=0;i<40;i++){
if(*(u16 *)(base+0x2a48+i*2)!=0 && func_020b3f14(*(u16 *)(base+0x2a48+i*2))!=-1) {
item=func_020bd058(*(u16 *)(base+0x2a48+i*2));
if(item && item[7]==1) {
entry=base+count*12;
*(u16 *)(entry+4)=*(u16 *)(base+0x2a48+i*2);
*(u32 *)entry=*(u32 *)item;
entry[8]=0;count++;
}
}
}
*(s32 *)(base+0x2a9c)=count;
} else if(mode==1) {
end=0;start=0;
base[0x2ab0]|=15;
if(*(s32 *)(base+0x2aa4)==-1)*(s32 *)(base+0x2aa4)=3;
for(i=1;i<901;i++){
if(func_020b3f14((u16)i)!=-1) {
owned=func_02022068((u16)i);
if(owned) {
item=func_020bd058((u16)i);
if(item && item[7]==1) {
entry=base+count*12;
*(u16 *)(entry+4)=(u16)i;
*(u32 *)entry=*(u32 *)item>>1;
entry[8]=owned;
*(u16 *)(entry+6)=func_020bd294((u16)i);
count++;
}
}
}
}
*(s32 *)(base+0x2a9c)=count;
for(i=0;i<4;i++){
func_020b40a4(i,&end,&start);
if((s32)(end-start)>2)func_02015a3c(base+start*12,end-start,12,func_020b4198);
}
}
}

u8 *func_020b442c(void) {
    return (u8 *)func_020b3880() + 0x3424;
}

s32 func_020b4440(void) {
    u8 *p = func_0210c594(0x3448, data_02155c3c);
    *(u32 *)(p + 0x3434) = 0;
    *(u32 *)(p + 0x343c) = 0;
    *(u32 *)(p + 0) = (u32)func_020b4670;
    *(u32 *)(p + 4) = 0x3e8;
    func_0210dab0(p);
    *(u32 *)(p + 0x14) = (u32)func_020b0cfc;
    *(u32 *)(p + 0x18) = 0x3e8;
    func_0210db70(p + 0x14);
    *(u32 *)(p + 0x28) = (u32)func_020b35e8;
    *(u32 *)(p + 0x2c) = 0x3e8;
    func_0210dbd0(p + 0x28);
    *(u32 *)(&data_021601e0 + 4) = (u32)p;
    return 1;
}

