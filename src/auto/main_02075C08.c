/* 23 functions from 0x02075C08 to 0x0207698C (main), found by ds-decomp. */
#include "common.h"
extern u8 data_0213a394[];

extern void func_021168f8(void);
void func_02075c08(u32 *arg0, u32 *arg1) {
    arg0[0] = arg1[0];
    arg0[1] = arg1[1];
    arg0[2] = arg1[2];
}

void func_02075c84(void) {
    func_021168f8();
}

s32 func_02075c90(void) {
    return 0;
}

extern void func_0207630c(void);
void func_02075c98(void) {
    func_0207630c();
}

extern u32 data_021600ec[4];
u32 func_020764e4(void) {
    return data_021600ec[0];
}

