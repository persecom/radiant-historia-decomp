/* 33 functions from 0x021098AC to 0x0210A7E4 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_02162610[64];

extern s32 func_0210a38c();
extern void func_0210a014(void);
extern u32 data_0216256c[];
extern void func_021167ac(void *, s32);
extern void func_0210a2f0(void);
extern void func_0210a348(u32, u32);
extern void func_0210a30c(u32, u32, s32);
extern void func_0210a3d8(u32, u32, u32);
extern void *func_0210c518(u32, void *);
extern void func_02006dc4(void *, u32);
extern void func_021168f8(void *, void *);
extern void func_0210c674(void *);
extern void func_0210c5dc(void *);
extern void *func_02109f3c(void);
extern void func_02109ea8(void *);
extern void *data_02155c3c;
extern u32 data_02162564[];
extern u32 func_0210a498(u32 *);

extern void func_02109c54(u8 *);
void *func_02109c60(u8 *arg0, u32 *arg1) {
    u8 stack[0x10];
    u8 *buf = stack;
    u32 zero = 0;
    void *result = NULL;
    u32 size;
    if (func_02109c04(buf, arg0, zero, zero) == 1) {
        void *p;
        size = func_0210a498((u32 *)buf);
        p = func_0210c518(size, data_02155c3c);
        func_02109c24((u32)buf, (u32)p, zero, size);
        func_02109c54(buf);
        if (arg1 != NULL) {
            *arg1 = size;
        }
        func_02006dc4(p, size);
        result = p;
    }
    return result;
}

s32 func_02109cf0(s8 *arg0) {
    return *arg0 != '-';
}
