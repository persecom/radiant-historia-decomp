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
extern s32 data_02162884;
extern u8 *data_02160260;
extern u8 *data_02160244;

void func_020d850c(void) {
    UnkStruct_020d60248 *p = &data_02160248;
    if (p->unk08 != NULL) {
        return;
    }
    p->unk08 = func_0210c594(0x18, data_02155c3c);
    func_021167ac(p->unk08, 0xc);
    func_021167ac((u8 *)p->unk08 + 0xc, 8);
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
    u16 i;
    for (i = 0; i < 3; i++) {
        dst[i] = arg[i];
        dst[i + 3] = arg[i + 3];
    }
    func_021167f0(data_02160248.unk08, dst);
}

u16 *func_020d865c(u16 *arg) {
    u16 *dst = func_0210c594(0x10, data_02155c3c);
    u16 i;
    for (i = 0; i < 2; i++) {
        dst[i] = arg[i];
        dst[i + 2] = arg[i + 2];
    }
    func_021167f0(&data_02160248.unk08->unk0c, dst);
    return dst;
}

void *func_020ddbcc(u32);
void func_020d8a5c(void) {
    u8 *p = data_02160244;
    u8 *node;
    s32 timer;
    if (!(*(u16 *)(p + 0x112) & 1)) {
        *(u16 *)(p + 0x114) = 0;
        func_020d91bc(6);
        func_020d9e7c();
        *(u16 *)(p + 0x112) |= 1;
    }
    node = func_020ddbcc(*(u16 *)(p + 0x116));
    func_020d907c();
    func_020d9090();
    ++*(s16 *)(p + 0x114);
    timer = *(volatile s16 *)(p + 0x114);
    if ((u32)timer < 30) return;
    if (timer >= 30 && timer <= 90) {
        if (timer % 7 == 0) func_0210d27c(0x91);
        *(u32 *)(node + 0x80) |= 0x80;
        if (!(*(u16 *)(p + 0x112) & 2)) {
            if (++data_02162814 > 16) {
                data_02162814 = 16;
                *(u16 *)(p + 0x112) |= 2;
            }
        } else {
            if (--data_02162814 < 0) {
                data_02162814 = 0;
                *(u16 *)(p + 0x112) &= 0xfffd;
            }
        }
        if (*(u16 *)(p + 0x116) == 0xea66) {
            ++*(u16 *)(p + 0x118);
            *(s32 *)(node + 0x70) = *(volatile u16 *)(p + 0x118) / 2 - 110;
            if (*(s32 *)(node + 0x70) > -60) {
                *(s32 *)(node + 0x70) = -60;
                func_020d0a40(27);
            }
        } else if (*(u16 *)(p + 0x116) == 0xea67) {
            ++*(u16 *)(p + 0x118);
            *(s32 *)(node + 0x70) = *(volatile u16 *)(p + 0x118) / 2 - 60;
            if (*(s32 *)(node + 0x70) > 60) {
                *(s32 *)(node + 0x70) = 60;
                func_020d0a40(27);
            }
        }
    } else {
        *(s16 *)(p + 0x114) = 30;
    }
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
