/* 3 functions from 0x02014994 to 0x02015994 (main), found by ds-decomp. */
#include "common.h"
typedef struct { u8 padding,sign,unk2,alternate,unk4,conversion; u16 unk6; s32 width,precision; } FormatSpec;
typedef struct { u8 c[5]; } FormatText5;
typedef struct { u8 c[4]; } FormatText4;
extern u8 data_02145e54[],data_02145e5c[],data_02145e64[],data_02145e68[],data_02145e6c[],data_02145e74[],data_02145e7c[],data_02145e80[];
extern const u16 data_0213eb14[];
extern void func_02019580(void *,double,void *);
extern void func_02014880(u8 *,s32);

typedef struct {
    u8 *field_0;
    u32 field_4;
    u32 field_8;
} Unk_02015950;
extern void func_02013858(u8 *, void *, s32);

s32 func_02015950(Unk_02015950 *arg0, void *arg1, u32 arg2) {
    if (arg0->field_8 + arg2 > arg0->field_4) {
        arg2 = arg0->field_4 - arg0->field_8;
    }
    func_02013858(arg0->field_0 + arg0->field_8, arg1, arg2);
    arg0->field_8 += arg2;
    return 1;
}
