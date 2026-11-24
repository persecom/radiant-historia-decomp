/* 37 functions from 0x0212C824 to 0x0212D7BC (main), found by ds-decomp. */
#include "common.h"

extern u8 data_02173df4[20];
extern u8 data_02173e08[720];
extern void func_0212a4a4(void *, u32);

extern s32 func_0212a584(void *);
extern s32 func_0212a58c(void *);
extern s32 func_0212a4b8(void *);
extern void func_0212cbb8(void *);
extern void func_0212a904(void *);
extern void func_0212cfc4(void *);
extern void func_0212a9dc(void);
extern void func_0212d288(void *);
extern void func_0212a9e8(void);
extern void func_0212c824(void *);
extern void func_0212d3b4(void *);

void func_0212d168(u8 *arg0) {
    void *p = *(void **)(arg0 + 4);
    s32 a = func_0212a584(p);
    s32 b = func_0212a58c(p);
    *(s32 *)(arg0 + 0x2c) += b;
    *(s32 *)(arg0 + 0x30) += a;
    *(s32 *)(arg0 + 0x34) += b;
}

void func_0212d1b0(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 4);
    s16 val;
    if (func_0212a4b8(p) == 0) {
        func_0212cbb8(arg0);
    }
    func_0212a904(p);
    if (func_0212a4b8(p) == 3) {
        func_0212cfc4(arg0);
    }
    val = *(s16 *)(p + 0x98);
    if (val == 0xa || val == 0x14 || val == 0xb || val == 0xc || val == 0xf) {
        func_0212d168(arg0);
    }
}

void func_0212d21c(u8 *arg0) {
    s8 type;
    if (*(s32 *)(arg0 + 0xa8) > 0) {
        func_0212a9dc();
        func_0212d288(arg0);
        func_0212a9e8();
    }
    type = *(s8 *)(arg0 + 1);
    if (type == 2) {
        func_0212d1b0(arg0);
    } else if (type == 1) {
        func_0212c824(arg0);
    }
    if (*(s32 *)(arg0 + 0xac) > 0) {
        func_0212a9dc();
        func_0212d3b4(arg0);
        func_0212a9e8();
    }
}

void func_0212d4d0(void) {
    s32 i;
    if (*(void (**)(void *))(data_02173df4 + 0xc) != NULL) {
        (*(void (**)(void *))(data_02173df4 + 0xc))(*(void **)(data_02173df4 + 0x8));
    }
    for (i = 0; i < 4; i++) {
        if ((s8)data_02173e08[i * 0xb4] == 1) {
            func_0212d21c(&data_02173e08[i * 0xb4]);
        }
    }
    if (*(void (**)(void *))(data_02173df4 + 0x4) != NULL) {
        (*(void (**)(void *))(data_02173df4 + 0x4))(*(void **)(data_02173df4 + 0x0));
    }
}

u32 func_0212d540(u8 *arg0) {
    return *(u32 *)(arg0 + 0x30);
}

u32 func_0212d548(void *arg0) {
    return *(u32 *)((u8 *)arg0 + 0x2c);
}

void func_0212d550(u8 *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0x34) = arg1;
}

extern void func_0212a1dc(void *);
extern s32 func_0212a584(void *);
extern s32 func_0212a58c(void *);
extern s32 func_0212a4b8(void *);
extern void func_0212cbb8(void *);
extern void func_0212a904(void *);
extern void func_0212cfc4(void *);
extern void func_0212a9dc(void);
extern void func_0212d288(void *);
extern void func_0212a9e8(void);
extern void func_0212c824(void *);
extern void func_0212d3b4(void *);
void func_0212d590(void *arg0) {
    func_0212a1dc(*(void **)((u8 *)arg0 + 4));
}

extern u8 data_02173df4[20];
extern u8 data_02173e08[720];
extern void func_0212a4a4(void *, u32);
extern void func_0212a1e4(void *);
void func_0212d5a0(void *arg0) {
    func_0212a1e4(*(void **)((u8 *)arg0 + 4));
}

