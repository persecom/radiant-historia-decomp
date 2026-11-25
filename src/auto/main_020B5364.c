/* 1 function from 0x020B5364 to 0x020B72E4 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_021626e8, *data_02160258, *data_0216bf84;
extern char data_02150d0c[];
extern s32 func_0210cc54(const char *);
extern s32 func_0210ce5c(void);
s32 func_020b5364(void) {
    if (func_0210cc54(data_02150d0c)) {
        if (func_0210ce5c() == 0) {
            *(s32 *)&data_0216bf84 = 0;
        } else {
            *(s32 *)&data_0216bf84 = 1;
        }
        return 1;
    }
    return 0;
}
