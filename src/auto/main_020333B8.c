/* 1 function from 0x020333B8 to 0x0203447C (main), found by ds-decomp. */
#include "common.h"

extern u32 data_02160a74;
extern u32 data_02160244;
extern u32 data_02160204;
extern u32 data_02160258;
extern u32 data_02160a6c;

typedef struct {
    u16 unk0;
    s16 unk2;
    u8 pad[4];
    u16 unk8;
} RHState;

typedef struct {
    u8 pad[0x8c];
    RHState *state;
} RHObj;

typedef struct {
    u8 pad[0x128];
    RHObj *obj;
} RHArg;
