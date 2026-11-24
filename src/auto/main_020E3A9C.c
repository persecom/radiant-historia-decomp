/* 11 functions from 0x020E3A9C to 0x020E4A78 (main), found by ds-decomp. */
#include "common.h"

void func_021098ac(void *);
s32 func_020df38c(s32, s32);
void func_020a3bbc(s32);

typedef struct {
    s16 data[10];
} UnkBuf10_020e3f30;

typedef struct {
    s16 data[30];
} UnkBuf30_020e3f30;

extern const UnkBuf10_020e3f30 data_021449e8;
extern const UnkBuf10_020e3f30 data_021449fc;
extern const UnkBuf30_020e3f30 data_02144a24;
void func_020e3db4(u16 *arg0, s32 arg1, s32 arg2) {
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0x7d;
    arg0[4] = 0xf;
    arg0[8] = 0x7d;
    arg0[9] = 0xf;
    arg0[5] = arg1;
    arg0[6] = arg2;
    func_021098ac(arg0);

    arg0[1] = 0x68;
    arg0[2] = 0;
    arg0[3] = 0x18;
    arg0[4] = 0xf;
    arg0[8] = 0x18;
    arg0[9] = 0xf;
    arg0[5] = arg1 + 0x7d;
    arg0[6] = arg2;
    func_021098ac(arg0);
}

void func_020e3e2c(s16 arg0, s16 arg1, s32 arg2) {
    UnkBuf10_020e3f30 other;
    s16 i;

    other = data_021449fc;
    other.data[7] = 0x2cb;
    other.data[2] = 0;
    other.data[3] = 7;
    other.data[8] = 7;
    other.data[4] = 8;
    other.data[9] = 8;

    for (i = 0; i < 2; i++) {
        if (i == 0) {
            other.data[1] = (arg2 % 10) * 7;
        } else if (i == 1) {
            other.data[1] = ((arg2 / 10) % 10) * 7;
        }
        other.data[5] = arg0 - i * 7;
        other.data[6] = arg1;
        func_021098ac(other.data);
    }
}

void func_020e3f30(s32 arg0, s32 arg1, s32 arg2) {
    UnkBuf10_020e3f30 other;
    UnkBuf30_020e3f30 buf;
    s16 i;

    other = data_021449e8;
    buf = data_02144a24;
    func_020a3bbc(0x21);
    other.data[7] = arg2;
    for (i = 0; i < 3; i++) {
        s16 idx = i * 10;
        other.data[1] = buf.data[idx + 1];
        other.data[2] = buf.data[idx + 2];
        other.data[3] = buf.data[idx + 3];
        other.data[4] = buf.data[idx + 4];
        other.data[5] = arg0 + buf.data[idx + 5];
        other.data[6] = arg1 + buf.data[idx + 6];
        other.data[8] = buf.data[idx + 8];
        other.data[9] = buf.data[idx + 9];
        func_021098ac(other.data);
    }
}

void func_020e4028(u16 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 offset = 0;
    if (arg1 == 1) {
        func_020a3bbc(0x15);
        offset = 1;
    } else if (arg1 == 0) {
        func_020a3bbc(0x14);
    }
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0x14;
    arg0[4] = 0x14;
    if (arg3 == 0) {
        arg0[5] = offset + 0x47;
        arg0[6] = offset + 1;
    } else if (arg3 == 1) {
        arg0[5] = offset + 4;
        arg0[6] = offset + 0x82;
    } else if (arg3 == 2) {
        arg0[5] = offset + 4;
        arg0[6] = offset + 0x83;
    } else if (arg3 == 3) {
        arg0[5] = offset + 4;
        arg0[6] = offset + 0x17;
    } else if (arg3 == 4) {
        arg0[5] = offset + 4;
        arg0[6] = offset + 0x80;
    }
    arg0[7] = arg2;
    arg0[8] = 0x14;
    arg0[9] = 0x14;
    func_021098ac(arg0);
}

void func_020e410c(u16 *arg0, s32 arg1, s32 arg2) {
    s32 offset = 0;
    if (arg2 == 0) {
        if (func_020df38c(3, 2) != 0) {
            func_020a3bbc(0x77);
            offset = 1;
        } else {
            func_020a3bbc(0x76);
        }
    } else {
        func_020a3bbc(0x78);
    }
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0x54;
    arg0[4] = 0xe;
    arg0[8] = 0x54;
    arg0[9] = 0xe;
    arg0[5] = offset + 0x76;
    arg0[6] = offset + 4;
    arg0[7] = arg1;
    func_021098ac(arg0);
}

void func_020e419c(u16 *arg0, s32 arg1) {
    s32 offset;
    if (func_020df38c(3, 0x4000) != 0) {
        func_020a3bbc(0x2a);
        offset = 1;
    } else {
        func_020a3bbc(0x29);
        offset = 0;
    }
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0x2d;
    arg0[4] = 0xe;
    arg0[8] = 0x2d;
    arg0[9] = 0xe;
    arg0[5] = offset + 0xcf;
    arg0[6] = offset + 4;
    arg0[7] = arg1;
    func_021098ac(arg0);
}

void func_020e43e4(u16 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0x10;
    arg0[4] = 0x10;
    arg0[8] = 0x10;
    arg0[9] = 0x10;
    arg0[5] = arg1;
    arg0[6] = arg2;
    arg0[7] = arg3;
    func_021098ac(arg0);
}
