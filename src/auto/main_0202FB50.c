/* 17 functions from 0x0202FB50 to 0x02030878 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160204;
extern u32 data_02155c3c;
extern void *func_0210c594(s32, u32);
extern void func_021167ac(void *, s32);
extern void func_020305b0(void *, void *);
extern void func_0210c5dc(void *);
void func_02030468(u8 *arg0, u32 arg1) {
    if (arg0 == NULL) {
        return;
    }
    switch (arg1) {
        case 1:
            if (data_02160204[0x11c] != 0) {
                *(s16 *)(arg0 + 0x5a) += 3;
            }
            break;
        case 0:
            if (data_02160204[0x11c] != 0) {
                *(s16 *)(arg0 + 0x5a) += 2;
            }
            break;
        case 2:
        case 5:
            if (data_02160204[0x11c] != 0) {
                *(s16 *)(arg0 + 0x5a) += 1;
            }
            break;
    }
    if (*(s16 *)(arg0 + 0x5a) > 100) {
        *(s16 *)(arg0 + 0x5a) = 100;
    }
    if (arg1 == 6) {
        *(s16 *)(arg0 + 0x5a) -= 100;
        if (*(s16 *)(arg0 + 0x5a) < 0) {
            *(s16 *)(arg0 + 0x5a) = 0;
        }
    }
}

s32 func_02030528(u8 *arg0, u32 arg1) {
    return (*(u32 *)(arg0 + 0x78) & arg1) ? 1 : 0;
}

void *func_0203053c(void) {
    u8 *ptr = (u8 *)func_0210c594(0x14, data_02155c3c);
    func_021167ac(ptr + 8, 4);
    ptr[4] = 0;
    return ptr;
}

void func_02030574(u8 *arg0) {
    void *ptr;
    while ((ptr = *(void **)(arg0 + 8)) != NULL) {
        func_020305b0(arg0, ptr);
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

