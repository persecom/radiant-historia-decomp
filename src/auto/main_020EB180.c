/* 11 functions from 0x020EB180 to 0x020EC12C (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160aa4;
extern void (*data_02156154)(void *);
extern s32 data_02155c3c;
void func_0210dba0(void *);
void func_0210dbe8(void *);
void func_0210c5dc(void *);
void func_0211a700(void *);
void *func_0210c594(s32, s32);
void *func_02108844(void);
void *func_0211a810(void);
void func_0211a860(void *);
void func_02108594(void *);
void func_020eb3dc(void) {
    void *p = *(void **)(data_02160aa4 + 0x18);
    if (p != NULL) {
        func_0211a700(p);
    }
}
