/* 4 functions from 0x0203E8C0 to 0x0203F038 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600a0;
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void func_0210da14(u8 *);
extern void func_0210dba0(u8 *);
extern void func_0210dbe8(s32);
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
