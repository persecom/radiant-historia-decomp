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

typedef struct {
    u16 unk0;
    u16 unk2;
} UnkPair_021430cc;

typedef struct {
    void *unk0;
    u32 unk4;
    void *unk8;
    u32 unkc;
} UnkStruct_020a473c;

extern UnkPair_021430cc data_021430cc[5];
extern u32 data_02155c3c;
extern UnkStruct_020a473c *data_02160130;
extern char data_0214fe18[];
extern char data_0214fe38[];
extern char data_0214fe40[];
extern void *func_0210c594(s32, u32);
extern void *func_02109c60(char *, u32 *);
extern void func_02005e80(char *, const char *, ...);

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
    UnkStruct_020a3bbc *p = *(UnkStruct_020a3bbc **)((u8 *)*data_0216012c + 0x30);
    *(volatile u32 *)0x040004a8 = (u32)(p[arg0].unk4 >> 3) | (p[arg0].unk18 << 26) |
                                  (1 << 30) | (p[arg0].unk10 << 20) |
                                  (p[arg0].unk14 << 23) | (1 << 29);
    *(volatile u32 *)0x040004ac = (u32)(p[arg0].unkc >> (4 - (p[arg0].unk18 == 2)));
    *(volatile u32 *)0x04000480 = 0x7fff;
}

void func_020a3c54(s32 arg0) {
    UnkStruct_020a3bbc *p = *(UnkStruct_020a3bbc **)((u8 *)*data_0216012c + 0x30);
    *(volatile u32 *)0x040004a8 = (u32)(p[arg0].unk4 >> 3) | (p[arg0].unk18 << 26) |
                                  (1 << 30) | (p[arg0].unk10 << 20) |
                                  (p[arg0].unk14 << 23);
    *(volatile u32 *)0x040004ac = (u32)(p[arg0].unkc >> (4 - (p[arg0].unk18 == 2)));
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

