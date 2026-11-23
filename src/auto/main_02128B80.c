/* 32 functions from 0x02128B80 to 0x02129A6C (main), found by ds-decomp. */
#include "common.h"

extern void func_0212a9f4(void);
extern void func_021295a4(void *);
extern void func_0212a9f8(void);
void func_02129588(void *arg0) {
    func_0212a9f4();
    func_021295a4(arg0);
    func_0212a9f8();
}

void *func_0212988c(void *arg0) {
    return *(void **)((u8 *)arg0 + 0x10);
}
