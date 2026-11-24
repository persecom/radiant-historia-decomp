/* 4 functions from 0x02026F38 to 0x020279B8 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160a6c;
extern char data_021460f0[];
extern void func_02005e80(char *, const char *, ...);

extern u8 *data_02160a6c;
extern char data_021460f0[];
extern void func_02005e80(char *, const char *, ...);
s16 func_02026f38(char *arg) {
    u8 buf[32];
    s16 result = 0;
    u8 i;
    for (i = 0; i < 32; i++) buf[i] = 0;
    func_02005e80((char *)buf, data_021460f0, arg);
    for (i = 0; i < 32; i++) {
        s8 c = buf[i];
        if (c >= '0' && c <= '9') {
            result = (s16)(result * 10 + (c - '0'));
        }
    }
    return result;
}
