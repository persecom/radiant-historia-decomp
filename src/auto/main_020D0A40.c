/* 2 functions from 0x020D0A40 to 0x020D0D1C (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160110,*data_02160090,*data_02160a74,*data_02160258;
extern void func_020d91bc(s32);
extern void func_020df944(void *,s32,void *);
extern void func_020df9c8(void);
extern u8 *func_02032254(u16);
extern void func_020e86c0(s32);
extern void func_020960dc(void);
extern void func_020e1850(void);
extern void func_020d9ea8(s32,s32);
extern void func_020da0c8(u16);
extern void func_02097114(void);

extern u8 *data_02160244;
void func_020d0cd4(s32 arg0, u32 arg1) {
    if (arg0 == 1) {
        *(u32 *)(data_02160244 + 0x7c) |= arg1;
    } else if (arg0 == 0) {
        *(u32 *)(data_02160244 + 0x7c) &= ~arg1;
    }
}
