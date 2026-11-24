/* 15 functions from 0x02177AA0 to 0x02178598 (ov000), found by ds-decomp. */
#include "common.h"

extern s32 func_ov000_021781fc(void *, void *, u32, u32);

typedef struct {
    u32 field_0;
    u32 field_4;
    u32 field_8;
    u8 s[0x100];
} Rc4State;

u32 func_ov000_02178004(void) {
    return 0xaa65;
}

s32 func_ov000_0217849c(u8 *arg0, u8 *arg1, u32 arg2, u32 arg3) {
    Rc4State state;
    func_ov000_021780e0(&state, arg0, 0x10);
    return (func_ov000_021781fc(&state, arg1, arg2, arg3) == -1) ? -1 : 0;
}
