/* 15 functions from 0x020A47C8 to 0x020A56CC (main), found by ds-decomp. */
#include "common.h"

typedef struct UnkStruct_020a4f04 {
    u8 unk00[0x48];
    void *unk48;
} UnkStruct_020a4f04;

typedef struct UnkStruct_02160134 {
    UnkStruct_020a4f04 *unk00;
    void *unk04;
} UnkStruct_02160134;

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
typedef struct UnkStruct_020a48d0 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unka;
    s16 unkc;
    s16 unke;
} UnkStruct_020a48d0;

extern const UnkStruct_020a48d0 data_02143350;
extern void func_021098ac(void *);
extern void func_021168f8(void *, void *);

extern u32 (*data_02156150)(u32, s32, s32);
extern u32 (*data_02156158)(u32, s32, s32);
extern void func_0200439c(void);
extern void func_020043f8(void *, u32, u32);
extern void func_02004544(void);
extern void func_02004588(void);
extern void func_020045bc(void *, u32, u32);
extern void func_0200462c(void);
extern void func_020a4898(u32);
void func_020a47c8(void) {
    u8 *r5 = data_02160130;
    u32 r6 = *(u32 *)(r5 + 4);
    u32 r7;

    *(u32 *)(r5 + 0x10) = data_02156150(r6, 0, 0);
    func_0200439c();
    func_020043f8(*(void **)r5, ((u32)(u16)*(u32 *)(r5 + 0x10)) << 3, r6);
    func_02004544();

    *(u32 *)(r5 + 0x18) = (((u32)(u16)*(u32 *)(r5 + 0x10)) & 0x1fffffff) | 0x68400000;

    r7 = (*(u32 *)(r5 + 0xc) + 3) & ~3;
    func_02004588();
    *(u32 *)(r5 + 0x14) = data_02156158(r7, 1, 0);
    func_020045bc(*(void **)(r5 + 8), ((u32)(u16)*(u32 *)(r5 + 0x14)) << 3, r7);
    func_0200462c();

    r5[0x20] = 1;
    func_020a4898(0);
}

void func_020a4898(u32 arg0) {
    u8 *ptr = data_02160130;
    if (ptr[0x20] == arg0) {
        return;
    }
    ptr[0x20] = arg0;
    *(u32 *)(ptr + 0x1c) = (u16)(*(u32 *)(ptr + arg0 * 4 + 0x14)) & 0x1fffffff;
}

void func_020a4f04(void) {
    if (data_02160134.unk00 == NULL) {
        return;
    }
    if (data_02160134.unk00->unk48 != NULL) {
        while (data_02160134.unk00->unk48 != NULL) {
            void *node = data_02160134.unk00->unk48;
            func_021168f8(&data_02160134.unk00->unk48, node);
            if (node != NULL) {
                func_0210c5dc(node);
            }
        }
    }
    if (data_02160134.unk00 == NULL) {
        return;
    }
    func_0210c5dc(data_02160134.unk00);
    data_02160134.unk00 = NULL;
}

void func_020a5290(void) {
    UnkStruct_02160134 *p = &data_02160134;
    if (p->unk04 != NULL) {
        return;
    }
    p->unk04 = func_0210c594(0x14, data_02155c3c);
    data_02160200->unk160 &= ~0x8;
    data_02160200->unk160 &= ~0x4;
    data_02160200->unk15c &= ~0x8000000;
    data_02160200->unk160 &= ~0x2;
    data_02160200->unk160 &= ~0x10;
    data_02160200->unk160 &= ~0x20;
    *(u16 *)p->unk04 = 8;
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

void func_020a5644(u16 arg0) {
    u8 *p = data_02160134.unk04;
    if (p == NULL) {
        return;
    }
    *(u16 *)p = arg0;
    if (arg0 == 0) {
        data_02160200->unk160 |= 0x20;
    }
}

u16 func_020a567c(void) {
    u8 *p = data_02160134.unk04;
    if (p == NULL) {
        return 8;
    }
    return *(u16 *)p;
}

void func_020a5698(void) {
    u8 *p = data_02160134.unk04;
    if (p != NULL) {
        *(s32 *)(p + 0x10) = 0;
    }
}

void func_020a56b4(s32 arg0) {
    u8 *p = data_02160134.unk04;
    if (p != NULL) {
        *(s32 *)(p + 0x10) = arg0;
    }
}

