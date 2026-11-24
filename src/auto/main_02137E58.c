/* 53 functions from 0x02137E58 to 0x02138E00 (main), found by ds-decomp. */
#include "common.h"

extern void func_021390fc(void *);
extern void func_0213807c(void);
extern void func_0213808c(void);
extern void func_02138280(void);
extern void func_02137fc8(s32);
extern void func_02136958(void);
extern void func_02137ec4(void);
void func_02137eac(void) {
    func_02136958();
    func_021369a8();
    func_02137ec4();
    func_021369b4();
}

void func_02137f1c(void) {
    func_021369a8();
    func_02137f34();
    func_021369b4();
    func_02136980();
}

void func_0213807c(void) {
    func_02137fc8(1);
}

extern void func_0213800c(s32);
void func_0213808c(void) {
    func_0213800c(1);
}

void func_0213809c(void) {
    func_02137fc8(3);
}

void func_021380ac(void) {
    func_0213800c(3);
}

extern s32 func_021381cc(u8 *, s32, s32, s32 *);
s32 func_02138190(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 ret;
    func_0213807c();
    ret = func_021381cc(arg0, arg1, arg2, arg3);
    func_0213808c();
    return ret;
}

void func_0213825c(void *arg0, void *arg1) {
    func_0213807c();
    ((void (*)(void *, void *))func_02138280)(arg0, arg1);
    func_0213808c();
}

extern void func_0213841c(s32);
void func_021384b0(void) {
    func_0213841c(1);
}

void func_021384c0(void) {
    func_0213841c(2);
}

void func_021384d0(void) {
    func_0213841c(3);
}

void func_021384e0(void) {
    func_0213841c(4);
}

void func_021384f0(void) {
    func_0213841c(5);
}

void func_021386f0(void *arg0) {
    if (arg0 != NULL) {
        func_021390fc(arg0);
    }
}

void func_02138de0(u8 *arg0, u32 arg1) {
    *(u32 *)(arg0 + 0xb4) = arg1;
}

