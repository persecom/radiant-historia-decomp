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

s32 func_02031384(u8 *arg0, u32 arg1, s32 arg2) {
    s16 table[36] = {
        0, 1, 4, 5,
        4, 5, 8, 9,
        8, 9, 12, 13,
        1, 2, 5, 6,
        5, 6, 9, 10,
        9, 10, 13, 14,
        2, 3, 6, 7,
        6, 7, 10, 11,
        10, 11, 14, 15,
    };
    u16 idx;
    s32 x, y, z;
    u8 *res;
    u16 val;

    idx = (u16)(*arg0 * 4 + arg1);
    if (arg2 == -1) {
        res = func_02031c24((u8)table[idx]);
        if (res != NULL) {
            res[0x18] |= 2;
        }
        return 0;
    }
    x = *(s32 *)(arg0 + 4);
    y = *(s32 *)(arg0 + 8);
    z = *(s32 *)(arg0 + 0xc);
    switch (arg1) {
        case 0:
            x -= 0x11000;
            z -= 0x18000;
            y += 0x10000;
            break;
        case 1:
            x += 0x11000;
            z -= 0x18000;
            y += 0x10000;
            break;
        case 2:
            x -= 0x11000;
            z += 0x18000;
            y += 0x10000;
            break;
        case 3:
            x += 0x11000;
            z += 0x18000;
            y += 0x10000;
            break;
    }
    val = (u16)arg2;
    res = func_0203165c((u8)table[idx], 0, 0, 0, val);
    res[0x18] = 0;
    *(u16 *)(res + 0x20) = val;
    *(s32 *)(res + 0xc) = x;
    *(s32 *)(res + 0x10) = y;
    *(s32 *)(res + 0x14) = z;
    return 0;
}

void func_02031498(void) {
    s32 i;
    for (i = 0; i < 9; i++) {
        u8 *entry = data_02160244[2 + i];
        s32 flags;
        if (entry == NULL) {
            continue;
        }
        flags = entry[0x1c];
        if ((flags & 8) != 0) {
            func_0202e874();
        }
    }
}

void func_020314dc(void *arg0, s32 arg1) {
    u32 v4 = *(u32 *)((u8 *)arg0 + 4);
    u32 v8 = *(u32 *)((u8 *)arg0 + 8);
    u32 vc = *(u32 *)((u8 *)arg0 + 0xc);
    u16 val = (u16)arg1;
    u8 *node = func_0203165c((u8)(*(u8 *)arg0 + 0xc), 0, 0, 0, val);
    node[0x18] |= 9;
    *(u16 *)(node + 0x20) = val;
    *(u32 *)(node + 0xc) = v4;
    *(u32 *)(node + 0x10) = v8 + 0x40000;
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

extern void func_020316d8(void);
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_021167f0(void *, void *);
void func_0203160c(void) {
    UnkStruct_0203157c **ptr = &data_0216008c;
    if (*ptr == NULL) {
        return;
    }
    func_020316d8();
    func_0210da14(*ptr);
    func_0210dba0(&(*ptr)->unk14);
    if (*ptr != NULL) {
        func_0210c5dc(*ptr);
        *ptr = NULL;
    }
}

void func_02031658(void) {
}

void *func_0203165c(u32 arg0, u32 arg1, u32 arg2, u32 arg3, u16 arg4) {
    u8 *node = func_02031c24(arg0);
    if (node != NULL) {
        return node;
    }
    node = func_0210c594(0x2c, data_02155c3c);
    node[8] = arg0;
    *(u16 *)(node + 0x20) = arg4;
    *(u32 *)(node + 0xc) = arg1 << 12;
    *(u32 *)(node + 0x10) = arg2 << 12;
    *(u32 *)(node + 0x14) = arg3 << 12;
    func_021167f0(&data_0216008c->unk2c, node);
    return node;
}

void func_020316d8(void) {
    void *node;
    while ((node = *(void **)&data_0216008c->unk2c) != NULL) {
        func_021168f8(&data_0216008c->unk2c, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

