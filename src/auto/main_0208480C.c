/* 17 functions from 0x0208480C to 0x02085328 (main), found by ds-decomp. */
#include "common.h"

extern void func_02085328(void);
extern u8 *data_0216010c;
extern s16 *func_02116984(void *, u16);
void func_0208480c(void) {
    data_0216010c[0x50b4] = 1;
}

u8 func_02084f80(u16 arg0) {
    return ((u8 *)func_02116984(data_0216010c + 0x608, arg0))[0];
}

u8 func_02085110(u32 arg0) {
    return data_0216010c[arg0 * 8 + 0x618];
}

void func_02085234(void) {
    func_02085328();
}
