/* 19 functions from 0x020EC12C to 0x020ED0BC (main), found by ds-decomp. */
#include "common.h"

extern void func_02108594(void *);
extern void func_0210c5dc(void *);
extern u8 *data_02160ab4;
extern void func_020ebc24(u8 *);
extern s32 func_020ebddc(void *, s32);
extern void func_021168f8(u8 *, u8 *);
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_0210dbe8(void *);
extern void func_0210dc70(void *);
void func_020ec548(u8 *arg0);
void func_020ec218(void) {
    while (*(u8 **)(data_02160ab4 + 0x50) != NULL) {
        func_020ec548(*(u8 **)(data_02160ab4 + 0x50));
    }
    func_0210da14(data_02160ab4);
    func_0210dba0(data_02160ab4 + 0x14);
    func_0210dbe8(data_02160ab4 + 0x28);
    func_0210dc70(data_02160ab4 + 0x3c);
    if (data_02160ab4 != NULL) {
        func_0210c5dc(data_02160ab4);
        data_02160ab4 = NULL;
    }
}

void func_020ec548(u8 *arg0) {
    if (arg0 == NULL) return;
    func_020ebc24(*(u8 **)arg0);
    func_021168f8(data_02160ab4 + 0x50, arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020ec6ac(void) {
    u8 *node = data_02160ab4;
    u8 *obj = *(u8 **)(node + 0x50);
    s32 zero = 0;
    s32 one = 1;
    if (obj == NULL) return;
    while (obj != NULL) {
        func_020ebddc(*(u8 **)(obj + 0x0), *(u32 *)(obj + 0x38) == 0 ? one : zero);
        obj = *(u8 **)(obj + 0x48);
    }
}

void func_020ec98c(u32 arg0) {
    *(u32 *)(data_02160ab4 + 0x64) = arg0;
}

void func_020ecaa4(void **arg0) {
    func_02108594(*arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}
