/* 15 functions from 0x020437F0 to 0x020447A4 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600bc;
extern u8 *data_02160204;
extern u8 data_021600a8[8];
extern void func_0210f978(void);
extern void func_020eff5c(u32);
extern void func_020f40a4(void);
extern void func_0203d7c0(void);
extern void func_020eb180(u32, u32);
extern void func_020ec12c(void);
extern void func_0203e61c(void);
extern void func_0203ee20(u32);
extern void func_020f5760(void);
extern void func_020469f4(void);
extern void func_02046594(void);
extern void func_020e9eb0(void);
extern void func_020a31c8(u32);
extern void func_020f0090(u32);
extern void func_020f4144(void);
extern void func_0203d800(void);
extern void func_020eb344(u32, u32);
extern void func_020ec218(void);
extern void func_0203e6bc(void);
extern void func_0203ef0c(u32);
extern void func_020f5798(void);
extern void func_0210c5dc(void *);
extern void func_02046600(void);
extern void func_020e9f44(void);
extern void func_020a3b84(void);
extern void func_0210f138(void);
extern void func_0210d9e4(void *);
extern void func_0210db70(void *);
void *func_02044180(u16 arg0) {
    u8 *node = *(u8 **)(data_021600bc + 0xb8);
    while (node != NULL) {
        if (*(u16 *)(node + 0x10) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x30);
    }
    return NULL;
}
