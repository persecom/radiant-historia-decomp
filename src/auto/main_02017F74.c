/* 12 functions from 0x02017F74 to 0x02018C20 (main), found by ds-decomp. */
#include "common.h"

extern void func_02018378(void *, s32, s32);
extern s32 func_02017f74(s32, s32, void *, void *, s32 *, s32 *, s32 *);
extern void func_02016c84(void);
extern s32 data_02160034;

typedef struct UnkNum_02018844 {
    u8 unk00[2];
    s16 unk02;
    u8 unk04;
    u8 digits[1];
} UnkNum_02018844;

s32 func_020182e4(const char *str, char **endptr, s32 base) {
    s32 result;
    s32 chars_scanned;
    s32 negative;
    s32 overflow;
    struct {
        const char *p;
        s32 n;
    } isc;

    isc.p = str;
    isc.n = 0;
    result = func_02017f74(base, 0x7fffffff, (void *)func_02016c84, &isc, &chars_scanned, &negative, &overflow);
    if (endptr != NULL) {
        *endptr = (char *)str + chars_scanned;
    }
    if (overflow) {
        data_02160034 = 0x22;
    }
    if (overflow) {
        return -1;
    }
    return negative ? -result : result;
}

void func_02018830(void *arg0) {
    func_02018378(arg0, 0, 0xa);
}

s32 func_02018844(u8 *arg0, s32 arg1) {
    u8 *p;
    u8 *data = arg0 + 5;
    u8 digit = data[arg1];
    u8 *prev;
    if (digit > 5) {
        return 1;
    }
    if (digit < 5) {
        return -1;
    }
    p = data + arg1 + 1;
    while (p < data + arg0[4]) {
        if (*p != 0) {
            return 1;
        }
        p++;
    }
    prev = arg0 + arg1 - 1;
    return (prev[5] & 1) ? 1 : -1;
}

void func_020188b0(u8 *arg0, s32 arg1) {
    u8 *data = arg0 + 5;
    u8 *p = data + arg1;
    p--;
loop:
    if (*p < 9) {
        *p = *p + 1;
        return;
    }
    if (p == data) {
        *p = 1;
        *(s16 *)(arg0 + 2) = *(s16 *)(arg0 + 2) + 1;
        return;
    }
    *p-- = 0;
    goto loop;
}

void func_020188fc(void) {
}
