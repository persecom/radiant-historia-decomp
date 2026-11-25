/* 6 functions from 0x020BB558 to 0x020BC394 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 data[10]; } Unk_020bbb1c_10;
typedef struct { s16 data[18]; } Unk_020bbb1c_18;
typedef struct { s16 data[24]; } Unk_020bb558_24;
typedef struct { s16 data[12]; } Unk_020bb558_12;
#define ABS(x) ((x) >= 0 ? (x) : -(x))
extern const Unk_020bbb1c_10 data_02143c7c;
extern const Unk_020bb558_24 data_02143d58, data_02143d88;
extern const Unk_020bb558_12 data_02143cbc, data_02143cd4, data_02143ca4;
extern const Unk_020bbb1c_18 data_02143d10;
extern const Unk_020bbb1c_10 data_02143c90;
extern const Unk_020bbb1c_18 data_02143cec;
extern const Unk_020bbb1c_10 data_02143c68;
extern const Unk_020bbb1c_18 data_02143d34;

extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
void func_020bb558(u8 *arg0) {
    Unk_020bbb1c_10 other = data_02143c7c;
    u16 flags = *(u16 *)(arg0 + 0x10c);
    u16 i;

    *(volatile u32 *)0x40004a4 = 0x1f00c0;
    func_020a3bbc(*(u16 *)(arg0 + 0x112));

    if (flags & 1) {
        Unk_020bb558_24 buf = data_02143d58;
        for (i = 0; i < 3; i++) {
            u16 idx = i * 8;
            other.data[1] = buf.data[idx];
            other.data[2] = buf.data[idx + 1];
            other.data[3] = ABS(buf.data[idx + 2]);
            other.data[4] = ABS(buf.data[idx + 3]);
            other.data[8] = buf.data[idx + 6];
            other.data[9] = buf.data[idx + 7];
            other.data[5] = buf.data[idx + 4];
            other.data[6] = buf.data[idx + 5];
            func_021098ac(&other);
        }
    }
    if (flags & 2) {
        Unk_020bb558_24 buf = data_02143d88;
        for (i = 0; i < 3; i++) {
            u16 idx = i * 8;
            other.data[1] = buf.data[idx];
            other.data[2] = buf.data[idx + 1];
            other.data[3] = ABS(buf.data[idx + 2]);
            other.data[4] = ABS(buf.data[idx + 3]);
            other.data[8] = buf.data[idx + 6];
            other.data[9] = buf.data[idx + 7];
            other.data[5] = buf.data[idx + 4];
            other.data[6] = buf.data[idx + 5];
            func_021098ac(&other);
        }
    }
    i = 0;
    if (flags & 0x20) i = 1;
    if (flags & 4) {
        Unk_020bb558_12 buf = data_02143cbc;
        u16 idx = i * 6;
        other.data[1] = buf.data[idx];
        other.data[2] = buf.data[idx + 1];
        other.data[3] = ABS(buf.data[idx + 4]);
        other.data[4] = ABS(buf.data[idx + 5]);
        other.data[8] = buf.data[idx + 4];
        other.data[9] = buf.data[idx + 5];
        other.data[5] = buf.data[idx + 2];
        other.data[6] = buf.data[idx + 3];
        other.data[7] = other.data[7] + 1;
        func_021098ac(&other);
    }
    if (flags & 8) {
        Unk_020bb558_12 buf = data_02143cd4;
        u16 idx = i * 6;
        other.data[1] = buf.data[idx];
        other.data[2] = buf.data[idx + 1];
        other.data[3] = ABS(buf.data[idx + 4]);
        other.data[4] = ABS(buf.data[idx + 5]);
        other.data[8] = buf.data[idx + 4];
        other.data[9] = buf.data[idx + 5];
        other.data[5] = buf.data[idx + 2];
        other.data[6] = buf.data[idx + 3];
        other.data[7] = other.data[7] + 1;
        func_021098ac(&other);
    }
    if (flags & 0x10) {
        Unk_020bb558_12 buf = data_02143ca4;
        u16 idx = i * 6;
        other.data[1] = buf.data[idx];
        other.data[2] = buf.data[idx + 1];
        other.data[3] = ABS(buf.data[idx + 4]);
        other.data[4] = ABS(buf.data[idx + 5]);
        other.data[8] = buf.data[idx + 4];
        other.data[9] = buf.data[idx + 5];
        other.data[5] = buf.data[idx + 2];
        other.data[6] = buf.data[idx + 3];
        other.data[7] = other.data[7] + 1;
        func_021098ac(&other);
    }
    if (flags & 0x40) {
        if (*(s8 *)(arg0 + 0x10e) >= 15) {
            other.data[1] = 83;
            other.data[2] = 42;
            other.data[3] = 9;
            other.data[4] = 5;
            other.data[8] = 9;
            other.data[9] = 5;
            other.data[5] = 221;
            other.data[6] = 50;
            other.data[7] = other.data[7] + 1;
            func_021098ac(&other);
        }
    }
    if (!(flags & 0x80)) return;
    arg0 += 0x100;
    {
        Unk_020bbb1c_18 buf = data_02143d10;
        for (i = 0; i < 3; i++) {
            u16 idx = i * 6;
            other.data[1] = buf.data[idx];
            other.data[2] = buf.data[idx + 1];
            s32 a = ABS(buf.data[idx + 4]);
            s32 b = ABS(buf.data[idx + 5]);
            other.data[3] = a;
            other.data[4] = b;
            if (i != 1) other.data[8] = buf.data[idx + 4];
            else other.data[8] = *(s16 *)(arg0 + 0x10);
            other.data[9] = buf.data[idx + 5];
            if (i != 2) other.data[5] = buf.data[idx + 2];
            else other.data[5] = *(s16 *)(arg0 + 0x10) + buf.data[idx + 2];
            other.data[6] = buf.data[idx + 3];
            func_021098ac(&other);
        }
    }
}

void func_020bbb1c(void) {
Unk_020bbb1c_10 other=data_02143c90;
Unk_020bbb1c_18 buf=data_02143cec;
s16 i;
*(volatile u32 *)0x040004a4=0x1f0080;
func_020a3bbc(10);
other.data[7]=700;
for(i=0;i<3;i++) {
s16 idx=i*6;
other.data[1]=buf.data[idx];
other.data[2]=buf.data[idx+1];
other.data[3]=buf.data[idx+4];
other.data[4]=buf.data[idx+5];
other.data[5]=buf.data[idx+2];
other.data[6]=buf.data[idx+3];
other.data[8]=buf.data[idx+4];
other.data[9]=buf.data[idx+5];
if(i==1) other.data[8]=130;
func_021098ac(&other);
}
}

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
