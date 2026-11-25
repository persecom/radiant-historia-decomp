/* 5 functions from 0x020938B0 to 0x020948AC (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160110;
extern u32 data_02155c3c;
extern void func_0210c5dc(void *);
extern s32 func_020a2c5c(s32, s32, s32, s32, s32);
extern void *func_0210c594(u32, u32);
extern u8 *func_020935ec(u8 *, s32);
void func_020938b0(u8 *arg0, u8 arg1, s32 arg2) {
    arg0[0x13] = arg1;
    if (arg1 == 1) {
        u8 *p = func_020935ec(arg0, arg2);
        if (p == NULL) {
            return;
        }
        switch (arg2) {
        case 2:
            *(s32 *)(p + 8) += 0x18;
            break;
        case 3:
            *(s32 *)(p + 8) += 0x30;
            break;
        case 4:
            *(s32 *)(p + 8) += 0x14;
            break;
        case 5:
            *(s32 *)(p + 8) += 0x34;
            break;
        case 6:
            *(s32 *)(p + 8) += 0x14;
            break;
        case 7:
            *(s32 *)(p + 8) += 0x3a;
            break;
        case 0xe:
            *(s32 *)(p + 8) += 0x3a;
            break;
        case 0xf:
            *(s32 *)(p + 8) += 0xa2;
            break;
        case 0x10:
            *(s32 *)(p + 8) += 0x49;
            break;
        case 0x11:
            *(s32 *)(p + 8) += 0x88;
            break;
        case 0x12:
            *(s32 *)(p + 8) += 0xc7;
            break;
        case 0x17:
            *(s32 *)(p + 0xc) += 6;
            *(s32 *)(p + 8) += 0x58;
            break;
        case 0x18:
            *(s32 *)(p + 0xc) += 6;
            *(s32 *)(p + 8) += 0x78;
            break;
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
            *(s32 *)(p + 0xc) += 1;
            *(s32 *)(p + 8) += (arg2 - 0x19) * 0x20;
            break;
        case 0x1e:
            *(s32 *)(p + 0xc) += 4;
            *(s32 *)(p + 8) += 0x3e;
            break;
        case 0x1f:
        case 0x20:
        case 0x21:
            *(s32 *)(p + 0xc) -= 0xc;
            *(s32 *)(p + 8) += (arg2 - 0x1f) * 0x20 + 0x46;
            break;
        case 0x22:
        case 0x23:
            *(s32 *)(p + 0xc) += 4;
            *(s32 *)(p + 8) += (arg2 - 0x22) * 0x10 + 0xa6;
            break;
        case 0x2e:
        case 0x2f:
            *(s32 *)(p + 0xc) += 5;
            *(s32 *)(p + 8) += (arg2 - 0x2e) * 0x20 + 0x57;
            break;
        case 0x77:
            *(s32 *)(p + 8) += 0x4b;
            *(s32 *)(p + 0xc) += 1;
            break;
        case 0x78:
            *(s32 *)(p + 8) += 0x6b;
            *(s32 *)(p + 0xc) += 1;
            break;
        case 0x79:
            *(s32 *)(p + 8) += 0x8b;
            *(s32 *)(p + 0xc) += 1;
            break;
        case 0x7a:
            *(s32 *)(p + 8) += 0xab;
            *(s32 *)(p + 0xc) += 1;
            break;
        case 0x7c:
            *(s32 *)(p + 8) += 4;
            *(s32 *)(p + 0xc) += 4;
            break;
        case 0x7d:
            *(s32 *)(p + 0xc) += 4;
            break;
        case 0x7e:
            if (*(s16 *)(data_02160110 + 0xce) == *(u16 *)arg0) {
                *(s32 *)(p + 8) += 0x87;
                *(s32 *)(p + 0xc) -= 3;
            } else if (func_020935ec(arg0, 0x77) != NULL) {
                *(s32 *)(p + 8) += 0xac;
                *(s32 *)(p + 0xc) -= 2;
            } else {
                *(s32 *)(p + 8) += 0x36;
                *(s32 *)(p + 0xc) -= 2;
            }
            break;
        }
    } else if (arg1 == 3) {
        u8 *p = func_020935ec(arg0, arg2);
        if (p == NULL) {
            return;
        }
        switch (arg2) {
        case 0x32:
            *(s32 *)(p + 0xc) += 1;
            *(s32 *)(p + 8) += 0xb;
            break;
        case 0x33:
            *(s32 *)(p + 0xc) += 1;
            *(s32 *)(p + 8) += 0x2b;
            break;
        case 0x34:
            *(s32 *)(p + 0xc) += 1;
            *(s32 *)(p + 8) += 0x46;
            break;
        case 0x35:
        case 0x36:
            *(s32 *)(p + 0xc) += 1;
            *(s32 *)(p + 8) += (arg2 - 0x35) * 0x10 + 0x4e;
            break;
        case 0x37:
            *(s32 *)(p + 0xc) += 1;
            *(s32 *)(p + 8) += 0x6e;
            break;
        case 0x38:
        case 0x39:
            *(s32 *)(p + 0xc) += 2;
            *(s32 *)(p + 8) += (arg2 - 0x38) * 0x10 + 0x52;
            break;
        }
    } else if (arg1 == 4) {
        u8 *p = func_020935ec(arg0, arg2);
        if (p == NULL) {
            return;
        }
        switch (arg2) {
        case 0x1f:
        case 0x20:
        case 0x21:
            *(s32 *)(p + 0xc) -= 0x10;
            *(s32 *)(p + 8) += (arg2 - 0x1f) * 0x20 + 8;
            break;
        case 0x22:
        case 0x23:
            *(s32 *)(p + 8) += (arg2 - 0x22) * 0x10 + 0x68;
            break;
        case 0x3a:
        case 0x3b:
        case 0x3c:
            *(s32 *)(p + 0xc) += 2;
            *(s32 *)(p + 8) += (arg2 - 0x3a) * 0x10 + 0x2c;
            break;
        case 0x3d:
        case 0x3e:
            *(s32 *)(p + 0xc) += 2;
            *(s32 *)(p + 8) += (arg2 - 0x3d) * 0x10 + 0x30;
            break;
        case 0x3f:
        case 0x40:
        case 0x41:
            *(s32 *)(p + 0xc) += 1;
            *(s32 *)(p + 8) += (arg2 - 0x3f) * 0x10 + 0x2c;
            break;
        case 0x42:
            *(s32 *)(p + 0xc) += 2;
            *(s32 *)(p + 8) += 0x30;
            break;
        case 0x43:
        case 0x44:
            *(s32 *)(p + 0xc) += 2;
            *(s32 *)(p + 8) += (arg2 - 0x43) * 0x20 + 0x18;
            break;
        case 0x45:
            *(s32 *)(p + 0xc) += 2;
            *(s32 *)(p + 8) += 0x58;
            break;
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
            *(s32 *)(p + 0xc) += 2;
            *(s32 *)(p + 8) += (arg2 - 0x46) * 0x10 + 0x22;
            break;
        }
    } else if (arg1 == 5) {
        u8 *p = func_020935ec(arg0, arg2);
        if (p == NULL) {
            return;
        }
        switch (arg2) {
        case 0x4b:
        case 0x4c:
        case 0x4d:
            *(s32 *)(p + 8) += (arg2 - 0x4b) * 0x20 + 8;
            break;
        case 0x4e:
        case 0x4f:
            *(s32 *)(p + 8) += (arg2 - 0x4b) * 0x20 - 0xf;
            break;
        case 0x80:
            *(s32 *)(p + 8) += 0x20;
            break;
        }
    }
}

s32 func_02094700(void) {
    u8 *p = data_02160110;
    if (func_020a2c5c(4, 13, 0, 101, 7) == 0) {
        return 0;
    }
    if (*(u8 **)(p + 0x14) == NULL) {
        u32 *buf = (u32 *)func_0210c594(8, data_02155c3c);
        *(u32 **)(p + 0x14) = buf;
        buf[0] = 0;
        (*(u32 **)(p + 0x14))[1] = 0;
    }
    return 1;
}

void func_02094774(void) {
    u8 *p = data_02160110;
    if (*(u8 **)(p + 0x14) != NULL) {
        func_0210c5dc(*(u8 **)(p + 0x14));
        *(u8 **)(p + 0x14) = NULL;
    }
}

void func_020947a0(void) {
    u8 *p = data_02160110;
    if (p != NULL) {
        u32 *q = *(u32 **)(p + 0x14);
        *(volatile u32 *)0x04001010 = (q[0] & 0x1ff) | ((q[1] << 16) & 0x01ff0000);
    }
}

extern void *func_020a8844(s32, s32, s32, s32);
extern void *func_020a94b8(void *);
extern u8 data_0214888c[12];
extern u8 data_02148898[12];
extern u8 data_021488a4[12];
void func_020947e8(void) {
    u8 *p = data_02160110;
    u16 i;
    *(void **)(p + 0x40) = func_020a8844(0x20, 0x1c0, 0x10, 2);
    *(void **)(p + 0x18) = func_020a94b8(data_0214888c);
    for (i = 1; i < 9; i++) {
        *(void **)(p + 0x40 + i * 4) = func_020a8844(0x20, ((i - 1) << 6) + 0x10, 0x10, 2);
        *(void **)(p + 0x18 + i * 4) = func_020a94b8(data_02148898);
    }
    *(void **)(p + 0x64) = func_020a8844(0x20, 0x180, 0x10, 2);
    *(void **)(p + 0x3c) = func_020a94b8(data_021488a4);
}

