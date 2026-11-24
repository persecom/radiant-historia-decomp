/* 13 functions from 0x02065E78 to 0x02066D84 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 v[10]; } Params_02066868;
extern const Params_02066868 data_0213fc60;

extern u8 *data_021600e0[];
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void func_020a3b84(void);
extern void func_020e9f44(void);
extern void func_020a7494(void *);
extern void func_020a62d8(void *);
extern void func_020a5ed4(void *);
extern void func_020665e0(void);
extern void func_020a5858(void *);
extern void func_020aa464(void);
extern void func_020aa0f0(void);
extern void func_020aa76c(void *);
extern void func_02066c8c(void);
extern void func_020a78f0(void);
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_02066594(void);
extern void func_020a6e90(void *);
extern void func_020f4a24(void);
extern void func_0210f138(void);
extern void *func_02003454(void);
extern void func_02008e68(s32, void *, s32);
extern void *func_020031bc(void);
void func_0206643c(void) {
    if (*(void **)data_021600e0[1] != NULL) {
        func_0210c5dc(*(void **)data_021600e0[1]);
        *(void **)data_021600e0[1] = NULL;
    }
    func_020a3b84();
    func_020e9f44();
    func_020a7494(data_021600e0[1] + 0x130);
    func_020a62d8(data_021600e0[1] + 0x118);
    func_020a5ed4(data_021600e0[1] + 0x124);
    func_020665e0();
    func_020a5858(*(void **)(data_021600e0[1] + 0x190));
    func_020a5858(*(void **)(data_021600e0[1] + 0x194));
    func_020aa464();
    func_020aa0f0();
    if (*(void **)(data_021600e0[1] + 0x13f4) != NULL) {
        func_020aa76c(*(void **)(data_021600e0[1] + 0x13f4));
        *(void **)(data_021600e0[1] + 0x13f4) = NULL;
    }
    func_02066c8c();
    if (data_021600e0[1] != NULL) {
        func_020a78f0();
        func_0210da14(data_021600e0[1] + 8);
        func_0210dba0(data_021600e0[1] + 0x1c);
        func_020a5858(*(void **)(data_021600e0[1] + 0x18c));
        func_02066594();
        func_020a6e90(data_021600e0[1] + 0x13d4);
        func_020a6e90(data_021600e0[1] + 0x13e0);
        if (data_021600e0[1] != NULL) {
            func_0210c5dc(data_021600e0[1]);
            data_021600e0[1] = NULL;
        }
    }
    func_020f4a24();
    func_0210f138();
    func_02008e68(0, func_02003454(), 0x8000);
    func_02008e68(0, func_020031bc(), 0x4000);
}

void func_02066594(void) {
    void *node;
    while ((node = *(void **)(data_021600e0[1] + 0x10c)) != NULL) {
        func_021168f8(data_021600e0[1] + 0x10c, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

void func_020665e0(void) {
    void *node;
    while ((node = *(void **)(data_021600e0[1] + 0x1a0)) != NULL) {
        func_021168f8(data_021600e0[1] + 0x1a0, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

void func_020a3bbc(s32);
void func_021098ac(void *);
void func_020a7194(void *);
void func_020a72b8(void *);
void func_020be0ec(void);
void func_020aa94c(void);
void func_020a638c(void *,s32,void *,s32);
void func_020a6020(void);
void func_02066868(void) {
 u8 *base=data_021600e0[1];
 s32 i;
 Params_02066868 p=data_0213fc60;
 *(volatile u32 *)0x40004a4= 0x1f0080;
 *(volatile u32 *)0x4000480= 0x7fff;
 p.v[1]=0; p.v[2]=0; p.v[3]=256; p.v[4]=256;
 { u8 *current=*(u8 *volatile *)&data_021600e0[1];
 p.v[8]=(*(s32 *)(current+0x6c)*256)/4096;
 p.v[9]=(*(s32 *)(current+0x6c)*256)/4096; }
 for(i=0;i<4;i++) {
  s32 xy[2],scale;
  func_020a3bbc(i);
  xy[0]=i%2; xy[1]=i/2;
  scale=*(s32 *)(data_021600e0[1]+0x6c);
  xy[0]=(xy[0]<<8)-(xy[0]<<3); xy[1]=(xy[1]<<8)-(xy[1]<<3);
  xy[0]=(xy[0] * scale)/4096;
  xy[1]=(xy[1] * scale)/4096;
  p.v[5]=*(s32 *)(data_021600e0[1]+0x44)+(xy[0]-32);
  p.v[6]=*(s32 *)(data_021600e0[1]+0x48)+(xy[1]+8);
  func_021098ac(&p);
 }
 func_020a7194(base+0x13d4);
 func_020a72b8(base+0x13e0);
 func_020be0ec(); func_020aa94c();
 func_020a638c(base+0x118,*(s32 *)(base+0x6c),base+0x44,0);
 func_020a6020();
}

void func_02066b7c(u32 arg0, u32 arg1, u32 arg2) {
    u8 *ptr = data_021600e0[1];
    ptr[0xe0] = 3;
    *(u32 *)(ptr + 0x160) = arg0;
    *(u32 *)(ptr + 0x164) = 0;
    *(u32 *)(ptr + 0x168) = arg1;
    *(u32 *)(ptr + 0x16c) = *(u32 *)(ptr + 0xfc);
    *(u32 *)(ptr + 0x174) = *(u32 *)(ptr + 0x100);
    *(u32 *)(ptr + 0x178) = arg2;
    *(u16 *)(ptr + 0x19c) = 0;
}

s32 func_02066bc4(void) {
    data_021600e0[1][0xe0] = 0;
    return 0;
}

extern void *func_020aa19c(void);
extern void func_020a6ca0(u16);
extern void func_020a9af0(void *, s16, s16);
extern void func_020a9d60(void *);
extern void func_020aa1b4(void);
extern s32 func_020aa144(void);
s32 func_02066bdc(void) {
    u8 *ptr = data_021600e0[1];
    u8 *node = *(u8 **)(*(u8 **)func_020aa19c() + 0xc);
    while (node != NULL) {
        func_020a6ca0(*(u16 *)(*(u8 **)node + 4));
        node = *(u8 **)(node + 8);
    }
    ptr[0xe0] = 4;
    return 0;
}

void func_02066c28(void) {
    u8 *ptr = data_021600e0[1];
    s16 i, j;
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 11; j++) {
            func_020a9af0(ptr + 0x1b4 + i * 0x160 + j * 0x20, i, j);
        }
    }
}

void func_02066c8c(void) {
    u8 *ptr = data_021600e0[1];
    s16 i, j;
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 11; j++) {
            func_020a9d60(ptr + 0x1b4 + i * 0x160 + j * 0x20);
        }
    }
}

void func_02066ce8(void) {
    u8 *ptr = data_021600e0[1];
    u8 *node;
    s32 flag;
    if (ptr[0xe0] != 4) {
        return;
    }
    node = *(u8 **)(*(u8 **)func_020aa19c());
    flag = 0;
    while (node != NULL) {
        if (*(s8 *)(node + 8) > 0) {
            *(s8 *)(node + 8) -= 7;
            flag = 1;
            if (*(s8 *)(node + 8) < 0) {
                *(s8 *)(node + 8) = 0;
            }
            break;
        }
        node = *(u8 **)(node + 0x10);
    }
    if (flag == 0) {
        func_020aa1b4();
        if (func_020aa144() == 0) {
            func_02066b7c(*(u32 *)(ptr + 0x50), *(u32 *)(ptr + 0x54), (u32)func_02066bc4);
        }
    }
}

