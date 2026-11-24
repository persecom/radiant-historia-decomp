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

void *func_02023100(void **arg0) {
    return *arg0;
}
