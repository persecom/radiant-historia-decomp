/* 40 functions from 0x02126F50 to 0x02127E74 (main), found by ds-decomp. */
#include "common.h"

extern void func_02127600(void *);
BOOL func_02127350(void *arg0) {
    void (*cb)(void *, void *) = *(void (**)(void *, void *))((u8 *)arg0 + 0x2c);
    if (cb == NULL) {
        return FALSE;
    }
    cb(*(void **)((u8 *)arg0 + 0x30), *(void **)((u8 *)arg0 + 0x34));
    return TRUE;
}

BOOL func_0212737c(void *arg0) {
    void (*cb)(void *, void *) = *(void (**)(void *, void *))((u8 *)arg0 + 0x38);
    if (cb == NULL) {
        return FALSE;
    }
    cb(*(void **)((u8 *)arg0 + 0x3c), *(void **)((u8 *)arg0 + 0x40));
    return TRUE;
}

void func_021273f0(void *arg0) {
    if (arg0 != NULL) {
        func_02127600(arg0);
    }
}

extern void func_0212789c(void *);
extern void func_02126c20(void *);
extern u8 data_021565f0[52];
extern u8 data_02156624[56];
void func_0212748c(void *arg0) {
    func_0212789c(*(void **)((u8 *)arg0 + 4));
}

s32 func_021275f8(s32 *arg0) {
    return arg0[1];
}

extern void func_0212a9f4(void);
extern void func_02127e74(void *);
extern void func_0212a9f8(void);
void func_02127e58(void *arg0) {
    func_0212a9f4();
    func_02127e74(arg0);
    func_0212a9f8();
}

