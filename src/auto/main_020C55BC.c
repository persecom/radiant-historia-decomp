/* 12 functions from 0x020C55BC to 0x020C641C (main), found by ds-decomp. */
#include "common.h"

extern void func_0210c5dc(void *);
extern void *data_021600e4;
extern u32 data_02155c3c;
extern void func_020c6dbc(void);
extern u16 *func_020a5f14(void *, u16);
extern void func_020a5c40(void *, u16);
extern void *func_0210c594(u32, u32);
extern void *func_020e9fe8(void *, u16);
extern void func_021167f0(void *, void *);

typedef struct {
    u8 pad[0x3c];
    u32 field_3c;
    u8 pad2[8];
    s32 field_44;
    s32 field_48;
    u8 pad3[0x1c];
    s8 field_68;
    u8 pad4[7];
    s32 field_70;
    u8 pad5[0x54];
    s32 field_c8;
    u8 pad6[4];
    s32 field_d0;
    u8 pad7[0xd8];
    u32 field_1ac;
    u32 field_1b0;
} Unk_020c627c;
void func_020c6124(void) {
    u8 *ptr = data_021600e4;
    u16 *res = func_020a5f14(ptr + 0x124, *(u16 *)(ptr + 0xd4));
    func_020a5c40(*(void **)(ptr + 0x18c), *res);
    *(u16 *)(ptr + 0x19c) |= 0x20;
}

void func_020c6160(void *arg0, u16 arg1) {
    u8 *node;
    u8 *obj;
    if (data_021600e4 == NULL) {
        return;
    }
    node = func_0210c594(0x10, data_02155c3c);
    obj = func_020e9fe8(arg0, arg1);
    *(u32 *)(obj + 0x18) &= ~1;
    *(void **)(node + 4) = obj;
    *(u16 *)node = arg1;
    func_021167f0((u8 *)data_021600e4 + 0x1a0, node);
}

void *func_020c61cc(u16 arg0) {
    u8 *node = *(u8 **)((u8 *)data_021600e4 + 0x1a0);
    while (node != NULL) {
        if (*(u16 *)node == arg0) {
            return *(void **)(node + 4);
        }
        node = *(u8 **)(node + 0xc);
    }
    return NULL;
}

void func_020c6208(void) {
    void *base = (void *)0x1b5b;
    u16 idx = 0;
    u8 *obj;
    func_020c6160(base, idx);
    obj = func_020c61cc(idx);
    *(u32 *)(obj + 0x1c) = 0xc8000;
    *(u32 *)(obj + 0x20) = 0x79000;
    *(u32 *)(obj + 0x24) = 0x14000;
    base = (void *)((u32)base - 0x3e0);
    func_020c6160(base, 1);
    func_020c6160(base, 2);
    func_020c6160(base, 3);
    func_020c6160(base, 4);
}

void func_020c627c(void) {
    u8 *p = data_021600e4;
    u8 *obj;
    s32 a;
    s32 v1;
    s32 t1;
    s32 b;
    s32 base1;
    s32 scale;
    s32 v2;
    s32 t2;
    s32 base2;
    if (p == NULL) return;
    obj = func_020c61cc(0);
    if (obj == NULL) return;
    *(u32 *)(obj + 0x18) &= ~1;
    if ((*(u32 *)(p + 0x3c) & 2) != 0 || *(s8 *)(p + 0x68) != 1) return;
    *(u32 *)(obj + 0x18) |= 1;
    a = *(s32 *)(p + 0xc8);
    scale = *(s32 *)(p + 0x70);
    v1 = (a >> 12) * scale;
    t1 = v1 - 0x20;
    b = *(s32 *)(p + 0xd0);
    base1 = *(s32 *)(p + 0x44);
    v2 = (b >> 12) * scale;
    t2 = v2 + 0x14;
    *(u32 *)(obj + 0x1c) = (base1 + t1) << 12;
    base2 = *(s32 *)(p + 0x48);
    *(u32 *)(obj + 0x20) = (base2 + t2) << 12;
    *(u32 *)(p + 0x1ac) = *(u32 *)(obj + 0x1c);
    *(u32 *)(p + 0x1b0) = *(u32 *)(obj + 0x20);
}

s32 func_020c6324(void) {
    func_020c6dbc();
    return 0;
}

void func_020c6334(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_020c6348(u8 *arg0) {
    u32 v = arg0[0x4d] + 1;
    arg0[0x4d] = v;
    if ((v & 0xff) > 12) {
        arg0[0x4d] = 0;
    }
    return 0;
}

s32 func_020c6414(void) {
    return 9;
}

