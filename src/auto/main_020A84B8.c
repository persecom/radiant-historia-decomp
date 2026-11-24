/* 19 functions from 0x020A84B8 to 0x020A94B8 (main), found by ds-decomp. */
#include "common.h"

extern void func_0210c5dc(void *);
extern void func_0210dba0(void *);
extern void (*data_02156154)(void *);
extern u32 data_02160148[];
u32 func_020a8828(u32 arg0);
void func_020a8750(void *arg0) {
    u8 *p = (u8 *)arg0;
    if (*(void **)(p + 0x50) != NULL) {
        func_0210c5dc(*(void **)(p + 0x50));
    }
    func_0210dba0(p + 0x20);
    data_02156154(*(void **)(p + 0x34));
    if (*(void **)(p + 0x10) != NULL) {
        func_0210c5dc(*(void **)(p + 0x10));
        *(void **)(p + 0x10) = NULL;
    }
    if (p != NULL) {
        func_0210c5dc(p);
    }
}
