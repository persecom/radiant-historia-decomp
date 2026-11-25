/* 9 functions from 0x0203C998 to 0x0203D970 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160098[2];
extern u32 data_02155c3c;

extern void *func_0210c594(u32, u32);
extern void func_021167ac(void *, s32);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void func_020020f8(void *, void *, void *);
extern void func_020f4668(void *);

extern u8 *data_02160a74;
extern u8 *data_02160110;
extern u8 *data_02160258;
extern BOOL func_020df03c(s32);
extern void func_020a5ce4(void *);
extern void func_020df38c(s32, s32);
extern void func_020de078(void);
extern void func_020df3f4(s32, s32);
extern void func_020e25fc(s32, s32, s32);
extern void func_020e26f0(s32, s32, s32);
extern void func_020d91bc(s32);
extern void func_020da0c8(s32);
extern void func_020e86c0(s32);
extern void func_020df0c0(void);

void func_0203d1d4(void) {
    register u8 **ctx asm("r5") = &data_02160a74;
    register void *p asm("r4") = *(void **)(data_02160a74 + 0x94);
    if (func_020df03c(1) != 0) {
        func_020a5ce4(p);
        p = NULL;
        func_020df38c((s32)p, (s32)p);
        func_020de078();
        *(u32 *)(*ctx + 0x58) &= ~0x80000;
        *(u32 *)(*ctx + 0x58) &= ~0x2000;
        func_020df3f4((s32)p, (s32)p);
        (*ctx)[0x1c2] &= 0xfb;
        data_02160110[0xdc] |= 4;
        *(u32 *)(*ctx + 0x58) &= ~0x100000;
        func_020e25fc(8, (s32)p, (s32)p);
        func_020e26f0(7, (s32)p, 999);
        *(u32 *)(*ctx + 0x58) &= ~4;
        func_020d91bc(3);
        func_020da0c8(*(u16 *)(data_02160258 + 0x90));
        func_020e86c0(2);
    }
    func_020df0c0();
}

extern u8 *data_0216011c;
extern void *data_02160090;
extern u8 *func_02032254(u16);
extern void func_020960dc(void);
extern void func_02096670(s32, s32, s32);
extern void func_020d0a40(s32);
extern void func_0209353c(u32, s32, s32);
extern void func_020c30f8(s32);
extern void func_02096740(u8 *, s32);
extern void func_02096ad4(s32, s32);
extern void func_0203312c(u32, u32);
extern void func_02095f68(void *);
extern void func_0209625c(void);
extern void func_021167f0(void *, void *);
extern void func_02116844(void *, void *);
extern void func_02116894(void *, void *, void *);
#pragma push
#pragma peephole off
void func_0203d2d4(void) {
    s32 one = 1;
    s32 zero = 0;
    s32 flag;
    u8 *a, *b, *obj;
    switch (*(u16 *)(data_02160110 + 0xec)) {
    case 0: {
        s32 two = 2;
        a = func_02032254((u16)(*(s16 *)(data_02160110 + 0xb6) - 1));
        func_020960dc();
        func_02096670(two, zero, zero);
        *(u16 *)(data_02160110 + 0xd2) &= 0xfffe;
        func_020d0a40(32);
        b = *(u8 **)(*(u8 **)(a + 0x14) + 8);
        *(s16 *)(data_02160110 + 0xee) = *(s16 *)(b + 0xc);
        *(s16 *)(data_02160110 + 0xf0) = *(s16 *)(b + 0xe);
        *(s16 *)(data_02160110 + 0xf2) = *(s16 *)(b + 0xe);
        a = func_02032254((u16)(*(s16 *)(data_02160110 + 0xde) + 1));
        b = *(u8 **)(*(u8 **)(a + 0x14) + 8);
        *(s16 *)(data_02160110 + 0xf4) = *(s16 *)(b + 0xe);
        data_02160110[0xf6] = zero;
        data_02160110[0xf7] = zero;
        *(u16 *)(data_02160110 + 0xec) = one;
        return;
    }
    case 1:
        a = func_02032254((u16)(*(s16 *)(data_02160110 + 0xb6) - 1));
        b = *(u8 **)(*(u8 **)(a + 0x14) + 8);
        *(s16 *)(data_02160110 + 0xee) = *(s16 *)(b + 0xc);
        *(s16 *)(data_02160110 + 0xf0) = *(s16 *)(b + 0xe);
        if (data_02160110[0xf6] == 0) {
            *(s16 *)(data_02160110 + 0xee) -= 0x28;
            if (*(s16 *)(data_02160110 + 0xee) + 0x64 < 0) {
                data_02160110[0xf6] = one;
                *(s16 *)(data_02160110 + 0xf0) = *(s16 *)(data_02160110 + 0xf4);
                *(s16 *)(data_02160110 + 0xee) = (s16)(one - 0xb5);
            }
        } else {
            *(s16 *)(data_02160110 + 0xee) += 0x18;
            if (*(s16 *)(data_02160110 + 0xee) > 0x14) {
                data_02160110[0xf6] = 2;
                *(s16 *)(data_02160110 + 0xee) = 0x14;
            }
        }
        func_0209353c(*(u16 *)b, *(s16 *)(data_02160110 + 0xee), *(s16 *)(data_02160110 + 0xf0));
        a = func_02032254((u16)(*(s16 *)(data_02160110 + 0xde) + 1));
        b = *(u8 **)(*(u8 **)(a + 0x14) + 8);
        *(s16 *)(data_02160110 + 0xee) = *(s16 *)(b + 0xc);
        *(s16 *)(data_02160110 + 0xf0) = *(s16 *)(b + 0xe);
        if (data_02160110[0xf7] == 0) {
            *(s16 *)(data_02160110 + 0xee) += 0x4f;
            if (*(s16 *)(data_02160110 + 0xee) > 0x100) {
                data_02160110[0xf7] = one;
                *(s16 *)(data_02160110 + 0xf0) = *(s16 *)(data_02160110 + 0xf2);
                *(s16 *)(data_02160110 + 0xee) = 0x100;
            }
        } else {
            *(s16 *)(data_02160110 + 0xee) -= 0x20;
            if (*(s16 *)(data_02160110 + 0xee) < 0x14) {
                data_02160110[0xf7] = 2;
                *(s16 *)(data_02160110 + 0xee) = 0x14;
            }
        }
        func_0209353c(*(u16 *)b, *(s16 *)(data_02160110 + 0xee), *(s16 *)(data_02160110 + 0xf0));
        if (data_02160110[0xf6] == 2 && data_02160110[0xf7] == 2) {
            *(u16 *)(data_02160110 + 0xec) = 2;
        }
        return;
    case 2: {
        s32 two;
        u8 *pa, *pb, *next, *base;
        u16 t, u;
        zero = 0;
        func_020c30f8(zero);
        a = func_02032254((u16)(*(s16 *)(data_02160110 + 0xb6) - 1));
        b = func_02032254((u16)(*(s16 *)(data_02160110 + 0xde) + 1));
        obj = *(u8 **)a;
        two = one;
        *(u32 *)(obj + 0x80) |= 0x20000;
        *(u16 *)(*(u8 **)(obj + 0x118) + 0xbc) = two;
        if (data_0216011c == NULL) {
            func_02096740(a, two);
        } else {
            func_02096ad4(zero, zero);
        }
        t = *(u16 *)(a + 0x4c);
        u = *(u16 *)(b + 0x4c);
        pa = *(u8 **)(a + 0x14);
        pb = *(u8 **)(b + 0x14);
        *(u16 *)(a + 0x4c) = u;
        *(u16 *)(b + 0x4c) = t;
        t = *(u16 *)(pa + 0x10);
        u = *(u16 *)(pb + 0x10);
        *(u16 *)(pa + 0x10) = u;
        *(u16 *)(pb + 0x10) = t;
        func_0203312c(*(u32 *)(a + 0x48), *(u32 *)(b + 0x48));
        flag = 0;
        if (a == *(u8 **)(b + 0x18) || a == *(u8 **)(b + 0x1c)) flag = 1;
        if (flag == 1) {
            func_021168f8((u8 *)data_02160090 + 8, b);
            base = data_02160090;
            if (a == NULL) func_021167f0(base + 8, b);
            else if (a == *(u8 **)(base + 8)) func_02116844(base + 8, b);
            else func_02116894(base + 8, a, b);
        } else if (flag == 0) {
            next = *(u8 **)(b + 0x1c);
            func_021168f8((u8 *)data_02160090 + 8, b);
            base = data_02160090;
            if (a == NULL) func_021167f0(base + 8, b);
            else if (a == *(u8 **)(base + 8)) func_02116844(base + 8, b);
            else func_02116894(base + 8, a, b);
            func_021168f8((u8 *)data_02160090 + 8, a);
            base = data_02160090;
            if (next == NULL) func_021167f0(base + 8, a);
            else if (next == *(u8 **)(base + 8)) func_02116844(base + 8, a);
            else func_02116894(base + 8, next, a);
        }
        func_02095f68(*(void **)(a + 0x14));
        *(u32 *)(*(u8 **)a + 0x80) &= ~0x1000;
        func_0209625c();
        *(u16 *)(data_02160110 + 0xec) = 3;
        func_020c30f8(1);
        return;
    }
    case 3:
        *(u16 *)(data_02160110 + 0xec) = 0;
        func_020de078();
        func_020df38c(0, 0);
        func_020e86c0(17);
        return;
    }
}
#pragma pop
