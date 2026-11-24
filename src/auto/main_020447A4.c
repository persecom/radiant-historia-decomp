/* 16 functions from 0x020447A4 to 0x020451FC (main), found by ds-decomp. */
#include "common.h"

extern u32 data_021600b0[3];
extern void *data_021600b8;
extern u8 *data_021600a8[2];

typedef struct {
    u32 a;
    u32 b;
    u32 c;
    u32 d;
    u32 e;
} S_02044a98;

extern S_02044a98 data_0213f2d0;
extern void func_0210c5dc(void *);
extern void func_021168f8(void *, void *);
extern void func_020a994c(void *);
extern void func_020a98a0(void *);
extern void func_020a9544(void *);
extern void func_020a9610(void *, u32, u32, u32, u32, u32);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
extern void func_02044aec(void *, u16);
void func_020447a4(u8 *arg0) {
    u8 *node;
    if (arg0 == NULL) {
        return;
    }
    node = *(u8 **)data_021600b8;
    while (node != NULL) {
        if (node == arg0) {
            func_021168f8(data_021600b8, node);
            break;
        }
        node = *(u8 **)(node + 0x1dc);
    }
    if (*(void **)(arg0 + 0x128) != NULL && **(void ***)(arg0 + 0x128) != NULL) {
        (*(u32 *)(arg0 + 0x178))++;
        func_020a994c(arg0 + 0x144);
        func_020a98a0(arg0 + 0x144);
        func_020a9544(*(void **)(arg0 + 0x128));
    }
}

void func_02044f48(void) {
    if (data_021600b0[1] != 0) {
        func_0210c5dc((void *)data_021600b0[1]);
        data_021600b0[1] = 0;
    }
}

u32 func_02044f70(void) {
    return data_021600b0[1];
}
