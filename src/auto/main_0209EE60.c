/* 5 functions from 0x0209EE60 to 0x0209F684 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 data[10]; } Params_0209ee60;
typedef struct { s16 data[27]; } Table_0209ee60;
extern const Params_0209ee60 data_02142bdc;
extern const Table_0209ee60 data_02142d8c;
void func_020a3bbc(s32);
void func_021098ac(void *);

extern u8 *data_021600b0;
void func_0209ee60(s16 arg1) {
 u8 *p=data_021600b0;
 Params_0209ee60 other=data_02142bdc;
 u16 i;
 s16 xOff;
 *(volatile u32 *)0x040004a4=0x1f00c0;
 func_020a3bbc(4);
 *(volatile u32 *)0x04000480=(u16)(*(s16 *)(p+0x11e)|(*(s16 *)(p+0x11e)<<5)|(*(s16 *)(p+0x11e)<<10));
 {
 Table_0209ee60 buf=data_02142d8c;
 xOff=0;
 for(i=0;i<3;i++) {
 u16 idx=i*9;
 s16 w;
 other.data[1]=buf.data[idx];
 other.data[2]=buf.data[idx+1];
 other.data[3]=buf.data[idx+2];
 other.data[4]=buf.data[idx+3];
 if(i==0) other.data[5]=*(s16 *)(p+0x124)+(256-*(s16 *)(p+0x11a))+buf.data[idx+4];
 else if(i==1||i==2) other.data[5]=xOff+(*(s16 *)(p+0x124)+(256-*(s16 *)(p+0x11a)));
 other.data[6]=*(s16 *)(p+0x122);
 other.data[7]=arg1;
 w=(*(s16 *)(p+0x118)*buf.data[idx+2])/100;
 other.data[8]=w;
 other.data[9]=*(s16 *)(p+0x120);
 xOff+=w;
 func_021098ac(other.data);
 }
 }
}

void func_0209f3a0(s32 mode) {
    u8 *p = data_021600b0;
    if (mode == 0) {
        *(u16 *)(p + 0x118) = 1;
        *(u16 *)(p + 0x11a) = 0;
        *(u16 *)(p + 0x11c) = 0;
        *(u16 *)(p + 0x11e) = 0;
        *(u16 *)(p + 0x120) = 0;
        *(u16 *)(p + 0x122) = 0;
        *(u16 *)(p + 0x124) = 0;
    } else if (mode == 1) {
        *(u16 *)(p + 0x118) = 100;
        *(u16 *)(p + 0x11a) = 0x100;
        *(u16 *)(p + 0x11c) = 8;
        *(u16 *)(p + 0x11e) = 0x1f;
        *(u16 *)(p + 0x120) = 0xc0;
        *(u16 *)(p + 0x122) = 0;
        *(u16 *)(p + 0x124) = 0;
    }
}
