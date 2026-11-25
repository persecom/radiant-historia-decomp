/* 1 function from 0x020B77D4 to 0x020B8718 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02155c3c;
extern s32 data_02162858[2];
extern s32 data_02162854;
extern u8 *data_021601ec;
extern u8 data_02151028[];
extern u16 data_02143b50[140];
extern u16 data_021439b4[16];

typedef struct {
    u16 unk00;
    s16 unk02;
    u16 unk04;
    s16 unk06;
    s16 unk08;
    s16 unk0a;
    s16 unk0c;
    s16 unk0e;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    s16 unk16;
    s16 unk18;
    s16 unk1a;
} EntryA_020b77d4;

typedef struct {
    u16 unk00;
    s16 unk02;
    s16 unk04;
    s16 unk06;
    s16 unk08;
    s16 unk0a;
    s16 unk0c;
    s16 unk0e;
} EntryB_020b77d4;

typedef struct {
    EntryA_020b77d4 a[10];
} TblA_020b77d4;

typedef struct {
    EntryB_020b77d4 a[2];
} TblB_020b77d4;

void func_020a2c20(void);
void func_021070c4(void);
void func_0210f6d4(void);
void *func_0210c594(s32, u32);
void func_0210d9e4(void *);
void func_0210db70(void *);
void func_0210dbd0(void *);
void func_020c992c(void);
void func_020c9a04(void *, s32);
void *func_020a94b8(void *);
void func_020a31c8(s32);
void func_02124e68(void *);
void func_0212501c(void *);
void func_020a2dd0(void);
void func_020a2e64(void);
u8 *func_020c9b24(void *, u16, u8);
void func_020c738c(u8 *, s16, s16);
void func_020c7894(u8 *, u8);
void func_021115b0(u8 *, s32);
void func_021115bc(u8 *, s32);
void func_021115f8(u8 *, s32, s32);
u8 *func_020c9c10(void *, s32);
void func_020c8640(u8 *, s32);
u8 *func_020c8adc(u8 *);
void func_020c8344(u8 *, s32, s32);
void func_020c83f4(u8 *, void *, s32, s32);
u8 *func_020c8b10(u8 *);
void func_020c8598(u8 *, s32);
void func_020c84e8(u8 *, s32, s32);
void func_02112e80(void);
void func_02113630(void *, void *);
