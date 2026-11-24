/* 19 functions from 0x020EC12C to 0x020ED0BC (main), found by ds-decomp. */
#include "common.h"

extern void func_02108594(void *);
extern void func_0210c5dc(void *);
extern u8 *data_02160ab4;
extern void func_020ebc24(u8 *);
extern s32 func_020ebddc(void *, s32);
extern void func_021168f8(u8 *, u8 *);
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_0210dbe8(void *);
extern void func_0210dc70(void *);
extern u8 data_02160ad8[];
extern u8 data_02160ac4[];
extern u8 data_02160ab8[];
extern void *data_02155c3c;
extern void func_0210db10(void *);
extern void func_0210db58(void *);
extern void func_0210dae0(void *);
extern void func_0210db40(void *);
extern void func_020ed0bc(void);
extern void *func_0210c594(s32, void *);
extern void *func_0210853c(void);
void func_020ec548(u8 *arg0);
extern void func_021167ac(void *, s32);
extern void func_0210d9e4(void *);
extern void func_0210db70(void *);
extern void func_0210dbd0(void *);
extern void func_0210dc58(void *);
extern void func_020ec588(void);
extern void func_020ec6f8(void);
extern void func_020ec6ac(void);
void func_020ec12c(void) {
    s32 val = 0x3f6;
    if (data_02160ab4 != NULL) {
        return;
    }
    data_02160ab4 = (u8 *)func_0210c594(0x68, data_02155c3c);
    func_021167ac(data_02160ab4 + 0x50, 0x44);
    *(void (**)(void))(data_02160ab4 + 0x0) = func_020ec588;
    *(s32 *)(data_02160ab4 + 0x4) = val;
    func_0210d9e4(data_02160ab4);
    *(void (**)(void))(data_02160ab4 + 0x14) = func_020ec6f8;
    *(s32 *)(data_02160ab4 + 0x18) = val - 0xc;
    func_0210db70(data_02160ab4 + 0x14);
    *(void (**)(void))(data_02160ab4 + 0x28) = func_020ec6f8;
    *(s32 *)(data_02160ab4 + 0x2c) = val - 0xc;
    func_0210dbd0(data_02160ab4 + 0x28);
    *(void (**)(void))(data_02160ab4 + 0x3c) = func_020ec6ac;
    *(s32 *)(data_02160ab4 + 0x40) = 0x3e8;
    func_0210dc58(data_02160ab4 + 0x3c);
    *(s32 *)(data_02160ab4 + 0x60) = 0;
    *(s32 *)(data_02160ab4 + 0x64) = 1;
}

void func_020ec218(void) {
    while (*(u8 **)(data_02160ab4 + 0x50) != NULL) {
        func_020ec548(*(u8 **)(data_02160ab4 + 0x50));
    }
    func_0210da14(data_02160ab4);
    func_0210dba0(data_02160ab4 + 0x14);
    func_0210dbe8(data_02160ab4 + 0x28);
    func_0210dc70(data_02160ab4 + 0x3c);
    if (data_02160ab4 != NULL) {
        func_0210c5dc(data_02160ab4);
        data_02160ab4 = NULL;
    }
}

extern u8 *data_02160aa4;
extern s32 data_02155bac;
extern void func_02108ffc(void);
extern void *func_020eb400(void);
extern s32 func_020eb44c(void *, u32, u32, s32, s32);
extern void func_021167f0(void *, void *);
#pragma optimization_level 0
u8 *func_020ec294(u32 arg0, u16 arg1, s32 arg2, s32 arg3) {
    void *v6 = NULL;
    s32 v8 = 1;
    u8 *v4 = NULL;
    u32 v7;

    if (arg0 == 0x2b02) {
        v7 = *(u32 *)(data_02160aa4 + 0x14) + arg3;
    } else {
        v7 = *(u32 *)(data_02160aa4 + 0xc) + arg3;
    }

    func_02108ffc();

    if (arg0 > 0x7d0 && arg0 < 0xf9f) {
        void *tmp = func_020eb400();
        data_02155bac = 0;
        if (func_020eb44c(tmp, arg0, v7, 0, 0) == 0) {
            (void)0;
        }
        data_02155bac = 1;
        v6 = tmp;
    } else if (arg0 > 0x1f40 && arg0 < 0x2af7) {
        void *tmp = func_020eb400();
        data_02155bac = 0;
        if (func_020eb44c(tmp, arg0, v7, 0, 1) == 0) {
            (void)0;
        }
        data_02155bac = 1;
        v6 = tmp;
    } else if (arg0 > 0x2af8 && arg0 < 0x2b03) {
        void *tmp = func_020eb400();
        if (func_020eb44c(tmp, arg0, v7, 0, 2) == 0) {
            (void)0;
        }
        v6 = tmp;
    } else if (arg0 > 0xfa0 && arg0 < 0x1004) {
        void *tmp = func_020eb400();
        data_02155bac = 0;
        if (func_020eb44c(tmp, arg0, v7, 0, 3) == 0) {
            (void)0;
        }
        data_02155bac = 1;
        v6 = tmp;
    } else {
        return NULL;
    }

    v4 = (u8 *)func_0210c594(0x4c, data_02155c3c);
    func_02108ffc();
    *(s32 *)(v4 + 0x4) = v8;
    *(u32 *)(v4 + 0x8) = arg0;
    *(u32 *)(v4 + 0xc) = arg1;
    *(void **)(v4 + 0x0) = v6;
    *(s32 *)(v4 + 0x38) = 0;
    *(s32 *)(v4 + 0x20) = 0x1000;
    *(s32 *)(v4 + 0x24) = 0x1000;
    *(u16 *)(v4 + 0x3c) = 0x7fff;
    func_021167f0(data_02160ab4 + 0x50, v4);
    if (arg0 == 0x2b02) {
        *(u32 *)(v4 + 0x30) = *(u32 *)(data_02160aa4 + 0x14);
        *(s32 *)(v4 + 0x34) = arg2;
    } else {
        *(u32 *)(v4 + 0x30) = *(u32 *)(data_02160aa4 + 0xc);
        *(s32 *)(v4 + 0x34) = arg2;
    }
    return v4;
}
#pragma optimization_level 4
