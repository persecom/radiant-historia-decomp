/* 13 functions from 0x020D28E4 to 0x020D3160 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u16 unk[7];
} Unk14;

typedef struct {
    u8 unk0;
    s8 unk1;
    s16 unk2;
} Unk3;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    u8 pad[0x10];
    s32 unk18;
    s32 unk1c;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2c;
    u8 pad2[0x64];
    u16 unk92;
} UnkA;

typedef struct {
    u8 pad[0x1a8];
    s32 unk1a8;
    s32 unk1ac;
    s32 unk1b0;
} UnkB;

extern const Unk14 data_02144910;
extern void *data_02160244;
extern const s16 data_0213a394[];
extern void func_021099f8(void *);
extern s16 func_020ddcb0(void *, void *);
extern void func_020ddd8c(void *);

void func_020d2a44(u8 arg0, s8 arg1, s16 arg2) {
    Unk14 buf = data_02144910;
    if (arg1 == 0) {
        buf.unk[6] = 0x7fff;
    } else if (arg1 == 1) {
        buf.unk[6] = 0;
    }
    *(volatile u32 *)0x040004A4 = (arg0 << 16) | 0xc0;
    buf.unk[3] = arg2;
    func_021099f8(&buf);
}

void func_020d2ac4(Unk3 *arg) {
    if (arg == NULL) return;
    if (arg->unk1 < 1 || arg->unk1 > 0x1f) return;
    func_020d2a44(arg->unk0, arg->unk1, arg->unk2);
}

void func_020d2b78(UnkA *a, UnkB *b, s32 c, s32 d) {
    s32 idx = c >> 4;
    a->unk18 = a->unk0;
    a->unk1c = a->unk4;
    a->unk20 = a->unk8;
    a->unk24 = b->unk1a8 + d * data_0213a394[idx * 2 + 1];
    a->unk28 = b->unk1ac;
    a->unk2c = b->unk1b0 + d * data_0213a394[idx * 2];
    a->unk92 = func_020ddcb0(a, &a->unk24);
    func_020ddd8c(a);
}

