/* 9 functions from 0x0202A5A4 to 0x0202B4D8 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u8 pad[0x70];
    u32 field_70;
} Unk_02160244;

typedef struct {
    u8 pad[0x74];
    u8 field_74;
} Unk_0202B3D4_74;

typedef struct {
    u8 pad[0x128];
    Unk_0202B3D4_74 *ptr_128;
} Unk_0202B3D4;

extern Unk_02160244 *data_02160244;
