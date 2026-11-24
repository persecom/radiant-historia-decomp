/* 4 functions from 0x02026F38 to 0x020279B8 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160a6c;
extern char data_021460f0[];
extern void func_02005e80(char *, const char *, ...);

extern u8 *data_02160a6c;
extern char data_021460f0[];
extern void func_02005e80(char *, const char *, ...);
s16 func_02026f38(char *arg) {
    u8 i;
    s16 result;
    u8 buf[32];
    for (i = 0; i < 32; i++) buf[i] = 0;
    result = 0;
    func_02005e80((char *)buf, data_021460f0, arg);
    for (i = result; i < 32; i++) {
        s8 c = buf[i];
        if (c >= '0' && c <= '9') {
            result = (s16)(result * 10 + (c - '0'));
        }
    }
    return result;
}

void func_02026fbc(void) {
    void *p = *(void **)(data_02160a6c + 0xb8);
    if (p == NULL) return;
    do {
        void *q = *(void **)((u8 *)p + 0x12c);
        u16 *c = (u16 *)((u8 *)q + 0xe);
        *c = *c + 1;
        if (*c > 30) *c = 0;
        p = *(void **)((u8 *)p + 0x174);
    } while (p != NULL);
}

