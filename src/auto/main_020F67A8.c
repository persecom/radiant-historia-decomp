/* 6 functions from 0x020F6458 to 0x020F6990 (main), found by ds-decomp. */
#include "common.h"

extern void *data_02160c74[2];
extern u8 *data_02160200;
extern u8 *data_021600ac;
extern u8 *data_021600a4;
extern char *func_0210cd50(void *);
extern s32 func_02018830(char *);
extern s32 func_02109754(u32);
extern void func_020f4174(void);
extern void func_0203fcc0(u32);
extern void func_020a994c(void *);
extern void func_0210d6f4(void *);
extern void func_0210d828(void);
extern void func_0210d648(s32, s32);
extern u8 data_0215204c[4];
extern s32 func_021093f0(void *);
extern void func_02012590(const char *, const char *, ...);

void func_020f67a8(u8 *arg0) {
    if (func_02109754(3) != 0) {
        return;
    }
    func_020f4174();
    if (data_021600a4 != NULL) {
        func_0203fcc0(0);
        *(u16 *)(data_021600a4 + 0x34) = 0xff;
        *(u16 *)(data_021600a4 + 0x3a) = 0xff;
    }
    if (*(void **)(arg0 + 0x158) != NULL) {
        func_020a994c(arg0 + 0x144);
    }
    *(u32 *)(arg0 + 0x2c) = 0;
    *(u32 *)(arg0 + 0x38) &= ~8;
    *(u32 *)(arg0 + 0x38) &= ~0x1000;
    *(u32 *)(arg0 + 0x18) &= ~1;
    *(u32 *)(arg0 + 0x18) &= ~0x100;
    *(u32 *)(arg0 + 0x18) &= ~0x400;
    *(u32 *)(arg0 + 0x18) &= ~0x800;
    func_0210d6f4(*(void **)data_02160c74);
    func_0210d828();
    func_0210d648(-1, 0);
}
