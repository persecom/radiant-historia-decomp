/* 12 functions from 0x02130300 to 0x021312A4 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_0215a0d8[];
extern void (*data_02173434[])(u32);
extern u8 data_0215b1a4[];

extern void func_0212bda8(void *);
extern void func_0212824c(void);
extern void func_0212e61c(void);
extern void func_02132770(void *);
extern void func_021326e4(void *);
extern void func_0212e628(void);
extern void func_02132568(void);

extern void func_02132ae8(void);
void func_02130858(u32 *arg0, u32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = data_0215a0d8[0];
    }
    if (arg1 != NULL) {
        *arg1 = data_0215a0d8[1];
    }
}

void func_021309c8(u32 arg0) {
    if (data_02173434[0] != NULL) {
        data_02173434[0](arg0);
    }
}

void func_021309e8(void *arg0) {
    u8 *r4;
    void *r5;
    if (arg0 == NULL) {
        func_0212bda8(data_0215b1a4);
        return;
    }
    func_0212824c();
    r4 = *(u8 **)(*(u8 **)((u8 *)arg0 + 4) + 4);
    r5 = *(void **)(r4 + 0xb8);
    if (r5 == NULL) {
        return;
    }
    func_0212e61c();
    func_02132770(r5);
    func_021326e4(r5);
    *(void **)(r4 + 0xb8) = NULL;
    func_0212e628();
    func_02132568();
}

void func_02130a44(void) {
    func_02132ae8();
}

extern void func_02132af0(void);
void func_02130a50(void) {
    func_02132af0();
}

