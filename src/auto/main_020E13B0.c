/* 12 functions from 0x020E13B0 to 0x020E1EC8 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u16 unk[9];
} Unk18;

typedef struct {
    u16 unk[10];
} Unk20;

extern u32 data_02155c3c;
extern u8 *data_02160a74;
extern const Unk18 data_02144970;
extern const Unk20 data_02144998;
extern void *func_0210c594(u32, u32);
extern void func_021167f0(void *, void *);
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
extern void func_020a5858(void *);
extern void func_021099f8(void *);
extern void func_0210c5dc(void *);
extern void func_021168f8(void *, void *);

void func_020e1850(void) {
    u8 *root = data_02160a74;
    u16 i;
    for (i = 0; i < 10; i++) {
        *(u16 *)(*(u8 **)(root + i * 4 + 0x110) + 0x0) = 0;
        *(u16 *)(*(u8 **)(root + i * 4 + 0x110) + 0x2) = 0;
        *(u16 *)(*(u8 **)(root + i * 4 + 0x110) + 0x4) = 0;
        *(u16 *)(*(u8 **)(root + i * 4 + 0x110) + 0x6) = 0;
        *(u32 *)(*(u8 **)(root + i * 4 + 0x110) + 0x8) = 0;
        *(u32 *)(*(u8 **)(root + i * 4 + 0x110) + 0xc) = 0;
    }
}

void func_020e1bc4(u16 arg0, s32 arg1) {
    Unk18 buf = data_02144970;
    if (arg1 == 0) {
        *(volatile u32 *)0x040004A4 = 0x01480C0;
    } else {
        *(volatile u32 *)0x040004A4 = 0x01880C0;
    }
    buf.unk[3] = arg0;
    buf.unk[6] = 0;
    func_021099f8(&buf);
}

void func_020e1c3c(void) {
    void *node;
    while ((node = *(void **)(data_02160a74 + 0x1a4)) != NULL) {
        func_021168f8(data_02160a74 + 0x1a4, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

void *func_020e1c88(void *arg0) {
    void **node = func_0210c594(0x14, data_02155c3c);
    *node = arg0;
    func_021167f0(data_02160a74 + 0x1a4, node);
    return node;
}

void *func_020e1ccc(u32 arg0) {
    u8 *root = data_02160a74;
    u8 *node = *(u8 **)(root + 0x1a4);
    while (node != NULL) {
        if (*(u32 *)(node + 0x0) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x10);
    }
    return NULL;
}

void func_020e1d08(u16 arg0) {
    Unk20 buf = data_02144998;
    *(volatile u32 *)0x040004A4 = 0x001F00C0;
    func_020a3bbc(0x79);
    buf.unk[1] = 0;
    buf.unk[2] = 0;
    buf.unk[3] = 0xc;
    buf.unk[4] = 0xc;
    buf.unk[8] = 0xc;
    buf.unk[9] = 0xc;
    buf.unk[7] = 0x2cc;
    buf.unk[5] = 0x74;
    buf.unk[6] = arg0 + 0x3c;
    func_021098ac(&buf);
}

void func_020e1e80(void) {
    u16 i;
    for (i = 0; i < 0xe; i++) {
        func_020a5858(*(void **)(data_02160a74 + i * 4 + 0x60));
        *(u32 *)(data_02160a74 + i * 4 + 0x60) = 0;
    }
}

