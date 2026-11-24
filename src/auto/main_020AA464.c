/* 31 functions from 0x020AA464 to 0x020AB250 (main), found by ds-decomp. */
#include "common.h"

extern void func_021168f8(void *, void *);
extern void func_020aa3e0(void *);
extern void *func_0210c594(u32, void *);
extern void func_021167ac(void *, s32);
extern void **data_021601d8;
extern void *data_021601dc;
extern void *data_02155c3c;

extern void func_0210c5dc(void *);
void func_020aa710(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

extern void func_021168f8(void *, void *);
extern void func_020aa3e0(void *);
extern void *func_0210c594(u32, void *);
extern void func_021167ac(void *, s32);
extern void **data_021601d8;
extern void *data_021601dc;
extern void *data_02155c3c;
void func_020aa76c(void **arg0) {
    void *ptr;
    if (arg0 == NULL) {
        return;
    }
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

extern void func_020ade8c(s32);
void func_020aad6c(void) {
    func_020ade8c(1);
}

