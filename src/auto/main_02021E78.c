/* 22 functions from 0x02021C48 to 0x02022A48 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u32 b0 : 8;
} Byte021f54;

extern u32 data_02160078;
extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_02005e80(char *, const char *, ...);
extern const char data_02145fdc[];
extern u32 func_021092d8(char *);
extern u32 func_02092994(u32, u32);
extern void func_02022088(s32, s32, ...);
extern void *func_02021f54(s32);
extern s32 func_02109444(void *);
extern void func_0210c970(void *);
extern void func_021167f0(void *, void *);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);

void func_02021e78(void) {
    char buf[0x14];
    void *p;
    u32 res, a, b;
    func_02005e80(buf, data_02145fdc);
    p = func_0210c594(0x60, data_02155c3c);
    res = func_021092d8(buf);
    *(u32 *)p = res;
    if (res == 0) return;
    a = func_02092994(*(u32 *)p, 0);
    b = func_02092994(*(u32 *)p, 0);
    func_02022088(a, b);
    if (func_02109444(*(void **)p) == 0) {
        func_0210c970(p);
    }
}

void *func_02021f10(s32 arg0) {
    if (arg0 == 0x3e7) goto fail;
    if (arg0 < 0) goto fail;
    if (arg0 > 7) goto fail;
    return (void *)((u8 *)data_02160078 + 0x38 + arg0 * 0x128);
fail:
    return NULL;
}

s32 func_02022068(s32 arg0, ...) {
    return *(u8 *)func_02021f54(((s32 *)&arg0)[0]);
}

#pragma peephole off
void func_02022088(s32 arg0, s32 arg1, ...) {
    u8 *p = func_02021f54(((s32 *)&arg0)[0]);
    *p = (u8)(((s32 *)&arg0)[1] & 0xff);
}
#pragma peephole on
void func_020220b0(s32 arg0, s32 arg1, ...) {
    u8 *p = func_02021f54(((s32 *)&arg0)[0]);
    s32 r4 = p[0] + ((s32 *)&arg0)[1];
    if (r4 > 99) {
        r4 = 99;
    } else if (r4 < 0) {
        r4 = 0;
    }
    *p = r4 & 0xff;
}

void func_02022100(s32 arg0) {
    u32 *base = (u32 *)data_02160078;
    *(u32 *)((u8 *)base + 0x28) += arg0;
    base = (u32 *)data_02160078;
    if (arg0 > 0) {
        if (*(u32 *)((u8 *)base + 0x28) > 0x98967f) {
            *(u32 *)((u8 *)base + 0x28) = 0x98967f;
        }
    } else {
        if (*(u32 *)((u8 *)base + 0x28) > 0x98967f) {
            *(u32 *)((u8 *)base + 0x28) = 0;
        }
    }
}

void *func_0202214c(void) {
    return *(void **)((u8 *)data_02160078 + 0x28);
}

void func_02022160(u32 arg0) {
    *(u32 *)((u8 *)data_02160078 + 0x28) = arg0;
    if (*(u32 *)((u8 *)data_02160078 + 0x28) > 0x98967f) {
        *(u32 *)((u8 *)data_02160078 + 0x28) = 0x98967f;
    }
}

void func_020223bc(u8 *arg0, void *arg1, u16 arg2) {
    u8 *p = func_0210c594(0x10, data_02155c3c);
    *(u16 *)p = arg2;
    *(void **)(p + 4) = arg1;
    func_021167f0(arg0 + 0x64, p);
}

void func_020223f8(u8 *arg0, u16 arg1) {
    u8 *node = *(u8 **)(arg0 + 0x64);
    u16 i = 0;
    while (node != NULL) {
        if (arg1 == i) {
            break;
        }
        i++;
        node = *(u8 **)(node + 0xc);
    }
    if (node != NULL) {
        func_021168f8(arg0 + 0x64, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

void func_02022454(u8 *arg0) {
    void *ptr;
    while ((ptr = *(void **)(arg0 + 0x64)) != NULL) {
        func_021168f8(arg0 + 0x64, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
}

void *func_02022494(u8 *arg0, u16 arg1) {
    u8 *node = *(u8 **)(arg0 + 0x64);
    u16 i = 0;
    if (node != NULL) {
        do {
            if (i == arg1) {
                return node;
            }
            node = *(u8 **)(node + 0xc);
            i++;
        } while (node != NULL);
    }
    return NULL;
}

extern void func_021167ac(void *, u32);
void *func_020224cc(void) {
    u16 *node = func_0210c594(0x10, data_02155c3c);
    func_021167ac((u8 *)node + 4, 0x10);
    *node = 0;
    return node;
}

void func_02022508(u8 *arg0) {
    u8 *node = *(u8 **)(arg0 + 4);
    while (node != NULL) {
        func_021168f8(arg0 + 4, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
        node = *(u8 **)(arg0 + 4);
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_02022558(u8 *arg0, u16 arg1) {
    u8 *node = *(u8 **)(arg0 + 4);
    while (node != NULL) {
        if (*(u16 *)node == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x14);
    }
    return NULL;
}

void func_020226c0(u8 *arg0, void *arg1) {
    (*(u16 *)arg0)--;
    func_021168f8(arg0 + 4, arg1);
    if (arg1 != NULL) {
        func_0210c5dc(arg1);
    }
}

