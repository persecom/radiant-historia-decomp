/* 16 functions from 0x0207C328 to 0x0207CDD4 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u32 w[3];
} S_0207c328;

extern void *data_021600f0;
extern void *data_021600ac;
extern S_0207c328 data_021600f4;
extern u8 *data_02160200;
extern void func_021167f0(void *, void *);
extern void *func_02021f10(u32);
extern void func_0206e8f0(u32, void *, u32);
extern void func_02057f5c(void);
extern void func_0210d27c(s32);

void func_0207c328(void) {
    u8 *node = *(u8 **)((u8 *)data_021600f0 + 0xc);
    u8 *obj;
    u8 *res = func_02021f10(0);
    if (*node == 1) return;
    obj = *(u8 **)((u8 *)data_021600ac + 0x68);
    *node = 1;
    *(u16 *)(node + 2) = 0;
    if (*(u16 *)(res + 0x14) >= 1) {
        (*(u16 *)(res + 0x14))--;
        func_0206e8f0(0x11, obj, 1);
        func_02057f5c();
        func_0210d27c(0x7d);
        data_021600f4 = *(S_0207c328 *)obj;
    } else {
        func_0210d27c(6);
    }
}

void func_0207c528(void) {
    u8 *node = *(u8 **)((u8 *)data_021600f0 + 0xc);
    u8 *obj = *(u8 **)((u8 *)data_021600ac + 0x68);
    if (*node == 0) return;
    *(u32 *)(obj + 0xac) &= ~0x40000;
    *node = 0;
    func_0210d27c(0x88);
}

u32 func_0207c578(void) {
    u8 *node = *(u8 **)(*(u8 **)data_021600f0 + 0xc);
    u8 *res = func_02021f10(0);
    if (*(u16 *)(res + 0x14) == 0) return 0;
    if (!(*(u32 *)(data_02160200 + 0x34) & 0x20)) return 0;
    return *node == 1;
}

void func_0207cbfc(u32 arg0, u32 arg1) {
    u8 *p = *(u8 **)((u8 *)data_021600f0 + arg0 * 4 + 4);
    func_021167f0(p + 4, (void *)arg1);
}
