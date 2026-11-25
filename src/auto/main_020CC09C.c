/* 7 functions from 0x020CC09C to 0x020CCD34 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160204,*data_02160078;
extern u8 data_021512f0[8];
extern s32 func_02064b84(s32,s32,s32,s32);
extern void func_020cda64(s32,s32,s32,s32,s32,s32,s32,s32,s32);
extern void func_020cec18(void);
extern void func_020cc5a8(void);
extern void func_020cc814(void);
extern void func_020cc988(void);
extern void func_02021c28(s32);
extern s32 func_0210723c(void);
extern void func_020cecfc(void);
extern s32 func_02021a50(void);
extern void func_020cf110(void);
extern void func_020cea74(void *);
extern u32 func_0210e600(void);
extern void func_020cf3b4(void);
extern void func_02021a28(void);
extern void func_020ce8d4(void);
extern void func_020ce738(void);
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
void func_020ccadc(void);
void func_020cc5a8(void) {
 s32 one=1;
 u8 *p=data_02160238;
 s32 two=2;
 u16 *list;
 s32 changed=0;
 if(p[0x772]||p[0x70d]||p[0x771])return;
 if(data_021628f8) {
 u8 old=p[0x708];
 u16 ids[4]={data_02144668[0],data_02144668[1],data_02144668[2],data_02144668[3]};
 
 u16 i;
 s32 handled=0;
 
 list=ids;
 for(i=0;i<3;i++){u16 id=list[i];func_020cda08(two,id);if(func_020ce9c0(id)){p[0x708]=i;handled=one;}}
 if(handled){if(old!=p[0x708]){p[0x709]=old;changed=1;func_0210d27c(2);}else{func_020ced5c();return;}}
 if(!handled&&func_020ce9c0(2)){p[0x70d]=4;if((p+p[0x708]*16)[0x710])func_0210d27c(11);else func_0210d27c(7);handled=1;}
 if(!handled&&func_020ce9c0(1)){p[0x772]=4;func_0210d27c(5);}
 }else{
 if(data_021626a8&0x40){p[0x709]=p[0x708];if(p[0x708])p[0x708]--;else p[0x708]=two;changed=1;func_0210d27c(2);}
 else if(data_021626a8&0x80){p[0x709]=p[0x708];p[0x708]++;p[0x708]=(s32)p[0x708]%3;changed=one;func_0210d27c(two);}
 else if(data_021626a8&2){p[0x772]=4;func_0210d27c(5);}
 else if(data_021626a8&0x400){p[0x70d]=4;if((p+p[0x708]*16)[0x710])func_0210d27c(11);else func_0210d27c(7);}
 else if(data_021626a8&1){func_020ced5c();return;}
 }
 if(changed)func_020ccadc();
}

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

