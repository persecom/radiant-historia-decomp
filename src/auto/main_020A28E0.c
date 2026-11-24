/* 25 functions from 0x020A28E0 to 0x020A3814 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02155c3c;
extern u32 data_02160128;
extern u32 data_021600b0[2];
extern s32 func_020a2f34(void);
extern s32 func_020a2fe4(void);
extern void func_021167ac(void *, u32);
extern void *func_0210c594(u32, u32);
extern void func_021167f0(void *, void *);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void func_020a30d4(void);
s32 func_020a3128(void);
void func_020a29dc(u16 arg0) {
    void *p = func_0210c594(0x20, data_02155c3c);
    *(u16 *)p = arg0;
    *(u8 *)((u8 *)p + 0xc) = 0;
}

void func_020a2a08(void) {
    u16 i;
    u8 *base = (u8 *)data_021600b0[0];
    for (i = 0; i < 0x3d; i++) {
        func_021167f0(base + 0x140, ((void *(*)(u16))func_020a29dc)((u16)(i + 1)));
    }
}

void func_020a2a50(void) {
    u8 *base = (u8 *)data_021600b0[0];
    void *node = *(void **)(base + 0x140);
    if (node == NULL) {
        return;
    }
    func_021168f8(base + 0x140, node);
    if (node != NULL) {
        func_0210c5dc(node);
    }
    while (1) {
        node = *(void **)(base + 0x140);
        if (node == NULL) {
            break;
        }
    }
}

s32 func_020a30c4(void) {
    func_020a30d4();
    return func_020a3128();
}

extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern u32 data_021600b0[2];
extern void func_021167f0(void *, void *);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
void func_020a37f0(u32 dst, const s8 *src, s32 size) {
    u8 *p = (u8 *)dst;
    while (size > 0) {
        *p++ = *src++;
        size--;
    }
}

