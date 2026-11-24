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
