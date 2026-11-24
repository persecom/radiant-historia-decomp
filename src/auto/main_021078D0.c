/* 38 functions from 0x021078D0 to 0x021088CC (main), found by ds-decomp. */
#include "common.h"

extern void func_021254a8(void);
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

