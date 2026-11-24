/* 17 functions from 0x0205B710 to 0x0205C65C (main), found by ds-decomp. */
#include "common.h"

extern void func_020d4eb8(void);
extern void *func_02022494(void *arg0, s32 arg1);
extern s32 func_020dddfc(void *arg0, void *arg1, s32 arg2);
extern void func_020020f8(void *arg0, void *arg1, void *arg2);
extern u8 *data_02160a6c;
s32 func_0205ba98(void *arg0, s32 arg1) {
    if (func_020dddfc(arg0, (u8 *)arg0 + 0x24, arg1 << 12) != 0) {
        return 1;
    }
    func_020020f8(arg0, (u8 *)arg0 + 0x30, arg0);
    return 0;
}

void *func_0205bad4(void *arg0) {
    u8 *p = func_02022494(arg0, 0);
    if (p != NULL) {
        p = *(u8 **)(p + 4);
        if (p != NULL) {
            return *(void **)(p + 0x28);
        }
    }
    return NULL;
}

void func_0205c314(void) {
    func_020d4eb8();
}
