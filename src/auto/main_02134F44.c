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
extern s32 func_02135920();
extern s32 func_02135960(u8 *, s32, s32);
extern void func_02135984(u8 *, s32, s32);
extern u8 data_02175ab8[];
extern void func_021147e8(void *);
extern void func_0211470c(void *);
extern void func_02135f0c(void *, u16 *, u16 *);

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
    s16 val;
    s16 clamped;
    if (arg0 == NULL || arg1 >= *(s8 *)(arg0 + 2)) {
        return;
    }
    if (arg2 >= 15) {
        arg2 = 15;
    }
    val = arg2;
    clamped = (val <= -15) ? -15 : val;
    *(s16 *)(arg0 + arg1 * 2 + 0x1a) = clamped;
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

extern void func_0212a9dc(void);
extern void func_0212a9e8(void);
extern void func_02114728(u8 *, s16);
void func_0213575c(u8 *arg0, s32 arg1) {
    u8 val;
    if (arg0 == NULL) {
        return;
    }
    val = arg0[6];
    if (arg1 == ((arg0[1] & 8) == 8)) {
        return;
    }
    func_0212a9dc();
    arg0[1] = (arg0[1] & ~8) | (arg1 << 3);
    func_0212a9e8();
    if (val != 2) {
        return;
    }
    if (arg1 == 1) {
        func_02134cb4(arg0, 0, 0);
    } else {
        func_02134cb4(arg0, 1, 0);
    }
}

void func_021357dc(u8 **arg0, u8 arg1) {
    arg0[3][4] = arg1;
}

s32 func_02135920(u8 *arg0, s32 arg1) {
    s16 val = (arg1 >= 0) ? 0 : arg1;
    val = (-999 >= val) ? -999 : val;
    *(s16 *)(arg0 + 0x18) = val;
    func_02114728(arg0 + 0x34, val);
    return arg1;
}

extern void func_02114794(u8 *, s32, s32);
s32 func_02135960(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *p = *(u8 **)(arg0 + 0x20 + arg1 * 4);
    *(s16 *)(p + 0x22) = arg2;
    func_02114794(arg0 + 0x34, arg1, arg2);
    return arg2;
}

void func_02135984(u8 *arg0, s32 arg1, s32 arg2) {
    if (arg2 == 0) {
        arg2 = 0x40;
    } else if (arg2 == -15) {
        arg2 = 0;
    } else if (arg2 == 15) {
        arg2 = 0x7f;
    } else {
        arg2 = (arg2 + 15) * 128 / 30;
    }
    *(u16 *)(*(void **)(arg0 + arg1 * 4 + 0x20) + 0x20) = (u16)arg2;
    func_021147e8(arg0 + 0x34);
}

void func_021359e4(u8 *arg0) {
    s32 i;
    u16 a;
    u16 b;
    func_0211470c(arg0 + 0x34);
    for (i = 0; i < *(s8 *)(arg0 + 2); i++) {
        u16 v = *(u16 *)(*(void **)(arg0 + i * 4 + 0x20));
        if ((v & 8) == 0) {
            return;
        }
        *(u16 *)(*(void **)(arg0 + i * 4 + 0x20)) = v & 0xfff7;
        func_02135f0c(*(void **)(arg0 + i * 4 + 0x20), &a, &b);
        if (b != 0) {
            *(u32 *)(*(void **)(arg0 + i * 4 + 0x20) + 0x14) += (u32)b >> 1;
        }
    }
}

void func_02135a80(u8 *arg0) {
    s32 i = 0;
    while (i < *(s8 *)(arg0 + 2)) {
        u32 val = i;
        void **slot = (void **)(arg0 + i * 4 + 0x20);
        i++;
        *(u16 *)(*slot + 0x24) = (u16)val;
        *(u32 *)(*slot + 0x14) = val;
    }
}

void func_02135abc(u8 *arg0, s16 *arg1, s32 arg2) {
    s32 idx = *(u16 *)(arg0 + 0xa8) + *(u16 *)(arg0 + 0x98);
    s32 i;
    if (idx >= *(s32 *)(arg0 + 0xa4)) {
        idx -= *(s32 *)(arg0 + 0xa4);
    }
    for (i = 0; i < arg2; i++) {
        (*(s16 **)(arg0 + 0x9c))[idx] = arg1[i];
        idx++;
        if (idx == *(s32 *)(arg0 + 0xa4)) {
            idx = 0;
        }
    }
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

void func_02135c78(u32 arg0, u32 arg1) {
    data_021759ac[1] = arg0;
    data_021759ac[0] = arg1;
}

void func_02135d20(void) {
}

void func_02135d24(u16 arg0) {
    s32 i;
    for (i = 0; i < 8; i++) {
        *(u16 *)(data_02175ab8 + i * 0x34 + 0x2c) = arg0;
    }
}

s16 func_02135d94(u8 *arg0) {
    return *(s16 *)(arg0 + 0x26);
}

extern void func_02016e88(void *, void *, s32);
extern void func_02135d4c(s32, s32);
extern void func_02135d24(u16);
extern s32 data_02175ab4;
void func_02135f0c(void *arg0, u16 *arg1, u16 *arg2) {
    u16 ime = *(volatile u16 *)0x04000208;
    *(volatile u16 *)0x04000208 = 0;
    *arg1 = *(u16 *)((u8 *)arg0 + 0x1e);
    *arg2 = *(u16 *)((u8 *)arg0 + 0x1c);
    (void)*(volatile u16 *)0x04000208;
    *(volatile u16 *)0x04000208 = ime;
}

