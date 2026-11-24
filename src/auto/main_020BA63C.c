/* 28 functions from 0x020BA63C to 0x020BB558 (main), found by ds-decomp. */
#include "common.h"

extern void func_02110b94(void *);
extern void func_020babe8(void);
extern void func_020ba948(void);
extern void func_020baa74(void);
extern void *func_020c9c10(void *, u32);
extern void func_020c738c(void *, u32, u32);
extern void **data_021601ec;
extern void *func_020c8b10(void);
extern void func_020c7894(void *);
extern u16 data_02143954[];
extern void func_020c52c0(void);
extern u8 data_021601f0;
void func_020bac70(u8 arg0) {
    data_021601f0 = arg0;
}

void func_020bafb4(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_020bafdc(void) {
    func_020c52c0();
}
