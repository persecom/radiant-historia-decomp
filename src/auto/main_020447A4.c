/* 16 functions from 0x020447A4 to 0x020451FC (main), found by ds-decomp. */
#include "common.h"

extern u32 data_021600b0[3];
extern void *data_021600b8;
extern u8 *data_021600a8[2];

typedef struct {
    u32 a;
    u32 b;
    u32 c;
    u32 d;
    u32 e;
} S_02044a98;

extern S_02044a98 data_0213f2d0;
extern void func_0210c5dc(void *);
extern void func_021168f8(void *, void *);
extern void func_020a994c(void *);
extern void func_020a98a0(void *);
extern void func_020a9544(void *);
extern void func_020a9610(void *, u32, u32, u32, u32, u32);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
extern void func_02044aec(void *, u16);
u32 func_02044f70(void) {
    return data_021600b0[1];
}
