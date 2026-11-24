/* 14 functions from 0x020DE56C to 0x020DF56C (main), found by ds-decomp. */
#include "common.h"

extern u8 *func_0202c7d8(s32);
extern void *func_020de534(void *);
extern u8 *data_02160a6c;
extern u8 *data_02160a74;
u8 *func_020de810(void) {
    u8 i;
    for (i = 0; i < 9; i++) {
        u8 *res = func_0202c7d8((s8)i);
        if (res != NULL) {
            return res;
        }
    }
    return NULL;
}
