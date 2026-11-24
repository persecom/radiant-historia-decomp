/* 8 functions from 0x0206E7A0 to 0x0206ED38 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u32 x;
    u32 y;
    u32 z;
} UnkVec12;

typedef struct {
    u32 unk0[6];
} UnkStruct24;

extern u8 *data_021600e8;
extern u32 data_02155c3c;

extern void *func_020675e4(u32, u16);
extern void *func_0210c594(u32, u32);
extern void func_0206b3c0(void *);
extern void func_0210c5dc(void *);
extern void func_021167f0(void *, void *);
extern void func_0206e7a0(u8, void *, void *, u16);

void func_0206ed00(u16 arg0) {
    u8 *p = *(u8 **)(data_021600e8 + 0x48);
    while (p != NULL) {
        if (*(u16 *)(p + 0x50) == arg0) {
            *(u32 *)(p + 0x44) = 0;
        }
        p = *(u8 **)(p + 0x64);
    }
}
