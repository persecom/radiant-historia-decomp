/* 14 functions from 0x0202C328 to 0x0202CD5C (main), found by ds-decomp. */
#include "common.h"

extern u8 **data_02160244;
extern void *func_0205bad4(void *);
extern void func_02032b98(void *, void *, s32);

s32 func_0202c668(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *base;
    s16 *grp;
    u8 *p128;
    s8 *pidx;
    s8 idx;
    u8 *ent;
    s32 value;
    s32 q1;

    base = (u8 *)data_02160244;
    grp = *(s16 **)(base + 0x13c);
    p128 = *(u8 **)(arg0 + 0x128);
    pidx = *(s8 **)(p128 + 0x54);
    idx = *pidx;
    ent = *(u8 **)(base + idx * 4 + 8);
    switch (arg1) {
    case 0:
        switch (ent[1]) {
        case 1: value = grp[0]; break;
        case 2: value = grp[1]; break;
        case 3: value = grp[2]; break;
        default: goto none;
        }
        break;
    case 1:
        switch (ent[1]) {
        case 1: value = grp[6]; break;
        case 2: value = grp[7]; break;
        case 3: value = grp[8]; break;
        default: goto none;
        }
        break;
    case 2:
        switch (ent[1]) {
        case 1: value = grp[3]; break;
        case 2: value = grp[4]; break;
        case 3: value = grp[5]; break;
        default: goto none;
        }
        break;
    case 3:
        switch (ent[1]) {
        case 1: value = grp[9]; break;
        case 2: value = grp[10]; break;
        case 3: value = grp[11]; break;
        default: goto none;
        }
        break;
    default:
        goto none;
    }
    q1 = arg2 * value / 10;
none:
    if (q1 % 10 != 0) {
        return q1 / 10 + 1;
    }
    return q1 / 10;
}
