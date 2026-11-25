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

s32 func_020333b8(RHArg *arg) {
    RHState *s = arg->obj->state;
    s32 ret = 0;
    switch (s->unk0) {
    case 0: break;
    case 1: break;
    case 2: break;
    case 3: break;
    case 4: break;
    case 5: break;
    case 6: break;
    case 7: break;
    case 8: break;
    case 9: break;
    case 10: break;
    case 11: break;
    case 12: break;
    case 13: break;
    case 14: break;
    case 15: break;
    case 16: break;
    case 17: break;
    case 18: break;
    case 19: break;
    case 20: break;
    case 21: break;
    case 22: break;
    case 23: break;
    case 24: break;
    }
    return ret;
}
