/* 3 functions from 0x0208EEF4 to 0x0208FA4C (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    s16 data[10];
} Unk_0208f7a0_10;

extern const Unk_0208f7a0_10 data_02141044;
extern const Unk_0208f7a0_10 data_02141030;
extern u8 *data_0216010c;
extern void func_02092814(s32, s32, s16, s16, s16, s16, s16);
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
extern void func_0208da7c(s16, s32, s16, s16, s16, s16, s16);
extern void func_020922f8(s32, s32, s32, s32, s16, s16, s16, s16, s16, s16, s16, s16, s16);

void func_0208f7a0(s16 arg0, s16 arg1, s16 arg2, s32 arg3) {
    Unk_0208f7a0_10 s1 = data_02141044;
    Unk_0208f7a0_10 s2 = data_02141030;

    func_02092814(6, 2, arg0, arg1, 0xc8, 0x20, arg2);
    s1.data[5] = arg0;
    s1.data[6] = arg1 + 3;
    s1.data[7] = arg2 + 1;

    switch (*(u8 *)(data_0216010c + arg3 * 0x40 + 0x489c)) {
    case 0:
        func_020a3bbc(0x46);
        break;
    case 1:
        func_020a3bbc(0x47);
        break;
    case 2:
        func_020a3bbc(0x48);
        break;
    case 3:
        func_020a3bbc(0x56);
        break;
    }
    func_021098ac(&s1);

    if (*(s16 *)(data_0216010c + arg3 * 0x40 + 0x4890) >= 10) {
        func_0208da7c(0x3d, (u8)(*(s16 *)(data_0216010c + arg3 * 0x40 + 0x4890) / 10),
                      arg0 + 0x56, arg1 + 0x13, 8, 10, arg2 + 2);
        func_0208da7c(0x3d, (u8)(*(s16 *)(data_0216010c + arg3 * 0x40 + 0x4890) % 10),
                      arg0 + 0x5e, arg1 + 0x13, 8, 10, arg2 + 2);
    } else {
        func_0208da7c(0x3d, (u8)*(s16 *)(data_0216010c + arg3 * 0x40 + 0x4890),
                      arg0 + 0x5a, arg1 + 0x13, 8, 10, arg2 + 2);
    }

    func_020a3bbc(0x55);
    s2.data[5] = arg0 + 0x36;
    s2.data[6] = arg1 + 0x13;
    s2.data[7] = arg2 + 1;
    func_021098ac(&s2);
    func_020922f8(8, 0, (s16)(arg0 + 0x4f), (s16)(arg1 + 0x13), 0x1e, 0xb, 8, 0xe, 4, 4, 4, 4, arg2 + 1);
}
