/* 9 functions from 0x02081D3C to 0x02082C70 (main), found by ds-decomp. */
#include "common.h"

typedef struct Block_02081f08 {
    u32 w0, w1, w2, w3;
} Block_02081f08;

typedef struct Data_02081f08 {
    Block_02081f08 b[6];
    u32 last;
} Data_02081f08;

extern u32 data_02162870;
extern u8 *data_0216010c;
extern u8 *data_02160204;

void func_02081e78(void) {
    u8 **p = &data_0216010c;
    u16 i;
    u8 **q;
    void *z;
    if (*(void **)(*p + 0x44) != NULL) {
        func_0210c5dc(*(void **)(*p + 0x44));
        *(void **)(*p + 0x44) = 0;
    }
    q = &data_0216010c;
    i = 0;
    *(void **)(*q + 0x44) = i;
    (*q)[0x3f] = i;
    func_02089a98();
    z = i;
    for (; i < 2; i++) {
        void **v = *(void ***)(*q + 0x48 + i * 4);
        if (v != NULL && *v != NULL) {
            func_020a9544(v);
            *(void **)(*q + 0x48 + i * 4) = z;
        }
    }
}

void func_02081f08(u32 *dst, s32 idx) {
    Data_02081f08 *src = (Data_02081f08 *)(data_0216010c + idx * 0x64 + 0x5570);
    Data_02081f08 *d = (Data_02081f08 *)dst;
    *d = *src;
}

u16 func_020824e0(void) {
    s32 v = 3;
    data_02162870 = 1;
    func_02082584();
    data_02162870 = 0;
    func_0210968c(v, 0, 6);
    func_02109790(v);
    if (*(u8 *)(data_0216010c + 0x5000 + 0xb4) != 0) {
        data_02162870 = 1;
        func_0210968c(v, v - 0x13, 6);
        func_02109790(v);
        func_02082958();
    }
    func_0210dc88();
    return *(u16 *)(data_02160204 + 0x100 + 0x1a);
}

