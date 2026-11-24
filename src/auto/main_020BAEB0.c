/* 28 functions from 0x020BA63C to 0x020BB558 (main), found by ds-decomp. */
#include "common.h"

extern void func_02110b94(void *);
extern void func_02110d94(void *);
extern void func_020ba9c4(u8 *);
extern void func_020baae0(u8 *);
extern u8 *func_020c9b24(void *, u32, u32);
extern void func_020babe8(void);
extern void func_020ba948(u8 *);
extern void func_020baa74(u8 *);
extern void func_020c4c60(void *, s32);
extern void func_0211137c(void *, void *);
extern u8 *func_02111d7c(void *, u32);
extern void *func_02022068(u32);
extern void func_020a98a0(void *);
extern void func_020a9544(void *);
extern void func_0210c5dc(void *);
extern void func_020a9610(void *, void *, void *, void *, s32, s32);
extern void *func_020c9c10(void *, u32);
extern void func_020c738c(void *, u32, u32);
extern void **data_021601ec;
extern void *func_020c8b10(void);
extern void func_020c7894(void *);
extern u16 data_02143954[];
extern void func_020c52c0(void);
extern u8 data_021601f0;
extern u32 data_02162868;
extern u32 data_0216bf84;
extern void func_020bb558(u8 *);
extern void func_020c83f4(u8 *, s32, s32, s32);
extern void func_020c8640(u8 *, u32);
extern void func_020c4e00(void *, u32);
extern void func_020c4fa4(void *);
extern void func_0210968c(u32, u32, u32);
extern void func_02109790(u32);
extern void func_02108e54(u32);
extern void func_020bad3c(void);
extern void func_020baeb0(void);
extern void func_0210dc88(void);

void func_020bafb4(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_020bafdc(void) {
    func_020c52c0();
}

void func_020bafe8(void) {
    u8 *p = *(u8 **)(&data_021601f0 + 4);
    func_020c4c60(*(void **)(p + 0x3c), 10);
}

void func_020bb008(void) {
    func_020c4e00(*(void **)(*(u8 **)((u8 *)&data_021601f0 + 4) + 0x3c), 10);
    func_020c4fa4(*(void **)(*(u8 **)((u8 *)&data_021601f0 + 4) + 0x40));
}

void func_020bb234(u8 *arg0) {
    u16 i;
    if (arg0 == NULL) {
        return;
    }
    for (i = 0; i < 3; i++) {
        void *obj;
        func_020a98a0(arg0 + 0x18 + i * 0x34);
        func_020a9544(((void **)(arg0 + 0xc))[i]);
        obj = ((void **)arg0)[i];
        ((void (*)(void *))(*(void **)((u8 *)obj + 0xc)))(obj);
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020bb294(u8 *arg0, s32 arg1) {
    func_020a9610(arg0 + 0xb4 + arg1 * 0x18, ((void **)(arg0 + 0xc))[arg1], ((void **)(arg0 + 0xfc))[arg1], ((void **)arg0)[arg1], 0, 0);
}

void func_020bb508(u8 *arg0) {
    if (arg0 == NULL) {
        return;
    }
    if (*(u32 *)(arg0 + 0x108) & 1) {
        func_020bb558(arg0);
    }
}

extern void func_020bbb1c(void);
extern void func_020bbc24(void);
extern void func_020a98a0(void *);
extern void func_020a9544(void *);
extern void func_0210c5dc(void *);
extern void func_020a9610(void *, void *, void *, void *, s32, s32);
void func_020bb528(u8 *arg0) {
    if (arg0 == NULL) {
        return;
    }
    if (*(u32 *)(arg0 + 0x108) & 0x10) {
        func_020bbb1c();
    }
    if (*(u32 *)(arg0 + 0x108) & 0x20) {
        func_020bbc24();
    }
}

