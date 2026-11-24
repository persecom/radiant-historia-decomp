/* 9 functions from 0x02022A48 to 0x0202318C (main), found by ds-decomp. */
#include "common.h"

extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_021167ac(void *, s32);
extern void func_021167f0(void *, void *);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);

void *func_02022ee0(void) {
    void *ptr = func_0210c594(0xc, data_02155c3c);
    func_021167ac(ptr, 0x18);
    return ptr;
}

void func_02022f0c(void *arg0, u16 arg1, u16 arg2, u8 arg3) {
    u8 *ptr = func_0210c594(0x20, data_02155c3c);
    *(u16 *)(ptr + 0x0) = arg1;
    *(u16 *)(ptr + 0x2) = arg2;
    *(u8 *)(ptr + 0xe) = arg3;
    *(u16 *)(ptr + 0x6) = 0;
    *(u16 *)(ptr + 0x8) = 0;
    *(u16 *)(ptr + 0xa) = 0;
    func_021167f0(arg0, ptr);
}

void *func_02023100(void **arg0) {
    return *arg0;
}
