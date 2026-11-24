/* 23 functions from 0x02075C08 to 0x0207698C (main), found by ds-decomp. */
#include "common.h"
extern u8 data_0213a394[];

extern void func_021168f8(void);
void func_02075c08(u32 *arg0, u32 *arg1) {
    u32 a = arg1[0];
    u32 b = arg1[1];
    u32 c = arg1[2];
    arg0[0] = a;
    arg0[1] = b;
    arg0[2] = c;
}

s32 func_02075c24(s32 arg0) {
    return *(s16 *)(data_0213a394 + (arg0 >> 4) * 4);
}

s32 func_02075c3c(s32 arg0) {
    s16 *p = (s16 *)data_0213a394;
    return p[(arg0 >> 4) * 2 + 1];
}

u32 func_02075c5c(u32 *arg0, u32 arg1) {
    u32 val = arg0[1] * arg0[0] + arg0[2];
    u32 res;
    arg0[0] = val;
    res = val >> 16;
    if (arg1 != 0) {
        res = res * arg1 >> 16;
    }
    return (u16)res;
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

