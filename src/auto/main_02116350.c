/* 54 functions from 0x02116350 to 0x02117304 (main), found by ds-decomp. */
#include "common.h"

extern void func_02116ad8(void);
extern u8 data_0216cb1c[12];
extern void func_021167f0(void *, void *);
extern s32 func_02008128(void);
extern void func_0200813c(s32);
void func_02116674(void *arg0) {
    s32 irq = func_02008128();
    func_021167f0(data_0216cb1c, arg0);
    func_0200813c(irq);
}

u16 func_02117088(void *arg0) {
    return *(u16 *)((u8 *)arg0 + 0x34);
}

void func_02117210(void) {
    func_02116ad8();
}
