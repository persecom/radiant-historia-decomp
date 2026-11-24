/* 8 functions from 0x0208038C to 0x02080E00 (main), found by ds-decomp. */
#include "common.h"

extern void func_02080e00(void);
extern void *data_02155c3c;
extern u8 *data_0216010c;
extern void *func_0210c594(u32, void *);
extern void func_020ec548(void *);
#pragma optimization_level 0
void func_02080c68(void);
void func_02080d30(void);
extern u16 func_0208a318(u32);
extern u8 *func_020ec294(u16, s32, s32, s32);
extern void func_020ec8cc(void *, s32, s32);
extern void func_020ec88c(void *, s32, s32);
extern void func_0208a4ac(void);
#pragma optimization_level 0
void func_02080b58(u32 arg0) {
    u8 *p = NULL;
    func_02080d30();
    p = func_020ec294(func_0208a318(arg0), 1, 0x4000, 0);
    func_020ec8cc(p, 1, 0);
    func_020ec88c(p, 0, 0);
    *(u32 *)(p + 0x1c) = 0xaf000;
    *(u32 *)(p + 0x18) = 0;
    *(void **)(data_0216010c + 0x5564) = p;
    *(u8 *)(data_0216010c + 0x556c) = 0xa;
    p = func_020ec294(func_0208a318(arg0) + 1, 1, 0x2000, 0x4000);
    func_020ec8cc(p, 1, 0);
    func_020ec88c(p, 0, 0);
    *(u32 *)(p + 0x1c) = 0xaf000;
    *(u32 *)(p + 0x18) = 0x60000;
    *(void **)(data_0216010c + 0x5568) = p;
    func_02080c68();
    func_0208a4ac();
    *(s8 *)(data_0216010c + 0x556d) = (s8)arg0;
}

void func_02080c68(void) {
    void *p = NULL;
    if (*(void **)(data_0216010c + 0x5000 + 0x564)) {
        p = *(void **)(data_0216010c + 0x5000 + 0x564);
        *(u32 *)((u8 *)p + 0x14) = (6 * *(u8 *)(data_0216010c + 0x5000 + 0x56c) + 0x82) << 12;
        p = *(void **)(data_0216010c + 0x5000 + 0x568);
        *(u32 *)((u8 *)p + 0x14) = (6 * *(u8 *)(data_0216010c + 0x5000 + 0x56c) + 0x82) << 12;
        if (*(u8 *)(data_0216010c + 0x5000 + 0x56c) != 0) {
            u8 *q = (u8 *)(data_0216010c + 0x16c + 0x5400);
            *q = *q - 1;
        }
    }
}

void func_02080d30(void) {
    if (*(void **)(data_0216010c + 0x5000 + 0x564)) {
        func_020ec548(*(void **)(data_0216010c + 0x5000 + 0x564));
        *(void **)(data_0216010c + 0x5000 + 0x564) = NULL;
        func_020ec548(*(void **)(data_0216010c + 0x5000 + 0x568));
        *(void **)(data_0216010c + 0x5000 + 0x568) = NULL;
    }
    *(s8 *)(data_0216010c + 0x5000 + 0x56d) = -1;
}
#pragma optimization_level 4
void func_02080db8(void) {
    func_02080e00();
}

void func_02080dc4(void) {
    *(void **)(data_0216010c + 0x44) = func_0210c594(0x38, data_02155c3c);
    *(u8 *)(*(void **)(data_0216010c + 0x44) + 2) = 0;
}

