/* 7 functions from 0x02018C20 to 0x02019C20 (main), found by ds-decomp. */
#include "common.h"

extern void func_02019400(void *);
extern void func_02018900(u8 *, s32);
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
