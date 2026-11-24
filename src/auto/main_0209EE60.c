/* 5 functions from 0x0209EE60 to 0x0209F684 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 data[10]; } Params_0209ee60;
typedef struct { s16 data[27]; } Table_0209ee60;
extern const Params_0209ee60 data_02142bdc;
extern const Table_0209ee60 data_02142d8c;
extern const Params_0209ee60 data_02142d08;
extern const Table_0209ee60 data_02142dc4;
extern const Table_0209ee60 data_02142dfc;
extern const Table_0209ee60 data_02142d54;
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

void func_0209f010(s16 arg1) {
 u8 *p=data_021600b0;
 Params_0209ee60 other=data_02142d08;
 u16 i;
 s16 xOff;
 *(volatile u32 *)0x040004a4=0x1f00c0;
 func_020a3bbc(4);
 *(volatile u32 *)0x04000480=(u16)(*(s16 *)(p+0x11e)|(*(s16 *)(p+0x11e)<<5)|(*(s16 *)(p+0x11e)<<10));
 {
 Table_0209ee60 buf=data_02142dc4;
 xOff=0;
 for(i=0;i<3;i++) {
 u16 idx=i*9;
 s16 w;
 other.data[1]=buf.data[idx];
 other.data[2]=buf.data[idx+1];
 other.data[3]=buf.data[idx+2];
 other.data[4]=buf.data[idx+3];
 if(i==0) other.data[5]=*(s16 *)(p+0x124)+((256-*(s16 *)(p+0x11a))+buf.data[idx+4]);
 else if(i==1||i==2) other.data[5]=*(s16 *)(p+0x124)+(xOff+(256-*(s16 *)(p+0x11a)));
 other.data[6]=buf.data[idx+5];
 other.data[7]=arg1;
 w=(*(s16 *)(p+0x118)*buf.data[idx+2])/100;
 other.data[8]=w;
 other.data[9]=*(s16 *)(p+0x120);
 xOff+=w;
 func_021098ac(other.data);
 }
 }
}

void func_0209f1c4(s32 mode,s16 arg1,s16 x,s16 y,s16 *p,s16 color) {
 *(volatile u32 *)0x040004a4=0x1f00c0;
 func_020a3bbc(4);
 *(volatile u32 *)0x04000480=(u16)(color|(color<<5)|(color<<10));
 if(mode==0) {
 Table_0209ee60 buf=data_02142dfc;
 u16 i;
 for(i=0;i<3;i++) {
 u16 idx=i*9;
 p[1]=buf.data[idx];
 p[2]=buf.data[idx+1];
 p[3]=buf.data[idx+2];
 p[4]=buf.data[idx+3];
 p[5]=x+buf.data[idx+4];
 p[6]=y+buf.data[idx+5];
 p[7]=arg1;
 p[8]=buf.data[idx+7];
 p[9]=buf.data[idx+8];
 func_021098ac(p);
 }
 } else if(mode==1) {
 Table_0209ee60 buf=data_02142d54;
 u16 i;
 for(i=0;i<3;i++) {
 u16 idx=i*9;
 p[1]=buf.data[idx];
 p[2]=buf.data[idx+1];
 p[3]=buf.data[idx+2];
 p[4]=buf.data[idx+3];
 p[5]=x+buf.data[idx+4];
 p[6]=y+buf.data[idx+5];
 p[7]=arg1;
 p[8]=buf.data[idx+7];
 p[9]=buf.data[idx+8];
 func_021098ac(p);
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

s32 func_0209f424(s32 arg0) {
    u8 *p = data_021600b0;
    if (arg0 == 0) {
        *(s16 *)(p + 0x11c) += 1;
        *(s16 *)(p + 0x118) = (*(s16 *)(p + 0x11c) * 100) / 8;
        *(s16 *)(p + 0x11a) = (*(s16 *)(p + 0x11c) * 256) / 8;
        *(s16 *)(p + 0x11e) = (*(s16 *)(p + 0x11c) * 10) / 8 + 21;
        *(s16 *)(p + 0x120) = 232 - (*(s16 *)(p + 0x11c) * 40) / 8;
        *(s16 *)(p + 0x122) = (*(s16 *)(p + 0x11c) * 40) / 8 - 40;
        *(s16 *)(p + 0x124) = 100 - (*(s16 *)(p + 0x11c) * 100) / 8;
        if (*(s16 *)(p + 0x11c) > 8) {
            *(s16 *)(p + 0x118) = 100;
            *(s16 *)(p + 0x11a) = 256;
            *(s16 *)(p + 0x11c) = 8;
            *(s16 *)(p + 0x11e) = 31;
            *(s16 *)(p + 0x120) = 192;
            *(s16 *)(p + 0x122) = 0;
            *(s16 *)(p + 0x124) = 0;
            return 1;
        }
    } else if (arg0 == 1) {
        *(s16 *)(p + 0x11c) -= 1;
        *(s16 *)(p + 0x118) = (*(s16 *)(p + 0x11c) * 100) / 8;
        *(s16 *)(p + 0x11a) = (*(s16 *)(p + 0x11c) * 256) / 8;
        *(s16 *)(p + 0x11e) = (*(s16 *)(p + 0x11c) * 10) / 8 + 21;
        *(s16 *)(p + 0x120) = 232 - (*(s16 *)(p + 0x11c) * 40) / 8;
        *(s16 *)(p + 0x122) = (*(s16 *)(p + 0x11c) * 40) / 8 - 40;
        *(s16 *)(p + 0x124) = 100 - (*(s16 *)(p + 0x11c) * 100) / 8;
        if (*(s16 *)(p + 0x11c) < 0) {
            *(s16 *)(p + 0x118) = 1;
            *(s16 *)(p + 0x11a) = 0;
            *(s16 *)(p + 0x11c) = 0;
            *(s16 *)(p + 0x11e) = 0;
            *(s16 *)(p + 0x120) = 0;
            *(s16 *)(p + 0x122) = 0;
            *(s16 *)(p + 0x124) = 0;
            return 1;
        }
    } else if (arg0 == 2) {
        *(s16 *)(p + 0x118) = 100;
        *(s16 *)(p + 0x11a) = 256;
        *(s16 *)(p + 0x11c) = 8;
        *(s16 *)(p + 0x11e) = 31;
        *(s16 *)(p + 0x120) = 192;
        *(s16 *)(p + 0x122) = 0;
        *(s16 *)(p + 0x124) = 0;
        return 1;
    }
    return 0;
}

