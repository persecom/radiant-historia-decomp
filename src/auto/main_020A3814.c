/* 10 functions from 0x020A3814 to 0x020A47C8 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkc;
    u32 unk10;
    u32 unk14;
    u32 unk18;
} UnkStruct_020a3bbc;

extern void **data_0216012c;
extern void func_0203c168(void *);
extern void func_0210c5dc(void *);
extern void func_021098ac(void *);
void func_020a3b84(void) {
    func_0203c168(*data_0216012c);
    if (data_0216012c != NULL) {
        func_0210c5dc(data_0216012c);
        data_0216012c = NULL;
    }
}

void func_020a3bb8(void) {
}

void func_020a3bbc(s32 arg0) {
    u8 *base = *(u8 **)((u8 *)*data_0216012c + 0x30);
    *(volatile u32 *)0x040004a8 = (*(u32 *)(base + arg0 * 0x1c + 4) >> 3) |
                                  (*(u32 *)(base + arg0 * 0x1c + 0x18) << 26) |
                                  0x40000000 |
                                  (*(u32 *)(base + arg0 * 0x1c + 0x10) << 20) |
                                  (*(u32 *)(base + arg0 * 0x1c + 0x14) << 23) |
                                  0x20000000;
    *(volatile u32 *)0x040004ac = *(u32 *)(base + arg0 * 0x1c + 0xc) >>
                                  (4 - (*(u32 *)(base + arg0 * 0x1c + 0x18) == 2));
    *(volatile u32 *)0x04000480 = 0x7fff;
}

void func_020a3c54(s32 arg0) {
    u8 *base = *(u8 **)((u8 *)*data_0216012c + 0x30);
    *(volatile u32 *)0x040004a8 = (*(u32 *)(base + arg0 * 0x1c + 4) >> 3) |
                                  (*(u32 *)(base + arg0 * 0x1c + 0x18) << 26) |
                                  0x40000000 |
                                  (*(u32 *)(base + arg0 * 0x1c + 0x10) << 20) |
                                  (*(u32 *)(base + arg0 * 0x1c + 0x14) << 23);
    *(volatile u32 *)0x040004ac = *(u32 *)(base + arg0 * 0x1c + 0xc) >>
                                  (4 - (*(u32 *)(base + arg0 * 0x1c + 0x18) == 2));
    *(volatile u32 *)0x04000480 = 0x7fff;
}

void func_020a3ce8(s16 *arg0) {
    s16 sp[10];
    sp[1] = arg0[0];
    sp[2] = arg0[1];
    sp[3] = arg0[2];
    sp[4] = arg0[3];
    sp[5] = arg0[4];
    sp[6] = arg0[5];
    sp[7] = arg0[6];
    if ((arg0[7] != 0 && arg0[7] != arg0[2]) || (arg0[8] != 0 && arg0[8] != arg0[3])) {
        sp[0] = 1;
        sp[8] = arg0[7];
        sp[9] = arg0[8];
    } else {
        sp[0] = 0;
        sp[8] = arg0[2];
        sp[9] = arg0[3];
    }
    func_021098ac(sp);
}

