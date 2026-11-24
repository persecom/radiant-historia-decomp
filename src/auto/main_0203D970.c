/* 6 functions from 0x0203D970 to 0x0203E8C0 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s32 field_0;
    s32 field_4;
} Vec_0203e5a8;

typedef struct {
    void *field_0;
    u32 field_4;
    u8 pad[0x20];
    void *field_28;
    u8 pad2[0x8];
    u16 field_34;
    u16 field_36;
    u16 field_38;
    u16 field_3a;
    u16 field_3c;
    u16 field_3e;
} Unk_0203e61c;

typedef struct {
    u32 field_0;
    Unk_0203e61c *field_4;
} Global_020600a0;

extern Global_020600a0 data_021600a0;
extern u32 data_02155c3c;
extern void *func_0210c594(u32, u32);
extern void func_021167ac(void *, u32);
extern void func_0210d9e4(void *);
extern void func_021168f8(void **, void *);
extern void func_0210da14(void);
extern void func_0210c5dc(void *);
extern void func_0203e8c0(void);
extern s32 func_0201fb1c_tmp(s32, s32);
extern u32 func_0201f218(s32);
extern void func_02020058(void);
extern void func_0201ff80(void);

s32 func_0203e5a8(Vec_0203e5a8 *a, Vec_0203e5a8 *b, Vec_0203e5a8 *c) {
    s32 r4 = c->field_4 - b->field_4;
    s32 r3 = a->field_4 - b->field_4;
    s32 r12 = r4 * r3;
    s32 r3b = r4 * r4;
    s32 r2 = c->field_0 - b->field_0;
    s32 r5 = a->field_0 - b->field_0;
    s32 v0 = r2 * r5 + r12;
    s32 v1 = r2 * r2 + r3b;
    s32 ret = func_0201fb1c_tmp(v0, v1);
    if (ret < 0) {
        s32 t = r4 * ret;
        func_0201f218((t - r5) * (t - r5));
        func_02020058();
        func_0201ff80();
        return ret;
    }
    return -1;
}

void func_0203e61c(void) {
    Global_020600a0 *g = &data_021600a0;
    if (g->field_4 != NULL) return;
    g->field_4 = (Unk_0203e61c *)func_0210c594(0x58, data_02155c3c);
    func_021167ac(&g->field_4->field_28, 0x20);
    g->field_4->field_0 = func_0203e8c0;
    g->field_4->field_4 = 0x3f3;
    func_0210d9e4(g->field_4);
    g->field_4->field_34 = 0xff;
    g->field_4->field_3a = 0xff;
    g->field_4->field_36 = 0xff;
    g->field_4->field_3c = 0xff;
    g->field_4->field_38 = 0;
    g->field_4->field_3e = 0;
}

void func_0203e6bc(void) {
    Global_020600a0 *g;
    Unk_0203e61c *ptr;
    if (data_021600a0.field_4 != NULL) {
        void *node = data_021600a0.field_4->field_28;
        if (node != NULL) {
            do {
                func_021168f8(&data_021600a0.field_4->field_28, node);
                if (node != NULL) func_0210c5dc(node);
                node = data_021600a0.field_4->field_28;
            } while (node != NULL);
        }
        func_0210da14();
    }
    g = &data_021600a0;
    ptr = g->field_4;
    if (ptr == NULL) return;
    func_0210c5dc(ptr);
    g->field_4 = NULL;
}

