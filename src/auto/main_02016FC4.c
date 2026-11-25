/* 3 functions from 0x02016FC4 to 0x02017F74 (main), found by ds-decomp. */
#include "common.h"

extern f64 func_02016fc4(s32, void *, void *, s32 *, s32 *);
extern void func_02016c84(void);
extern void func_0201e014(f64);
extern s32 data_02160034;
f64 func_02016fc4(s32 arg0, void *arg1, void *arg2, s32 *arg3, s32 *arg4) {
    s32 c, state, count, spaces, neg, flags, i;
    s16 digits[7];
    u8 expbuf[9], tmp[5], numbuf[8], acc[5];

    *arg4 = 0;
    for (i = 0; i < 7; i++) digits[i] = 0;
    neg = 0;
    for (i = 0; i < 9; i++) expbuf[i] = 0;
    for (i = 0; i < 5; i++) tmp[i] = 0;
    for (i = 0; i < 8; i++) numbuf[i] = 0;
    for (i = 0; i < 5; i++) acc[i] = 0;
    count = 0;
    state = 1;
    c = ((s32 (*)(void *, s32, s32))arg1)(arg2, 0, 0);
    while (1) {
        switch (state) {
        case 1:
            if (c == ' ') { c = ((s32 (*)(void *, s32, s32))arg1)(arg2, 0, 0); count++; break; }
            state = 2;
            break;
        case 2:
            if (c == '+' || c == '-') {
                if (c == '-') neg = 1;
                count++;
                c = ((s32 (*)(void *, s32, s32))arg1)(arg2, 0, 0);
            }
            state = 4;
            break;
        default:
            return 0.0;
        }
    }
}

f64 func_02017edc(const char *str, char **endptr) {
    f64 value;
    s32 chars_scanned;
    s32 overflow;
    struct {
        const char *p;
        s32 n;
    } isc;

    isc.p = str;
    isc.n = 0;
    value = func_02016fc4(0x7fffffff, (void *)func_02016c84, &isc, &chars_scanned, &overflow);
    if (endptr != NULL) {
        *endptr = (char *)str + chars_scanned;
    }
    func_0201e014(value);
    if (overflow) {
        data_02160034 = 0x22;
    }
    return value;
}

extern f64 func_02017edc(const char *, char **);
f64 func_02017f64(const char *str) {
    return func_02017edc(str, NULL);
}
