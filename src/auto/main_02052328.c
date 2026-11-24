/* 15 functions from 0x02052328 to 0x0205317C (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s32 x;
    s32 y;
} Vec2_02052844;

extern u8 *data_02160a80;
static inline u8 *find_node_02052844(u16 id) {
    u8 *node = *(u8 **)(data_02160a80 + 0x3c);
    while (node != NULL) {
        if (*(u32 *)(node + 8) == id) {
            return node;
        }
        node = *(u8 **)(node + 0x38);
    }
    return NULL;
}

extern s32 func_020dd9b4(void *, s32 *);
extern s32 func_02117d80(void);
extern u32 *data_02155984;
extern u8 *data_02160a80;
extern u8 *data_021600bc;
extern void func_020526f0();
extern void func_020477dc(void *, s32, s32);
extern void *func_02047820(s32);
extern s32 func_020ddc8c(void *, s32);
void func_02052328(void) {
    data_02155984[0] = 0x165;
    data_02155984[1] = 0xff0;
}

void func_02052844(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *node;

    func_020526f0(*(Vec2_02052844 *)(arg0 + 0xfc), (u16)(*(u16 *)(arg0 + 0x90) + 0xbb9), arg1, 1);
    node = find_node_02052844(*(u16 *)(arg0 + 0x90) + 0xbb9);
    if (node == NULL) {
        return;
    }
    if (arg2 == 1) {
        *(u32 *)(node + 0x18) &= ~8;
        return;
    }
    if (arg2 == 0) {
        *(u32 *)(node + 0x18) |= 8;
        return;
    }
    if (arg2 == -1) {
        *(u32 *)(node + 0x18) &= ~1;
    }
}

void func_02052904(s32 arg0) {
    u8 *node = *(u8 **)(data_021600bc + 0x40);
    while (node != NULL) {
        if (*(u16 *)(node + 0x8e) != 0x7d0 && *(s32 *)(node + 0xd0) != 0) {
            func_020477dc(node, arg0, 0);
        }
        node = *(u8 **)(node + 0x13c);
    }
}

void func_0205295c(void) {
    u8 *p = func_02047820(0);
    if (p != NULL) {
        *(u32 *)(p + 0xac) |= 0x2000;
        *(u8 *)(p + 0xa3) = 0x2d;
    }
}

u32 func_02052a54(void *arg0, s32 arg1) {
    s32 val;
    u32 ret = 0;
    func_020dd9b4(arg0, &val);
    if (val != 0) {
        ret |= 2;
    }
    if (arg1 == func_02117d80()) {
        ret |= 1;
    }
    return ret;
}
