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

void func_021071fc(void) {
    func_0200fa3c((u16)data_02155968);
}
