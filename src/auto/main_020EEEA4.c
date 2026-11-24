/* 5 functions from 0x020EEEA4 to 0x020EFC58 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160aec;
void *func_020efb74(s32 arg0, s32 arg1) {
    u8 *p = data_02160aec;
    s32 w;
    if (arg1 > *(s16 *)(p + 0x58D38) - 1 || arg1 < 0) {
        return NULL;
    }
    w = *(s16 *)(p + 0x58D36);
    if (arg0 > w - 1 || arg0 < 0) {
        return NULL;
    }
    return (p + 0xBC8) + (arg1 * w + arg0) * 0xC;
}

void func_020efc54(void) {
}

