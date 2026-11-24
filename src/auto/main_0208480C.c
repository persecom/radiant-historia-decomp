/* 17 functions from 0x0208480C to 0x02085328 (main), found by ds-decomp. */
#include "common.h"

extern void func_02085328(void);
extern u8 *data_0216010c;
extern s16 *func_02116984(void *, u16);
extern void *data_02155c3c;
extern u8 data_021485a0[8];
extern void *func_0210c594(s32, void *);
extern void func_020a9544(void *);
extern void *func_020a94b8(void *);
extern void func_02080d30(void);
extern void func_0210c5dc(void *);
extern void func_02089a98(void);

typedef struct {
    u8 pad[0x44];
    void *field_44;
    u8 pad2[0x10];
    void *field_58;
} G_020852a0;
void func_0208480c(void) {
    data_0216010c[0x50b4] = 1;
}

u8 func_02084f80(u16 arg0) {
    return ((u8 *)func_02116984(data_0216010c + 0x608, arg0))[0];
}

u8 func_02084fa8(u16 arg0) {
    return ((u8 *)func_02116984(data_0216010c + 0x608, arg0))[1];
}

u8 func_02085110(u32 arg0) {
    u8 *ptr = data_0216010c + arg0 * 8;
    return ptr[0x618];
}

u8 func_02085128(u32 arg0) {
    u8 *ptr = data_0216010c + arg0 * 8;
    return ptr[0x619];
}

u32 func_02085140(u32 arg0) {
    u8 *ptr = data_0216010c + arg0 * 8;
    return *(u32 *)(ptr + 0x61c);
}

s32 func_02085158(u32 arg0) {
    s16 i = 0;
    if (*(u8 *)(data_0216010c + 0x614) <= 0) return 0;
    while (1) {
        if (func_02085110((u8)i) == arg0) {
            return func_02085140((u8)i);
        }
        i = (s16)(i + 1);
        if (*(u8 *)(data_0216010c + 0x614) <= i) return 0;
    }
}

s32 func_020851bc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    s32 sum = arg0 + arg1;
    if (arg4 == 0) return (s16)sum;
    if (arg2 < sum) {
        if (arg4 != 1) return arg3;
        return arg2;
    } else {
        return (s16)sum;
    }
}

s32 func_020851f8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    s32 diff = arg0 - arg1;
    if (arg4 == 0) {
        return (s16)diff;
    }
    if (arg2 > diff) {
        return (arg4 == 1) ? arg2 : arg3;
    }
    return (s16)diff;
}

void func_02085234(void) {
    func_02085328();
}

void func_02085240(void) {
    s32 i = 0;
    u8 unused[4];
    *(void **)(data_0216010c + 0x44) = func_0210c594(0x1c, data_02155c3c);
    if (*(void **)(data_0216010c + 0x58)) {
        if (**(void ***)(data_0216010c + 0x58)) {
            func_020a9544(*(void **)(data_0216010c + 0x58));
        }
    }
    *(void **)(data_0216010c + 0x58) = func_020a94b8(data_021485a0);
}

void func_020852a0(void) {
    u8 **pp = &data_0216010c;
    if (*(void **)(*pp + 0x58)) {
        if (**(void ***)(*pp + 0x58)) {
            func_020a9544(*(void **)(*pp + 0x58));
        }
    }
    *(void **)(*pp + 0x58) = NULL;
    func_02080d30();
    if (*(void **)(*pp + 0x44)) {
        func_0210c5dc(*(void **)(*pp + 0x44));
        *(void **)(*pp + 0x44) = NULL;
    }
    *(void **)(*pp + 0x44) = NULL;
    *(u8 *)(*pp + 0x3f) = 0;
    func_02089a98();
}

