/* 34 functions from 0x020B34D0 to 0x020B44CC (main), found by ds-decomp. */
#include "common.h"

extern u8 *func_020b3890(void);
extern u8 data_021601e0;
void func_020b3744(u8 arg0) {
    data_021601e0 = arg0;
}

u8 func_020b3754(void) {
    return data_021601e0;
}

void func_020b3908(void) {
    func_020b3890();
}
