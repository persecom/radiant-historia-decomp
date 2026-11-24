/* 27 functions from 0x02020C58 to 0x02021C48 (main), found by ds-decomp. */
#include "common.h"

extern void func_0210d220(void);
s32 func_02021284(void);
extern u16 func_02021618;
extern s32 func_02021428(u16 *);
extern void (*ARM9_CTOR_START[])(void);
extern u32 *data_02162730;
extern u32 func_021155c8(u32);
extern void func_0210d85c(s32);
extern u32 func_021154a4(u32);
extern void func_021154f4(u32, u32);
extern void func_021156bc(s32, u32);
extern void func_021160c0(void *, s32, s32);
extern void func_0210d114(u32, void *);
extern void func_0211568c(s32, u32);
extern u8 data_02145fc8[];
extern void *data_02155c80;
extern s32 data_02160050;
void func_020211f0(void *arg0, s32 arg1);
void func_0202119c(void) {
}

void func_020211a0(void) {
    void (**p)(void) = ARM9_CTOR_START;
    while (p != 0 && *p != 0) {
        (*p)();
        p++;
    }
}

u32 func_020211d0(void) {
    return func_021155c8(*data_02162730) >> 10;
}

s32 func_020212ec(void) {
    func_0210d220();
    return func_02021284();
}

void func_02021340(void) {
}

s32 func_02021a28(void) {
    return func_02021428(&func_02021618);
}

extern u16 func_020217b4;
s32 func_02021a3c(void) {
    return func_02021428(&func_020217b4);
}

extern u32 data_02160054[];
u32 func_02021a50(void) {
    return data_02160054[3];
}

extern void func_02021bd0(s32);
extern void func_0210d85c(s32);
extern u32 func_021154a4(u32);
extern void func_021154f4(u32, u32);
extern void func_021156bc(s32, u32);
extern void func_021160c0(void *, s32, s32);
extern void func_0210d114(u32, void *);
extern void func_0211568c(s32, u32);
extern u8 data_02145fc8[];
extern void *data_02155c80;
extern s32 data_02160050;
void func_02021c28(s32 arg0) {
    s32 offset = arg0 * 0x4800;
    func_02021bd0(offset);
    func_02021bd0(offset + 0x2400);
}

