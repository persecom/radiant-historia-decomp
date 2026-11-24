/* 4 functions from 0x02097358 to 0x02098268 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_0216011c;
s32 func_020981fc(u16 arg0) {
    u8 *p = data_0216011c;
    if (p == NULL) {
        return 0;
    }
    if ((*(u16 *)(p + 0x28) & 4) != 0 &&
        *(u16 *)(p + 0x38) == arg0 &&
        *(u16 *)(p + 0x42) == 0 &&
        *(u8 *)(p + 0x45) == 0) {
        return 1;
    }
    return 0;
}

void func_02098248(s32 arg0) {
    if (arg0 != 0 && data_0216011c != NULL) {
        *(u16 *)(data_0216011c + 0x42) = 0;
    }
}
