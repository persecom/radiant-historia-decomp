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

void func_0202b398(void) {
    data_02160244->field_70 = 0;
}

s32 func_0202b3b0(s32 arg0) {
    if (data_02160244->field_70 & (1 << arg0)) {
        return 0;
    }
    return 1;
}

void func_0202b3d4(Unk_0202B3D4 *arg0, u8 arg1) {
    arg0->ptr_128->field_74 = arg1;
    data_02160244->field_70 |= 1 << arg1;
}

void func_0202b3fc(u8 arg0) {
    data_02160244->field_70 |= 1 << arg0;
}

extern u8 *func_0202c7d8(s32);
extern u8 *data_02160a6c;
void func_0202b41c(void) {
    u8 i;
    if (data_02160a6c == NULL) {
        return;
    }
    for (i = 0; i < 9; i++) {
        u8 *res = func_0202c7d8((s8)i);
        if (res != NULL) {
            switch (*(u8 *)(*(u8 **)(res + 0x118) + 0x54)) {
            case 0:
                func_0202b3fc(i);
                break;
            case 1:
                func_0202b3fc(i);
                func_0202b3fc(i + 1);
                break;
            case 2:
                func_0202b3fc(i);
                func_0202b3fc(i - 3);
                break;
            case 3:
                func_0202b3fc(i);
                func_0202b3fc(i - 3);
                func_0202b3fc(i + 1);
                func_0202b3fc(i - 2);
                break;
            }
        }
    }
}

