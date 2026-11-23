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

void func_0213807c(void) {
    func_02137fc8(1);
}

extern void func_0213800c(s32);
void func_0213808c(void) {
    func_0213800c(1);
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

void func_021386f0(void *arg0) {
    if (arg0 != NULL) {
        func_021390fc(arg0);
    }
}
