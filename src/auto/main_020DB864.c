/* 4 functions from 0x020DB864 to 0x020DC7EC (main), found by ds-decomp. */
#include "common.h"

extern u8 *func_02030698(void *, s32);

s32 func_020db864(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *p;
    switch (arg2) {
    case 0: {
        s32 mult;
        s16 pct = 0;
        s16 flat = 0;
        s32 val;
        p = func_02030698(*(void **)(arg0 + 0x118), 0xe);
        if (p != NULL) {
            pct += *(s16 *)(p + 2);
            flat += *(s16 *)(p + 4);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 0);
        if (p != NULL) {
            pct += *(s16 *)(p + 2);
            flat += *(s16 *)(p + 4);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 0xa);
        if (p != NULL) {
            pct += *(s16 *)(p + 2);
            flat += *(s16 *)(p + 4);
        }
        pct += *(s16 *)(*(u8 **)(arg0 + 0x118) + 0x94);
        flat += *(s16 *)(*(u8 **)(arg0 + 0x118) + 0x96);
        mult = 100;
        if (arg1 != NULL) {
            mult = *(s16 *)(arg1 + 2);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 1);
        if (p != NULL) {
            pct -= *(s16 *)(p + 2);
            flat -= *(s16 *)(p + 4);
        }
        val = (*(s16 *)(*(u8 **)(arg0 + 0x118) + 0x28) * (pct + 100)) / 100;
        val = (mult * val) / 100 + flat;
        if (val <= 1) {
            val = 1;
        }
        return val;
    }
    case 1: {
        s16 pct = *(s16 *)(*(u8 **)(arg0 + 0x118) + 0x98);
        s16 flat = *(s16 *)(*(u8 **)(arg0 + 0x118) + 0x9a);
        s32 mult;
        s32 val;
        p = func_02030698(*(void **)(arg0 + 0x118), 0x10);
        if (p != NULL) {
            pct += *(s16 *)(p + 2);
            flat += *(s16 *)(p + 4);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 4);
        if (p != NULL) {
            pct += *(s16 *)(p + 2);
            flat += *(s16 *)(p + 4);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 5);
        if (p != NULL) {
            pct -= *(s16 *)(p + 2);
            flat -= *(s16 *)(p + 4);
        }
        mult = 100;
        if (arg1 != NULL) {
            mult = *(s16 *)(arg1 + 2);
        }
        val = (*(s16 *)(*(u8 **)(arg0 + 0x118) + 0x2c) * (pct + 100)) / 100;
        val = (mult * val) / 100 + flat;
        if (val <= 1) {
            val = 1;
        }
        return val;
    }
    case 2: {
        s16 pct = 0;
        s16 flat = 0;
        s16 val;
        p = func_02030698(*(void **)(arg0 + 0x118), 0xf);
        if (p != NULL) {
            pct += *(s16 *)(p + 2);
            flat += *(s16 *)(p + 4);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 0xb);
        if (p != NULL) {
            pct += *(s16 *)(p + 2);
            flat += *(s16 *)(p + 4);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 2);
        if (p != NULL) {
            pct += *(s16 *)(p + 2);
            flat += *(s16 *)(p + 4);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 3);
        if (p != NULL) {
            pct -= *(s16 *)(p + 2);
            flat -= *(s16 *)(p + 4);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 0xa);
        if (p != NULL) {
            pct -= *(s16 *)(p + 6);
        }
        val = (*(s16 *)(*(u8 **)(arg0 + 0x118) + 0x2a) * (pct + 100)) / 100 + flat;
        if (val <= 1) {
            val = 1;
        }
        return val;
    }
    case 3: {
        s16 pct = 0;
        s16 flat = 0;
        s16 val;
        p = func_02030698(*(void **)(arg0 + 0x118), 0x11);
        if (p != NULL) {
            pct += *(s16 *)(p + 2);
            flat += *(s16 *)(p + 4);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 0xc);
        if (p != NULL) {
            pct += *(s16 *)(p + 2);
            flat += *(s16 *)(p + 4);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 6);
        if (p != NULL) {
            pct += *(s16 *)(p + 2);
            flat += *(s16 *)(p + 4);
        }
        p = func_02030698(*(void **)(arg0 + 0x118), 7);
        if (p != NULL) {
            pct -= *(s16 *)(p + 2);
            flat -= *(s16 *)(p + 4);
        }
        val = (*(s16 *)(*(u8 **)(arg0 + 0x118) + 0x2e) * (pct + 100)) / 100 + flat;
        if (val <= 1) {
            val = 1;
        }
        return val;
    }
    }
    return 0;
}
