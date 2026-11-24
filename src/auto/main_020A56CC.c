/* 24 functions from 0x020A56CC to 0x020A66B8 (main), found by ds-decomp. */
#include "common.h"

extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern void func_020a994c(void *);
extern void func_020a98a0(void *);
extern void func_020a9544(void *);
extern void func_0203bc34(void *, void *, void *, s32, s32, s32);
extern void func_020a899c(void *);
extern void func_020a9610(void *, void *, void *, void *, s32, s32);
extern u32 func_020a96f0(void *);

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3s32_020A56CC;
void func_020a5ed4(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
}

void func_020a6320(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
}

