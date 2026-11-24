/* 20 functions from 0x020B967C to 0x020BA63C (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021601ec;
extern u16 data_021438e0;
extern u16 data_021626a8;
extern u8 *func_020c9c10(void *, u32);
extern u32 func_021136b0(u16);
extern u8 *func_02111da8(u8 *);
extern u8 *func_02112048(u8 *);
extern u32 func_02022068(u16);
extern void func_020220b0(u16, u32);
extern void func_020b8aac(void);
extern u8 *data_02160204;
extern void func_020de394(u32, u16);
void func_020ba4b4(void);
void func_020ba520(void);
void func_020ba604(void);

void func_020b9930(void) {
    u8 *obj = func_020c9c10(*(void **)(data_021601ec + 0x4c), 2);
    func_02112688();
    func_02111dc8(obj, (u16)(1 << func_02110b20()));
    func_020ba4b4();
    func_02112068(obj);
    func_02111bf0(obj);
    func_02111ff0(obj);
}

void func_020b9990(void) {
    u8 *p = data_021601ec;
    u16 arr[1] = { 0xe };
    func_020c738c(func_020c9c10(*(void **)(p + 0x4c), arr[0]), 0, 1);
    *(s32 *)(p + 0x5c) = 0xfa000;
}

void func_020b9ad8(void) {
    *(s32 *)(data_021601ec + 0x5c) = 0xe6000;
}

void func_020b9af0(void) {
    u8 *p = data_021601ec;
    u8 *obj = func_020c9c10(*(void **)(p + 0x4c), 2);
    s32 val = (*(s32 *)(p + 0x5c) * 60) / 100;
    *(s32 *)(p + 0x5c) = val;
    ((void (*)(u8 *, s32))(*(void **)(obj + 0x10)))(obj, (s16)((val >> 12) + 0x14));
    ((void (*)(u8 *, s32))(*(void **)(obj + 0x14)))(obj, 0x19);
    if (*(s32 *)(p + 0x5c) < 0x800) {
        *(s32 *)(p + 0x40) = 0;
        func_020b8aac();
    }
}

void func_020ba214(void) {
    u8 *p = data_021601ec;
    u8 *obj;
    s32 done;
    func_020b8dbc();
    func_020ba2d0();
    *(s32 *)(p + 0x94) = (*(s32 *)(p + 0x94) * 50) / 100;
    done = 0;
    obj = func_020c9c10(*(void **)(p + 0x4c), 3);
    if (((s32 (*)(u8 *))(*(void **)(obj + 0x18)))(obj) == 0) {
        if (func_020c73d8(obj) == 0) {
            done = 1;
        }
    }
    if (data_021626a8 & 1) {
        func_020c7090(func_020c9c10(*(void **)(p + 0x4c), 3));
    }
    if (done != 0) {
        *(s32 *)(p + 0x40) = 0;
        p[0x44] = 1;
        func_020b8aac();
        func_0210d27c(0xb);
    }
}

void func_020ba3c0(void) {
    u8 *obj = func_020c9c10(*(void **)(data_021601ec + 0x4c), 1);
    *(u16 *)(obj + 0x30) = func_020c73d8(obj) != 0 ? 0x1a : 0x19;
}

void func_020ba3f8(void) {
    u8 *p = data_021601ec;
    u8 *obj = func_020c9c10(*(void **)(p + 0x4c), 3);
    s32 flag = func_020c73d8(obj);
    u16 prev = *(u16 *)(obj + 0x30);
    u8 i;
    u16 val;
    u32 id;
    *(u16 *)(obj + 0x30) = flag != 0 ? 0xd : 0xc;
    if (*(u16 *)(obj + 0x30) != prev) {
        func_020c7930(obj);
    }
    for (i = 0; i < 2; i++) {
        id = 5;
        if (i != 0) {
            id = 6;
        }
        obj = func_020c9c10(*(void **)(p + 0x4c), id);
        prev = *(u16 *)(obj + 0x30);
        if (flag == 0) {
            *(u16 *)(obj + 0x30) = 0x12;
        }
        if (*(u16 *)(obj + 0x30) != prev) {
            func_020c7930(obj);
        }
    }
    obj = func_020c9c10(*(void **)(p + 0x4c), 4);
    val = 0xf;
    if (flag == 0) {
        val = 0xe;
    }
    *(u16 *)(obj + 0x30) = val;
}

void func_020ba4b4(void) {
    u8 *obj = func_020c9c10(*(void **)(data_021601ec + 0x4c), 2);
    u8 *node = func_02111da8(obj);
    while (node != NULL) {
        if (func_020ba504(node) != 0) {
            node[6] |= 1;
        }
        node = *(u8 **)(node + 0x10);
    }
}

s32 func_020ba504(u8 *arg0) {
    s32 ret = 0;
    ret |= func_02113824(*(u16 *)(arg0 + 2));
    if (ret != 0) {
        return ret;
    }
    return 0;
}

void func_020ba520(void) {
    u8 *p = data_021601ec;
    u8 *node = func_02112048(func_020c9c10(*(void **)(p + 0x4c), 2));
    u32 v = func_02022068(*(u16 *)(node + 2));
    u16 kind;
    if (node[6] & 1) {
        return;
    }
    kind = *(u16 *)(node + 4);
    if (kind == 1 || kind == 2 || kind == 3) {
        func_020220b0(*(u16 *)(node + 2), ~0);
    } else {
        func_020220b0(*(u16 *)(node + 2), -v);
    }
    if ((func_021136b0(*(u16 *)(p + 0xa2)) & 2) == 0) {
        func_020ba604();
        *(u32 *)(p + 0x40) = 3;
    } else {
        *(u32 *)(p + 0x40) = 2;
    }
    func_020b8aac();
}

s32 func_020ba5d4(void) {
    s32 ret = 0;
    if (((func_021136b0(*(u16 *)(data_021601ec + 0xa2)) | 0) & 2) == 0) {
        ret = 1;
    }
    return ret;
}

