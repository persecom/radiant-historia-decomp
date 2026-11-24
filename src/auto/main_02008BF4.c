/* 52 functions from 0x02008BF4 to 0x02009B24 (main), found by ds-decomp. */
#include "common.h"

extern u16 data_0215d1a0;
extern s32 func_02006afc(u16 *);
extern s32 func_02006b4c(u16 *);
typedef struct {
    u32 field_0;
    u32 field_4;
    u32 field_8;
    u32 field_c;
    u32 field_10;
    u32 field_14;
    u32 field_18;
    u32 field_1c;
} Data_215d17c;
extern Data_215d17c data_0215d17c;
extern void func_020058fc(u32, u32, u32);
extern void func_01ff845c(u32, u32, u32, u32, u32);
extern void func_02005a14(u32);
extern void func_020059e4(u32);
extern void func_020057e8(u32, u32);
extern void func_02008a28(u32, u32);
extern void func_02008ab4(u32, u32, u32, u32);
extern void func_0200893c(u32);
extern void func_02008ca8(void);
typedef void (*Fn_U32)(u32);

void func_02008dc4(void) {
    void (*cb)(u32);
    u32 arg;
    data_0215d17c.field_0 = 0;
    cb = (void (*)(u32))data_0215d17c.field_10;
    arg = data_0215d17c.field_14;
    if (cb != NULL) {
        cb(arg);
    }
}

s32 func_0200986c(void) {
    return func_02006afc(&data_0215d1a0);
}

s32 func_02009880(void) {
    return func_02006b4c(&data_0215d1a0);
}

