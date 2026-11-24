/* 4 functions from 0x0207CDD4 to 0x0207D4CC (main), found by ds-decomp. */
#include "common.h"

extern void *data_02155c3c;
extern u8 *data_0216010c;
extern u8 data_021484dc[8];

extern void func_0207d4cc(void);
extern void *func_0210c594(s32, void *);
extern void func_020a9544(void *);
extern void *func_020a94b8(void *);
extern void func_02080d30(void);
extern void func_0210c5dc(void *);
extern void func_02089a98(void);

#pragma optimization_level 0
void func_0207d3cc(void) {
    func_0207d4cc();
}
#pragma optimization_level 0
void func_0207d3d8(void) {
    s32 i = 0;
    u8 unused[4];
    *(void **)(data_0216010c + 0x44) = func_0210c594(0x20, data_02155c3c);
    if (*(void **)(data_0216010c + 0x58)) {
        if (**(void ***)(data_0216010c + 0x58)) {
            func_020a9544(*(void **)(data_0216010c + 0x58));
        }
    }
    *(void **)(data_0216010c + 0x58) = func_020a94b8(&data_021484dc);
}
void func_0207d464(void) {
    func_02080d30();
    if (*(void **)(data_0216010c + 0x44)) {
        func_0210c5dc(*(void **)(data_0216010c + 0x44));
        *(void **)(data_0216010c + 0x44) = NULL;
    }
    *(void **)(data_0216010c + 0x44) = NULL;
    *(u8 *)(data_0216010c + 0x3f) = 0;
    func_02089a98();
}

