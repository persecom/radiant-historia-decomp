/* 23 functions from 0x020B44CC to 0x020B5364 (main), found by ds-decomp. */
#include "common.h"

extern void func_020ec548(void *);
extern u8 *func_020b3890(void);
extern void func_02022160(void *);
extern u8 *func_020b3880(void);
extern void func_0210dba0(void *);
extern void func_0210dbe8(void *);
extern void func_0210dac8(void *);
extern void func_0210c5dc(void *);
extern void func_0210e290(s32);
extern void func_0210f138(void);
extern void func_020a2c20(void);
extern void func_0210f6d4(void);
extern void func_020b4440(void);
extern void func_02108ffc(void);
extern void func_020a2e24(void);
extern void func_020bd2cc(void);
extern void func_020bc844(void);
extern void func_020ade0c(void);
extern void *data_021601e0[];
extern void *data_02162858;
extern void *data_02162854;
void func_020b453c(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_020b459c(void) {
    func_02022160(*(void **)(func_020b3890() + 0x258));
}

void func_020b4af0(void *arg0) {
    if (arg0 != NULL) {
        func_020ec548(arg0);
    }
}
