/* 7 functions from 0x020CC09C to 0x020CCD34 (main), found by ds-decomp. */
#include "common.h"
extern u16 data_021626a8, data_021628f8;
extern void func_0210d27c(s32);
extern s32 func_020ce9c0(s32);
extern void func_020cef00(void);

extern u8 *data_02160238;
extern void func_020ce170(u32, u32, u32);
extern u8 *func_020cda08(u32, u32);
extern void func_020a8810(void *, s32);

void func_020ccadc(void) {
    u8 *p = data_02160238;
    u32 v;
    v = p[0x708];
    func_020ce170(v, v, 1);
    v = p[0x709];
    func_020ce170(v, v, 0);
}

void func_020ccb10(void) {
    u8 *a;

    switch (data_02160238[0x70a]) {
    case 0:
        a = func_020cda08(2, 7);
        a[3] = 0x15;
        a[0x27] = 0;
        a = func_020cda08(2, 8);
        a[3] = 0x14;
        a[0x27] = 0;
        func_020a8810(*(void **)(data_02160238 + 0xb0), 0x13);
        func_020a8810(*(void **)(data_02160238 + 0x100), 0x14);
        *(u32 *)(*(u8 **)(data_02160238 + 0xb0) + 0x40) = 1;
        *(u32 *)(*(u8 **)(data_02160238 + 0x100) + 0x40) = 1;
        break;
    case 1:
        a = func_020cda08(2, 7);
        a[3] = 0x14;
        a[0x27] = 0;
        a = func_020cda08(2, 8);
        a[3] = 0x15;
        a[0x27] = 0;
        func_020a8810(*(void **)(data_02160238 + 0xb0), 0x14);
        func_020a8810(*(void **)(data_02160238 + 0x100), 0x13);
        *(u32 *)(*(u8 **)(data_02160238 + 0xb0) + 0x40) = 1;
        *(u32 *)(*(u8 **)(data_02160238 + 0x100) + 0x40) = 1;
        break;
    case 2:
    case 3:
        break;
    }
}

extern u8 *func_020cda08(u32, u32);
extern void func_020ccb10(void);
extern void func_020ccd34(s32);
extern void func_020a994c(void *);
void func_020ccc30(s32 enabled) {
 u8 *p=data_02160238;
 u8 i;
 if(enabled) {
 func_020cda08(2,0)[2]=1;
 func_020cda08(2,6)[2]=1;
 func_020cda08(2,7)[2]=1;
 func_020cda08(2,8)[2]=1;
 func_020cda08(2,9)[2]=1;
 p[0x70a]=0;
 func_020ccb10();
 } else {
 func_020cda08(2,0)[2]=0;
 func_020cda08(2,6)[2]=0;
 func_020cda08(2,7)[2]=0;
 func_020cda08(2,8)[2]=0;
 func_020cda08(2,9)[2]=0;
 for(i=0;i<3;i++)func_020a994c(p+0x64+i*0x50);
 }
 func_020ccd34(enabled);
}

