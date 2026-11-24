/* 17 functions from 0x0208480C to 0x02085328 (main), found by ds-decomp. */
#include "common.h"

extern void func_02085328(void);
extern u8 *data_0216010c;
extern s16 *func_02116984(void *, u16);
extern void *data_02155c3c;
extern u8 data_021485a0[8];
extern void *func_0210c594(s32, void *);
extern void func_020a9544(void *);
extern void *func_020a94b8(void *);
extern void func_02080d30(void);
extern void func_0210c5dc(void *);
extern void func_02089a98(void);
void func_0208480c(void) {
    data_0216010c[0x50b4] = 1;
}

u8 func_02084f80(u16 arg0) {
    return ((u8 *)func_02116984(data_0216010c + 0x608, arg0))[0];
}

u8 func_02084fa8(u16 arg0) {
    return ((u8 *)func_02116984(data_0216010c + 0x608, arg0))[1];
}

u8 func_02085110(u32 arg0) {
    u8 *ptr = data_0216010c + arg0 * 8;
    return ptr[0x618];
}

u8 func_02085128(u32 arg0) {
    u8 *ptr = data_0216010c + arg0 * 8;
    return ptr[0x619];
}

u32 func_02085140(u32 arg0) {
    u8 *ptr = data_0216010c + arg0 * 8;
    return *(u32 *)(ptr + 0x61c);
}

s32 func_02085158(u32 arg0) {
    u8 *base = data_0216010c;
    s16 i = 0;
    s32 n = base[0x614];
    if (n <= 0) return 0;
    while (1) {
        if (func_02085110((u8)i) == arg0) {
            return func_02085140((u8)i);
        }
        i = (s16)(i + 1);
        if (n <= i) return 0;
    }
}

s32 func_020851bc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    s32 sum = arg0 + arg1;
    if (arg4 == 0) return (s16)sum;
    if (arg2 >= sum) return (s16)sum;
    if (arg4 != 1) return arg3;
    return sum;
}

void func_02085234(void) {
    func_02085328();
}
