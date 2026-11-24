/* 12 functions from 0x020E13B0 to 0x020E1EC8 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u16 unk[9];
} Unk18;

extern u8 *data_02160a74;
extern const Unk18 data_02144970;
extern void func_021099f8(void *);
extern void func_0210c5dc(void *);
extern void func_021168f8(void *, void *);

void *func_020e1ccc(u32 arg0) {
    u8 *root = data_02160a74;
    u8 *node = *(u8 **)(root + 0x1a4);
    while (node != NULL) {
        if (*(u32 *)(node + 0x0) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x10);
    }
    return NULL;
}
