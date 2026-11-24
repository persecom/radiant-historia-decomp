/* 9 functions from 0x02081D3C to 0x02082C70 (main), found by ds-decomp. */
#include "common.h"

typedef struct Block_02081f08 {
    u32 w0, w1, w2, w3;
} Block_02081f08;

extern u32 data_02162870;
extern u8 *data_0216010c;
extern u8 *data_02160204;

void func_02081e78(void) {
    u16 i;
    if (*(void **)(data_0216010c + 0x44) != NULL) {
        func_0210c5dc(*(void **)(data_0216010c + 0x44));
        *(void **)(data_0216010c + 0x44) = NULL;
    }
    *(void **)(data_0216010c + 0x44) = NULL;
    data_0216010c[0x3f] = 0;
    func_02089a98();
    for (i = 0; i < 2; i++) {
        void **p = *(void ***)(data_0216010c + 0x48 + i * 4);
        if (p != NULL && *p != NULL) {
            func_020a9544(p);
            *(void **)(data_0216010c + 0x48 + i * 4) = NULL;
        }
    }
}

void func_02081f08(u32 *dst, s32 idx) {
    Block_02081f08 *src = (Block_02081f08 *)(data_0216010c + idx * 0x64 + 0x5570);
    Block_02081f08 *d = (Block_02081f08 *)dst;
    s32 i = 6;
    do {
        *d++ = *src++;
    } while (--i != 0);
    *(u32 *)d = *(u32 *)src;
}

u16 func_020824e0(void) {
    s32 mode = 3;
    data_02162870 = 1;
    func_02082584();
    data_02162870 = 0;
    func_0210968c(mode, 0, 6);
    func_02109790(mode);
    if (*(u8 *)(data_0216010c + 0x5000 + 0xb4) != 0) {
        data_02162870 = 1;
        func_0210968c(mode, -16, 6);
        func_02109790(mode);
        func_02082958();
    }
    func_0210dc88();
    return *(u16 *)(data_02160204 + 0x100 + 0x1a);
}

