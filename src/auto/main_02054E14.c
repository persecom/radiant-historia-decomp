/* 12 functions from 0x02054E14 to 0x02055E14 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    void *f0;
    u32 f4[4];
} UnkEntry_02055c90;

typedef struct {
    UnkEntry_02055c90 entries[2];
} UnkData_02055c90;

extern u8 *data_021600ac;
extern u8 *data_021600c0;
extern u32 data_02155c3c;
extern const UnkData_02055c90 data_0213f31c;
extern char data_02146550[];

extern void func_02002128(void *, void *, void *);
extern s32 func_02002388(void *, void *);
extern void func_02002274(void *, void *);
extern void func_020020f8(void *, void *, void *);
extern void *func_0210c594(u32, u32);
extern void func_0210d9e4(void *);
extern void func_021167ac(void *, s32);
extern void func_02055994(void);
extern void func_02055bac(void);
extern void func_02055c90(s32);
extern void func_02055ebc(void);
extern void func_02005e80(void *, const char *, ...);
extern void *func_02055d28(void *, u16);
extern void func_02124e68(void *);
extern void func_0212501c(void *);

void func_02055240(u8 *arg0) {
    u8 *p = *(u8 **)(data_021600ac + 0x68);
    struct { s32 x, y, z; } vec1 = { 0, 0, 0 };
    struct { s32 x, y, z; } vec2 = { 0, 0, 0 };
    s32 dist;

    *(s32 *)(arg0 + 0x1b8) = 0;
    func_02002128(arg0, p, &vec1);
    dist = (func_02002388(arg0, p) >> 12) + 0x50;
    func_02002274(&vec1, &vec1);
    vec2.x = vec1.x * dist;
    vec2.z = vec1.z * dist;
    func_020020f8(p, &vec2, arg0 + 0x1b4);
    *(s16 *)(arg0 + 0x98) = 0;
}

s32 func_020552e4(u8 *arg0) {
    *(s16 *)(arg0 + 0x98) += 1;
    if (*(s16 *)(arg0 + 0x98) > 0x78) {
        *(s16 *)(arg0 + 0x98) = 0;
        return 1;
    }
    return 0;
}

void func_02055804(s32 arg0) {
    if (data_021600c0 != NULL) {
        return;
    }
    data_021600c0 = func_0210c594(0x4c, data_02155c3c);
    *(void **)(data_021600c0 + 0xc) = (void *)func_02055994;
    *(u32 *)(data_021600c0 + 0x10) = 0x3f3;
    func_0210d9e4(data_021600c0 + 0xc);
    *(void **)(data_021600c0 + 0x20) = (void *)func_02055bac;
    *(u32 *)(data_021600c0 + 0x24) = 0x3f3;
    func_0210d9e4(data_021600c0 + 0x20);
    func_021167ac(data_021600c0 + 0x34, 0x2c);
    func_021167ac(data_021600c0 + 0x40, 8);
    func_02055c90(arg0);
    func_02055ebc();
}

void func_02055c90(s32 arg0) {
    UnkData_02055c90 buf;
    u8 unk8[0x28];
    u8 unk0[0x8];
    u8 i;

    buf = data_0213f31c;
    for (i = 0; i < 2; i++) {
        if (i == 1) {
            func_02005e80(buf.entries[i].f0, data_02146550, arg0);
        }
        func_02055d28(&buf.entries[i], i);
    }
    func_02124e68(unk8);
    func_0212501c(unk0);
}

extern void *func_0203be60(void *, void *, void *);
extern void func_021167f0(void *, void *);
extern void func_0210c5dc(void *);
void *func_02055dd8(u16 arg0) {
    u8 *node = *(u8 **)(data_021600c0 + 0x34);
    while (node != NULL) {
        if (*(u16 *)node == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x30);
    }
    return NULL;
}

