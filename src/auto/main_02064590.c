/* 11 functions from 0x02064590 to 0x02065298 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s16 x;
    s16 y;
    u16 touch;
    u16 validity;
} TouchData_02064aac;

extern u8 *data_02160a6c;
extern TouchData_02064aac data_02162908;

void func_02064a30(void) {
    u8 *p = data_02160a6c;
    u8 *node;
    if (p == NULL) {
        return;
    }
    node = *(u8 **)(p + 0x70);
    while (node != NULL) {
        u8 *sub = *(u8 **)(node + 0x1a4);
        if (sub == NULL) {
            *(s32 *)(node + 0x1a8) = *(s32 *)(node + 0x0);
            *(s32 *)(node + 0x1ac) = *(s32 *)(node + 0x4);
            *(s32 *)(node + 0x1b0) = *(s32 *)(node + 0x8);
        } else {
            *(s32 *)(node + 0x1a8) = *(s32 *)(node + 0x0) + *(s32 *)(sub + 0x18);
            *(s32 *)(node + 0x1ac) = *(s32 *)(node + 0x4) + *(s32 *)(sub + 0x1c);
            *(s32 *)(node + 0x1b0) = *(s32 *)(node + 0x8) + *(s32 *)(sub + 0x20);
        }
        node = *(u8 **)(node + 0x13c);
    }
}

s32 func_02064aac(s32 *rect) {
    TouchData_02064aac tp = data_02162908;
    if (tp.touch == 1) {
        s32 hit = (tp.x >= rect[0] && tp.x <= rect[2] && tp.y >= rect[1] && tp.y <= rect[3]);
        if (hit) {
            return 1;
        }
    }
    return 0;
}

s32 func_02064b3c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 rect[4] = { 0, 0, 0, 0 };
    rect[0] = arg0;
    rect[1] = arg1;
    rect[2] = arg0 + arg2;
    rect[3] = arg1 + arg3;
    return func_02064aac(rect);
}

void *func_02064cb8(u8 *arg0, s32 arg1) {
    u8 *node = *(u8 **)(arg0 + 4);
    while (node != NULL) {
        if (node[1] == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x34);
    }
    return NULL;
}
