/* 19 functions from 0x020F1A1C to 0x020F26FC (main), found by ds-decomp. */
#include "common.h"

extern s32 func_020f1ffc();
extern void func_0210b198(s32, u16, s32, s32, s32);
extern u32 *func_020f0a5c(s32);
extern u8 *data_02160c10;
extern s32 data_02160aec;
extern void func_021168f8(void *, void *);
extern void func_020e97ec(void *);
extern u32 *func_020efb74(u8, u8);
extern void func_0210c5dc(void *);
void func_020f1dd4(s32 *arg0, s32 arg1) {
    func_0210b198(*arg0, (u16)(arg1 + 1), 0, 1, 0);
}

void func_020f1dfc(s32 arg0, s32 arg1) {
    u32 *ptr = func_020f0a5c(arg0);
    if (ptr == NULL) {
        return;
    }
    if (arg1 != 0) {
        ptr[5] |= 1;
    } else {
        ptr[5] &= ~1;
    }
}

void func_020f1f28(u8 *arg0) {
    func_021168f8(data_02160c10 + arg0[0x20] * 0xc, arg0);
    if (*(void **)(arg0 + 0x1c) != NULL) {
        func_020e97ec(*(void **)(arg0 + 0x1c));
        *(void **)(arg0 + 0x1c) = NULL;
    }
    if (data_02160aec != 0) {
        func_020efb74(arg0[0x21], arg0[0x22])[2] = 0;
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020f1fa4(u8 *arg0) {
    func_021168f8(data_02160c10 + 0x48 + arg0[0xc] * 0xc, arg0);
    if (data_02160aec != 0) {
        func_020efb74(arg0[0xd], arg0[0xe])[2] = 0;
    }
}

extern u8 data_02151dd8[8];
extern s32 data_02155c3c;
extern void func_02005e80(char *, const char *, ...);
extern s32 func_0210ab44(void **, char *, s32 *);
extern void func_020f242c(void *, void *);
extern s32 func_0210aee0(void *, void *, s32, s32);
extern void **func_0210c594(s32, s32);
extern void func_0210a4a0(void);
extern void func_020f4870(void);
extern void *func_0210a4cc(void);
extern void *func_0210a7b4(void);
extern void func_020f4860(void *);
BOOL func_020f2104(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    char buf[0x100];
    void *sp4 = NULL;
    s32 sp0;
    s32 r4;

    func_02005e80(buf, (const char *)data_02151dd8, arg1);
    r4 = func_0210ab44(&sp4, buf, &sp0);
    if (r4 == 0) {
        return 0;
    }
    if (arg3 != NULL) {
        func_020f242c(sp4, arg3);
    }
    return func_0210aee0(arg0, sp4, arg2, r4) != 0;
}

BOOL func_020f24f4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    return func_020f1ffc(arg0, arg1, arg2, arg3) != 0;
}

extern BOOL func_020f2104(void *, s32, s32, void *);
BOOL func_020f250c(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    return func_020f2104(arg0, arg1, arg2, arg3) != 0;
}

BOOL func_020f2524(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4) {
    void **r4 = func_0210c594(8, data_02155c3c);
    func_0210a4a0();
    func_020f4870();
    r4[0] = func_0210a4cc();
    if (!func_020f24f4(r4[0], arg0, arg2, arg3)) {
        return 0;
    }
    r4[1] = func_0210a7b4();
    if (!func_020f250c(r4[1], arg1, arg2, arg4)) {
        return 0;
    }
    func_020f4860(r4);
    return 1;
}

extern u8 data_02160c20[20];
extern s32 func_0210dba0(void *);
s32 func_020f25dc(void) {
    return func_0210dba0(&data_02160c20);
}

extern void func_02108594(void *);
void func_020f2638(void **arg0) {
    func_02108594(*arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

