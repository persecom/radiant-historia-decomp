/* 53 functions from 0x02137E58 to 0x02138E00 (main), found by ds-decomp. */
#include "common.h"

extern void func_021390fc(void *);
extern void func_0213807c(void);
extern void func_0213808c(void);
extern void func_02138280(void);
void func_0213825c(void *arg0, void *arg1) {
    func_0213807c();
    ((void (*)(void *, void *))func_02138280)(arg0, arg1);
    func_0213808c();
}

void func_021386f0(void *arg0) {
    if (arg0 != NULL) {
        func_021390fc(arg0);
    }
}
