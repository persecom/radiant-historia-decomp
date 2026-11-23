/* 32 functions from 0x02135F40 to 0x02136E94 (main), found by ds-decomp. */
#include "common.h"

extern void func_0213807c(void);
void func_021369a8(void) {
    func_0213807c();
}

extern void func_0213808c(void);
void func_021369b4(void) {
    func_0213808c();
}

extern void func_02138130(void);
void func_021369c0(void) {
    func_02138130();
}

extern void func_02136be4(void *);
void func_02136bc8(void *arg0) {
    func_021369a8();
    func_02136be4(arg0);
    func_021369b4();
}

extern void func_02136ce8(u32, u32, u32);
void func_02136cbc(u32 arg0, u32 arg1, u32 arg2) {
    func_021369a8();
    func_02136ce8(arg0, arg1, arg2);
    func_021369b4();
}

extern void func_02136d54(void *);
void func_02136d38(void *arg0) {
    func_021369a8();
    func_02136d54(arg0);
    func_021369b4();
}

