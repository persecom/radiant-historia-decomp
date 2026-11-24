/* 38 functions from 0x02136E94 to 0x02137E58 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_0215c214[12];
extern u8 data_0215c0e4[12];
extern u8 data_0215c0f0[28];
extern u8 data_0215c10c[12];
extern u8 data_0215c118[32];
extern u8 data_0215c18c[12];
extern u8 data_0215c198[28];
extern u8 data_0215c1b4[12];
extern u8 data_0215c1c0[32];
extern s32 func_021369c0(void *);
extern void func_021369e0(void *, void *);
extern s32 func_02137190(u8 *, s32, s32, s32 *);

extern void func_021378d8(void);
extern void func_021369a8(void);
extern void func_02137470(void *);
extern void func_021369b4(void);
extern void func_02136f8c(u32, u32, u32);
void func_02136f60(u32 arg0, u32 arg1, u32 arg2) {
    func_021369a8();
    func_02136f8c(arg0, arg1, arg2);
    func_021369b4();
}

void func_02136f8c(u32 arg0, u32 arg1, u32 arg2) {
    u8 *p0 = (u8 *)arg0;
    s32 *p2 = (s32 *)arg2;
    if (p0 == NULL) {
        func_021369e0(data_0215c0e4, data_0215c0f0);
        return;
    }
    if (*(u32 *)(p0 + 4) == 0) {
        func_021369e0(data_0215c10c, data_0215c118);
        return;
    }
    if (p2[1] <= 0) {
        return;
    }
    if (p2[0] != 0 && arg1 != 0 && arg1 != 1) {
        p2[1] = 0;
        p2[0] = 0;
        if (*(u32 *)(p0 + 0x1c) != 0) {
            ((void (*)(u32, s32))(*(u32 *)(p0 + 0x1c)))(*(u32 *)(p0 + 0x20), -3);
        }
    }
}

extern void func_02137044(u32, u32, u32);
void func_02137018(u32 arg0, u32 arg1, u32 arg2) {
    func_021369a8();
    func_02137044(arg0, arg1, arg2);
    func_021369b4();
}

s32 func_02137154(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 ret;
    func_021369a8();
    ret = func_02137190(arg0, arg1, arg2, arg3);
    func_021369b4();
    return ret;
}

s32 func_0213723c(void) {
    return func_021369c0(data_0215c214);
}

void func_02137318(void) {
    func_021369a8();
    func_02137330();
    func_021369b4();
    func_02136980();
}

extern s32 func_021373b0(s32, s32, s32);
s32 func_0213737c(s32 arg0, s32 arg1, s32 arg2) {
    s32 ret;
    func_021369a8();
    ret = func_021373b0(arg0, arg1, arg2);
    func_021369b4();
    return ret;
}

void func_02137454(void *arg0) {
    func_021369a8();
    func_02137470(arg0);
    func_021369b4();
}

extern void *func_021374f4(void *);
void *func_021374d0(void *arg0) {
    void *ret;
    func_021369a8();
    ret = func_021374f4(arg0);
    func_021369b4();
    return ret;
}

extern void func_02137574(u32, u32, u32);
void func_02137548(u32 arg0, u32 arg1, u32 arg2) {
    func_021369a8();
    func_02137574(arg0, arg1, arg2);
    func_021369b4();
}

extern void func_021375e0(void *);
void func_021375c4(void *arg0) {
    func_021369a8();
    func_021375e0(arg0);
    func_021369b4();
}

extern s32 func_02137680(void *, void *);
s32 func_02137654(void *arg0, void *arg1) {
    s32 ret;
    func_021369a8();
    ret = func_02137680(arg0, arg1);
    func_021369b4();
    return ret;
}

void func_021378cc(void) {
    func_021378d8();
}

extern void func_02137a84(u32, u32, u32);
void func_02137a58(u32 arg0, u32 arg1, u32 arg2) {
    func_021369a8();
    func_02137a84(arg0, arg1, arg2);
    func_021369b4();
}

extern void *func_02137d68(void *);
void *func_02137d44(void *arg0) {
    void *ret;
    func_021369a8();
    ret = func_02137d68(arg0);
    func_021369b4();
    return ret;
}

extern void *func_02137de0(void *);
void *func_02137dbc(void *arg0) {
    void *ret;
    func_021369a8();
    ret = func_02137de0(arg0);
    func_021369b4();
    return ret;
}

extern void *func_02137e58(void *);
void *func_02137e34(void *arg0) {
    void *ret;
    func_021369a8();
    ret = func_02137e58(arg0);
    func_021369b4();
    return ret;
}

