/* 15 functions from 0x020A47C8 to 0x020A56CC (main), found by ds-decomp. */
#include "common.h"

typedef struct UnkStruct_02160134 {
    void *unk00;
    void *unk04;
} UnkStruct_02160134;

typedef struct UnkStruct_020a4f04 UnkStruct_020a4f04;

typedef struct UnkStruct_020a4f04 {
    u8 unk00[0x48];
    void *unk48;
} UnkStruct_020a4f04;

typedef struct UnkStruct_02160200 {
    u8 unk00[0x15c];
    s32 unk15c;
    s32 unk160;
} UnkStruct_02160200;

extern UnkStruct_02160134 data_02160134;
extern u8 *data_02160130;
extern u32 data_02155c3c;
extern UnkStruct_02160200 *data_02160200;
extern void func_0210c5dc(void *);
extern void *func_0210c594(s32, u32);
extern void func_021168f8(void *, void *);

void func_020a4898(u32 arg0) {
    u8 *ptr = data_02160130;
    if (ptr[0x20] == arg0) {
        return;
    }
    ptr[0x20] = arg0;
    *(u32 *)(ptr + 0x1c) = (u16)(*(u32 *)(ptr + arg0 * 4 + 0x14)) & 0x1fffffff;
}

void func_020a4f04(void) {
    UnkStruct_020a4f04 *p = data_02160134.unk00;
    if (p == NULL) {
        return;
    }
    if (p->unk48 != NULL) {
        while (p->unk48 != NULL) {
            void *node = p->unk48;
            func_021168f8(&p->unk48, node);
            if (node != NULL) {
                func_0210c5dc(node);
            }
        }
    }
    if (p != NULL) {
        func_0210c5dc(p);
    }
    data_02160134.unk00 = NULL;
}

void func_020a5290(void) {
    if (data_02160134.unk04 != NULL) {
        return;
    }
    data_02160134.unk04 = func_0210c594(0x14, data_02155c3c);
    data_02160200->unk160 &= ~0x8;
    data_02160200->unk160 &= ~0x4;
    data_02160200->unk15c &= ~0x8000000;
    data_02160200->unk160 &= ~0x2;
    data_02160200->unk160 &= ~0x10;
    data_02160200->unk160 &= ~0x20;
    *(u16 *)data_02160134.unk04 = 8;
}

void func_020a5338(void) {
    if (data_02160134.unk04 == NULL) {
        return;
    }
    if (data_02160134.unk04 != NULL) {
        func_0210c5dc(data_02160134.unk04);
    }
    data_02160134.unk04 = NULL;
}
