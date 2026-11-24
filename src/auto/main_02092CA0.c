/* 16 functions from 0x02092CA0 to 0x020938B0 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160110;
extern s32 data_02155c3c;
void func_021168f8(void *, void *);
void func_0210c5dc(void *);
void *func_02093658(u16);
void func_02093444(u16);
void *func_0210c594(s32, s32);
void func_021167ac(void *, s32);
void func_020f5114(void *, s32);
void func_02092ca0(void) {
    void *node;
    while ((node = *(void **)(data_02160110 + 0x90)) != NULL) {
        func_021168f8(data_02160110 + 0x90, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
}

void func_020932a8(u16 id, s16 x, s16 y) {
    u8 *ptr = (u8 *)func_02093658(id);
    s16 oldX, oldY;
    u8 *node;
    if (ptr == NULL) {
        return;
    }
    oldX = *(s16 *)(ptr + 0xc);
    oldY = *(s16 *)(ptr + 0xe);
    *(s16 *)(ptr + 0xc) = x;
    *(s16 *)(ptr + 0xe) = y;
    node = *(u8 **)(ptr + 0x20);
    while (node != NULL) {
        s16 dx = (s16)(oldX - *(s32 *)(node + 8));
        s16 dy = (s16)(oldY - *(s32 *)(node + 0xc));
        *(s32 *)(node + 8) = x - dx;
        *(s32 *)(node + 0xc) = y - dy;
        if (x > -64 && x < 256 && y > -32 && y < 192) {
            func_020f5114(node, 1);
        } else {
            func_020f5114(node, 0);
        }
        node = *(u8 **)(node + 0x50);
    }
}
