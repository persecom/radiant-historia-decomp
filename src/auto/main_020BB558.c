/* 6 functions from 0x020BB558 to 0x020BC394 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 data[10]; } Unk_020bbb1c_10;
typedef struct { s16 data[18]; } Unk_020bbb1c_18;
extern const Unk_020bbb1c_10 data_02143c90;
extern const Unk_020bbb1c_18 data_02143cec;
extern const Unk_020bbb1c_10 data_02143c68;
extern const Unk_020bbb1c_18 data_02143d34;

void func_020bbc24(void) {
 Unk_020bbb1c_10 other;
 Unk_020bbb1c_18 buf;
 s16 i;
 other = data_02143c68;
 buf = data_02143d34;
 *(volatile u32 *)0x40004a4 = 0x1f0080;
 func_020a3bbc(10);
 other.data[7] = 700;
 for(i=0;i<3;i++){
 s16 idx=i*6;
 other.data[1]=buf.data[idx];
 other.data[2]=buf.data[idx+1];
 other.data[3]=buf.data[idx+4];
 other.data[4]=buf.data[idx+5];
 other.data[5]=buf.data[idx+2];
 other.data[6]=buf.data[idx+3];
 other.data[8]=buf.data[idx+4];
 other.data[9]=buf.data[idx+5];
 if(i==1) other.data[8]=180;
 func_021098ac(other.data);
 }
}
