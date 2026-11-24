/* 13 functions from 0x020DAA60 to 0x020DB864 (main), found by ds-decomp. */
#include "common.h"

extern void func_020321cc(s32);
extern void func_020951b4(void);
extern s32 func_020deaf0(void *, s32, s32);
extern s32 func_0202e548(u8);
extern void func_02030878(void *, void *, s32, s32, s32, s32);
extern void func_020db35c(void *, s32);
extern void func_020de0a8(void *);
extern u8 *data_02160a6c;

void func_020db4ac(void *arg0) {
    u8 *node = *(u8 **)(data_02160a6c + 0x70);
    while (node != NULL) {
        u8 *sub = *(u8 **)(node + 0x128);
        if (*(void **)(sub + 4) == arg0) {
            *(void **)(sub + 4) = NULL;
        }
        if (*(void **)(sub + 0) == arg0) {
            *(void **)(sub + 0) = NULL;
        }
        node = *(u8 **)(node + 0x13c);
    }
}

void func_020db4fc(void) {
    u8 *node = *(u8 **)(data_02160a6c + 0x70);
    while (node != NULL) {
        u8 *sub = *(u8 **)(node + 0x118);
        if (sub[0] == 1) {
            if (*(s32 *)(sub + 0x70) != 0 && *(s32 *)(sub + 4) <= 0) {
                func_020db35c(node, 0);
            } else {
                func_020de0a8(node);
            }
        }
        node = *(u8 **)(node + 0x13c);
    }
}

extern void func_020dd810(void *, s32, s32);
void func_020db56c(void) {
    u8 *node = *(u8 **)(data_02160a6c + 0xb8);
    while (node != NULL) {
        u8 *sub = *(u8 **)(node + 0x118);
        if (*(s32 *)(sub + 0x70) != 0 && *(s32 *)(sub + 4) <= 0) {
            func_020db35c(node, 0);
        } else {
            u8 state = node[0x104];
            if (state != 0 && state != 0x13 && (*(u32 *)(sub + 0x78) & 0x10) == 0) {
                if (*(s32 *)(node + 0x1c0) == 1) {
                    *(u32 *)(node + 0x0) = *(u32 *)(node + 0xec);
                    *(u32 *)(node + 0x8) = *(u32 *)(node + 0xf4);
                    *(s32 *)(node + 0x1c0) = 0;
                }
                if (*(s16 *)(node + 0x98) == 0) {
                    node[0xa2] &= ~4;
                    func_020dd810(node, 0, 0);
                }
            }
        }
        node = *(u8 **)(node + 0x174);
    }
}

extern void func_0206e7a0(u8, void *, void *, u16);
extern void func_0210d27c(s32);
s32 func_020db630(void) {
    u8 *node = *(u8 **)(data_02160a6c + 0xb8);
    while (node != NULL) {
        if (*(s32 *)(*(u8 **)(node + 0x118) + 4) >= 1) {
            u8 val = node[0x104];
            if (val != 0 && val != 0x13) {
                return 0;
            }
        }
        node = *(u8 **)(node + 0x174);
    }
    return 1;
}

s32 func_020db680(void) {
    u8 *node = *(u8 **)(data_02160a6c + 0x70);
    s32 result = 0;
    while (node != NULL) {
        u8 *sub = *(u8 **)(node + 0x118);
        if (sub[0] == 1 && *(void **)(sub + 0x70) != NULL && *(s32 *)(sub + 4) <= 0) {
            func_020db35c(node, 0);
            result = 1;
        }
        node = *(u8 **)(node + 0x13c);
    }
    return result;
}

void func_020db7ec(u8 *arg0) {
    u8 sp[0x18];
    if (*(u32 *)(*(u8 **)(arg0 + 0x128) + 0x18) & 2) {
        return;
    }
    *(u8 *)(sp + 0xc) = 0;
    *(u16 *)(sp + 0xe) = 0;
    *(u8 *)(sp + 0x10) = 0;
    *(u16 *)(sp + 0x12) = 0;
    *(u8 *)(sp + 0x14) = 1;
    *(u32 *)(sp + 0x0) = 0;
    *(u32 *)(sp + 0x4) = 0;
    *(u32 *)(sp + 0x8) = 0;
    func_0206e7a0(6, arg0, sp, 0);
    func_0210d27c(0x13);
}

void func_020db850(void) {
    func_020321cc(0);
    func_020951b4();
}
