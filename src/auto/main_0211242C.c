/* 33 functions from 0x0211242C to 0x021133F8 (main), found by ds-decomp. */
#include "common.h"

extern void func_0211242c(void *, s32, s32);
extern u32 func_020c9c34(void *);
extern u8 *func_020c9c10(void *, u16);
extern void func_02111a3c(void *, u8);
extern void func_02112dcc(void *, s32, s32);
extern void func_020c7930(void *);
extern void func_020c94c8(void *, u16, u16);
extern void func_02110b94(void *);
extern void func_02112724(void);
extern void func_021127fc(u8 *);
extern u8 *func_020c9b24(void *, s32, s32);
extern const u16 data_02144cfc[2];
extern const u16 data_02144cf8[2];
extern u32 func_020c73b8(void *);
extern void func_020c738c(void *, u32, s32);
extern u32 data_02155c3c;
extern u32 data_0216bf88;
extern u32 func_0210c594(s32, u32);
extern void func_021167ac(void *, s32);
extern void func_021168f8(void *, void *);
extern void func_02112ed8(void);
extern void func_02112f14(void);
extern void func_0210c5dc(void *);
typedef struct UnkFuncTable20 {
    void (*fn[5])(void);
} UnkFuncTable20;
extern UnkFuncTable20 data_02155d1c;

extern void func_02112110(void);
void func_02112554(u8 *arg0, s32 arg1) {
    func_0211242c(arg0, arg1, *(s16 *)(arg0 + 0x96));
}

void func_02112564(u8 *arg0, s32 arg1) {
    func_0211242c(arg0, *(s16 *)(arg0 + 0x94), arg1);
}

void func_02112578(u8 *arg0, u8 arg1) {
    u32 count = func_020c9c34(*(void **)(arg0 + 0x8c));
    u16 i;
    u8 *obj;
    u8 val;

    for (i = 0; i < count; i++) {
        obj = func_020c9c10(*(void **)(arg0 + 0x8c), i);
        if (obj != NULL) {
            ((void (*)(u8 *, u8))(*(void **)(obj + 0x1c)))(obj, arg1 + (obj[0x43] - arg0[0x98]));
        }
    }
    obj = *(u8 **)(arg0 + 0x90);
    ((void (*)(u8 *, u8))(*(void **)(obj + 0x1c)))(obj, arg1 + (obj[0x38] - arg0[0x98]));
    val = arg1 + (arg0[0x48] - arg0[0x98]);
    arg0[0x98] = arg1;
    func_02111a3c(arg0, val);
}

u16 func_02112620(u8 *arg0) {
    return *(u16 *)(arg0 + 0x9a);
}

void func_02112628(u8 *arg0, u16 arg1, u16 arg2, u16 arg3) {
    u8 *obj = func_020c9c10(*(void **)(arg0 + 0x8c), arg1);
    *(u16 *)(obj + 0x3e) = arg2;
    *(u16 *)(obj + 0x40) = arg3;
    if (((s32 (*)(u8 *))(*(void **)(obj + 0x28)))(obj) == 5) {
        func_020c7930(obj);
    }
    func_020c94c8(*(void **)(arg0 + 0x6c), (u16)(arg2 - 8), (u16)(arg3 - 8));
}

void *func_02112688(u8 *arg0) {
    return *(void **)(arg0 + 0x90);
}

s32 func_02112690(u8 *arg0) {
    u8 *obj;
    func_02110b94(arg0);
    *(void **)(arg0 + 0x4c) = (void *)func_02112724;
    *(void **)(arg0 + 0x50) = (void *)func_021127fc;
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 0);
    *(u16 *)(obj + 0x3e) = 0xc8;
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 3);
    *(u16 *)(obj + 0x3e) = 0xc8;
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 2);
    ((void (*)(u8 *, s32))(*(void **)(obj + 0x10)))(obj, 0x14);
    return 0;
}

void func_021126fc(u8 *arg0, u32 arg1) {
    u8 *obj = func_020c9b24(*(void **)(arg0 + 0x30), 4, 2);
    *(u32 *)(obj + 0x4c) = arg1;
    obj[0x50] = 1;
}

void func_021127fc(u8 *arg0) {
 u8 *p;
 s32 two=2, zero=0, eight=8, ten=10;
 p=func_020c9b24(*(void **)(arg0+0x30),4,two);
 *(u16 *)(p+0x32)=zero;
 *(u16 *)(p+0x34)=zero;
 *(u16 *)(p+0x36)=eight;
 *(u16 *)(p+0x38)=ten;
 *(u16 *)(p+0x3e)=eight;
 *(u16 *)(p+0x40)=ten;
 p[0x43]++;
 (*(void (**)(u8 *,s32))(p+0x10))(p,0xb6);
 (*(void (**)(u8 *,s32))(p+0x14))(p,two);
 p=func_020c9b24(*(void **)(arg0+0x30),5,1);
 *(u16 *)(p+0x32)=0x50;
 *(u16 *)(p+0x34)=zero;
 *(u16 *)(p+0x36)=eight;
 *(u16 *)(p+0x38)=ten;
 *(u16 *)(p+0x3e)=eight;
 *(u16 *)(p+0x40)=ten;
 p[0x43]++;
 (*(void (**)(u8 *,s32))(p+0x10))(p,0xbe);
 (*(void (**)(u8 *,s32))(p+0x14))(p,two);
}

