/* 1 function from 0x0204798C to 0x020495FC (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021600ac, *data_021600bc;
extern void func_02078a40(void), func_02078e1c(void), func_02078f58(void), func_02079094(void);
extern void func_02079174(void), func_02079374(void), func_0207963c(void);
extern void func_0207a6b4(void), func_0207a8cc(void);
extern u16 func_020ddc8c(u8 *, u8 *);
void func_0204798c(void) {
    u8 *g = data_021600ac;
    u8 *obj;
    if (g && *(u8 **)(g + 0x68) && *(u8 **)(*(u8 **)(g + 0x68) + 0xb0)) {
        (*(u8 **)(*(u8 **)(g + 0x68) + 0xb0))[0xc] = 0;
    }
    if (*(u16 *)(data_021600ac + 0x36e) & 1) func_02078a40();
    if (*(u16 *)(data_021600ac + 0x36e) & 0x10) func_02078e1c();
    if (*(u16 *)(data_021600ac + 0x36e) & 2) func_02078f58();
    if (*(u16 *)(data_021600ac + 0x36e) & 0x40) func_02079094();
    if (*(u16 *)(data_021600ac + 0x36e) & 0x20) func_02079174();
    if (*(u16 *)(data_021600ac + 0x36e) & 0x100) func_02079374();
    if (*(u16 *)(data_021600ac + 0x36e) & 0x40) func_02079094();
    if (*(u16 *)(data_021600ac + 0x36e) & 0x80) func_0207963c();
    func_0207a6b4();
    func_0207a8cc();
    obj = *(u8 **)(data_021600bc + 0x40);
    if (obj) {
        if (*(u32 *)(obj + 0xac) & 4) {
            *(u16 *)(obj + 0x92) = func_020ddc8c(obj, obj + 0x24);
            *(u32 *)(obj + 0xac) &= ~4;
        }
    }
}
