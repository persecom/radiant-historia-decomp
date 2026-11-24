/* 6 functions from 0x020C4C60 to 0x020C55BC (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 data[10]; } Unk_020c4fa4_10;
typedef struct { s16 data[36]; } Unk_020c4fa4_36;
extern const Unk_020c4fa4_10 data_02144518;
extern const Unk_020c4fa4_36 data_021445b0;

extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
void func_020c4fa4(u8 *p) {
Unk_020c4fa4_10 other=data_02144518;
Unk_020c4fa4_36 buf=data_021445b0;
u16 i;
if (!(*(u16 *)(p+4)&1)) return;
*(volatile u32 *)0x040004a4=0x1f00c0;
func_020a3bbc(1);
for(i=0;i<4;i++) {
u16 idx=i*9;
other.data[1]=buf.data[idx];
other.data[2]=buf.data[idx+1];
other.data[3]=buf.data[idx+2];
other.data[4]=buf.data[idx+3];
other.data[5]=buf.data[idx+4];
other.data[6]=buf.data[idx+5];
other.data[7]=buf.data[idx+6];
other.data[8]=buf.data[idx+7];
other.data[9]=buf.data[idx+8];
func_021098ac(other.data);
}
}

void func_020c50b4(u16 *a, s32 mode) {
    if (mode == 0) {
        a[0] = 1;
        a[1] = 0;
        a[2] = 0;
        a[3] = 0;
        a[4] = 0;
        a[5] = 0;
        a[6] = 0;
        return;
    }
    if (mode != 1) return;
    a[0] = 100;
    a[1] = 0x100;
    a[2] = 8;
    a[3] = 0x1f;
    a[4] = 0xc0;
    a[5] = 0;
    a[6] = 0;
}
