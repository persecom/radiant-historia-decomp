/* 13 functions from 0x0209B328 to 0x0209C2AC (main), found by ds-decomp. */
#include "common.h"
typedef struct { u16 unk[10]; } Unk20;
extern const Unk20 data_0214209c;
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);

extern u32 data_02155c3c;
extern u8 *data_02160120;
extern void *func_0210c594(u32, u32);
extern void func_021167ac(void *, s32);
extern void func_0209b194(s32);

extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
void func_0209b570(void) {
    u8 *base = data_02160120;
    *(s8 *)(base + 0x69a) += 1;
    *(s8 *)(base + 0x69a) %= 4;
    *(s16 *)(base + 0x69c) += 0x20;
    if (*(s16 *)(base + 0x69c) > 0x64) {
        *(s16 *)(base + 0x69c) = 0x64;
        if (*(s16 *)(base + 0x5a) == 0) {
            *(s16 *)(base + 0x5a) = 1;
        }
    }
    *(s16 *)(base + 0x698) += 2;
    if (*(s16 *)(base + 0x698) > 0x3c) {
        func_0209b194(5);
    }
}

s32 func_0201fd28(s32,s32);
void func_021099f8(void *);
void func_0209b974(s32 x,s32 y,s32 a,s32 b,u16 *p,u8 flag) {
u16 value;
*(volatile u32 *)0x40004a4=0x1f0080;
value=func_0201fd28(a*83,b);
if(flag==0){
p[4]=value; p[5]=4; p[6]=0x33f7; p[1]=x+1; p[2]=y+1; p[3]=24;
func_021099f8(p);
} else if(*(s8 *)(data_02160120+0x69a)<2){
p[4]=value; p[5]=4; p[6]=0x33f7; p[1]=x+1; p[2]=y+1; p[3]=24;
func_021099f8(p);
}
}

void func_0209beb8(s32 x,s32 y,s32 h,s32 arg3) {
Unk20 buf=data_0214209c;
*(volatile u32 *)0x40004a4=0x1f0080;
func_020a3bbc(arg3);
buf.unk[1]=0; buf.unk[2]=0; buf.unk[3]=14; buf.unk[4]=3;
buf.unk[8]=14; buf.unk[9]=3; buf.unk[5]=x; buf.unk[6]=y;
func_021098ac(&buf);
buf.unk[1]=0; buf.unk[2]=2; buf.unk[4]=1; buf.unk[9]=h; buf.unk[6]=y+3;
func_021098ac(&buf);
buf.unk[1]=0; buf.unk[2]=13; buf.unk[4]=3; buf.unk[9]=3; buf.unk[6]=y+h+3;
func_021098ac(&buf);
}

void *func_0209c0d0(void) {
    void *ptr = func_0210c594(0xc, data_02155c3c);
    func_021167ac(ptr, 0x24);
    return ptr;
}

void func_0209c0fc(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_0209c14c(u16 arg0) {
    u8 *node;
    if (data_02160120 == NULL) {
        return NULL;
    }
    node = **(u8 ***)(data_02160120 + 0x704);
    while (node != NULL) {
        if (*(u16 *)node == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x28);
    }
    return NULL;
}

