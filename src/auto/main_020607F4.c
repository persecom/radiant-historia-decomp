/* 13 functions from 0x020607F4 to 0x020617C8 (main), found by ds-decomp. */
#include "common.h"

extern void func_020d56d8(u8 *, s32, s32, s32);
extern void func_020d5fd0(u8 *);
extern void func_020d4eb8(u8 *);
extern void *func_0205bad4(void *);
extern s32 func_020dde4c(u32);
extern void func_020de0a8();
extern void func_020bfff4(u16);
extern void func_020223f8(void *, s32);
extern void func_0205aa34(void *, s32);

void func_02060ec8(u8 *p) {
    s32 zero = 0;
    func_020d56d8(p, zero, zero, 1);
    func_020d56d8(p, zero, zero, 2);
    func_020d5fd0(p);
    func_020d4eb8(p);
}

void func_02061214(u8 *p) {
    u8 *r = *(u8 **)(p + 0x128);
    u16 value;
    u8 *node;
    u16 count, i;
    if ((r[0x76] & 1) == 0) {
        node = func_0205bad4(r);
        value = (*(u16 *)(p + 0x90) - 0x65) * 10;
    } else {
        u8 *t = *(u8 **)(r + 0x78);
        node = *(u8 **)(*(u8 **)(t + 0xc) + 0x28);
        value = (*(u16 *)(p + 0x90) - 0x65) * 10;
    }
    i = 0;
    count = 0;
    if (node != NULL) {
        do {
            if (func_020dde4c(value + 0x76 + 0x200 + i) != 0) {
                count++;
            }
            i++;
            node = *(u8 **)(node + 0x18);
        } while (node != NULL);
    }
    if (count == 0) {
        *(u32 *)(r + 0x24) = 0x270f;
    }
}

void func_020614e0(u8 *p) {
    u8 *r = *(u8 **)(p + 0x128);
    s32 zero = 0;
    if (*(s16 *)(p + 0x98) == 0) {
        func_020de0a8(p);
    }
    func_020bfff4(*(u16 *)(p + 0x90));
    if ((r[0x76] & 1) == 0) {
        func_020223f8(r, 0);
    }
    *(s32 *)(p + 0x30) = zero;
    *(s32 *)(p + 0x34) = zero;
    *(s32 *)(p + 0x38) = zero;
    func_0205aa34(p, 0xa);
    *(s32 *)(r + 0x24) = zero;
}

void func_02061540(u8 *p) {
    u8 *q = *(u8 **)(p + 0x118);
    u8 *r = *(u8 **)(p + 0x128);
    u8 *s;
    u8 v;
    if (*(u32 *)(q + 4) == 0) return;
    if (*(u32 *)(r + 0x18) & 8) return;
    s = *(u8 **)(r + 0x58);
    if (s == NULL) return;
    v = s[4];
    if ((v & 1) == 0) {
        s[4] = v | 1;
        *(u32 *)(r + 0x24) = 0x578;
    }
}

