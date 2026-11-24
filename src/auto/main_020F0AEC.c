/* 3 functions from 0x020F0AEC to 0x020F1A1C (main), found by ds-decomp. */
#include "common.h"

extern u8 data_02160b10[0x100];
extern u8 data_02151d4c[0x14];
extern u8 data_02151d60[0x14];
extern u8 data_02151d74[0x14];
extern u8 data_02151d88[0x14];
extern void func_02008e68(u8, void *, u32);
extern void func_02005e80(void *, void *, ...);
extern s32 func_02109cf0(void *);
extern void *func_02109b14(void *, s32);
extern void func_0210b0c8(void *, void *);
extern void func_0210b130(void *, void *);
void func_020f18ec(void *arg0, s32 arg1) {
    u16 i;

    for (i = 1; i < 0x19; i++) {
        func_02008e68(0, data_02160b10, 0x100);
        func_02005e80(data_02160b10, data_02151d4c, arg1, i);
        if (func_02109cf0(data_02160b10) != 0) {
            func_02008e68(0, data_02160b10, 0x100);
            func_02005e80(data_02160b10, data_02151d60, arg1, i);
            func_0210b0c8(arg0, func_02109b14(data_02160b10, 0));
        }
        func_02008e68(0, data_02160b10, 0x100);
        func_02005e80(data_02160b10, data_02151d74, arg1, i);
        if (func_02109cf0(data_02160b10) != 0) {
            func_02008e68(0, data_02160b10, 0x100);
            func_02005e80(data_02160b10, data_02151d88, arg1, i);
            func_0210b130(arg0, func_02109b14(data_02160b10, 0));
        }
    }
}
