/* 1 function from 0x02083580 to 0x0208480C (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_0216010c, *data_02160078;
extern void func_0208b144(void);
extern void func_02084a70(u32);
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
extern void func_02091cd8(void);
void func_02083580(void) {
    u8 state = data_0216010c[0x3f];
    if (state >= 7) return;
    if (state == 6) {
        func_0208b144();
        return;
    }
    func_02084a70(*(u32 *)(data_0216010c + 0x5fc));
    func_020a3bbc(0x1d);
    func_02091cd8();
}
