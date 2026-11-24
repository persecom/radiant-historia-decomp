/* 10 functions from 0x020D56D8 to 0x020D655C (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u8 pad_0[0x52];
    s16 unk_52;
} Struct020d64c8;

typedef struct {
    u8 pad_0[0x120];
    void *unk_120;
} Struct020d5fd0;

extern s16 *func_02022494(void *, u32);
extern void *func_02026c60(void *, s32);
extern void func_02026cac(void *);
extern void func_02026c94(void *);
extern u8 *data_02160a74;
extern void func_020b52f4(s32);
extern void func_020b532c(s32);
extern void func_020a5ce4(void *);
extern void func_020a9544(void *);
extern void func_020e1ec8(void *, s32);
extern void func_020a8810(void *, u32);
extern void func_020e24bc(void *, s32, s32, s32, s32);

void func_020d64c8(Struct020d64c8 *arg0) {
    s16 *p = func_02022494(arg0, 0);
    arg0->unk_52 = *p;
}
