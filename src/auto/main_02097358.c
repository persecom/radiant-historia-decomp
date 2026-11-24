/* 4 functions from 0x02097358 to 0x02098268 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_0216011c;
void func_02098248(s32 arg0) {
    if (arg0 != 0 && data_0216011c != NULL) {
        *(u16 *)(data_0216011c + 0x42) = 0;
    }
}
