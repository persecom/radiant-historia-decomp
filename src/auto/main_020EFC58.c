/* 12 functions from 0x020EFC58 to 0x020F0AEC (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160af0;
extern u32 data_02155c3c;

typedef struct {
    u32 x;
    u32 y;
    u32 z;
} Unk_Vec3_020f07b0;
extern u8 data_02162618[];
extern void func_021168f8(void *, void *);
extern void func_0210b4cc(void *);
extern void func_0210c5dc(void *);
extern void func_0210b860(void **);

void func_020eff58(void) {
}

extern void func_020f09d4(void *);
extern void func_020f0984(u32 *);
extern void func_0210da14(void *);
extern void func_0210db10(void *);
extern void func_0210db58(void *);
void func_020f0090(s32 arg0) {
    if (data_02160af0 == NULL) {
        return;
    }
    while (*(void **)(data_02160af0 + 0x70) != NULL) {
        func_020f09d4(*(void **)(data_02160af0 + 0x70));
    }
    while (*(u32 **)(data_02160af0 + 0x64) != NULL) {
        func_020f0984(*(u32 **)(data_02160af0 + 0x64));
    }
    func_0210da14(data_02160af0);
    func_0210db10(data_02160af0 + 0x14);
    func_0210db10(data_02160af0 + 0x3c);
    if (arg0 == 1) {
        func_0210db58(data_02160af0 + 0x28);
        func_0210db58(data_02160af0 + 0x50);
    }
    if (data_02160af0 != NULL) {
        func_0210c5dc(data_02160af0);
        data_02160af0 = NULL;
    }
}

extern u8 *func_0210c594(s32, u32);
extern void func_021167f0(void *, void *);
void func_020f07b0(Unk_Vec3_020f07b0 arg0, u32 arg1, u16 arg2) {
    u8 *r4 = NULL;
    u8 *node = *(u8 **)(data_02160af0 + 0x64);
    u8 *r3;

    while (node != NULL) {
        r4 = *(u8 **)node;
        node = *(u8 **)(node + 0x4c);
    }

    if (r4 == NULL) {
        return;
    }

    if (arg1 <= 0x2710 || arg1 >= 0x2b01) {
        return;
    }

    r3 = func_0210c594(0x58, data_02155c3c);
    *(Unk_Vec3_020f07b0 *)(r3 + 4) = arg0;
    *(u32 *)(r3 + 0x2c) = arg2;
    if (*(u32 *)(r4 + 0xfc) != 0) {
        *(u32 *)(r3 + 0x18) = 1;
    }
    if (*(u32 *)(r4 + 0x100) != 0) {
        *(u32 *)(r3 + 0x1c) = 1;
    }
    *(u8 **)r3 = r4;
    func_021167f0(data_02160af0 + 0x70, r3);
}

void func_020f0898(Unk_Vec3_020f07b0 arg0, u32 arg1, u16 arg2) {
    u8 *r12 = NULL;
    u8 *node = *(u8 **)(data_02160af0 + 0x64);
    u8 *r4;

    while (node != NULL) {
        if (*(u16 *)(*(u8 **)node + 0x1b8) == arg1) {
            break;
        }
        node = *(u8 **)(node + 0x4c);
    }

    if (node == NULL) {
        return;
    }

    r4 = *(u8 **)node;
    if (arg1 > 0x2710 && arg1 < 0x2af7) {
        r12 = func_0210c594(0x58, data_02155c3c);
        *(Unk_Vec3_020f07b0 *)(r12 + 4) = arg0;
        *(u32 *)(r12 + 0x2c) = arg2;
        if (*(u32 *)(r4 + 0xfc) != 0) {
            *(u32 *)(r12 + 0x18) = 1;
        }
        if (*(u32 *)(r4 + 0x100) != 0) {
            *(u32 *)(r12 + 0x1c) = 1;
        }
        *(u8 **)r12 = r4;
    }
    func_021167f0(data_02160af0 + 0x70, r12);
}

