/* 11 functions from 0x02030878 to 0x02031724 (main), found by ds-decomp. */
#include "common.h"

extern u8 **data_02160244;
extern u32 data_02155c3c;

typedef struct UnkStruct_0203157c {
    void (*unk00)(void);
    s32 unk04;
    u8 unk08[0xC];
    void (*unk14)(void);
    s32 unk18;
    u8 unk1c[0xC];
    u8 unk28[4];
    u8 unk2c[0xC];
} UnkStruct_0203157c;
extern UnkStruct_0203157c *data_0216008c;

extern void func_0202e874(void);
extern void *func_0203165c(u32, u32, u32, u32, u16);
extern void *func_02031c24(u32);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void *func_0210c594(s32, u32);
extern void func_0210d9e4(void *);
extern void func_0210db70(void *);
extern void func_021167ac(void *, s32);
extern void func_02031724(void);
extern void func_02031658(void);

void func_02031498(void) {
    s32 i;
    for (i = 0; i < 9; i++) {
        if (data_02160244[2 + i] != NULL && (data_02160244[2 + i][0x1c] & 8) != 0) {
            func_0202e874();
        }
    }
}

void func_020314dc(void *arg0, s32 arg1) {
    u32 v0 = *(u32 *)arg0;
    u32 v4 = *(u32 *)((u8 *)arg0 + 4);
    u32 vc = *(u32 *)((u8 *)arg0 + 0xc);
    u16 val = (u16)arg1;
    u8 *node = func_0203165c((u8)(*(u8 *)arg0 + 0xc), 0, 0, 0, val);
    node[0x18] |= 9;
    *(u16 *)(node + 0x20) = val;
    *(u32 *)(node + 0xc) = v0;
    *(u32 *)(node + 0x10) = v4 + 0x40000;
    *(u32 *)(node + 0x14) = vc;
}

void func_02031534(u8 *arg0) {
    void *node = func_02031c24((u8)(arg0[0] + 0xc));
    if (node == NULL) {
        return;
    }
    func_021168f8((u8 *)data_0216008c + 0x2c, node);
    if (node != NULL) {
        func_0210c5dc(node);
    }
}

void func_0203157c(void) {
    if (data_0216008c != NULL) {
        return;
    }
    data_0216008c = func_0210c594(0x38, data_02155c3c);
    data_0216008c->unk00 = func_02031724;
    data_0216008c->unk04 = 0x3ea;
    func_0210d9e4(data_0216008c);
    data_0216008c->unk14 = func_02031658;
    data_0216008c->unk18 = 0x3ea - 1;
    func_0210db70(&data_0216008c->unk14);
    func_021167ac(&data_0216008c->unk2c, 0);
}

void func_02031658(void) {
}
