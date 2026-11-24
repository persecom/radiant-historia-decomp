/* 57 functions from 0x02132204 to 0x02133134 (main), found by ds-decomp. */
#include "common.h"

extern void func_0212f738(void);
extern u32 data_021749ac[4];
void func_0213235c(u32 arg0) {
    data_021749ac[0] = arg0;
}

void func_02132484(void) {
    func_0212f738();
}

extern void func_0212f744(void);
void func_02132490(void) {
    func_0212f744();
}

extern void func_0212f754(void);
void func_0213249c(void) {
    func_0212f754();
}

extern void func_0212f760(void);
void func_021324a8(void) {
    func_0212f760();
}

void func_02132ae8(u8 *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0x34) = arg1;
}

extern u8 data_021749dc[64];
void *func_02132f14(void) {
    return data_021749dc;
}

