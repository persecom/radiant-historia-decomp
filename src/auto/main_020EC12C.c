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
