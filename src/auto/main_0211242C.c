/* 33 functions from 0x0211242C to 0x021133F8 (main), found by ds-decomp. */
#include "common.h"

extern void func_02112110(void);
s32 func_021128c4(void) {
    func_02112110();
    return 0;
}

extern void func_0210c5dc(void *);
extern void func_021121b8(void *);
void func_021128d4(void *arg0) {
    func_021121b8(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

extern void func_020c8818(void *);
void func_02112ac0(void *arg0) {
    func_020c8818(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

extern void func_020c9b64(void *);
s32 func_02112ce0(void *arg0) {
    func_020c9b64(*(void **)((u8 *)arg0 + 0x30));
    return 0;
}

