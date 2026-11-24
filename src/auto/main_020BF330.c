/* 19 functions from 0x020BF330 to 0x020C0284 (main), found by ds-decomp. */
#include "common.h"

extern void func_021082d0(void);
extern void func_02008f74(void *, s32, u32);
extern void func_02009008(void *, void *, u32);
extern void func_020bf00c(void *, void *, void *, f32);
extern void func_020ec9d0(s32, s32);
extern void func_020eca2c(s32);
extern u32 data_02155bac;
extern u32 data_02155c3c;
extern u8 *func_020ec294(u16, u16, s32, s32);
extern void func_020ec88c(void *, s32, s32);
extern void func_020ec8cc(void *, s32, s32);
extern u8 *func_0210c594(s32, u32);
extern void func_021167ac(void *, s32);
extern void func_0210d9e4(void *);
extern void func_0210db70(void *);
extern void func_02066eac(s32);
extern void func_020bf768(void);
extern void func_020bfb44(void);

typedef struct Unk_020bf65c {
    void (*unk00)(void);
    s32 unk04;
    u8 unk08[0xc];
    void (*unk14)(void);
    s32 unk18;
    u8 unk1c[0xc];
    u8 unk28[0xc];
    s32 unk34;
} Unk_020bf65c;
extern u8 *data_02160214;
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_0210c5dc(void *);
extern void func_02066f9c(void);
extern void func_021168f8(void *, void *);
extern void func_020bff30(void *arg0);
void func_020bf330(void *arg0) {
    func_02008f74(arg0, 0, 0x2c);
}

void func_020bf344(u8 *arg0, void *arg1, void *arg2, s32 arg3) {
    *(f32 *)arg0 = (f32)arg3;
    *(f32 *)(arg0 + 4) = 0.0f;
    func_02009008(arg1, arg0 + 8, 0xc);
    func_02009008(arg2, arg0 + 0x14, 0xc);
    func_02009008(arg0 + 8, arg0 + 0x20, 0xc);
}

s32 func_020bf3a0(u8 *arg0, f32 arg1) {
    u8 buf[0xc];
    if (arg1 > 1.0f) {
        return 0;
    }
    func_020bf00c(buf, arg0 + 8, arg0 + 0x14, arg1);
    func_02009008(buf, arg0 + 0x20, 0xc);
    return 1;
}

void func_020bf3fc(void) {
    func_021082d0();
}

extern void func_021082ec(void);
void func_020bf408(void) {
    func_021082ec();
}

void func_020bf414(s32 arg0) {
    if (arg0 != 0) {
        func_020ec9d0(0x3ee, 0);
        func_020ec9d0(0x3ee, 1);
    } else {
        func_020eca2c(0);
        func_020eca2c(1);
    }
}

u8 *func_020bf458(s32 arg0, s32 arg1) {
    u8 *p;
    data_02155bac = 0;
    p = func_020ec294((u16)arg0, (u16)(arg1 + 2), 0x1800, arg1 * 0x1800);
    data_02155bac = 1;
    *(u16 *)(p + 0x10) = 0;
    *(u32 *)(p + 0x14) = 0x80000;
    *(u32 *)(p + 0x18) = 0x60000;
    *(u32 *)(p + 0x1c) = 0x28a000;
    func_020ec88c(p, 0, 0);
    func_020ec8cc(p, 0, 1);
    return p;
}

void *func_020bf4dc(s32 arg0) {
    u8 *p = func_0210c594(0x28, data_02155c3c);
    *(s32 *)(p + 0x4) = arg0;
    *(u32 *)(p + 0x24) = 0;
    return p;
}

void func_020bf65c(void) {
    s32 val = 0x3f6;
    if (data_02160214 != NULL) {
        return;
    }
    data_02160214 = (u8 *)func_0210c594(0x38, data_02155c3c);
    func_021167ac(((Unk_020bf65c *)data_02160214)->unk28, 0x44);
    ((Unk_020bf65c *)data_02160214)->unk34 = 0;
    ((Unk_020bf65c *)data_02160214)->unk00 = func_020bf768;
    ((Unk_020bf65c *)data_02160214)->unk04 = val;
    func_0210d9e4(data_02160214);
    ((Unk_020bf65c *)data_02160214)->unk14 = func_020bfb44;
    ((Unk_020bf65c *)data_02160214)->unk18 = val - 0xc;
    func_0210db70(data_02160214 + 0x14);
    func_02066eac(1);
}

void func_020bf700(void) {
    while (*(void **)(data_02160214 + 0x28) != NULL) {
        func_020bff30(*(void **)(data_02160214 + 0x28));
    }
    func_0210da14(data_02160214);
    func_0210dba0(data_02160214 + 0x14);
    if (data_02160214 != NULL) {
        func_0210c5dc(data_02160214);
        data_02160214 = NULL;
    }
    func_02066f9c();
}

void *func_020bff74(u16 arg0, u16 arg1) {
    u8 *node = *(u8 **)(data_02160214 + 0x28);
    while (node != NULL) {
        if (*(u16 *)(node + 0x32) == arg0 && *(u16 *)(node + 0x34) == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x48);
    }
    return NULL;
}

extern u8 *data_02160214;
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_0210c5dc(void *);
extern void func_02066f9c(void);
extern void func_021168f8(void *, void *);
void func_020bff30(void *arg0);
void func_020bffb8(u32 arg0) {
    u8 *p = data_02160214;
    u8 *node;
    if (p == NULL) {
        return;
    }
    node = *(u8 **)(p + 0x28);
    while (node != NULL) {
        if (*(u32 *)(node + 0x3c) == arg0) {
            *(u32 *)(node + 0x3c) = 0;
        }
        node = *(u8 **)(node + 0x48);
    }
}

void func_020bfff4(s32 arg0) {
    u8 *p = func_020bff74((u16)arg0, 1);
    if (p != NULL) {
        *(u32 *)(p + 0x38) = 1;
    }
}

