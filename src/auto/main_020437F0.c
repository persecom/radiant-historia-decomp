/* 15 functions from 0x020437F0 to 0x020447A4 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600bc;
extern u8 *data_02160204;
extern u8 data_021600a8[8];
extern void func_0210f978(void);
extern void func_020eff5c(u32);
extern void func_020f40a4(void);
extern void func_0203d7c0(void);
extern void func_020eb180(u32, u32);
extern void func_020ec12c(void);
extern void func_0203e61c(void);
extern void func_0203ee20(u32);
extern void func_020f5760(void);
extern void func_020469f4(void);
extern void func_02046594(void);
extern void func_020e9eb0(void);
extern void func_020a31c8(u32);
extern void func_020f0090(u32);
extern void func_020f4144(void);
extern void func_0203d800(void);
extern void func_020eb344(u32, u32);
extern void func_020ec218(void);
extern void func_0203e6bc(void);
extern void func_0203ef0c(u32);
extern void func_020f5798(void);
extern void func_0210c5dc(void *);
extern void func_02046600(void);
extern void func_020e9f44(void);
extern void func_020a3b84(void);
extern void func_0210f138(void);
extern void func_0210d9e4(void *);
extern void func_0210db70(void *);
extern void func_020423f8(void);
extern void func_020415d0(void);
extern void func_02042634(void);
void func_020437f0(void) {
    u32 zero = 0;
    func_0210f978();
    func_020eff5c(zero);
    func_020f40a4();
    func_0203d7c0();
    func_020eb180(1, zero);
    func_020ec12c();
    func_0203e61c();
    func_0203ee20(zero);
    func_020f5760();
    {
        u8 *p = data_02160204;
        if (*(u8 *)(p + 0x7a) != 0) {
            goto end;
        }
        func_020469f4();
        func_02046594();
        func_020e9eb0();
        p = data_02160204;
        if (*(u8 *)(p + 0xd7) == 3) {
            goto end;
        }
        func_020a31c8(0);
    }
end:
    return;
}

void func_02043870(void) {
    u32 zero = 0;
    func_020f0090(zero);
    func_020f4144();
    func_0203d800();
    func_020eb344(1, zero);
    func_020ec218();
    func_0203e6bc();
    func_0203ef0c(zero);
    func_020f5798();
    {
        u8 **pp = &data_021600bc;
        if (*pp != NULL) {
            func_0210c5dc(*pp);
            *pp = NULL;
        }
    }
    func_02046600();
    func_020e9f44();
    func_020a3b84();
    func_0210f138();
}

void func_020438d8(void) {
    register u32 v = 0x3ec;
    *(void **)(*(u8 **)(data_021600a8 + 4) + 0x18) = (void *)func_020423f8;
    *(u32 *)(*(u8 **)(data_021600a8 + 4) + 0x1c) = 0x3f3;
    func_0210d9e4(*(u8 **)(data_021600a8 + 4) + 0x18);
    *(void **)(*(u8 **)(data_021600a8 + 4) + 0x2c) = (void *)func_020415d0;
    *(u32 *)(*(u8 **)(data_021600a8 + 4) + 0x30) = v;
    func_0210d9e4(*(u8 **)(data_021600a8 + 4) + 0x2c);
    *(void **)(*(u8 **)(data_021600a8 + 4) + 0x40) = (void *)func_02042634;
    *(u32 *)(*(u8 **)(data_021600a8 + 4) + 0x44) = v - 3;
    func_0210db70(*(u8 **)(data_021600a8 + 4) + 0x40);
}

extern s32 func_0210c2f4(void *, s32 *);
extern void func_02047820(u16);
extern void func_020522d4(void *, s32, s32);
extern void func_020468b0(s32);
extern void func_02052904(s32);
extern void func_0205443c(s32);
extern u8 *func_020f0aa4(void);
extern void func_02047490(void);
extern void func_0210d568(s32);
u16 func_02043964(u16 arg0) {
    u8 *node = *(u8 **)(data_021600bc + 0x40);
    while (node != NULL) {
        if (*(u16 *)(node + 0x90) == arg0) {
            break;
        }
        node = *(u8 **)(node + 0x13c);
    }
    if (node != NULL) {
        return *(u16 *)(*(u8 **)(node + 0xb0) + 8);
    }
    return 0;
}

void *func_02044180(u16 arg0) {
    u8 *node = *(u8 **)(data_021600bc + 0xb8);
    while (node != NULL) {
        if (*(u16 *)(node + 0x10) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x30);
    }
    return NULL;
}

BOOL func_020443a8(void *arg0) {
    u8 *node = *(u8 **)(data_021600bc + 0xdc);
    if (arg0 == NULL) {
        return FALSE;
    }
    while (node != NULL) {
        s32 vec[3];
        vec[0] = *(s32 *)(node + 0);
        vec[1] = 0;
        vec[2] = *(s32 *)(node + 4);
        if (func_0210c2f4(arg0, vec) < (*(u8 *)(node + 8) << 12)) {
            return TRUE;
        }
        node = *(u8 **)(node + 0x10);
    }
    return FALSE;
}

void func_02044428(u16 arg0) {
    u8 *r6 = *(u8 **)(*(u8 **)(data_021600a8 + 4) + 0x68);
    func_02047820(arg0);
    *(u32 *)(*(u8 **)(data_021600a8 + 4) + 0x10) = 3;
    func_020522d4(r6, 0, 0);
    func_020468b0(1);
    func_02052904(2);
    func_0205443c(1);
    if (*(u8 **)(data_021600a8 + 4) != NULL && *(u8 **)(*(u8 **)(data_021600a8 + 4) + 0x68) != NULL) {
        u8 *p = *(u8 **)(*(u8 **)(data_021600a8 + 4) + 0x68);
        *(u32 *)(p + 0xac) &= ~0x44a;
    }
}

