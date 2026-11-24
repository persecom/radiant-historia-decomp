/* 16 functions from 0x020C3DF4 to 0x020C4C60 (main), found by ds-decomp. */
#include "common.h"

extern void func_0210c5dc(void *);
extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern u8 *data_0216013c;
extern u8 data_02151288[];
extern u8 data_021512a0[];
extern u8 *func_0203be10(s32);
extern void func_0203be60(void *, void *, void *);
extern void func_0203be4c(void *);
u8 *func_020c46ac(void) {
    return *(u8 **)(data_0216013c + 0x90) + 8;
}

void func_020c46c4(void) {
    u8 *base = func_020c46ac();
    u8 *obj = func_0203be10(1);
    func_0203be60(obj, data_02151288, data_021512a0);
    *(s32 *)(obj + 0x10) = 5;
    *(s32 *)(obj + 0x14) = 5;
    *(s32 *)(obj + 0x18) = 1;
    *(u8 **)(base + 0x10) = obj;
}

void func_020c470c(void) {
    func_0203be4c(*(void **)(func_020c46ac() + 0x10));
}

void *func_020c4bd0(void) {
    return func_0210c594(0x10, data_02155c3c);
}

void func_020c4bec(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_020c4c00(void) {
    return func_0210c594(0xe, data_02155c3c);
}

void func_020c4c1c(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_020c4c30(void) {
    return func_0210c594(0x80, data_02155c3c);
}

extern void func_020a5858(void *);
void func_020c4c4c(void *arg0) {
    if (arg0 != NULL) {
        func_020a5858(arg0);
    }
}

