/* 12 functions from 0x02066D84 to 0x02067744 (main), found by ds-decomp. */
#include "common.h"
typedef struct { u32 ids[6]; } IdList6_6713c;
typedef struct { u32 ids[18]; } IdList18_6713c;
extern const IdList6_6713c data_0213fc8c;
extern const IdList18_6713c data_0213fca4;
extern const u32 data_0213fc74;
extern u8 data_021477a0[];
extern void *func_02067354(void *,s32);
extern u8 data_02147f84[], data_02147fa0[];
extern u8 *func_02109c60(void *, u32 *);
extern void func_0210fe1c(void *,u32,void *,s32);
extern void *func_02013858(void *,const void *,u32);
extern void func_0210e9e8(void *,s32,u32,void *);
extern void func_0210ea6c(void *,s32,u32,void *);
extern void *func_02067294(void *,u32);
extern void func_021091b4(void);
extern u8 *data_021600e0[];
extern const s16 data_0213a394[];
typedef struct { s32 x,y,z; } UnkVec66;

extern void *func_0210c594(u32, u32);
extern void *func_0203be60(void *, void *, void *);
extern void func_021167f0(void *, void *);
extern void func_0210c5dc(void *);
extern void func_021167ac(void *, s32);
extern u32 data_02155c3c;
extern u8 *data_021600e8;
extern void func_0210d9e4(void *);
extern void func_0210db70(void *);
extern void func_0210dbd0(void *);
extern void func_0206713c(s32, s32);
extern void func_0206ed38(void);
extern void func_02067744(void);
s32 func_0210c2f4(void *,void *);
s32 func_02002404(s32,s32);

#pragma opt_common_subs off
void func_0206713c(s32 arg0,s32 arg1) {
 u8 *base=data_021477a0; u8 i;
 if(arg1==0) {
 switch(arg0) {
 case 1: func_02067354(data_021477a0,101); break;
 case 8: {
 IdList6_6713c list=data_0213fc8c;
 for(i=0;i<6;i++) func_02067294(base+list.ids[i]*20,list.ids[i]);
 break;
 }
 case 2: {
 IdList18_6713c list=data_0213fca4;
 for(i=0;i<18;i++) {func_02067294(base+list.ids[i]*20,list.ids[i]);func_021091b4();}
 break;
 }
 case 18: { const u32 list[1]={74}; func_02067294(base+list[0]*20,list[0]); break; }
 }
 } else func_02067294(base+arg0*20,arg0);
}
#pragma opt_common_subs reset
void *func_02067294(void *arg0, u32 arg1) {
    void *result;
    u8 *p1;
    u8 *p2;
    void *second;

    p1 = func_0210c594(0x1c, data_02155c3c);
    p2 = func_0210c594(0x10, data_02155c3c);
    second = *(void **)((u8 *)arg0 + 4);
    if (second == NULL) {
        result = func_0203be60(p1, *(void **)arg0, *(void **)arg0);
    } else {
        result = func_0203be60(p1, *(void **)arg0, second);
    }
    if (result != NULL) {
        *(s32 *)(p1 + 0x10) = *(s32 *)((u8 *)arg0 + 0x8);
        *(s32 *)(p1 + 0x14) = *(s32 *)((u8 *)arg0 + 0xc);
        *(s32 *)(p1 + 0x18) = *(s32 *)((u8 *)arg0 + 0x10);
        *(void **)p2 = p1;
        *(u16 *)(p2 + 0x4) = arg1;
        func_021167f0(data_021600e8 + 0x3c, p2);
    } else {
        if (p1 != NULL) {
            func_0210c5dc(p1);
        }
        if (p2 != NULL) {
            func_0210c5dc(p2);
        }
    }
    return result;
}

void func_0206753c(u16 arg0) {
    u8 *p;
    u8 *node;

    p = data_021600e8;
    if (p == NULL) return;
    node = *(u8 **)(p + 0x3c);
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

void *func_020675e4(u8 arg0, u16 arg1) {
    u8 *p = func_0210c594(0x68, data_02155c3c);
    *(u32 *)(p + 0x0) = 0;
    *(u32 *)(p + 0x4) = 0;
    *(u32 *)(p + 0x8) = 0;
    *(u32 *)(p + 0xc) = 0;
    *(u32 *)(p + 0x10) = 0;
    *(u32 *)(p + 0x14) = 0;
    *(u8 *)(p + 0x18) = arg0;
    *(u16 *)(p + 0x1a) = arg1;
    *(u16 *)(p + 0x1c) = 0;
    *(u16 *)(p + 0x22) = 0;
    *(u16 *)(p + 0x26) = 0;
    *(u32 *)(p + 0x2c) = 0;
    *(u16 *)(p + 0x30) = 0;
    *(u16 *)(p + 0x32) = 0;
    *(u16 *)(p + 0x34) = 0;
    *(u16 *)(p + 0x36) = 0;
    *(u8 *)(p + 0x40) = 0;
    *(u32 *)(p + 0x44) = 1;
    *(u32 *)(p + 0x48) = 0;
    *(u32 *)(p + 0x4c) = 0;
    func_021167ac(p + 0x54, 0x34);
    return p;
}

void func_02067674(void) {
    u8 *p = func_0210c594(0x3c, data_02155c3c);
    p[0x26] = 0x1f;
}

void *func_02067698(u8 *arg0, u16 arg1) {
    u8 *node = *(u8 **)(arg0 + 0x54);
    while (node != NULL) {
        if (*(u16 *)(node + 0x2a) == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x38);
    }
    return NULL;
}

void func_020676c4(u8 arg0, u16 arg1) {
    u8 *node = *(u8 **)(data_021600e8 + 0x48);
    while (node != NULL) {
        if (*(u16 *)(node + 0x24) == arg1 && *(u8 *)(node + 0x18) == arg0) {
            *(u32 *)(node + 0x48) = 1;
            return;
        }
        node = *(u8 **)(node + 0x64);
    }
}

void func_02067708(u32 arg0) {
    u8 *p = data_021600e8;
    u8 *node;
    if (p == NULL) {
        return;
    }
    node = *(u8 **)(p + 0x48);
    while (node != NULL) {
        if (*(u32 *)(node + 0x4c) == arg0) {
            *(u32 *)(node + 0x4c) = 0;
        }
        node = *(u8 **)(node + 0x64);
    }
}

