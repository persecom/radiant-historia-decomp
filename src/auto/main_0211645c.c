/* 54 functions from 0x02116350 to 0x02117304 (main), found by ds-decomp. */
#include "common.h"

extern void func_02116ad8();
extern u32 data_0216e21c;
extern u8 data_0216e220[12];
extern void *func_021169cc(void *, const void *);
extern void func_021167ac(void *, u16);
extern u8 data_0216cb1c[12];
extern u8 data_0216e1f8[24];
extern u8 data_0216e210[12];
extern u8 *data_0216cb10[3];
extern s32 data_02155dc4[54];
extern void *func_02116958(void *, void *);
void func_0211645c(u8 *arg0);
void func_021164e0(u8 *arg0);
void func_02116578(u8 *arg0);
void func_021165e0(u8 *arg0);
void func_02116604(void *arg0, void *arg1);
void func_02116674(void *arg0);
void func_02116720(s32 *arg0, s32 arg1, s32 arg2);
s32 func_02116748(s32 *arg0);
extern void func_021167f0(void *, void *);
extern void func_021168f8(void *, void *);
extern s32 func_02008128(void);
extern void func_0200813c(s32);

void func_02116488(u8 *arg0, s32 arg1) {
    typedef struct {
        u8 pad[0x118];
        s32 b0 : 1;
        s32 b1 : 1;
        s32 b2 : 1;
        s32 b3 : 1;
    } SndStrmPlayer;
    SndStrmPlayer *p = (SndStrmPlayer *)arg0;
    if (!p->b1) {
        func_021164e0(arg0);
        return;
    }
    if (arg1 == 0) {
        func_021164e0(arg0);
        return;
    }
    func_02116720(arg0 + 0xf0, 0, arg1);
    p->b3 = 1;
    *(void **)(arg0 + 0x158) = NULL;
}

void func_021164e0(u8 *arg0) {
    typedef struct {
        u8 pad[0x118];
        s32 b0 : 1;
        s32 b1 : 1;
        s32 b2 : 1;
        s32 b3 : 1;
    } SndStrmPlayer;
    SndStrmPlayer *p = (SndStrmPlayer *)arg0;
    func_02006afc(data_0216e1f8);
    if (data_0216cb10[1] != NULL) {
        func_02006afc(data_0216cb10[1] + 0x10c8);
    }
    if (p->b1) {
        func_0211470c(arg0);
    }
    if (p->b0) {
        ((void (*)(u8 *))(*(void **)(arg0 + 0x178)))(arg0);
    }
    func_02116578(arg0);
    func_02006b4c(data_0216e1f8);
    if (data_0216cb10[1] != NULL) {
        func_02006b4c(data_0216cb10[1] + 0x10c8);
    }
}

void func_02116578(u8 *arg0) {
    typedef struct {
        u8 pad[0x118];
        s32 b0 : 1;
    } SndStrmPlayer;
    SndStrmPlayer *p = (SndStrmPlayer *)arg0;
    if (!p->b0) {
        return;
    }
    func_021165e0(arg0);
    ((void (*)(u8 *))(*(void **)(arg0 + 0x170)))(arg0);
    func_02116604(data_0216e210, arg0);
    if (data_0216cb10[1] != NULL) {
        func_02116604(data_0216cb10[1] + 0x10e0, arg0);
    }
    func_0211645c(arg0);
}

void func_021165e0(u8 *arg0) {
    if (*(s32 *)(arg0 + 0x128) == 0) {
        return;
    }
    if (--(*(s32 *)(arg0 + 0x128)) == 0) {
        func_021144f0(arg0);
    }
}

void func_02116604(void *arg0, void *arg1) {
    s32 irq = func_02008128();
    u8 *node = func_02116958(arg0, NULL);
    while (node != NULL) {
        u8 *next = func_02116958(arg0, node);
        if (*(void **)(node + 8) == arg1) {
            func_021168f8(arg0, node);
            func_02116674(node);
        }
        node = next;
    }
    func_0200813c(irq);
}

void func_02116674(void *arg0) {
    s32 irq = func_02008128();
    func_021167f0(data_0216cb1c, arg0);
    func_0200813c(irq);
}

void func_021166a0(void) {
    if (data_02155dc4[0] == 1) {
        func_020097d0(0);
    }
    func_02114a38();
}

void *func_021166c8(u8 *arg0, s32 arg1) {
    u8 *entry;
    if (arg1 < 0) {
        return NULL;
    }
    if ((u32)arg1 >= *(u32 *)(arg0 + 0x1c)) {
        return NULL;
    }
    entry = arg0 + 0x20 + arg1 * 0xc;
    if (*(s32 *)entry == -1) {
        return NULL;
    }
    return entry;
}

void func_02116708(s32 *arg0) {
    arg0[1] = 0;
    arg0[0] = 0;
    arg0[3] = 0;
    arg0[2] = 0;
}
