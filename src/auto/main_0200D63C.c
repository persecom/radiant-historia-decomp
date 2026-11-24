/* 25 functions from 0x0200D63C to 0x0200E5E8 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_0215f000[];
extern u8 data_0215efa0[];
extern u32 data_0215effc;
extern void func_0200b988(void *, void *, u32, u32, u32);
extern void func_0200d63c();
extern void func_0200bc24(void);
extern void func_0200a56c(void);
extern s32 func_0200a6c0(s32, s32);
extern void func_0200a674(s32, void *);
extern void func_0200d868(void);

void func_0200d790(void *arg0, u32 arg1, u32 arg2) {
    func_0200b988(arg0, data_0215efa0, arg1, arg1 + arg2, 0xffff);
}

void func_0200d7c0(void) {
    if (data_0215effc != 0) {
        return;
    }
    data_0215effc = 1;
    func_0200d63c();
    func_0200bc24();
}

void func_0200dadc(void) {
    if (*(u16 *)(data_0215f000 + 0) != 0) {
        return;
    }
    *(u16 *)(data_0215f000 + 0) = 1;
    func_0200a56c();
    *(u16 *)(data_0215f000 + 0x10) = 0;
    *(u32 *)(data_0215f000 + 4) = 0;
    *(u32 *)(data_0215f000 + 0x14) = 0;
    *(u16 *)(data_0215f000 + 0x36) = 0;
    *(u16 *)(data_0215f000 + 0x34) = 0;
    *(u16 *)(data_0215f000 + 0x3a) = 0;
    *(u16 *)(data_0215f000 + 0x38) = 0;
    while (func_0200a6c0(6, 1) == 0) {}
    func_0200a674(6, (void *)func_0200d868);
}

u32 func_0200e26c(u32 arg0) {
    return *(u16 *)(data_0215f000 + 0x38) & arg0;
}

u32 func_0200e280(void) {
    return *(u32 *)0x02ffff90;
}

void func_0200e314(u32 val, u32 *ptr) {
    if (ptr != NULL) {
        *ptr = val;
    }
}
