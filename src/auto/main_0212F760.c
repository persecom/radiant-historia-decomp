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
extern u32 data_021747a0[3];
extern void func_0213236c(void);
extern void func_0213240c(void);
extern void *func_02132424(void *, u32);
extern void func_02013878(void *, s32, u32);
void func_0212f760(void) {
    func_0213235c();
}

void func_0212f76c(void) {
    if (data_021747a0[0] == 0) {
        func_0213236c();
    }
    data_021747a0[0]++;
}

void func_0212f79c(void) {
    if (--data_021747a0[0] == 0) {
        func_0213240c();
    }
}

u8 *func_0212f7c0(u8 *arg0, u32 arg1) {
    u8 *aligned = (u8 *)(((u32)arg0 + 7) & ~7);
    u8 *tmp;
    u8 *end;
    void *p;
    u32 val;

    func_02013878(aligned, 0, 0xa2c);
    tmp = aligned + 0x22c + 0x800;
    end = (u8 *)(((u32)tmp + 7) & ~7);
    if ((u32)end + 0x81c < arg1) {
        return NULL;
    }
    p = func_02132424(end, 0x81c);
    *(void **)(arg0 + 0x1b4) = p;
    if (p == NULL) {
        return NULL;
    }
    val = (u32)(arg0 + 0x23) & ~0x1f;
    *(u32 *)arg0 = val;
    *(u8 *)(arg0 + 0x1e8) = 0;
    *(u8 *)(arg0 + 0x1e9) = 0;
    *(u8 *)(arg0 + 0x1ea) = 0;
    *(u8 *)(arg0 + 0x1eb) = 0;
    *(u8 *)(arg0 + 0x1ec) = 0;
    *(u8 *)(arg0 + 0x1ed) = 0;
    *(u8 *)(arg0 + 0x1ee) = 0;
    *(u8 *)(arg0 + 0x1ef) = 0;
    *(u32 *)(arg0 + 0x1a4) = data_021747a0[2];
    *(u8 *)(arg0 + 0x1ab) = 0x10;
    *(u8 *)(arg0 + 0x1a8) = 1;
    return arg0;
}

void func_0212f880(u8 *a0) {
    void *ptr = *(void **)(a0 + 0x1b4);
    if (ptr != NULL) {
        *(void **)(a0 + 0x1b4) = NULL;
        func_0213246c(ptr);
    }
    func_02013878(a0, 0, 0xa2c);
}

void func_0212f97c(u8 *a0, u32 a1) {
    func_0212f8b8(a0);
    *(u32 *)(a0 + 0x1b0) = a1;
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

void func_0212fd28(u8 *a0, u8 *a1) {
    s32 i;
    u8 *dst = a0 + 0xa24;
    for (i = 0; i < 8; i++) {
        dst[i] = a1[i];
    }
}

void func_0212fe50(s32 a0, s32 a1, s32 a2) {
    func_0212f558(0, a2);
}

