/* 40 functions from 0x0212B8E0 to 0x0212C824 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_021739ac[256];
extern u32 data_02173984[2];
extern u8 data_02156b60[8];
extern void func_02013878(void *, s32, u32);
extern void func_021380bc(void *);
extern void func_02132c08(void *, s32, void *, s32);

extern void func_0212a9f4(void);
extern void func_0212a9f8(void);
extern void func_0212c3d4(void);
extern void func_0212c464(void);
extern void func_0212bfb8(void);
void func_0212bfa4(void) {
    func_0212a9f4();
    func_0212bfb8();
    func_0212a9f8();
}

s32 func_0212c088(void) {
    func_0212c464();
    return 0;
}

extern void func_021285b0(void);
s32 func_0212c098(void) {
    func_021285b0();
    return 0;
}

extern void func_0212bfa4(void);
s32 func_0212c0a8(void) {
    func_0212bfa4();
    return 0;
}

void func_0212c3b0(void *arg0, void *arg1) {
    func_0212a9f4();
    ((void (*)(void *, void *))func_0212c3d4)(arg0, arg1);
    func_0212a9f8();
}

extern void func_0212c478(void);
void func_0212c464(void) {
    func_0212a9f4();
    func_0212c478();
    func_0212a9f8();
}

extern u32 data_02156cd8[4];
void func_0212c4b8(u32 arg0) {
    data_02156cd8[0] = arg0;
}

