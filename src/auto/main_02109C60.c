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
    u32 *out = arg1;
    u8 stack[0x10];
    u8 *buf = stack;
    void *result = NULL;
    u32 zero = 0;
    u32 size;
    if (func_02109c04(buf, arg0, zero, zero) == 1) {
        void *p;
        size = func_0210a498((u32 *)buf);
        p = func_0210c518(size, data_02155c3c);
        func_02109c24((u32)buf, (u32)p, zero, size);
        func_02109c54(buf);
        if (out != NULL) {
            *out = size;
        }
        func_02006dc4(p, size);
        result = p;
    }
    return result;
}

s32 func_02109cf0(s8 *arg0) {
    return *arg0 != '-';
}

extern u32 func_02012348(const char *);
extern u32 func_0210c060(const char *, u32);
extern u32 func_02007904(void);
extern void func_02108ffc(void);
extern s32 func_020123f0(const char *, const char *);
extern void *func_0210c594(u32, void *);
extern void func_02012210(char *, const char *);
extern void func_021167f0(void *, void *, s32);
#pragma schedule off
void *func_02109d04(const char *name) {
    u32 hash;
    u32 len;
    u64 tick = 0;
    u8 *node;
    u8 *entry;
    void *data;
    u32 size;

    len = func_02012348(name);
    hash = func_0210c060(name, len);
    node = NULL;

    while ((node = (node != NULL ? *(u8 **)(node + *(u16 *)((u8 *)data_02162564 + 0x12) + 4) : *(u8 **)((u8 *)data_02162564 + 8))) != NULL) {
        if (((u32)((u64)func_02007904() - tick) * 64) / 33514 > 40) {
            func_02108ffc();
            tick = func_02007904();
        }
        if (*(u16 *)(node + 0x16) == hash && func_020123f0((char *)(node + 0x18), name) == 0) {
            if (data_02162564[1] != 0) {
                if (*(u16 *)(node + 0x14) == 0) {
                    *(u16 *)(node + 0x14) = 0x2710;
                }
            }
            *(u16 *)(node + 0x14) += 1;
            return node;
        }
    }

    entry = func_0210c594(len + 0x1c, data_02155c3c);
    if (entry == NULL) {
        return NULL;
    }
    *(u32 *)(entry + 0xc) = (*(u32 *)(entry + 0xc) & ~0x01000000) | ((data_02162564[0] & 1) << 24);
    data = func_02109c60((u8 *)name, &size);
    *(void **)(entry + 8) = data;
    *(u32 *)(entry + 0xc) = (*(u32 *)(entry + 0xc) & 0xff000000) | (size & 0x00ffffff);
    if (data == NULL) {
        func_0210c674(entry);
        return NULL;
    }
    func_02012210((char *)(entry + 0x18), name);
    *(u16 *)(entry + 0x16) = hash;
    *(u16 *)(entry + 0x14) = 1;
    *(u32 *)(entry + 0x10) = 0;
    func_021167f0(data_0216256c, entry, 0);
    func_02108ffc();
    return entry;
}
#pragma schedule on
