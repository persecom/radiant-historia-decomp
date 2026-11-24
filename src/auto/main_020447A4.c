/* 16 functions from 0x020447A4 to 0x020451FC (main), found by ds-decomp. */
#include "common.h"

extern u32 data_021600b0[3];
extern void *data_021600b8;
extern u8 *data_021600a8[2];

typedef struct {
    u32 a;
    u32 b;
    u32 c;
    u32 d;
    u32 e;
} S_02044a98;

extern S_02044a98 data_0213f2d0;
extern void func_0210c5dc(void *);
extern void func_021168f8(void *, void *);
extern void func_020a994c(void *);
extern void func_020a98a0(void *);
extern void func_020a9544(void *);
extern void func_020a9610(void *, u32, u32, u32, u32, u32);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
extern void *func_02044aec(void *, u16);
extern u8 *data_02160200;
extern void *data_02155c3c;
extern void func_0205a3cc(void *);
extern void *func_0210c594(u32, void *);
extern void *func_0203be60(void *, void *, void *);
extern void func_021167f0(void *, void *);
extern void func_020ecaa4(void *);
extern void *func_020eca60(void);
extern void func_020ecd10(void *, u32, u32);
void func_020447a4(u8 *arg0) {
    u8 *node;
    if (arg0 == NULL) {
        return;
    }
    node = *(u8 **)data_021600b8;
    while (node != NULL) {
        if (node == arg0) {
            func_021168f8(data_021600b8, node);
            break;
        }
        node = *(u8 **)(node + 0x1dc);
    }
    if (*(void **)(arg0 + 0x128) != NULL && **(void ***)(arg0 + 0x128) != NULL) {
        (*(u32 *)(arg0 + 0x178))++;
        func_020a994c(arg0 + 0x144);
        func_020a98a0(arg0 + 0x144);
        func_020a9544(*(void **)(arg0 + 0x128));
    }
}

extern u8 data_02146334[];
void func_02044820(u32 arg0) {
    u32 r4;
    u8 *p = data_021600a8[1];
    r4 = *(u32 *)(p + 0x2e4);
    func_020a994c(p + 0x300);
    func_020a9610(p + 0x2e8, *(u32 *)(p + 0xa8), arg0, r4, 0, 0);
    func_020a98ac(p + 0x300);
    func_020a98f4(p + 0x300);
}

void func_02044a98(s32 arg0) {
    u8 *p = data_021600a8[1];
    S_02044a98 local[1];
    local[0] = data_0213f2d0;
    func_02044aec(&local[arg0], *(u16 *)(p + 0x8b4));
}

void *func_02044aec(void *arg0, u16 arg1) {
    u8 *p1;
    void *result;
    u8 *p2;
    p1 = func_0210c594(0x1c, data_02155c3c);
    p2 = func_0210c594(0x10, data_02155c3c);
    result = func_0203be60(p1, *(void **)arg0, *(void **)arg0);
    if (result != NULL) {
        *(s32 *)(p1 + 0x10) = *(s32 *)((u8 *)arg0 + 0x8);
        *(s32 *)(p1 + 0x14) = *(s32 *)((u8 *)arg0 + 0xc);
        *(s32 *)(p1 + 0x18) = *(s32 *)((u8 *)arg0 + 0x10);
        *(void **)p2 = p1;
        *(u16 *)(p2 + 0x4) = arg1;
        func_021167f0(data_021600a8[1] + 0x8ac, p2);
    } else {
        if (p1 != NULL) {
            func_0210c5dc(p1);
        }
        if (p2 != NULL) {
            func_0210c5dc(p2);
        }
    }
    return result;
}

void func_02044f48(void) {
    if (data_021600b0[1] != 0) {
        func_0210c5dc((void *)data_021600b0[1]);
        data_021600b0[1] = 0;
    }
}

u32 func_02044f70(void) {
    return data_021600b0[1];
}

void func_02044f80(void) {
    u8 *p = (u8 *)func_02044f70();
    if (*(u32 *)(data_02160200 + 0x15c) & 0x80000000) {
        *(u32 *)(p + 0xc) = 0;
        *(u32 *)(p + 0xc) |= 9;
    }
    func_0205a3cc(p);
}

