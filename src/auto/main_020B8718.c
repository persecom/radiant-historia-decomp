/* 21 functions from 0x020B8718 to 0x020B967C (main), found by ds-decomp. */
#include "common.h"

extern void **data_021601ec;
extern void *data_02160204;
extern void func_020c9b64(void *);
extern void func_020c9bb8(void *);
extern void func_020b8ef4(void);
extern void func_020b9350(void);
extern void func_020b967c(void);
extern void func_020b99d8(void);
extern void func_020b9af0(void);
extern void func_020b9c84(void);
extern void func_020ba214(void);
extern void func_020ba3c0(void);
extern void func_020ba3f8(void);
extern void func_020b748c(void);
extern void func_020b7624(void);
extern void func_020b8944(void);
extern s32 func_020de3d8(void);

void func_020b8844(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}
