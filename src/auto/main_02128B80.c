/* 32 functions from 0x02128B80 to 0x02129A6C (main), found by ds-decomp. */
#include "common.h"

extern void func_0212a9f4(void);
extern void func_021295a4(void *);
extern void func_0212a9f8(void);
extern void func_0212bda8(void *);
extern void func_021293c0(void);
extern void func_02128eb4(void);
extern void func_0212926c(void);
extern void func_02129490(void);
extern void func_0212951c(void *);
extern void func_021294c8(void *);
extern void func_02013878(void *, s32, u32);
extern void func_0212b3f8(s32, s32, void *, void *);
extern u32 data_0217348c[60];
extern u8 data_02156a54[];
void func_021294c4(void) {
}

void func_02129588(void *arg0) {
    func_0212a9f4();
    func_021295a4(arg0);
    func_0212a9f8();
}

u32 func_021297b8(void *arg0) {
    return *(u32 *)((u8 *)arg0 + 0xc);
}

void *func_0212988c(void *arg0) {
    return *(void **)((u8 *)arg0 + 0x10);
}
