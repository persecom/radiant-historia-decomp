/* 57 functions from 0x02129A6C to 0x0212A9FC (main), found by ds-decomp. */
#include "common.h"

extern void func_0213807c(void);
extern u8 data_0217358c[12];
void func_02129bb8(s32 arg0) {
    *(s32 *)(data_0217358c + 8) = arg0;
}

void *func_0212a220(void *arg0) {
    return *(void **)((u8 *)arg0 + 0x10);
}

void func_0212a9dc(void) {
    func_0213807c();
}

extern void func_0213808c(void);
void func_0212a9e8(void) {
    func_0213808c();
}

