/* 7 functions from 0x02018C20 to 0x02019C20 (main), found by ds-decomp. */
#include "common.h"

extern void func_02019400(void *);
extern void func_02018900(u8 *, s32);
s32 func_02018fa0(u8 *arg0, u8 *arg1)
{
    typedef struct {
        u8 unk00[2];
        s16 unk02;
        u8 unk04;
        u8 digits[1];
    } UnkNum;

    UnkNum *a = (UnkNum *)arg0;
    UnkNum *b = (UnkNum *)arg1;
    s32 i;
    s32 n;
    u8 *p;

    if (a->digits[0] == 0) {
        return b->digits[0] == 0;
    }
    if (b->digits[0] == 0) {
        return a->digits[0] == 0;
    }
    if (a->unk02 != b->unk02) {
        return 0;
    }
    n = a->unk04;
    if (n > b->unk04) {
        n = b->unk04;
    }
    for (i = 0; i < n; i++) {
        if (a->digits[i] != b->digits[i]) {
            return 0;
        }
    }
    p = (n == a->unk04) ? arg1 : arg0;
    for (; i < *(u8 *)(p + 4); i++) {
        if (p[5 + i] != 0) {
            return 0;
        }
    }
    return 1;
}

s32 func_02019080(const u8 *a, const u8 *b) {
    s32 i;
    s32 min_len;
    if (a[5] == 0) {
        return b[5] != 0;
    }
    if (b[5] == 0) {
        return 0;
    }
    if (*(const s16 *)(a + 2) == *(const s16 *)(b + 2)) {
        min_len = a[4];
        if (min_len > b[4]) {
            min_len = b[4];
        }
        for (i = 0; i < min_len; i++) {
            if (a[5 + i] < b[5 + i]) {
                return 1;
            }
            if (b[5 + i] < a[5 + i]) {
                return 0;
            }
        }
        if (min_len == a[4]) {
            for (; i < b[4]; i++) {
                if (b[5 + i] != 0) {
                    return 1;
                }
            }
        }
        return 0;
    }
    return *(const s16 *)(a + 2) < *(const s16 *)(b + 2);
}

void func_02019580(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3)
{
    typedef struct {
        u8 unk00[2];
        s16 unk02;
        u8 unk04;
        u8 digits[1];
    } UnkNum;

    UnkNum *num = (UnkNum *)arg3;
    s32 max = *(s16 *)(arg0 + 2);
    s32 i;
    s32 j;
    s32 cnt;
    s16 val;

    func_02019400(arg3);
    if (num->digits[0] > 9) {
        return;
    }
    if (max > 0x20) {
        max = 0x20;
    }
    func_02018900(arg3, max);
    for (i = num->unk04; i < max; i = num->unk04) {
        num->unk04++;
        num->digits[i] = 0;
    }
    val = num->unk02;
    cnt = arg3[4];
    val -= (s16)(i - 1);
    num->unk02 = val;
    j = 0;
    if (cnt <= 0) {
        return;
    }
    do {
        num->digits[j++] += 0x30;
    } while (j < num->unk04);
}
