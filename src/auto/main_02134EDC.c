/* 31 functions from 0x02134134 to 0x02134F44 (main), found by ds-decomp. */
#include "common.h"
void func_02134cb4(u8 *, s32, s32);
void func_02134c00(u8 *, s32);
BOOL func_02134edc(u8 *);

extern void func_02135c78(void);
extern s32 func_02136930(void *);
extern void func_0200baa4(void *);
extern void func_02013878(void *, u32, u32);
extern s32 func_020138b8(void *, u32, u32);
extern s32 func_02016d50(u32, void *, u32 *, u32 *, u32 *);
extern u8 data_0215bc4c[];
extern u8 data_0215bc54[];
extern void func_0213807c(void);
extern void func_0213808c(void);
extern void func_0200bb10(void *, s32, s32);
extern void func_0200b8b4(void *);
extern s32 func_02133dd0(s32, void *);
extern u8 data_021756d8[];
extern u32 data_021756d4;
extern u8 data_02175998[];
extern u8 data_021759a0[];
typedef struct {
    u8 pad[0x2bc];
    s32 count;
    u8 pad2[8];
    u8 flags[8];
    void (*cb)(u8 *);
} Mgr_02134884;
extern void func_0200b888(u32 *);
extern s32 func_0200bc08(u32 *, u32);
extern s32 func_0200bc18(u32 *);
extern void func_0200baa4(void *);
extern void func_02134b34(u8 *);
extern void func_02135d20(void);
extern void func_02135c48(void);
extern void func_02135c18(void);
extern void func_02135ccc(void);
extern u8 data_02145aa4[];
extern void *data_0215be64;
extern u8 data_0215bd14[];
extern u8 data_0215bd2c[];
extern u8 data_0215bdd0[];
extern u8 data_0215be00[];
extern u8 data_0215be18[];
extern u8 data_0215be30[];
extern u8 data_0215be4c[];
BOOL func_02134c94(u8 *arg0);
s32 func_021343a0(u8 *, s32, s32);
s32 func_0213443c(u8 *);
void func_02134544(u8 *);

extern u8 data_0215bde8[24];

extern void func_021146b8(void *);

void func_02134cb4(u8 *,s32,s32);

BOOL func_02134edc(u8 *arg0) {
    if (arg0 == NULL) {
        return -1;
    }
    return (arg0[1] & 2) != 0;
}

s32 func_02134efc(void *arg0) {
    if (arg0 == NULL) {
        return -1;
    }
    return func_02136930(*(void **)((u8 *)arg0 + 0x20));
}

extern s32 func_02136944(void *);
s32 func_02134f18(void *arg0) {
    if (arg0 == NULL) {
        return -1;
    }
    return func_02136944(*(void **)((u8 *)arg0 + 0x20));
}

s32 func_02134f34(u8 *arg0) {
    if (arg0 == NULL) {
        return -1;
    }
    return arg0[6];
}

