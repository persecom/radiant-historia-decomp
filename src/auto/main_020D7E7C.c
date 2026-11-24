/* 9 functions from 0x020D7E7C to 0x020D8E5C (main), found by ds-decomp. */
#include "common.h"

typedef struct UnkNode_020d60248 {
    void *unk00;
    u8 unk04[8];
    void *unk0c;
} UnkNode_020d60248;

typedef struct UnkStruct_020d60248 {
    u8 unk00[8];
    UnkNode_020d60248 *unk08;
} UnkStruct_020d60248;

extern UnkStruct_020d60248 data_02160248;
extern u32 data_02155c3c;
extern s32 data_02162814;
extern u8 *data_02160244;

void func_020d850c(void) {
    if (data_02160248.unk08 != NULL) {
        return;
    }
    data_02160248.unk08 = func_0210c594(0x18, data_02155c3c);
    func_021167ac(data_02160248.unk08, 0xc);
    func_021167ac((u8 *)data_02160248.unk08 + 0xc, 8);
}

void func_020d8558(void) {
    while (data_02160248.unk08->unk00 != NULL) {
        void *node = data_02160248.unk08->unk00;
        func_021168f8(&data_02160248.unk08->unk00, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
    while (data_02160248.unk08->unk0c != NULL) {
        void *node = data_02160248.unk08->unk0c;
        func_021168f8(&data_02160248.unk08->unk0c, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
    if (data_02160248.unk08 != NULL) {
        func_0210c5dc(data_02160248.unk08);
        data_02160248.unk08 = NULL;
    }
}

void func_020d85f4(u16 *arg) {
    u16 *dst = func_0210c594(0x14, data_02155c3c);
    u16 i = 0;
    do {
        dst[i] = arg[i];
        dst[i + 3] = arg[i + 3];
        i++;
    } while (i < 3);
    func_021167f0(data_02160248.unk08);
}

s32 func_020d8c30(void) {
    s32 v = --data_02162814;
    if (v >= 0) {
        return v;
    }
    data_02162814 = 0;
    data_02160244[0xe8] = 0;
    return func_020d0a40(3);
}
