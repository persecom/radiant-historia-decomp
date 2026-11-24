/* 6 functions from 0x020C4C60 to 0x020C55BC (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 data[27]; } Unk_020c4e00_27;
extern const Unk_020c4e00_27 data_02144540;
typedef struct { s16 data[10]; } Unk_020c4fa4_10;
typedef struct { s16 data[27]; } Unk_020c4c60_27;
typedef struct { s16 data[36]; } Unk_020c4fa4_36;
extern const Unk_020c4fa4_10 data_02144504;
extern const Unk_020c4c60_27 data_02144578;
extern const Unk_020c4fa4_10 data_02144518;
extern const Unk_020c4fa4_10 data_0214452c;
extern const Unk_020c4fa4_36 data_021445b0;

extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
void func_020c4c60(s16 *arg0, s16 arg1) {
    Unk_020c4fa4_10 other = data_02144504;
    Unk_020c4c60_27 buf = data_02144578;
    u16 i;
    s16 xOff = 0;

    *(volatile u32 *)0x040004a4 = 0x1f00c0;
    func_020a3bbc(0);
    *(volatile u32 *)0x04000480 = (u16)(arg0[3] | (arg0[3] << 5) | (arg0[3] << 10));

    for (i = 0; i < 3; i++) {
        u16 idx = i * 9;
        s16 w;
        other.data[1] = buf.data[idx + 0];
        other.data[2] = buf.data[idx + 1];
        other.data[3] = buf.data[idx + 2];
        other.data[4] = buf.data[idx + 3];
        if (i == 0) {
            other.data[5] = arg0[6] + (256 - arg0[1]) + buf.data[idx + 4];
        } else if (i == 1 || i == 2) {
            other.data[5] = xOff + (arg0[6] + (256 - arg0[1]));
        }
        other.data[6] = arg0[5];
        other.data[7] = arg1;
        w = (arg0[0] * buf.data[idx + 2]) / 100;
        other.data[8] = w;
        other.data[9] = arg0[4];
        xOff += w;
        func_021098ac(other.data);
    }
}

void func_020c4e00(s16 *p,s16 val) {
Unk_020c4fa4_10 other=data_0214452c;
Unk_020c4e00_27 buf=data_02144540;
s16 *table;
u16 i;
s16 total=0;
*(volatile u32*)0x40004a4=0x1f00c0;
func_020a3bbc(0);
*(volatile u32*)0x4000480=(u16)(p[3]|(p[3]<<5)|(p[3]<<10));
for(i=0;i<3;i++){
u16 idx=i*9;
other.data[1]=buf.data[idx];other.data[2]=buf.data[idx+1];
other.data[3]=buf.data[idx+2];other.data[4]=buf.data[idx+3];
if(i==0){other.data[5]=p[6]+(256-p[1]+buf.data[idx+4]);} else if((u16)(i+65535)<=1){other.data[5]=p[6]+(total+(256-p[1]));}
other.data[6]=buf.data[idx+5];other.data[7]=val;
{ s16 width=p[0]*buf.data[idx+2]/100;
other.data[8]=width;
other.data[9]=p[4];
total+=width; }
func_021098ac(&other);
}
}

void func_020c4fa4(u8 *p) {
    Unk_020c4fa4_10 other = data_02144518;
    Unk_020c4fa4_36 buf = data_021445b0;
    u16 i;
    if (!(*(u16 *)(p + 4) & 1)) return;
    *(volatile u32 *)0x040004a4 = 0x1f00c0;
    func_020a3bbc(1);
    for (i = 0; i < 4; i++) {
        u16 idx = i * 9;
        other.data[1] = buf.data[idx];
        other.data[2] = buf.data[idx + 1];
        other.data[3] = buf.data[idx + 2];
        other.data[4] = buf.data[idx + 3];
        other.data[5] = buf.data[idx + 4];
        other.data[6] = buf.data[idx + 5];
        other.data[7] = buf.data[idx + 6];
        other.data[8] = buf.data[idx + 7];
        other.data[9] = buf.data[idx + 8];
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

s32 func_020c5128(s16 *p, s32 arg1) {
    if (arg1 == 0) {
        p[2]++;
        p[0] = (p[2] * 100) / 8;
        p[1] = (p[2] * 256) / 8;
        p[3] = (p[2] * 10) / 8 + 21;
        p[4] = 232 - (p[2] * 40) / 8;
        p[5] = (p[2] * 40) / 8 - 40;
        p[6] = 100 - (p[2] * 100) / 8;
        if (p[2] > 8) {
            p[0] = 100;
            p[1] = 256;
            p[2] = 8;
            p[3] = 31;
            p[4] = 192;
            p[5] = 0;
            p[6] = 0;
            return 1;
        }
    } else if (arg1 == 1) {
        p[2]--;
        p[0] = (p[2] * 100) / 8;
        p[1] = (p[2] * 256) / 8;
        p[3] = (p[2] * 10) / 8 + 21;
        p[4] = 232 - (p[2] * 40) / 8;
        p[5] = (p[2] * 40) / 8 - 40;
        p[6] = 100 - (p[2] * 100) / 8;
        if (p[2] < 0) {
            p[0] = 1;
            p[1] = 0;
            p[2] = 0;
            p[3] = 0;
            p[4] = 0;
            p[5] = 0;
            p[6] = 0;
            return 1;
        }
    }
    return 0;
}

extern u8 *data_021601f4;
extern u8 data_021512b8[];
extern u8 data_021512d4[];
extern s32 data_0216bf84;
extern u16 data_021626a8;
extern u16 data_021628f8;
extern u8 *func_020a8604(s32, s32);
extern void func_020a8810(void *, s32);
extern void *func_020a94b8(void *);
extern void func_020ec548(void *);
extern u8 *func_020ec294(u16, u16, s32, s32);
extern void func_0203bc34(void *, void *, u16, s32, s32, s32);
extern void func_020a899c(void *);
#pragma optimization_level 3
void func_020c52c0(void) {
    u8 *p44;
    u8 *p4c;
    u8 *p40;
    void *p3c;
    u16 nextState = 0;

    p40 = *(u8 **)(data_021601f4 + 0x40);
    p44 = *(u8 **)(data_021601f4 + 0x44);
    p4c = *(u8 **)(data_021601f4 + 0x4c);
    p3c = *(void **)(data_021601f4 + 0x3c);

    switch (*(u16 *)(p40 + 0)) {
    case 0:
        *(u8 **)(p44 + 4) = func_020a8604(5, 2);
        *(u8 **)(p4c + 4) = func_020a8604(5, 2);
        func_020a8810(*(u8 **)(p44 + 4), 0x1e);
        *(void **)(p44 + 0) = func_020a94b8(data_021512b8);
        func_020a8810(*(u8 **)(p4c + 4), 0x1e);
        *(void **)(p4c + 0) = func_020a94b8(data_021512d4);
        if (*(u16 *)(p40 + 6) == 0) {
            *(u16 *)(p40 + 6) = 1;
        }
        *(s32 *)(*(u8 **)(p44 + 4) + 0x44) = 0;
        *(s32 *)(*(u8 **)(p44 + 4) + 0x48) = 0x2e000;
        *(s32 *)(*(u8 **)(p44 + 4) + 0x4c) = 0xc8000;
        (*(void (**)(void *))(*(u8 **)(p44 + 4) + 4))(*(u8 **)(p44 + 4));
        *(s32 *)(*(u8 **)(p4c + 4) + 0x44) = 0;
        *(s32 *)(*(u8 **)(p4c + 4) + 0x48) = 0x5a000;
        *(s32 *)(*(u8 **)(p4c + 4) + 0x4c) = 0xc8000;
        (*(void (**)(void *))(*(u8 **)(p4c + 4) + 4))(*(u8 **)(p4c + 4));
        if (*(u8 **)(p40 + 8) != NULL) {
            func_020ec548(*(u8 **)(p40 + 8));
            *(u8 **)(p40 + 8) = NULL;
        }
        if (*(u16 *)(p40 + 0xc) == 0) {
            *(u16 *)(p40 + 0xc) = 1;
        }
        {
            u8 *obj = func_020ec294((u16)(*(u16 *)(p40 + 0xc) + 0xfa0), 0x63, 0x8000, 0);
            *(s32 *)(obj + 0x14) = 0x94000;
            *(s32 *)(obj + 0x18) = 0x6a000;
            *(s32 *)(obj + 0x1c) = 0x64000;
            *(u32 *)(obj + 0x4) &= ~1;
            *(s16 *)(p40 + 0xe) = -0x1e;
            *(u8 **)(p40 + 8) = obj;
        }
        func_020c50b4((u16 *)p3c, 0);
        nextState = 1;
        break;
    case 1:
        if (func_020c5128((s16 *)p3c, 0) != 0) {
            nextState = 2;
        }
        break;
    case 2:
        data_0216bf84 = 1;
        *(u16 *)(p40 + 4) |= 1;
        if (!(*(u16 *)(p40 + 4) & 2)) {
            *(u16 *)(p40 + 4) |= 2;
            func_0203bc34(*(void **)(p44 + 0), *(void **)(p44 + 4), *(u16 *)(p40 + 6), 0x8a, 0, 1);
            func_0203bc34(*(void **)(p4c + 0), *(void **)(p4c + 4), *(u16 *)(p40 + 6), 0x8a, 0, 1);
            func_020a899c(*(void **)(p44 + 4));
            func_020a899c(*(void **)(p4c + 4));
        }
        if (*(s32 *)(p44 + 0x20) == 0) {
            *(u16 *)(p40 + 4) |= 4;
        }
        *(s16 *)(p40 + 0xe) += 4;
        if (*(s16 *)(p40 + 0xe) > 0x1f) {
            *(s16 *)(p40 + 0xe) = 0x1f;
        }
        if (*(s16 *)(p40 + 0xe) > 1) {
            u8 *obj = *(u8 **)(p40 + 8);
            *(*(u8 **)(*(u8 **)(obj + 0) + 8) + 0x71) = (u8)*(s16 *)(p40 + 0xe);
            *(u32 *)(obj + 4) |= 1;
        }
        *(s16 *)(p40 + 2) += 1;
        if (*(s16 *)(p40 + 2) > 0x32) {
            *(s16 *)(p40 + 2) = 0x32;
        }
        if ((data_021626a8 & 1) || data_021628f8 != 0) {
            if (!(*(u16 *)(p40 + 4) & 4)) {
                *(s16 *)(p40 + 0xe) = 0x1f;
                *(u16 *)(p40 + 4) |= 4;
            } else if (*(u16 *)(p40 + 4) & 4) {
                *(s32 *)(data_021601f4 + 0x48) = 1;
            }
        }
        break;
    }

    if (nextState != 0) {
        *(u16 *)(p40 + 0) = nextState;
    }
}
#pragma optimization_level 4
