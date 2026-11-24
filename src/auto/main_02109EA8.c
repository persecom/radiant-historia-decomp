/* 33 functions from 0x021098AC to 0x0210A7E4 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_02162610[64];

extern s32 func_0210a38c();
extern void func_0210a014(void);
extern u32 data_0216256c[];
extern void func_021167ac(void *, s32);
extern void func_0210a2f0(u8 *);
extern void func_0210a348(u32, u32);
extern s32 func_0210a30c(u32 *, u32, s32);
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
extern void func_0200b888(void *);
extern void func_0200bc08(void *, void *);
extern u32 func_0200bc18(void *);
extern void func_0200bb3c(void *, void *, u32);
extern void func_0200baa4(void *);
extern void *func_0210c594(u32, void *);
extern void func_02118594(void);
extern void *func_02109fac(void *);
extern u8 data_02155bb0[];
extern u8 data_02155bc0[];
extern u8 data_02155bd0[];
extern u8 data_02162578[];
extern u8 data_02162580[];
extern u8 data_021625c8[];

void func_02109ea8(void *arg0) {
    u8 *p = arg0;
    u16 count = *(u16 *)(p + 0x14);
    *(u16 *)(p + 0x14) = count - 1;
    if (*(u16 *)(p + 0x14) != 0) {
        return;
    }
    if (data_02162564[1] != 0) {
        return;
    }
    if (((*(u32 *)(p + 0xc) << 7) >> 31) != 0) {
        return;
    }
    func_021168f8(data_0216256c, p);
    func_0210c674(*(void **)(p + 8));
    if (*(void **)(p + 0x10) != NULL) {
        func_0210c5dc(*(void **)(p + 0x10));
        *(void **)(p + 0x10) = NULL;
    }
    func_0210c674(p);
}

void func_02109f24(void) {
    void *p = func_02109f3c();
    if (p != NULL) {
        func_02109ea8(p);
    }
}

void *func_02109f3c(void) {
    void *node = NULL;
    u8 *base = (u8 *)data_02162564;
    u16 offset = *(u16 *)(base + 0x12);
    void *head = *(void **)(base + 8);
    for (;;) {
        node = (node == NULL) ? head : *(void **)((u8 *)node + offset + 4);
        if (node == NULL) {
            return NULL;
        }
        if (*(s32 *)((u8 *)node + 8) == 0) {
            return node;
        }
    }
}

s32 func_02109f84(void) {
    u8 *p = func_02109f3c();
    if (p == NULL) {
        return 0;
    }
    return *(u16 *)(p + 0x14) >= 2;
}

void *func_02109fac(void *arg0) {
    u8 stack[0x48];
    u8 *buf = stack;
    void *src = arg0;
    u32 size;
    void *p;
    func_0200b888(buf);
    func_0200bc08(buf, src);
    size = func_0200bc18(buf);
    p = func_0210c594(size, data_02155c3c);
    func_0200bb3c(buf, p, size);
    func_0200baa4(buf);
    return p;
}

void func_0210a014(void) {
    void *p = func_02109fac(data_02155bb0);
    void *a = data_021625c8;
    void *b = data_02162580;
    *(u32 *)(data_02162578 + 4) = (u32)p;
    *(u32 *)(data_02162578 + 0) = *(u32 *)p;
    func_0200b888(a);
    func_0200bc08(a, data_02155bc0);
    func_0200b888(b);
    func_0200bc08(b, data_02155bd0);
}

u32 func_0210a080(const u8 *s, u32 mask) {
    s32 c = *s++;
    if (c == '\\') {
        c = '/';
    }
    if (c >= 'A' && c <= 'Z') {
        c += 0x20;
    }
    if (c == '/') {
        c = 0;
    }
    if (*s != 0) {
        do {
            s32 ch = *s++;
            if (ch == '\\') {
                ch = '/';
            }
            if (ch >= 'A' && ch <= 'Z') {
                ch += 0x20;
            }
            c = 0x25 * c + ch;
        } while (*s != 0);
    }
    return (u32)c & (mask - 1);
}

void func_0210a2f0(u8 *p) {
    u32 zero = 0;
    *(u32 *)p = ~zero;
    *(u32 *)(p + 4) = zero;
    *(u32 *)(p + 8) = zero;
    p[0xc] = zero;
}

s32 func_0210a30c(u32 *arg0, u32 arg1, s32 arg2) {
    switch (arg2) {
        case 0:
            arg0[0] = arg1;
            break;
        case 1:
            arg0[0] += arg1;
            break;
        case 2:
            arg0[0] = arg0[2] - arg1;
            break;
    }
    return 1;
}

s32 func_0210a38c(u8 *arg0) {
    *(s32 *)arg0 = -1;
    return 1;
}

u32 func_0210a498(u32 *arg) {
    return arg[2];
}

void func_0210a4a0(void) {
    *(u32 *)(data_02162610 + 4) = 0;
}

extern u8 data_02162610[64];
void *func_0210a4b4(void) {
    return data_02162610;
}

extern u8 data_02162614[64];
void *func_0210a4c0(void) {
    return data_02162614;
}

void func_0210a4cc(void) {
    void *ptr = func_0210c594(0x34, data_02155c3c);
    func_02118594();
    *(u32 *)((u8 *)ptr + 0x24) = 0;
}

