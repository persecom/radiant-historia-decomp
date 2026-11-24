/* 2 functions from 0x0206A158 to 0x0206A854 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s8 data[30][6];
} Unk_0213fd38;

extern const Unk_0213fd38 data_0213fd38;
extern u8 *data_021600e8;

extern u8 *func_02067674(void);
extern void func_021167f0(void *, void *);
void func_0206a75c(u8 *arg0) {
    Unk_0213fd38 local = data_0213fd38;
    u16 i;

    for (i = 0; i < 30; i++) {
        u8 *entry = func_02067674();
        u16 idx = i * 6;
        *(s8 *)(entry + 0xc) = ((s8 *)local.data)[idx + 0];
        *(s8 *)(entry + 0xd) = ((s8 *)local.data)[idx + 1];
        *(s8 *)(entry + 0xe) = ((s8 *)local.data)[idx + 2];
        *(s8 *)(entry + 0xf) = ((s8 *)local.data)[idx + 3];
        *(s16 *)(entry + 0x10) = ((s8 *)local.data)[idx + 4];
        *(s16 *)(entry + 0x12) = ((s8 *)local.data)[idx + 5];
        *(s32 *)(entry + 0x14) = *(s16 *)(entry + 0x10) << 12;
        *(s32 *)(entry + 0x18) = *(s16 *)(entry + 0x12) << 12;
        *(u16 *)(entry + 0x2a) = i;
        *(s32 *)(entry + 0x30) = 0;
        func_021167f0(arg0 + 0x54, entry);
    }
    *(u16 *)(arg0 + 0x1c) = 6;
    *(u16 *)(arg0 + 0x26) = 0x60;
    func_021167f0(data_021600e8 + 0x48, arg0);
}
