/* 22 functions from 0x020D8E5C to 0x020D9E48 (main), found by ds-decomp. */
#include "common.h"

extern u16 data_02151fc8;
extern u16 data_02151fca;
extern u32 data_02151fcc;
extern u32 *data_02155984;
extern u8 *data_02160258;
extern void func_020f40a4(void);
extern void func_020f4144(void);
extern void func_0210c5dc(void *);
extern void func_020d9018(void);
void func_020d8e5c(s32 arg0) {
    if (arg0 == 0) {
        func_020f40a4();
    } else if (arg0 == 1) {
        func_020f4144();
    }
}

void func_020d8f50(void) {
    u8 **p = &data_02160258;
    if (*p != NULL) {
        func_0210c5dc(*p);
        *p = NULL;
    }
}

void func_020d8f78(void) {
    data_02151fc8 = 0x8000;
    data_02151fca = 0xccc;
    *(u16 *)(data_02160258 + 0x90) = 0x300;
    *(u16 *)(data_02160258 + 0x8e) = 0x2c0;
    *(u16 *)(data_02160258 + 0x92) = 0x100;
    *(u16 *)(data_02160258 + 0x94) = 0x80;
    data_02151fcc = *(u16 *)(data_02160258 + 0x90) << 12;
    data_02155984[0] = 0x165;
    data_02155984[1] = 0xff0;
    func_020d9018();
}

void func_020d907c(u32 arg0) {
    *(u32 *)(data_02160258 + 0x54) = arg0;
}

u16 func_020d9e38(void) {
    return data_02151fc8;
}
