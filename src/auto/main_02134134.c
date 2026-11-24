/* 31 functions from 0x02134134 to 0x02134F44 (main), found by ds-decomp. */
#include "common.h"

extern void func_02135c78(void);
extern s32 func_02136930(void *);
extern void func_0200baa4(void *);
extern void func_02013878(void *, u32, u32);
extern s32 func_020138b8(void *, u32, u32);
extern s32 func_02016d50(u32, void *, u32 *, u32 *, u32 *);
extern u8 data_0215bc4c[];
extern u8 data_0215bc54[];
s32 func_02134134(u8 *arg0) {
    return *(s32 *)(arg0 + 0x5c);
}

s32 func_021346bc(void) {
    return 0;
}

void func_0213473c(void) {
    func_02135c78();
}

s32 func_02134efc(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    return func_02136930(*(void **)((u8 *)arg0 + 0x20));
}

