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
    u8 **p = &data_02160ab4;
    while (*(u8 **)(*p + 0x50) != NULL) {
        func_020ec548(*(u8 **)(*p + 0x50));
    }
    func_0210da14(*p);
    func_0210dba0(*p + 0x14);
    func_0210dbe8(*p + 0x28);
    func_0210dc70(*p + 0x3c);
    if (*p != NULL) {
        func_0210c5dc(*p);
        *p = NULL;
    }
}
