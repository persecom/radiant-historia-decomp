/* 13 functions from 0x0209B328 to 0x0209C2AC (main), found by ds-decomp. */
#include "common.h"
typedef struct { u16 unk[10]; } Unk20;
typedef struct { s16 data[1080]; } Unk870;
extern const Unk20 data_0214209c;
extern const Unk20 data_021420d8;
extern const Unk870 data_02142344;
extern void func_021167f0(void *, void *);
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);

extern u32 data_02155c3c;
extern u8 *data_02160120;
extern void *func_0210c594(u32, u32);
extern void func_021167ac(void *, s32);
extern void func_0209b194(s32);
extern u8 *func_0209ac14(void);
extern void *func_0209c14c(u16);
extern void func_0209acdc(void *, s32);

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

void func_0209b5fc(void) {
    u8 *base = data_02160120;
    u8 count;
    u8 *node;

    if ((*(u16 *)(base + 0x696) & 1) == 0) {
        *(u16 *)(base + 0x696) |= 1;
        *(u16 *)(base + 0x696) |= 2;
        node = func_0209ac14();
        while (node != NULL) {
            if (*(u16 *)(node + 0x12) & 1) {
                func_0209acdc(node, 0);
            }
            node = *(u8 **)(node + 0x38);
        }
    }
    *(s16 *)(base + 0x698) += 4;
    if (*(s16 *)(base + 0x698) <= 30) {
        return;
    }
    count = 0;
    node = func_0209ac14();
    while (node != NULL) {
        if (*(u16 *)(node + 0x12) & 2) {
            *(u16 *)((u8 *)func_0209c14c((u16)(node[0] + 0x37)) + 2) |= 1;
            *(u16 *)((u8 *)func_0209c14c((u16)(node[0] + 0x3a)) + 2) |= 1;
            *(u16 *)((u8 *)func_0209c14c((u16)(node[0] + 0x3d)) + 2) |= 1;
            *(u16 *)((u8 *)func_0209c14c((u16)(node[0] + 0x40)) + 2) |= 1;
            *(u16 *)((u8 *)func_0209c14c((u16)(node[0] + 0x2b)) + 2) &= ~1;
            *(u16 *)((u8 *)func_0209c14c((u16)(node[0] + 0x2e)) + 2) &= ~1;
            *(u16 *)((u8 *)func_0209c14c((u16)(node[0] + 0x34)) + 2) &= ~1;
            *(u16 *)((u8 *)func_0209c14c((u16)(node[0] + 0x31)) + 2) &= ~1;
            count++;
            *(u16 *)(node + 0x12) |= 8;
        }
        node = *(u8 **)(node + 0x38);
    }
    if (count != 0) {
        func_0209b194(6);
    } else {
        func_0209b194(7);
    }
}

extern u8 *func_0209ac14(void);
extern void *func_020bd490(s32, u8);
extern s32 func_02065884(void *, u16);
extern s32 func_02065958(void *, u16);
extern void func_0209ca18(void *, void *, s32, s32, s16, s32);
extern void *func_0209c14c(u16);
extern void func_0210d27c(s32);
extern void func_0209c94c(void *, void *);
void func_0209b7e4(void) {
    u8 *base = data_02160120;
    u8 *node;
    u8 *sub;
    u16 count = 0;

    node = func_0209ac14();
    while (node != NULL) {
        sub = *(u8 **)(node + 0x3c);
        if (sub != NULL) {
            if (*(s16 *)(sub + 2) == 0) {
                s32 val1 = func_02065884(func_020bd490(1, node[0]), *(u16 *)sub);
                s32 val2 = func_02065958(func_020bd490(1, node[0]), *(u16 *)sub);
                u8 *obj;
                func_0209ca18(*(void **)(node + 0x30), *(void **)(base + 0x6a0), val1, 0x94, (s16)(node[0] * 0x38 + 0x34), 100);
                obj = (u8 *)func_0209c14c((u16)(node[0] + 0x43));
                *(u16 *)(obj + 2) |= 1;
                if (val2 == 0) {
                    *(u16 *)(obj + 4) = 10;
                } else if (val2 == 1) {
                    *(u16 *)(obj + 4) = 11;
                } else if (val2 == 2) {
                    *(u16 *)(obj + 4) = 12;
                } else if (val2 == 3) {
                    *(u16 *)(obj + 4) = 13;
                }
                func_0210d27c(0x9a);
            }
            *(s16 *)(sub + 2) += 6;
            if (*(s16 *)(sub + 2) > 50) {
                *(s16 *)(sub + 2) = 50;
                func_0209c94c(node, sub);
            }
        } else {
            count++;
        }
        node = *(u8 **)(node + 0x38);
    }
    if (count != base[0x694]) {
        return;
    }
    *(s16 *)(base + 0x698) += 10;
    if (*(s16 *)(base + 0x698) <= 50) {
        return;
    }
    func_0209b194(7);
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

void func_0209bfa0(s32 val, s32 x, s32 y, s32 arg3, u8 flag) {
    Unk20 buf = data_021420d8;

    *(volatile u32 *)0x40004a4 = 0x1f0080;
    if (flag == 0) {
        func_020a3bbc(0x19);
    } else {
        func_020a3bbc(0x1b);
    }

    buf.unk[7] = arg3;
    buf.unk[5] = x - 14;
    buf.unk[6] = y;
    buf.unk[2] = 0;
    buf.unk[3] = 7;
    buf.unk[4] = 8;
    buf.unk[8] = 7;
    buf.unk[9] = 8;
    buf.unk[1] = (s16)((val / 10) % 10) * 7;
    func_021098ac(&buf);

    buf.unk[5] = x - 7;
    buf.unk[6] = y;
    buf.unk[1] = (s16)(val % 10) * 7;
    func_021098ac(&buf);

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

void func_0209c198(void) {
    Unk870 buf = data_02142344;
    u8 *base = data_02160120;
    void *list;
    u16 i;

    if (base == NULL) {
        return;
    }

    list = *(void **)(base + 0x704);
    for (i = 0; i < 0x5d; i++) {
        u16 idx = i * 12;
        u8 *p = (u8 *)func_0210c594(0x2c, data_02155c3c);
        *(s16 *)(p + 0x06) = buf.data[idx + 0];
        *(s16 *)(p + 0x08) = buf.data[idx + 1];
        *(s16 *)(p + 0x0a) = buf.data[idx + 2];
        *(s16 *)(p + 0x0c) = buf.data[idx + 3];
        *(s32 *)(p + 0x10) = buf.data[idx + 4];
        *(s32 *)(p + 0x14) = buf.data[idx + 5];
        *(s32 *)(p + 0x18) = buf.data[idx + 6];
        *(s16 *)(p + 0x1c) = buf.data[idx + 7];
        *(s16 *)(p + 0x1e) = buf.data[idx + 8];
        *(s16 *)(p + 0x04) = buf.data[idx + 9];
        *(s16 *)(p + 0x00) = buf.data[idx + 10];
        *(s16 *)(p + 0x02) = buf.data[idx + 11];
        p[0x20] = 0x1f;
        func_021167f0(list, p);
    }
}

