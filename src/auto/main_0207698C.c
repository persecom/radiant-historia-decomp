/* 15 functions from 0x0207698C to 0x02077688 (main), found by ds-decomp. */
#include "common.h"

extern void *func_020764e4(void);
extern void func_02076868(void);
extern void func_0207763c(void);
extern void func_0207698c(void);
extern void func_021098ac(void *);
extern s32 func_02076df4(s8, s32, s32, s32);
void func_02076d6c(void) {
    u8 *ptr = func_020764e4();
    switch (*(u8 *)(ptr + 0x54)) {
    case 0:
        func_02076868();
        break;
    case 1:
        *(s32 *)(ptr + 0xa0) += 1;
        if (*(s32 *)(ptr + 0xa0) >= 0x1e) {
            func_0207763c();
            *(u8 *)(ptr + 0x54) = 2;
        }
        break;
    case 2:
        func_0207698c();
        break;
    case 3:
        break;
    }
}
