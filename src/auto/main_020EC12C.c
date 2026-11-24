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
extern u8 data_02160ad8[];
extern u8 data_02160ac4[];
extern u8 data_02160ab8[];
extern void *data_02155c3c;
extern void func_0210db10(void *);
extern void func_0210db58(void *);
extern void func_0210dae0(void *);
extern void func_0210db40(void *);
extern void func_020ed0bc(void);
extern void *func_0210c594(s32, void *);
extern void *func_0210853c(void);
void func_020ec548(u8 *arg0);
extern void func_021167ac(void *, s32);
extern void func_0210d9e4(void *);
extern void func_0210db70(void *);
extern void func_0210dbd0(void *);
extern void func_0210dc58(void *);
extern void func_020ec588(void);
extern void func_020ec6f8(void);
extern void func_020ec6ac(void);
void func_020ec12c(void) {
    s32 val = 0x3f6;
    if (data_02160ab4 != NULL) {
        return;
    }
    data_02160ab4 = (u8 *)func_0210c594(0x68, data_02155c3c);
    func_021167ac(data_02160ab4 + 0x50, 0x44);
    *(void (**)(void))(data_02160ab4 + 0x0) = func_020ec588;
    *(s32 *)(data_02160ab4 + 0x4) = val;
    func_0210d9e4(data_02160ab4);
    *(void (**)(void))(data_02160ab4 + 0x14) = func_020ec6f8;
    *(s32 *)(data_02160ab4 + 0x18) = val - 0xc;
    func_0210db70(data_02160ab4 + 0x14);
    *(void (**)(void))(data_02160ab4 + 0x28) = func_020ec6f8;
    *(s32 *)(data_02160ab4 + 0x2c) = val - 0xc;
    func_0210dbd0(data_02160ab4 + 0x28);
    *(void (**)(void))(data_02160ab4 + 0x3c) = func_020ec6ac;
    *(s32 *)(data_02160ab4 + 0x40) = 0x3e8;
    func_0210dc58(data_02160ab4 + 0x3c);
    *(s32 *)(data_02160ab4 + 0x60) = 0;
    *(s32 *)(data_02160ab4 + 0x64) = 1;
}

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
