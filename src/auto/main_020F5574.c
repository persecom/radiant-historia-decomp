/* 17 functions from 0x020F5574 to 0x020F6458 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_02160c9c[64];
extern void *data_02160204;
extern s32 data_02160c7c[8];
extern void func_02021c7c(void);
extern void func_020bd690(void);
void func_020f56a4(void) {
    *(u16 *)((u8 *)data_02160204 + 0x72) = 0x14b;
    *(u16 *)((u8 *)data_02160204 + 0xdc) = 0xe7;
    *(u16 *)((u8 *)data_02160204 + 0x74) = 0;
    *(u16 *)((u8 *)data_02160204 + 0x76) = 0;
    *(u16 *)((u8 *)data_02160204 + 0xd4) = 1;
    *(u16 *)((u8 *)data_02160204 + 0xda) = 999;
    func_02021c7c();
    func_020bd690();
}

s32 func_020f5704(s32 arg0) {
    return data_02160c7c[arg0];
}

void func_020f5714(s32 arg0, s32 arg1) {
    data_02160c7c[arg0] = arg1;
}

void *func_020f5724(void) {
    return data_02160c9c;
}
