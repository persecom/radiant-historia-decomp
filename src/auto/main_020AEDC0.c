/* 3 functions from 0x020AEDC0 to 0x020AF2DC (main), found by ds-decomp. */
#include "common.h"

extern u8 *func_020adda8(void);

void func_020af2c8(void *arg0) {
    u8 *p = func_020adda8();
    *(void **)(p + 0x6c8) = arg0;
}
