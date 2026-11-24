/* 4 functions from 0x0203E8C0 to 0x0203F038 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600a0;
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void func_0210da14(u8 *);
extern void func_0210dba0(u8 *);
extern void func_0210dbe8(s32);
extern void *data_02155c3c;
extern void func_0203efc4(void);
extern void func_0203f038(void);
extern void *func_0210c594(s32, void *);
extern void func_021167ac(void *, s32);
extern void func_0210d9e4(void *);
extern void func_0210db70(void *);
extern void func_0210dbd0(void *);
extern void func_0203faf4(void);
void func_0203ee20(s32 arg0) {
    s32 val = 0x3f6;
    if (data_021600a0 != NULL) {
        return;
    }
    data_021600a0 = func_0210c594(0x40, data_02155c3c);
    func_021167ac(data_021600a0 + 0x28, 8);
    *(void (**)(void))data_021600a0 = func_0203efc4;
    *(s32 *)(data_021600a0 + 4) = val;
    func_0210d9e4(data_021600a0);
    if (arg0 == 0) {
        *(void (**)(void))(data_021600a0 + 0x14) = func_0203f038;
        *(s32 *)(data_021600a0 + 0x18) = val - 0xc;
        func_0210db70(data_021600a0 + 0x14);
    } else if (arg0 == 1) {
        *(void (**)(void))(data_021600a0 + 0x14) = func_0203f038;
        *(s32 *)(data_021600a0 + 0x18) = val - 0xc;
        func_0210dbd0(data_021600a0 + 0x14);
    }
    func_0203faf4();
    *(u16 *)(data_021600a0 + 0x34) = 0;
    *(u8 *)(data_021600a0 + 0x3c) = 1;
}

void func_0203ef0c(s32 arg0) {
    u8 **pp = &data_021600a0;
    u8 *node;
    if (*pp == NULL) {
        return;
    }
    node = *(u8 **)(*pp + 0x28);
    while (node != NULL) {
        u8 *next = *(u8 **)(node + 0xc);
        func_021168f8(*pp + 0x28, node);
        if (*(void **)(node + 0) != NULL) {
            func_0210c5dc(*(void **)(node + 0));
            *(u32 *)(node + 0) = 0;
        }
        if (node != NULL) {
            func_0210c5dc(node);
        }
        node = next;
    }
    func_0210da14(*pp);
    if (arg0 == 0) {
        func_0210dba0(*pp + 0x14);
    } else {
        func_0210dbe8((s32)(*pp + 0x14));
    }
    if (*pp != NULL) {
        func_0210c5dc(*pp);
        *pp = NULL;
    }
}

void func_0203efc4(void) {
    u16 v = *(u16 *)(data_021600a0 + 0x36);
    u16 count;
    u16 flag;
    if (!(v & 0x8000)) {
        return;
    }
    count = (u16)(v & ~0xc000);
    count += 1;
    flag = v & 0x4000;
    if (count > 15) {
        flag ^= 0x4000;
        count = 0;
    }
    *(u16 *)(data_021600a0 + 0x36) = count;
    *(u16 *)(data_021600a0 + 0x36) |= (u16)(flag | 0x8000);
}
