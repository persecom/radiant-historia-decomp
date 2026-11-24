/* 32 functions from 0x02106928 to 0x021078D0 (main), found by ds-decomp. */
#include "common.h"

typedef struct UnkNode_02106aa0 {
    s16 unk00;
    u8 unk02;
    u8 unk03;
    s16 unk04;
    s16 unk06;
    s16 unk08;
    s16 unk0a;
    s16 unk0c;
    s16 unk0e;
    s16 unk10;
    s16 unk12;
    s32 unk14;
    s32 unk18;
    s32 unk1c;
    s32 unk20;
    s16 unk24;
    u8 unk26;
    u8 unk27[9];
    struct UnkNode_02106aa0 *next;
} UnkNode_02106aa0;

typedef struct UnkStruct_02106928 {
    void (*unk00)(void);
    s32 unk04;
    u8 unk08[0xC];
    void (*unk14)(void);
    s32 unk18;
    u8 unk1c[0xC];
    u8 unk28[0xC];
    UnkNode_02106aa0 *unk34;
    u8 unk38[0x8];
} UnkStruct_02106928;

extern u32 data_02155968;
extern u32 data_02155c3c;
extern UnkStruct_02106928 *data_02161064;

extern void func_0200fa3c(u16);
extern void *func_0210c594(s32, u32);
extern void func_0210d9e4(void *);
extern void func_021167ac(void *, s32);
extern void func_021167f0(void *, void *);
extern void func_02106aa0(void);
extern void func_02106b18(void);

void func_02106928(void) {
    if (data_02161064 != NULL) {
        return;
    }
    data_02161064 = func_0210c594(0x40, data_02155c3c);
    data_02161064->unk00 = func_02106aa0;
    data_02161064->unk04 = 0x3f3;
    func_0210d9e4(data_02161064);
    data_02161064->unk14 = func_02106b18;
    data_02161064->unk18 = 0x3f3;
    func_0210d9e4(&data_02161064->unk14);
    func_021167ac(&data_02161064->unk28, 8);
    func_021167ac(&data_02161064->unk34, 0x2c);
}

void func_02106aa0(void) {
    UnkNode_02106aa0 *node = data_02161064->unk34;
    while (node != NULL) {
        node->unk0c += (s16)node->unk14;
        node->unk0e += (s16)node->unk18;
        node->unk10 += (s16)node->unk1c;
        node->unk12 += (s16)node->unk20;
        node = node->next;
    }
}

void func_021071fc(void) {
    func_0200fa3c((u16)data_02155968);
}
