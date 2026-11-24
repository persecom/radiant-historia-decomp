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
