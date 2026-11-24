/* 6 functions from 0x0203F038 to 0x0203FD08 (main), found by ds-decomp. */
#include "common.h"

typedef struct UnkStruct_0203fb58 {
    u8 unk00[4];
    u32 unk04;
    u8 unk08[4];
    u32 unk0c;
    u32 unk10;
    u32 unk14;
    u32 unk18;
} UnkStruct_0203fb58;

typedef struct UnkNode_0203fb58 {
    UnkStruct_0203fb58 *unk00;
    u16 unk04;
    u8 unk06[6];
    struct UnkNode_0203fb58 *unk0c;
} UnkNode_0203fb58;

typedef struct UnkStruct_0203fc18 {
    u8 unk00[0x28];
    UnkNode_0203fb58 *unk28;
    u8 unk2c[8];
    u16 unk34;
} UnkStruct_0203fc18;

typedef struct UnkEntry_0203faf4 {
    u32 unk00;
    u32 unk04;
    u32 unk08;
    u32 unk0c;
    u32 unk10;
} UnkEntry_0203faf4;

typedef struct UnkData_0203faf4 {
    UnkEntry_0203faf4 entries[3];
} UnkData_0203faf4;

extern u32 data_02155c3c;
extern UnkData_0203faf4 data_0213f0d0;
extern UnkStruct_0203fc18 *data_021600a0;

extern void *func_0203be60(void *, void *, void *);
extern void *func_0203fb58(void *, u16);
extern void *func_0210c594(s32, u32);
extern void func_0210c5dc(void *);
extern void func_021167f0(void *, void *);

void func_0203faf4(void) {
    UnkData_0203faf4 buf;
    u8 i;

    buf = data_0213f0d0;
    for (i = 0; i < 3; i++) {
        func_0203fb58(&buf.entries[i], i);
    }
}

void *func_0203fb58(void *arg0, u16 arg1) {
    void *result;
    u8 *p1;
    u8 *p2;
    void *second;

    p1 = func_0210c594(0x1c, data_02155c3c);
    p2 = func_0210c594(0x10, data_02155c3c);
    second = *(void **)((u8 *)arg0 + 4);
    if (second == NULL) {
        result = func_0203be60(p1, *(void **)arg0, *(void **)arg0);
    } else {
        result = func_0203be60(p1, *(void **)arg0, second);
    }
    if (result != NULL) {
        *(s32 *)(p1 + 0x10) = *(s32 *)((u8 *)arg0 + 0x8);
        *(s32 *)(p1 + 0x14) = *(s32 *)((u8 *)arg0 + 0xc);
        *(s32 *)(p1 + 0x18) = *(s32 *)((u8 *)arg0 + 0x10);
        *(void **)p2 = p1;
        *(u16 *)(p2 + 0x4) = arg1;
        func_021167f0(&data_021600a0->unk28, p2);
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

void func_0203fc18(u16 arg0) {
    UnkStruct_0203fc18 *p;
    UnkNode_0203fb58 *node;

    p = data_021600a0;
    if (p == NULL) return;
    node = p->unk28;
    if (node == NULL) return;
    for (;;) {
        if (node->unk04 == arg0) {
            UnkStruct_0203fb58 *d = node->unk00;
            *(volatile u32 *)0x040004a8 = (d->unk04 >> 3) | (d->unk18 << 26) |
                                          0x40000000 | (d->unk10 << 20) |
                                          (d->unk14 << 23) | 0x20000000;
            *(volatile u32 *)0x040004ac = d->unk0c >> (4 - (d->unk18 == 2));
            *(volatile u32 *)0x04000480 = 0x7fff;
            return;
        }
        node = node->unk0c;
        if (node == NULL) return;
    }
}

void func_0203fcc0(u16 arg0) {
    data_021600a0->unk34 = arg0;
}

