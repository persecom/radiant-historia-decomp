/* 27 functions from 0x02120518 to 0x02121494 (main), found by ds-decomp. */
#include "common.h"

extern void func_02117478(void);
extern u8 data_02173164[12];
void func_02120524(s32 arg0) {
    *(s32 *)(data_02173164 + 8) = arg0;
}

void func_02120bb0(void) {
    func_02117478();
}
