/* 36 functions from 0x0210F550 to 0x02110518 (main), found by ds-decomp. */
#include "common.h"

extern void *data_02162b80;
extern void *data_02155c3c;
extern void func_020c9b64(void *);
extern void func_0210c5dc(void *);
extern void *func_0210c518(u32, void *);
extern void func_02125424(void *, u32);
extern void func_021254a8(u32, u32, u32, u32);

extern void func_020bdf38(void);
extern void func_020a8440(void);
s32 func_020a47c8(void);
s32 func_021100c8(void) {
    func_020a8440();
    return func_020a47c8();
}

void func_021100d8(void) {
    func_020bdf38();
}

extern void func_0210c5dc(void *);
extern void func_021101ec(void *);
void func_021101cc(void *arg0) {
    func_021101ec(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_02110228(void *arg0) {
    func_020c9b64(*(void **)((u8 *)arg0 + 0x30));
    return 0;
}

extern void func_02110484(void *);
void func_02110464(void *arg0) {
    func_02110484(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

