/* 35 functions from 0x02134F44 to 0x02135F40 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_021759b4[256];
extern u32 data_021759ac[2];
extern void func_02013878(void *, s32, u32);
extern void func_0213689c(void *);
extern s32 func_02134c94(u8 *);
extern void func_02134f44(u8 *);
extern s32 func_02134edc(u8 *);
extern s32 func_02136930(void *);
extern void func_02134cb4(u8 *, s32, s32);
extern void func_02135920(void);
extern void func_02135960(u8 *, s32, s32);
extern void func_02135984(u8 *, s32, s32);

typedef struct {
    s8 field_0;
    u8 field_1[0xab];
} Unk_021756d8;
extern Unk_021756d8 data_021756d8[4];

extern void func_0213807c(void);
void func_0213545c(u8 *arg0) {
    s32 i = 0;
    s32 n = ((s8)arg0[4] >= 1 && (s8)arg0[3] == 1 && (s8)arg0[2] == 2) ? 2 : (s8)arg0[3];
    for (; i < n; i++) {
        func_0213689c(((void **)(arg0 + 0x20))[i]);
    }
}

void func_021354ac(u8 *arg0) {
    if (func_02134c94(arg0) == 1) {
        func_02134f44(arg0);
        return;
    }
    if (func_02134edc(arg0) != 1) {
        return;
    }
    if (*(u16 *)(arg0 + 0x2c) != 0) {
        func_02134f44(arg0);
        return;
    }
    func_0213545c(arg0);
    if (func_02136930(*(void **)(arg0 + 0x20)) != 0) {
        return;
    }
    arg0[6] = 0;
    func_02134cb4(arg0, 0, 0);
}

void func_0213551c(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (data_021756d8[i].field_0 == 1) {
            func_021354ac((u8 *)&data_021756d8[i]);
        }
    }
}

void func_02135558(u8 *arg0, u8 arg1) {
    if (arg0 != 0) {
        arg0[3] = arg1;
    }
}

void func_02135650(u8 *arg0) {
    s32 i;
    if (arg0 == NULL) {
        return;
    }
    func_02135920();
    for (i = 0; i < *(s8 *)(arg0 + 2); i++) {
        func_02135960(arg0, i, 0);
    }
}

void func_02135698(u8 *arg0, s32 arg1, s32 arg2) {
    s32 val;
    s32 min = -15;
    if (arg0 == NULL || arg1 >= *(s8 *)(arg0 + 2)) {
        return;
    }
    if (arg2 >= 15) {
        arg2 = 15;
    }
    val = (s16)arg2;
    if (val <= min) {
        val = min;
    }
    *(s16 *)(arg0 + arg1 * 2 + 0x1a) = (s16)val;
    if (*(s8 *)(arg0 + 4) >= 1 && *(s8 *)(arg0 + 3) == 1 && *(s8 *)(arg0 + 2) == 2) {
        func_02135984(arg0, 0, -15);
        func_02135984(arg0, 1, 15);
    } else {
        func_02135984(arg0, arg1, *(s16 *)(arg0 + arg1 * 2 + 0x1a));
    }
}

void func_02135724(u16 *arg0, u16 arg1) {
    if (arg0 != 0) {
        arg0[7] = arg1;
    }
}

void func_02135730(u8 *arg0) {
    if (arg0 != NULL) {
        arg0[1] |= 4;
    }
}

s32 func_02135744(u8 *arg0) {
    return (arg0[1] & 8) == 8;
}

void func_021357dc(u8 **arg0, u8 arg1) {
    arg0[3][4] = arg1;
}

void func_02135c00(void) {
    func_0213807c();
}

extern void func_0213808c(void);
void func_02135c0c(void) {
    func_0213808c();
}

void func_02135c18(void) {
    func_02013878(data_021759b4, 0, 0x100);
    data_021759ac[1] = 0;
    data_021759ac[0] = 0;
}

void func_02135c48(void) {
    func_02013878(data_021759b4, 0, 0x100);
    data_021759ac[1] = 0;
    data_021759ac[0] = 0;
}

extern void func_0212a9dc(void);
extern void func_0212a9e8(void);
extern void func_02114728(u8 *, s16);
extern void func_02114794(u8 *, s32, s16);
void func_02135c78(u32 arg0, u32 arg1) {
    data_021759ac[1] = arg0;
    data_021759ac[0] = arg1;
}

void func_02135d20(void) {
}

s16 func_02135d94(u8 *arg0) {
    return *(s16 *)(arg0 + 0x26);
}

