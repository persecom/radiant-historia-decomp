/* 7 functions from 0x020CC09C to 0x020CCD34 (main), found by ds-decomp. */
#include "common.h"
extern const u16 data_02144668[4];
extern void func_020ced5c(void);
extern void func_020ccc30(s32);
extern void func_020ccb10(void);
extern u16 data_021626a8, data_021628f8;
extern void func_0210d27c(s32);
extern s32 func_020ce9c0(s32);
extern void func_020cef00(void);

extern u8 *data_02160238;
extern void func_020ce170(u32, u32, u32);
extern u8 *func_020cda08(u32, u32);
extern void func_020a8810(void *, s32);

extern void func_020cefe4(void);
void func_020cc814(void) {
 s32 changed=0;
 u8 *p=data_02160238;
 u8 old;
 s32 one=1;
 if(p[0x772])return;
 if(data_021626a8&0x40) {
 if(p[0x70a])p[0x70a]--; else p[0x70a]=one;
 changed=1;
 func_0210d27c(2);
 }
 if(data_021626a8&0x80) {
 changed=1;
 p[0x70a]++;
 p[0x70a]=p[0x70a]%2;
 func_0210d27c(2);
 }
 if(data_021628f8) {
 old=p[0x70a];
 if(func_020ce9c0(7)){p[0x70a]=0;changed=1;}
 if(func_020ce9c0(8)){changed=1;p[0x70a]=changed;}
 if(changed){if(p[0x70a]==old)func_020cef00();else func_0210d27c(2);}
 if(func_020ce9c0(1)&&!p[0x772]){p[0x772]=4;func_0210d27c(5);}
 }
 if((data_021626a8&2)&&!p[0x772]){p[0x772]=4;func_0210d27c(5);}
 if(data_021626a8&1)func_020cef00();
 if(changed)func_020ccb10();
}

void func_020cc988(void) {
 s32 changed=0;
 u8 *p=data_02160238;
 if(data_021626a8&2){func_020ccc30(0);p[0]=0;func_0210d27c(5);return;}
 if(data_021626a8&1){func_020cefe4();return;}
 if(data_021626a8&0x40){if(p[0x70a])p[0x70a]--;else p[0x70a]=1;changed=1;func_0210d27c(2);}
 if(data_021626a8&0x80){p[0x70a]++;p[0x70a]=(s32)p[0x70a]%2;changed=1;func_0210d27c(2);}
 if(data_021628f8){
 u8 old=p[0x70a];
 if(func_020ce9c0(7)){p[0x70a]=0;changed=1;}
 if(func_020ce9c0(8)){p[0x70a]=1;changed=1;}
 if(changed){if(p[0x70a]==old)func_020cefe4();else func_0210d27c(2);}
 if(func_020ce9c0(1) && !p[0x772]){p[0x772]=4;func_0210d27c(5);}
 }
 if(changed)func_020ccb10();
}

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

