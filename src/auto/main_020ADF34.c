/* 23 functions from 0x020ADE8C to 0x020AEDC0 (main), found by ds-decomp. */
#include "common.h"

typedef struct Unk_02150788 {
    u32 field_0;
    u32 field_4;
    u32 field_8;
    u32 field_c;
    u32 field_10;
} Unk_02150788;

extern Unk_02150788 data_02150788[];
extern void func_02008f74(void *, s32, u32);
extern void *func_020ade60(s32);
extern u8 *func_0203be10(s32);
extern s32 func_0203be60(u8 *, s32, s32);
extern void func_020aed5c(s32);
extern void func_020aea1c(void);
extern void func_020ae530(void);
extern void func_0203be4c(void *);
extern void func_021098ac(void *);

void func_020adf34(void **arg0) {
    s32 i;
    u8 *obj;
    Unk_02150788 *entry;
    for (i = 0; ; i++) {
        entry = &data_02150788[i];
        if (entry->field_0 == 0) {
            return;
        }
        obj = func_0203be10(1);
        func_0203be60(obj, entry->field_0, entry->field_4 ? entry->field_4 : entry->field_0);
        *(u32 *)(obj + 0x10) = entry->field_8;
        *(u32 *)(obj + 0x14) = entry->field_c;
        *(u32 *)(obj + 0x18) = entry->field_10;
        arg0[i] = obj;
    }
}
