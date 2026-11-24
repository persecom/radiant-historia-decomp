/* 8 functions from 0x0205317C to 0x02054118 (main), found by ds-decomp. */
#include "common.h"

extern s32 func_02054e14(void *);
extern s32 func_020552e4(void *);
typedef struct { s32 x, y, z; } Vec3_0205366c;
extern u8 *data_021600ac;
extern s32 func_0210c2f4(void *, void *);
extern void func_02052240(void *);
extern s32 func_02054330(void *);
extern s32 func_020541d8(void *);
extern void func_02054d5c(void *);
extern void func_020546c0(void *, s32);
extern void func_02055564(void *, s32);
extern void func_020477dc(void *, s32, s32);

void func_0205366c(u8 *arg0) {
    u8 *r5 = *(u8 **)(arg0 + 0xd0);

    switch (r5[0x28]) {
        case 0:
            if (func_0210c2f4(arg0, *(void **)(data_021600ac + 0x68)) > 0x80000 ||
                func_0210c2f4(arg0 + 0x18, *(void **)(data_021600ac + 0x68)) > 0x80000) {
                *(Vec3_0205366c *)arg0 = *(Vec3_0205366c *)(arg0 + 0x18);
                func_02052240(arg0);
                r5[1] = 1;
                if (*(u16 *)(r5 + 0x26) == 0x20 || *(u16 *)(r5 + 0x26) == 0x21 ||
                    *(u16 *)(r5 + 0x26) == 0x2a || *(u16 *)(r5 + 0x26) == 0x2b) {
                    *(u16 *)(r5 + 6) = 0;
                }
            } else {
                r5[1] = 1;
            }
            break;

        case 1:
            if (func_02054330(arg0) != 0) {
                r5[1] = 3;
                *(u16 *)(r5 + 4) = 0;
                r5[0xd] = 1;
                return;
            }
            if (func_020541d8(arg0) != 0) {
                r5[1] = 2;
                *(u16 *)(r5 + 4) = 0;
                r5[0xd] = 1;
                func_02054d5c(arg0);
                return;
            }
            if (r5[8] == 0) {
                if (r5[0xb] == 0) {
                    *(Vec3_0205366c *)(arg0 + 0x24) = *(Vec3_0205366c *)(arg0 + 0x18);
                } else {
                    func_020546c0(arg0, *(u16 *)(r5 + 0x1c) / 3);
                }
                r5[0xb] = (u8)(r5[0xb] + 1) % 3;
            }
            func_02055564(arg0, r5[0x19]);
            if (func_0210c2f4(arg0, arg0 + 0x18) < (r5[0x19] << 12)) {
                func_020477dc(arg0, 2, 1);
                r5[1] = 1;
            }
            if (r5[8] == 0) {
                r5[1] = 1;
            }
            break;
    }
}

void func_02053d90(u8 *arg0) {
    u8 *r5 = *(u8 **)(arg0 + 0xd0);

    switch (r5[0x28]) {
        case 0:
            if (func_0210c2f4(arg0, *(void **)(data_021600ac + 0x68)) > 0x80000 ||
                func_0210c2f4(arg0 + 0x18, *(void **)(data_021600ac + 0x68)) > 0x80000) {
                *(Vec3_0205366c *)arg0 = *(Vec3_0205366c *)(arg0 + 0x18);
                func_02052240(arg0);
                r5[1] = 1;
                if (*(u16 *)(r5 + 0x26) == 0x20 || *(u16 *)(r5 + 0x26) == 0x21 ||
                    *(u16 *)(r5 + 0x26) == 0x2a || *(u16 *)(r5 + 0x26) == 0x2b) {
                    *(u16 *)(r5 + 6) = 0;
                }
            } else {
                r5[1] = 1;
            }
            break;

        case 1:
            if (r5[0] >= 90) {
            if (func_02054330(arg0) != 0) {
                r5[1] = 3;
                *(u16 *)(r5 + 4) = 0;
                r5[0xd] = 1;
                r5[0] = 0;
                return;
            }
            if (func_020541d8(arg0) != 0) {
                r5[1] = 2;
                *(u16 *)(r5 + 4) = 0;
                r5[0xd] = 1;
                r5[0] = 0;
                func_02054d5c(arg0);
                return;
            }
            }
            if (r5[8] == 0) {
                if (r5[0xb] == 0) {
                    *(Vec3_0205366c *)(arg0 + 0x24) = *(Vec3_0205366c *)(arg0 + 0x18);
                } else {
                    func_020546c0(arg0, *(u16 *)(r5 + 0x1c) / 3);
                }
                r5[0xb] = (u8)(r5[0xb] + 1) % 3;
            }
            func_02055564(arg0, r5[0x19]);
            if (func_0210c2f4(arg0, arg0 + 0x18) < (r5[0x19] << 12)) {
                func_020477dc(arg0, 2, 1);
                r5[1] = 1;
            }
            if (r5[8] == 0) {
                r5[1] = 1;
            }
            break;
    }
    if (r5[0] <= 150) r5[0]++;
}

