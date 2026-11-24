/* 46 functions from 0x0210C6E0 to 0x0210D6D8 (main), found by ds-decomp. */
#include "common.h"

extern const char *func_0210cce4(const char *);
extern void *func_0210c924();
extern void func_0210c970(void *);
extern void func_0210c9cc();
typedef struct {
    void *f0;
    void *f4;
} Data021626e8;
extern Data021626e8 data_021626e8;
extern u8 data_0216273c[];
extern u8 data_021626a0[];
extern u8 data_021626b6[];
extern u16 data_021626ce[];
extern u32 data_02155c3c;
extern void func_02008f74(void *, s32, u32);
extern void *func_0210c594(s32, u32);
extern void *func_021092d8(void *);
extern void func_0210c5dc(void *);
extern s32 func_021095d0(void *);
extern void func_021093b0(void *);
extern s32 func_02109444(void *);
extern void *func_0210ca88(void *, s32);
void func_0210c898(void) {
    *(u16 *)(data_021626a0 + 0xc) = 0;
    *(u16 *)(data_021626a0 + 0xe) = 0;
    *(u16 *)(data_021626a0 + 0x10) = 0;
    *(u16 *)(data_021626a0 + 0x14) = 0;
    *(u16 *)(data_021626a0 + 0x8) = 0;
    *(u16 *)(data_021626a0 + 0xa) = 0;
    data_021626a0[0] = 0;
    data_021626a0[2] = 0;
    *(u16 *)(data_021626a0 + 0x6) = 0;
    *(u16 *)(data_021626a0 + 0x12) = 0;
    *(u16 *)(data_021626a0 + 0x4) = 0;
    func_02008f74(data_021626b6, 0, 0x18);
}

u32 func_0210c8e8(u32 arg0) {
    u32 ret = 0;
    s32 i;
    for (i = 0; i < 12; i++) {
        if (arg0 & (1 << i)) {
            ret |= data_021626ce[i];
        }
    }
    return ret;
}

void *func_0210c924(arg0, arg1)
void *arg0;
u32 arg1;
{
    void *r4 = func_0210c594(0x60, data_02155c3c);
    *(void **)r4 = func_021092d8(arg0);
    if (*(void **)r4 == NULL) {
        func_0210c970(r4);
        return NULL;
    }
    *(u32 *)((u8 *)r4 + 0xc) = arg1;
    return r4;
}

void func_0210c970(void *arg0) {
    u8 *p = (u8 *)arg0;
    if (*(void **)(p + 0x18) != NULL) {
        func_0210c5dc(*(void **)(p + 0x18));
        *(void **)(p + 0x18) = NULL;
    }
    if (func_021095d0(*(void **)p) == 0) {
        if (*(void **)p != NULL) {
            func_021093b0(*(void **)p);
            *(void **)p = NULL;
        }
    }
    if (p != NULL) {
        func_0210c5dc(p);
    }
}

void func_0210c9cc(arg0)
u8 *arg0;
{
    u64 saved = *(u64 *)&data_021626e8;
    data_021626e8.f0 = arg0;
    data_021626e8.f4 = *(void **)arg0;
    *(u32 *)(arg0 + 4) = 0;
    while (*(u32 *)((u8 *)data_021626e8.f0 + 4) == 0) {
        s8 c = **(s8 **)((u8 *)data_021626e8.f4 + 8);
        if (c != 0 && c != '#' && c != '[') {
            (*(void (**)(void))((u8 *)data_021626e8.f0 + 0xc))();
        }
        if (func_02109444(data_021626e8.f4) == 0) {
            if (*(u32 *)((u8 *)data_021626e8.f0 + 4) == 0) {
                *(u32 *)((u8 *)data_021626e8.f0 + 8) = 1;
            }
            break;
        }
    }
    *(u64 *)&data_021626e8 = saved;
}

void func_0210ca6c(void) {
    u32 r4 = func_0210c924();
    func_0210c9cc();
    func_0210c970(r4);
}

s32 func_0210cba0(u8 *arg0, s32 arg1) {
    void *res;
    if (arg1 == 0) {
        return 0;
    }
    res = func_0210ca88(arg0, arg1);
    if (res != NULL) {
        *(void **)((u8 *)*(void **)arg0 + 8) = res;
        return 1;
    }
    return 0;
}

extern s32 func_020123f0(const char *, const char *);
extern void func_0210c5dc(void *);
extern s32 func_021095d0(void *);
extern void func_021093b0(void *);
extern s32 func_02109444(void *);
extern void *func_0210ca88(void *, s32);
s32 func_0210cc54(const char *arg0) {
    if (func_020123f0(arg0, *(const char **)((u8 *)data_021626e8.f4 + 8)) != 0) {
        return 0;
    }
    func_021093f0(data_021626e8.f4);
    return 1;
}

s32 func_0210cc88(const char *arg0) {
    if (func_020123f0(arg0, *(const char **)((u8 *)data_021626e8.f4 + 8)) != 0) {
        return 0;
    }
    func_02109444(data_021626e8.f4);
    return 1;
}

const char *func_0210cd20(u8 *arg0, const char *arg1) {
    const char *r4 = *(const char **)(arg0 + 8);
    if (!func_021093f0(arg0)) {
        return arg1;
    }
    if (*r4 == '\0') {
        r4 = arg1;
    }
    return r4;
}

void func_0210cd50(void) {
    func_0210cce4(0);
}

extern u8 data_02155c5c[4];
extern s32 func_021093f0(void *);
extern void func_02012590(const char *, const char *, ...);
s32 func_0210cdfc(u8 *arg0, s32 arg1) {
    const char *r4 = *(const char **)(arg0 + 8);
    if (!func_021093f0(arg0)) {
        return arg1;
    }
    if (*r4 == '\0') {
        return arg1;
    }
    func_02012590(r4, (const char *)data_02155c5c, &arg1);
    return arg1;
}

extern void func_0210cd90(s32);
void func_0210ce5c(void) {
    func_0210cd90(0);
}

extern void func_02113b58(void *, s32);
extern void func_02113c18(void *);
extern void func_02008f74(void *, s32, u32);
extern void *func_0210c594(s32, u32);
extern void *func_021092d8(void *);
void func_0210d448(void) {
    func_02113b58(data_0216273c, 0);
    func_02113c18(data_0216273c);
}

extern u8 data_02162740[];
void func_0210d46c(void) {
    func_02113b58(data_02162740, 0);
    func_02113c18(data_02162740);
}

