/* 23 functions from 0x020A66B8 to 0x020A7598 (main), found by ds-decomp. */
#include "common.h"

extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void *func_0210c594(s32, void *);
extern void *data_02155c3c;
extern void func_021167f0(void *, void *);
extern u8 *data_021600e4;
extern u32 func_020bdba0(u16);
extern void func_020a6c44(void *, u16);
extern u16 data_02162908[];
void func_020a6c04(void *arg0, u16 arg1, u8 arg2);
void func_020a6c74(void *arg0, u16 arg1, u16 arg2);
void func_020a6a20(void *arg0) {
    u8 *node = *(u8 **)arg0;
    s32 i = 0;
    while (node != NULL) {
        *(u32 *)(node + 0x18) = (u8)func_020bdba0((u16)(i + 0x80));
        *(u32 *)(node + 0x1c) = (u8)func_020bdba0((u16)(*(u32 *)(data_021600e4 + 0x184) + i));
        node = *(u8 **)(node + 0x14);
        i++;
    }
}

void func_020a6b88(void *arg0, void *arg1) {
    u8 *node = *(u8 **)arg0;
    while (node != NULL) {
        u8 *sub = *(u8 **)(node + 4);
        while (sub != NULL) {
            if (*(u16 *)(sub + 4) != 0) {
                func_020a6c74(arg1, *(u16 *)(sub + 4), *(u16 *)node);
                func_020a6c04(arg1, *(u16 *)(sub + 4), *(u8 *)(node + 0x20));
                if (*(u32 *)(node + 0x1c) != 0) {
                    func_020a6c44(arg1, *(u16 *)(sub + 4));
                }
            }
            sub = *(u8 **)(sub + 0x10);
        }
        node = *(u8 **)(node + 0x14);
    }
}

void func_020a6c04(void *arg0, u16 arg1, u8 arg2) {
    u8 *node = *(u8 **)arg0;
    while (node != NULL) {
        if (*(u16 *)node == arg1) {
            *(u32 *)(node + 0xa8) = 1;
            *(u8 *)(node + 0xb0) |= arg2;
            return;
        }
        node = *(u8 **)(node + 0xa4);
    }
}

void func_020a6c44(void *arg0, u16 arg1) {
    u8 *node = *(u8 **)arg0;
    while (node != NULL) {
        if (*(u16 *)node == arg1) {
            *(u32 *)(node + 0xac) = 1;
            return;
        }
        node = *(u8 **)(node + 0xa4);
    }
}

void func_020a6c74(void *arg0, u16 arg1, u16 arg2) {
    u8 *node = *(u8 **)arg0;
    while (node != NULL) {
        if (*(u16 *)node == arg1) {
            *(u16 *)(node + 4) = arg2;
            return;
        }
        node = *(u8 **)(node + 0xa4);
    }
}

void func_020a6e90(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
}

void func_020a745c(void) {
}

void func_020a7494(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
}

