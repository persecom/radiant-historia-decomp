/* 18 functions from 0x02031724 to 0x02032488 (main), found by ds-decomp. */
#include "common.h"
extern u8 *func_02032c44(void);
extern void func_021167f0(void *,void *);
extern void func_02116844(void *,void *);
extern void func_02116894(void *,void *,void *);

extern void *data_0216008c;
extern void *data_02160090;
extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_021167ac(void *, s32);
extern void func_02031fcc(s32, s32);
extern void func_021168f8(void *, void *);
extern void func_02033060(void);
extern void func_02032de8(void);
extern void func_02033010(void);
extern void func_02032f34(void);
extern void func_020c2b98(void);
extern void func_020c2be4(void);
extern void func_020c2c30(void);
extern void func_0210c5dc(void *);
extern u8 *func_02030698(void *, s32);
extern void func_020c2708(u8);
extern void func_020c2870(u8);
void *func_02031c24(u32 arg0) {
    void *node = *(void **)((u8 *)data_0216008c + 0x2c);
    while (node != NULL) {
        if (*(u8 *)((u8 *)node + 0x8) == arg0) {
            return node;
        }
        node = *(void **)((u8 *)node + 0x4);
    }
    return NULL;
}

void func_02031c60(void) {
}

void func_02031c64(void) {
    if (data_02160090 != NULL) {
        return;
    }
    data_02160090 = func_0210c594(0x84, data_02155c3c);
    func_021167ac((u8 *)data_02160090 + 8, 0x18);
    func_021167ac((u8 *)data_02160090 + 0x14, 0x20);
    func_021167ac((u8 *)data_02160090 + 0x24, 0x10);
    func_021167ac((u8 *)data_02160090 + 0x30, 8);
    func_021167ac((u8 *)data_02160090 + 0x3c, 8);
    func_021167ac((u8 *)data_02160090 + 0x48, 0x20);
    func_021167ac((u8 *)data_02160090 + 0x54, 0x20);
    func_021167ac((u8 *)data_02160090 + 0x60, 8);
    func_021167ac((u8 *)data_02160090 + 0x6c, 0x20);
}

void func_02031d2c(void) {
    void *node = *(void **)((u8 *)data_02160090 + 0x14);
    while (node != NULL) {
        void *next = *(void **)((u8 *)node + 0x24);
        func_021168f8((u8 *)data_02160090 + 0x14, node);
        node = next;
    }
    func_02033060();
    func_02032de8();
    func_02033010();
    func_02032f34();
    func_020c2b98();
    func_020c2be4();
    func_020c2c30();
    if (data_02160090 != NULL) {
        func_0210c5dc(data_02160090);
        data_02160090 = NULL;
    }
}

extern u8 *func_02032c44(void);
extern void func_021167f0(void *, void *);
extern void func_02116844(void *, void *);
extern void func_02116894(void *, void *, void *);
u8 *func_02031ec8(s32 arg0, s32 arg1, u8 *arg2, s32 arg3, u16 arg4) {
    u8 *node = func_02032c44();
    u8 *cur;
    u16 i;
    *(s32 *)(node + 0) = arg0;
    *(s32 *)(node + 4) = arg1;
    *(u8 **)(node + 8) = arg2;
    *(u8 **)(node + 0x3c) = arg2;
    *(s32 *)(node + 0x38) = arg1;
    *(s32 *)(node + 0x34) = arg0;
    *(u16 *)(node + 0x4c) = arg4;
    *(s32 *)(node + 0x48) = arg3;
    if (arg2 != NULL) {
        if (arg2[0x14] == 1) {
            *(u16 *)(node + 0xe) |= 2;
        }
    }
    cur = *(u8 **)((u8 *)data_02160090 + 8);
    i = 0;
    while (cur != NULL) {
        if (arg4 == i) {
            break;
        }
        i++;
        cur = *(u8 **)(cur + 0x1c);
    }
    if (cur == NULL) {
        func_021167f0((u8 *)data_02160090 + 8, node);
    } else if (cur == *(u8 ** volatile)((u8 *)data_02160090 + 8)) {
        func_02116844((u8 *)data_02160090 + 8, node);
    } else {
        func_02116894((u8 *)data_02160090 + 8, cur, node);
    }
    *(u16 *)data_02160090 += 1;
    return node;
}

void func_02031fbc(s32 arg0, s32 arg1, s32 arg2) {
    func_02031fcc(arg0, arg2);
}

void func_0203218c(u8 *arg0) {
    void *node;
    if (arg0 == NULL) {
        return;
    }
    while ((node = *(void **)(arg0 + 0x28)) != NULL) {
        func_021168f8(arg0 + 0x28, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

void func_020321cc(s32 arg0) {
    void *node;
    while ((node = *(void **)((u8 *)data_02160090 + 8)) != NULL) {
        func_02031fcc((s32)node, arg0);
    }
}

void func_02032208(u8 *arg0, void *arg1) {
    func_021168f8(arg0 + 0x28, arg1);
    if (arg1 != NULL) {
        func_0210c5dc(arg1);
    }
}

void *func_0203222c(void) {
    return *(void **)((u8 *)data_02160090 + 8);
}

void *func_02032240(void) {
    return *(void **)((u8 *)data_02160090 + 0x14);
}

void *func_02032254(u16 arg0) {
    u16 i = 0;
    u8 *node = (u8 *)func_0203222c();
    while (node != NULL) {
        if (i == arg0) {
            return node;
        }
        i++;
        node = *(u8 **)(node + 0x1c);
    }
    return NULL;
}

s32 func_02032294(u8 *arg0) {
    s32 a = 0;
    s32 b = 0;
    u8 *p = func_02030698(*(void **)(arg0 + 0x118), 8);
    if (p != NULL) {
        a += *(s16 *)(p + 2);
        b += *(s16 *)(p + 4);
    }
    p = func_02030698(*(void **)(arg0 + 0x118), 9);
    if (p != NULL) {
        a -= *(s16 *)(p + 2);
        b -= *(s16 *)(p + 4);
    }
    return a + b;
}

void func_020322ec(s16 arg0) {
    u8 *p = (u8 *)data_02160090;
    if (arg0 >= 10) {
        return;
    }
    do {
        func_020c2708((u8)*(u16 *)(p + 0x78));
        func_020c2870((u8)*(u16 *)(p + 0x78));
        *(volatile u16 *)(p + 0x78) += 1;
        if (*(volatile u16 *)(p + 0x78) > 0x19) {
            *(volatile u16 *)(p + 0x78) = 0x19;
        }
        arg0++;
    } while (arg0 <= 10);
}

