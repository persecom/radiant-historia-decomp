/* 40 functions from 0x0212B8E0 to 0x0212C824 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_021739ac[256];
extern u32 data_02173984[2];
extern u8 data_02156b60[8];
extern u8 data_02156b68[8];
extern s8 data_0217398c[32];
extern u8 data_02156b70[4];
extern u32 data_02173aac[5];
extern u8 data_02156c28[48];
extern u8 data_02156c58[28];
extern u8 data_02156c74[48];
extern void func_02013878(void *, s32, u32);
extern void func_021380bc(void *);
extern void func_02132c08(void *, s32, void *, s32);
extern void func_02132c2c(void *, s32, void *, s32);
extern s32 func_02016da4(void *);

extern void func_0212a9f4(void);
extern void func_0212a9f8(void);
extern void func_0212c3d4(void);
extern void func_0212c464(void);
extern void func_0212bfb8(void);
s32 func_0212bcd0(s16 *arg0, s32 arg1, s16 *arg2) {
    u16 v0;
    s16 swapped;
    s16 v1;

    if (arg1 < 0x10) {
        return -1;
    }
    v0 = (u16)arg0[0];
    swapped = ((v0 >> 8) & 0xff) | ((v0 << 8) & 0xff00);
    if ((u16)swapped != 0x8001) {
        return -2;
    }
    v1 = arg0[1];
    *arg2 = ((v1 >> 8) & 0xff) | ((v1 << 8) & 0xff00);
    *arg2 += 4;
    return 0;
}

void func_0212bd48(void) {
    func_02013878(data_021739ac, 0, 0x100);
    data_02173984[0] = 0;
    data_02173984[1] = 0;
}

void func_0212bd78(void) {
    func_02013878(data_021739ac, 0, 0x100);
    data_02173984[0] = 0;
    data_02173984[1] = 0;
}

void func_0212bda8(void *arg0) {
    if (arg0 == NULL) {
        func_021380bc(data_02156b60);
        return;
    }
    func_02132c08(data_021739ac, 0x100, arg0, 0xff);
    if (data_02173984[0] != 0) {
        ((void (*)(u32, void *))data_02173984[0])(data_02173984[1], data_021739ac);
    }
    func_021380bc(data_021739ac);
}

void func_0212be08(void *arg0, void *arg1) {
    if (arg0 == NULL || arg1 == NULL) {
        func_021380bc(data_02156b68);
        return;
    }
    func_02132c08(data_021739ac, 0x100, arg0, 0xff);
    func_02132c2c(data_021739ac, 0x100, arg1, 0xff);
    if (data_02173984[0] != 0) {
        ((void (*)(u32, void *))data_02173984[0])(data_02173984[1], data_021739ac);
    }
    func_021380bc(data_021739ac);
}

void func_0212be8c(s32 arg0, s8 *arg1, s32 arg2) {
    s32 i;
    s32 len;

    for (i = 0; i < 0x20; i++) {
        arg1[i] = arg0 % 10;
        arg0 /= 10;
        if (arg0 == 0) {
            arg1[i] = 0;
            break;
        }
    }
    len = func_02016da4(data_0217398c);
    if (len >= arg2 - 1) {
        len = arg2 - 1;
    }
    for (i = 0; i < len; i++) {
        arg1[i] = data_0217398c[len - 1 - i];
    }
    arg1[i] = 0;
}

void func_0212bf38(s32 arg0, s32 arg1, s8 *arg2, s32 arg3) {
    func_0212be8c(arg0, arg2, arg3);
    func_02132c2c(arg2, arg3, data_02156b70, arg3 - func_02016da4(arg2) - 1);
    func_0212be8c(arg1, arg2 + func_02016da4(arg2), 4 - func_02016da4(arg2));
}

void func_0212bfa4(void) {
    func_0212a9f4();
    func_0212bfb8();
    func_0212a9f8();
}

void func_0212c068(void *arg0, void *arg1) {
    func_0212bda8(arg1);
}

void func_0212c078(void *arg0, void *arg1) {
    func_0212bda8(arg1);
}

s32 func_0212c088(void) {
    func_0212c464();
    return 0;
}

extern void func_021285b0(void);
s32 func_0212c098(void) {
    func_021285b0();
    return 0;
}

extern void func_0212bfa4(void);
s32 func_0212c0a8(void) {
    func_0212bfa4();
    return 0;
}

void func_0212c2d8(u8 *arg0, void *arg1, u32 arg2, u32 arg3) {
    u32 x = *(u32 *)(arg0 + 0x94);
    if (arg0 == NULL) {
        func_0212bda8(data_02156c28);
        return;
    }
    if (func_0212e604(x, arg1, 0, arg2, arg3) < 0) {
        func_0212be08(data_02156c58, arg1);
    }
}

void func_0212c3b0(void *arg0, void *arg1) {
    func_0212a9f4();
    ((void (*)(void *, void *))func_0212c3d4)(arg0, arg1);
    func_0212a9f8();
}

extern void func_0212c478(void);
void func_0212c464(void) {
    func_0212a9f4();
    func_0212c478();
    func_0212a9f8();
}

extern u32 data_02156cd8[4];
void func_0212c4b8(u32 arg0) {
    data_02156cd8[0] = arg0;
}

s32 func_0212c7b0(s8 *arg0) {
    return arg0[1];
}

extern void func_02129a2c(void *);
void func_0212c7e0(void *arg0) {
    func_02129a2c(*(void **)((u8 *)arg0 + 4));
}

