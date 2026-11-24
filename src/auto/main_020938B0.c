/* 5 functions from 0x020938B0 to 0x020948AC (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160110;
extern u32 data_02155c3c;
extern void func_0210c5dc(void *);
extern s32 func_020a2c5c(s32, s32, s32, s32, s32);
extern void *func_0210c594(u32, u32);
void func_02094774(void) {
    u8 *p = data_02160110;
    if (*(u8 **)(p + 0x14) != NULL) {
        func_0210c5dc(*(u8 **)(p + 0x14));
        *(u8 **)(p + 0x14) = NULL;
    }
}
