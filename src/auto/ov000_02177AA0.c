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

u32 func_ov000_02178010(void) {
    return 0xa99f;
}

void func_ov000_021780e0(Rc4State *state, u8 *key, u32 keylen) {
    u32 *p = (u32 *)state->s;
    u32 *end = (u32 *)((u8 *)state + sizeof(Rc4State));
    u32 v = 0x03020100;
    u32 inc = 0x4040404;
    u32 j = 0;
    u32 k = 0;
    s32 i;
    state->field_0 = 0xaa;
    state->field_4 = 0;
    j = j;
    state->field_8 = 0;
    do {
        *p++ = v;
        v += inc;
    } while (p < end);
    for (i = 0xff; i >= 0; i--) {
        u8 tmp = state->s[i];
        u8 tmp2;
        j = (j + key[k] + tmp) & 0xff;
        k++;
        if (k >= keylen) k = 0;
        tmp2 = state->s[j];
        state->s[j] = tmp;
        state->s[i] = tmp2;
    }
}

s32 func_ov000_021781c4(u32 *p) {
    u32 v = 0x03020100;
    u32 *end = (u32 *)((u8 *)p + 0x100);
    u32 mask = 0xffffffff;
    do {
        *p++ = v ^ mask;
        v += 0x04040404;
    } while (p < end);
    return 0;
}

s32 func_ov000_0217849c(u8 *arg0, u8 *arg1, u32 arg2, u32 arg3) {
    Rc4State state;
    func_ov000_021780e0(&state, arg0, 0x10);
    return (func_ov000_021781fc(&state, arg1, arg2, arg3) == -1) ? -1 : 0;
}

extern s32 func_ov000_02178314(void *, void *, u32, u32);
s32 func_ov000_021784f4(u8 *arg0, u8 *arg1, u32 arg2, u32 arg3) {
    Rc4State state;
    func_ov000_021780e0(&state, arg0, 0x10);
    return (func_ov000_02178314(&state, arg1, arg2, arg3) == -1) ? -1 : 0;
}

