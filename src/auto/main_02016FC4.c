/* 3 functions from 0x02016FC4 to 0x02017F74 (main), found by ds-decomp. */
#include "common.h"

extern f64 func_02016fc4(s32, void *, void *, s32 *, s32 *);
extern void func_02016c84(void);
extern void func_0201e014(f64);
extern s32 data_02160034;
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

f64 func_02017f64(const char *str) {
    return func_02017edc(str, NULL);
}
