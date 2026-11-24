/* 33 functions from 0x02118234 to 0x021191F0 (main), found by ds-decomp. */
#include "common.h"

extern void func_02118234(void *);
extern void func_02118430(void *);
void func_02118570(void *arg0) {
    func_02118234(arg0);
    func_02118430(arg0);
}

u16 func_02118588(u16 *arg0, s32 arg1) {
    return arg0[arg1];
}

void func_02118594(s32 *arg0) {
    s32 i;
    for (i = 0; i < 3; i++) {
        arg0[i] = -1;
    }
}

void func_021185b0(s32 *arg0, s32 arg1, s32 arg2) {
    arg0[arg1] = arg2;
}

extern void func_02117e4c(void *);
extern void func_02118f24(void *);
void func_021190bc(void *arg0) {
    func_02117e4c(arg0);
    func_02118f24(arg0);
}

