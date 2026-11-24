/* 38 functions from 0x021078D0 to 0x021088CC (main), found by ds-decomp. */
#include "common.h"

extern void func_021254a8(void);
extern u8 data_02161088[28];
extern void func_02118178(void *, s32);
void func_02107a64(s32 arg0) {
    func_02118178(data_02161088, arg0);
}

void func_02107a94(void) {
    func_021254a8();
}

extern u32 data_02155984;
extern s32 func_02108258(u32);
s32 func_02108240(void) {
    return func_02108258(data_02155984);
}

extern void func_0210c5dc(void *);
void func_021088b4(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

