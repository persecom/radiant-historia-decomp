/* 40 functions from 0x02126F50 to 0x02127E74 (main), found by ds-decomp. */
#include "common.h"

extern void func_02127600(void *);
void func_021273f0(void *arg0) {
    if (arg0 != NULL) {
        func_02127600(arg0);
    }
}

extern void func_0212a9f4(void);
extern void func_02127e74(void *);
extern void func_0212a9f8(void);
void func_02127e58(void *arg0) {
    func_0212a9f4();
    func_02127e74(arg0);
    func_0212a9f8();
}