s32 func_021128c4(void) {
    func_02112110();
    return 0;
}

extern void func_0210c5dc(void *);
extern void func_021121b8(void *);
void func_021128d4(void *arg0) {
    func_021121b8(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_021128f4(void) {
    return 0x11;
}

extern void func_020c8818(void *);
void func_02112ac0(void *arg0) {
    func_020c8818(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_02112ae0(void) {
    return 0x13;
}

extern void func_020c9940(void *);
void func_02112c94(u8 *arg0) {
    if (*(void **)(arg0 + 0x30) != NULL) {
        func_020c9940(*(void **)(arg0 + 0x30));
        if (*(void **)(arg0 + 0x30) != NULL) {
            func_0210c5dc(*(void **)(arg0 + 0x30));
            *(void **)(arg0 + 0x30) = NULL;
        }
        *(void **)(arg0 + 0x30) = NULL;
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

extern void func_020c9b64(void *);
s32 func_02112ce0(void *arg0) {
    func_020c9b64(*(void **)((u8 *)arg0 + 0x30));
    return 0;
}

void func_02112cf4(u8 *arg0, u32 arg1, u32 arg2) {
    u16 vals[2];
    u16 *dst = vals;
    u16 i;
    u8 *obj;
    vals[0] = data_02144cfc[0];
    vals[1] = data_02144cfc[1];
    for (i = 0; i < 2; i++) {
        obj = func_020c9c10(*(void **)(arg0 + 0x30), dst[i]);
        ((void (*)(u8 *, u32, u32))(*(void **)(obj + 0x24)))(obj, arg1, arg2);
    }
}

void func_02112d64(u8 *arg0, s32 arg1) {
    func_02112dcc(arg0, arg1, *(s16 *)(arg0 + 0x36));
}

void func_02112d74(u8 *arg0, s32 arg1) {
    func_02112dcc(arg0, *(s16 *)(arg0 + 0x34), arg1);
}

u32 func_02112d88(u8 *arg0) {
    u8 *obj = func_020c9c10(*(void **)(arg0 + 0x30), 0);
    u32 ret = ((u32 (*)(u8 *))(*(void **)(obj + 0x18)))(obj);
    func_020c738c(arg0, func_020c73b8(obj), 2);
    return ret;
}

void func_02112dcc(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *)arg0;
    u16 vals[2];
    u16 *dst = vals;
    u16 i;
    u8 *obj;
    s16 x;
    s16 y;
    vals[0] = data_02144cf8[0];
    vals[1] = data_02144cf8[1];
    for (i = 0; i < 2; i++) {
        obj = func_020c9c10(*(void **)(p + 0x30), dst[i]);
        x = arg1 + (*(s16 *)(obj + 0x3a) - *(s16 *)(p + 0x34));
        y = arg2 + (*(s16 *)(obj + 0x3c) - *(s16 *)(p + 0x36));
        ((void (*)(u8 *, s32))(*(void **)(obj + 0x10)))(obj, x);
        ((void (*)(u8 *, s32))(*(void **)(obj + 0x14)))(obj, y);
    }
    *(s16 *)(p + 0x34) = arg1;
    *(s16 *)(p + 0x36) = arg2;
}

s32 func_02112e80(void) {
    s32 i;
    func_02112ed8();
    data_0216bf88 = func_0210c594(0x3c, data_02155c3c);
    for (i = 0; i < 5; i++) {
        func_021167ac((u8 *)data_0216bf88 + i * 0xc, 0x24);
    }
    return 0;
}

extern u32 data_0216bf88;
extern const u16 data_02144cfc[2];
extern const u16 data_02144cf8[2];
extern void func_02112f14(void);
extern u32 func_020c73b8(void *);
extern void func_020c738c(void *, u32, s32);
void func_02112ed8(void) {
    u32 *p = &data_0216bf88;
    if (*p == 0) {
        return;
    }
    func_02112f14();
    if (*p != 0) {
        func_0210c5dc((void *)*p);
    }
    data_0216bf88 = 0;
}

void func_02112f14(void) {
    u8 *node;
    s32 i;
    if (data_0216bf88 == 0) {
        return;
    }
    for (i = 0; i < 5; i++) {
        node = *(u8 **)((u8 *)data_0216bf88 + i * 0xc);
        while (node != NULL) {
            u8 *next = *(u8 **)(node + 0x28);
            func_021168f8((u8 *)data_0216bf88 + i * 0xc, node);
            if (node != NULL) {
                func_0210c5dc(node);
            }
            node = next;
        }
    }
}

void *func_02112f88(u16 arg0) {
    s32 i;
    u8 *node;
    if (data_0216bf88 == 0) {
        return NULL;
    }
    for (i = 0; i < 5; i++) {
        node = *(u8 **)((u8 *)data_0216bf88 + i * 0xc);
        while (node != NULL) {
            if (*(u16 *)node == arg0) {
                return node;
            }
            node = *(u8 **)(node + 0x28);
        }
    }
    return NULL;
}

void func_02112fec(u32 arg0) {
    UnkFuncTable20 tbl;
    s32 i;
    func_02112f14();
    tbl = data_02155d1c;
    for (i = 0; i < 5; i++) {
        if (arg0 & (1 << i)) {
            tbl.fn[i]();
        }
    }
}

