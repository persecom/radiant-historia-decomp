/* 36 functions from 0x0210D6D8 to 0x0210E694 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_02162730[12];
extern s32 data_02162834[3];
extern void func_02113d10(s32, s32, s32);
extern void func_02113b58(void *, s32);
extern void func_02113c18(void *);
void func_0210d6d8(s32 arg0, s32 arg1, s32 arg2) {
    func_02113d10(arg0, arg1, arg2 >> data_02162834[0]);
}

void func_0210d6f4(void *arg0) {
    func_02113b58(arg0, 0);
    func_02113c18(arg0);
}

void func_0210d85c(s32 arg0) {
    *(s32 *)(data_02162730 + 8) = arg0;
}
