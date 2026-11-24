/* 9 functions from 0x02089BB0 to 0x0208A678 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600b0;
extern u8 *data_0216010c;
extern s32 func_02092ab0();
extern u16 func_02092994(void *, s32);
extern void func_020a3b84(void);
extern void func_020a0da8(void);
extern void func_020a0dc8(void *);
extern void func_0210c5dc(void *);
extern void func_020a9544(void *);
extern void *data_02155c3c;
extern u8 data_021486e4[28];
extern u8 data_02148700[28];
extern u8 data_0214871c[24];
extern void *func_0210c594(s32, void *);
extern void *func_020a94b8(void *);
extern void func_020a994c(void *);
void func_0208a168(u8 *arg0, s32 arg1, s32 arg2, u32 *arg3) {
    arg3[2] = arg3[0];
    if (func_02092ab0(arg3, arg1) == -1) {
        return;
    }
    *(u16 *)(arg0 + 0x26) = func_02092994(arg3, 0);
}

s32 func_0208a318(s32 arg0) {
    switch (arg0) {
    case 1: return 0x1f41;
    case 2: return 0x1f55;
    case 3: return 0x1f91;
    case 4: return 0x1f5f;
    case 5: return 0x1f69;
    case 7: return 0x1f4b;
    case 8: return 0x1f9b;
    default: return 0;
    }
}

void func_0208a4ac(void) {
    *(s16 *)(data_0216010c + 0x50e4) = 0x100;
    *(s16 *)(data_0216010c + 0x50fa) = 0;
    *(s16 *)(data_0216010c + 0x50f8) = 0;
    *(s16 *)(data_0216010c + 0x50f8) |= 8;
}

void func_0208a5e0(void) {
    s16 i;
    func_020a3b84();
    func_020a0da8();
    func_020a0dc8(data_021600b0 + 0x1d4);
    if (data_021600b0 != NULL) {
        func_0210c5dc(data_021600b0);
    }
    data_021600b0 = NULL;
    data_0216010c[0x3f] = 7;
    for (i = 0; i < 3; i++) {
        void **p = *(void ***)(data_0216010c + 0x64 + i * 4);
        if (p != NULL && *p != NULL) {
            func_020a9544(p);
            *(void **)(data_0216010c + 0x64 + i * 4) = NULL;
        }
    }
}

