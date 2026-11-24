/* 12 functions from 0x020EFC58 to 0x020F0AEC (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160af0;
extern u8 data_02162618[];
extern void func_021168f8(void *, void *);
extern void func_0210b4cc(void *);
extern void func_0210c5dc(void *);
extern void func_0210b860(void **);

void func_020eff58(void) {
}

extern void func_020f09d4(void *);
extern void func_020f0984(u32 *);
extern void func_0210da14(void *);
extern void func_0210db10(void *);
extern void func_0210db58(void *);
void func_020f0090(s32 arg0) {
    if (data_02160af0 == NULL) {
        return;
    }
    while (*(void **)(data_02160af0 + 0x70) != NULL) {
        func_020f09d4(*(void **)(data_02160af0 + 0x70));
    }
    while (*(u32 **)(data_02160af0 + 0x64) != NULL) {
        func_020f0984(*(u32 **)(data_02160af0 + 0x64));
    }
    func_0210da14(data_02160af0);
    func_0210db10(data_02160af0 + 0x14);
    func_0210db10(data_02160af0 + 0x3c);
    if (arg0 == 1) {
        func_0210db58(data_02160af0 + 0x28);
        func_0210db58(data_02160af0 + 0x50);
    }
    if (data_02160af0 != NULL) {
        func_0210c5dc(data_02160af0);
        data_02160af0 = NULL;
    }
}
