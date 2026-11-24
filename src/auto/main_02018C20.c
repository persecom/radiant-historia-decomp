/* 7 functions from 0x02018C20 to 0x02019C20 (main), found by ds-decomp. */
#include "common.h"
typedef struct {u8 sign,pad;s16 exponent;u8 length;u8 digits[32];} Decimal19160;

extern void func_02019400();
extern void func_02018900(u8 *, s32);
extern u8 data_02145ecc[];
extern u8 data_02145efc[];
extern u8 data_02145f24[];
extern u8 data_02145f3c[];
extern u8 data_02145f4c[];
extern u8 data_02145f54[];
extern u8 data_02145f5c[];
extern u8 data_02145f64[];
extern u8 data_02145f6c[];
extern u8 data_02145f70[];
extern u8 data_02145f74[];
extern u8 data_02145f78[];
extern u8 data_02145f7c[];
extern u8 data_02145f80[];
extern u8 data_02145f84[];
extern u8 data_02145f88[];
extern u8 data_02145f8c[];
extern u8 data_02145f90[];
extern u8 data_02145f94[];
extern u8 data_02145f98[];
extern u8 data_02145f9c[];
void func_02018b84(void *, void *, s32);
void func_02018a04(void *, void *, void *);
void func_02018c20(void *arg0, s32 arg1) {
    struct S38 {
        u16 data[19];
    };
    struct S38 local_26;
    switch (arg1) {
    case -64:
        func_02018b84(arg0, data_02145ecc, -20);
        return;
    case -53:
        func_02018b84(arg0, data_02145efc, -16);
        return;
    case -32:
        func_02018b84(arg0, data_02145f24, -10);
        return;
    case -16:
        func_02018b84(arg0, data_02145f3c, -5);
        return;
    case -8:
        func_02018b84(arg0, data_02145f4c, -3);
        return;
    case -7:
        func_02018b84(arg0, data_02145f54, -3);
        return;
    case -6:
        func_02018b84(arg0, data_02145f5c, -2);
        return;
    case -5:
        func_02018b84(arg0, data_02145f64, -2);
        return;
    case -4:
        func_02018b84(arg0, data_02145f6c, -2);
        return;
    case -3:
        func_02018b84(arg0, data_02145f70, -1);
        return;
    case -2:
        func_02018b84(arg0, data_02145f74, -1);
        return;
    case -1:
        func_02018b84(arg0, data_02145f78, -1);
        return;
    case 0:
        func_02018b84(arg0, data_02145f7c, 0);
        return;
    case 1:
        func_02018b84(arg0, data_02145f80, 0);
        return;
    case 2:
        func_02018b84(arg0, data_02145f84, 0);
        return;
    case 3:
        func_02018b84(arg0, data_02145f88, 0);
        return;
    case 4:
        func_02018b84(arg0, data_02145f8c, 1);
        return;
    case 5:
        func_02018b84(arg0, data_02145f90, 1);
        return;
    case 6:
        func_02018b84(arg0, data_02145f94, 1);
        return;
    case 7:
        func_02018b84(arg0, data_02145f98, 2);
        return;
    case 8:
        func_02018b84(arg0, data_02145f9c, 2);
        return;
    default:
        func_02018c20(&local_26, arg1 / 2);
        func_02018a04(arg0, &local_26, &local_26);
        if (arg1 & 1) {
            struct S38 local_00 = *(struct S38 *)arg0;
            if (arg1 > 0) {
                func_02018b84(&local_26, data_02145f80, 0);
            } else {
                func_02018b84(&local_26, data_02145f78, -1);
            }
            func_02018a04(arg0, &local_00, &local_26);
        }
        break;
    }
}
