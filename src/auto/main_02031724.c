/* 18 functions from 0x02031724 to 0x02032488 (main), found by ds-decomp. */
#include "common.h"

extern void *data_0216008c;
extern void *data_02160090;
extern void func_02031fcc(s32, s32);
extern void func_021168f8(void *, void *);
extern void func_02033060(void);
extern void func_02032de8(void);
extern void func_02033010(void);
extern void func_02032f34(void);
extern void func_020c2b98(void);
extern void func_020c2be4(void);
extern void func_020c2c30(void);
extern void func_0210c5dc(void *);
void *func_02031c24(u32 arg0) {
    void *node = *(void **)((u8 *)data_0216008c + 0x2c);
    while (node != NULL) {
        if (*(u8 *)((u8 *)node + 0x8) == arg0) {
            return node;
        }
        node = *(void **)((u8 *)node + 0x4);
    }
    return NULL;
}

void func_02031fbc(s32 arg0, s32 arg1, s32 arg2) {
    func_02031fcc(arg0, arg2);
}
