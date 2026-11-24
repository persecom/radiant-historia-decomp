/* 16 functions from 0x0202DD04 to 0x0202EC9C (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160a6c;
extern u8 **data_02160244;
extern u8 *func_0202c5a0(u8 *);

s32 func_0202e260(u32 arg0) {
    u32 i;
    u32 start = (arg0 == 0) ? 0 : 9;
    u32 end = (arg0 == 0) ? 9 : 12;
    for (i = start; i < end; i++) {
        u8 *entry = data_02160244[2 + i];
        u8 *sub = *(u8 **)(entry + 0x10);
        if (sub != NULL) {
            u8 *a = *(u8 **)(sub + 0);
            if (a != NULL && *(u8 **)(a + 0x118) != NULL) {
                if (*(u8 **)(*(u8 **)(a + 0x118) + 0x70) != NULL) {
                    return (s32)a;
                }
            }
            if (*(u8 **)(sub + 0xc) != NULL) {
                return (s32)a;
            }
        }
    }
    return 0;
}

s32 func_0202e468(void) {
    u32 i;
    for (i = 0; i < 9; i++) {
        u8 *entry = data_02160244[2 + i];
        u8 *sub = *(u8 **)(entry + 0x10);
        if (sub != NULL) {
            u8 *a = *(u8 **)(sub + 0);
            if (a != NULL && *(u8 **)(a + 0x118) != NULL) {
                if (*(s32 *)(*(u8 **)(a + 0x118) + 4) >= 1) {
                    return (s32)a;
                }
            }
            if (*(u8 **)(sub + 0xc) != NULL) {
                return (s32)a;
            }
        }
    }
    return 0;
}

void func_0202e4cc(void) {
    u8 *node = *(u8 **)(data_02160a6c + 0xb8);
    while (node != NULL) {
        u8 *src = func_0202c5a0(node);
        *(u32 *)(node + 0) = *(u32 *)(src + 0);
        *(u32 *)(node + 4) = *(u32 *)(src + 4);
        *(u32 *)(node + 8) = *(u32 *)(src + 8);
        node = *(u8 **)(node + 0x174);
    }
}

extern void func_0202bcd4(u8 *);
extern void func_0202eac4(u32, u16);
void func_0202e518(u8 *arg0) {
    u8 *p = *(u8 **)(*(u8 **)(arg0 + 0x128) + 0x54);
    if (arg0 != NULL && **(u8 **)(arg0 + 0x118) == 0) {
        func_0202bcd4(p + 0x18);
    }
}

u8 *func_0202e548(u32 arg0) {
    return (arg0 <= 11) ? *(u8 **)((u8 *)data_02160244 + arg0 * 4 + 8) : NULL;
}

void func_0202e568(u32 arg0) {
    u32 i;
    for (i = 0; i < 9; i++) {
        if (arg0 & (1 << i)) {
            u8 *node = *(u8 **)(data_02160244[2 + i] + 0x10);
            while (node != NULL) {
                u8 *obj = *(u8 **)(node + 0);
                *(u32 *)(obj + 0x80) |= 0x1000;
                func_0202eac4(0, *(u16 *)(obj + 0x8e));
                node = *(u8 **)(node + 0xc);
            }
        }
    }
}

u32 func_0202e98c(u32 arg0, u32 arg1) {
    switch (arg0) {
    case 0: {
        u32 mask = 0;
        mask |= 1 << arg1;
        return mask;
    }
    case 1: {
        u32 mask = 0;
        mask |= 1 << arg1;
        mask |= 1 << (arg1 + 1);
        return mask;
    }
    case 2: {
        u32 mask = 0;
        mask |= 1 << arg1;
        mask |= 1 << (arg1 - 3);
        return mask;
    }
    case 3: {
        u32 mask = 0;
        mask |= 1 << arg1;
        mask |= 1 << (arg1 + 1);
        mask |= 1 << (arg1 - 3);
        mask |= 1 << (arg1 - 2);
        return mask;
    }
    case 4:
        return 0x1ff;
    default:
        return 0;
    }
}
