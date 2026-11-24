/* 11 functions from 0x0209DFDC to 0x0209EE60 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600b0;

typedef struct {
    u16 f0;
    u16 f2;
} Unk_02142c40;

extern Unk_02142c40 data_02142c40[5];
extern void func_020a8810(void *, u32);
extern void func_020a5858(void *);
extern void func_020a5ce4(void *);
extern void func_0209f1c4(s32, s32, s32, s32, void *, s32);
extern void func_020a0fd4(s32, s32);

void func_0209ed34(u32 arg0, u32 arg1) {
    u8 *p = data_021600b0 + arg0 * 4;
    func_020a8810(*(void **)(*(void **)(p + 0xe4) + 4), arg1);
}
