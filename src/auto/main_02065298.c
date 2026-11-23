/* 12 functions from 0x02065298 to 0x02065E78 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_021600e0;
extern void **data_021600c8[6];
extern s32 data_02155c3c;
extern void func_02064c18(void *);
extern void func_0210c5dc(void *);
extern void **func_0210c594(s32, s32);
extern void *func_02064be8(void);
extern void func_02064ce4(void *, s32, s32, s32);

s32 func_02065840(s32 arg0, u32 arg1) {
    if (arg0 == 0) {
        switch (arg1) {
        case 2:
        case 5:
        case 6:
        case 7:
            return 1;
        }
    }
    return 0;
}

void func_02065b80(void) {
    if (data_021600c8[0] != NULL) {
        func_02064c18(*data_021600c8[0]);
        if (data_021600c8[0] != NULL) {
            func_0210c5dc(data_021600c8[0]);
            data_021600c8[0] = NULL;
        }
    }
}

void func_02065bbc(void) {
    data_021600c8[1] = func_0210c594(4, data_02155c3c);
    *data_021600c8[1] = func_02064be8();
    func_02064ce4(*data_021600c8[1], 0x63, 0x63, -1);
}

void func_02065cb8(u8 arg0) {
    data_021600e0 = arg0;
}
