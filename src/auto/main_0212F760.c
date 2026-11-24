/* 21 functions from 0x0212F760 to 0x02130300 (main), found by ds-decomp. */
#include "common.h"

extern void func_0212f558(s32, s32);
extern void func_0213246c(void *);
extern void func_02013878(void *, s32, u32);
extern void func_0212f8b8(void *);
extern s32 func_0212f4b0(void *);
extern s32 func_0212f3cc(void *, s32);
extern s32 func_0212fd54(void *, void *);
extern void func_0212fe64(void *, void *);
extern void func_0212ff10(void *, void *, void *);
extern void func_02130018(void *, void *, void *, void *, void *);

extern void func_0213235c(void);
extern u8 data_021747a0[12];
extern void func_0213236c(void);
extern void func_0213240c(void);
extern void *func_02132424(void *, u32);
extern void func_02013878(void *, s32, u32);
void func_0212f760(void) {
    func_0213235c();
}

void func_0212f76c(void) {
    if (*(s32 *)data_021747a0 == 0) {
        func_0213236c();
    }
    *(s32 *)data_021747a0 += 1;
}

void func_0212f79c(void) {
    if (--*(s32 *)data_021747a0 == 0) {
        func_0213240c();
    }
}

extern void func_0212f558(s32, s32);
extern void func_0213246c(void *);
extern void func_0212f8b8(void *);
extern s32 func_0212f4b0(void *);
extern s32 func_0212f3cc(void *, s32);
extern s32 func_0212fd54(void *, void *);
extern void func_0212fe64(void *, void *);
extern void func_0212ff10(void *, void *, void *);
extern void func_02130018(void *, void *, void *, void *, void *);
s32 func_0212fb8c(u8 *a0) {
    void *p = *(void **)(a0 + 0x1b0);
    s32 res;
    if (p == NULL) {
        return -1;
    }
    res = func_0212f4b0(p);
    if (res == -1) {
        return -1;
    }
    if (res != 1) {
        return 1;
    }
    if (func_0212f3cc(*(void **)(a0 + 0x1b0), 0x14) == 0) {
        return -1;
    }
    if (func_0212fd54(*(void **)(a0 + 0x1b0), a0 + 0x1b8) < 0) {
        return -1;
    }
    func_0212fe64(a0 + 0x1b8, a0 + 0x1e8);
    func_0212ff10(*(void **)(a0 + 0x1b0), a0 + 0x1e8, a0 + 0x224);
    func_02130018(*(void **)(a0 + 0x1b0), a0 + 0x1e8, a0 + 0x224, a0 + 0x324, a0 + 0x424);
    *(u8 *)(a0 + 0x1a9) = 1;
    *(u32 *)(a0 + 0x1ac) = 0;
    return 0;
}

s32 func_0212fc44(u8 *arg0) {
    return *(u32 *)(arg0 + 0x1ac) == 0xc;
}

s8 func_0212fcf0(u8 *a0) {
    return *(s8 *)(a0 + 0x1ab);
}

extern s32 func_0212fd20(void);
void func_0212fcfc(void) {
    func_0212fd20();
}

s32 func_0212fd20(void) {
    return 0x60;
}

