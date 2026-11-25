/* 4 functions from 0x02057AE4 to 0x02058A08 (main), found by ds-decomp. */
#include "common.h"
extern u8 *func_020bd438(u32);
extern u8 *func_02021f10(u8);
extern void func_02057a18(u16,u32,s32);
extern void *func_020f4d40(s32);
extern f32 func_0201f884(s32),func_0201f8cc(u32);
extern f32 func_020201f4(f32,f32),func_02020888(f32,f32),func_02020604(f32,f32);
extern s32 func_0201ff0c(f32);
void *func_0205817c(u32);


extern u8 *data_021600ac;
extern u8 *data_02160078;
extern u8 *data_0216020c;
extern u8 *data_02160204;
extern s32 data_02162884[], data_02162814[];
extern u32 data_0216263c[];
extern void func_020477dc(void *, s32, s32);
extern void func_020468e0(u8);
extern u8 *func_02044f70(void);
extern void func_0208c788(u8, u8, s32 *, s32 *);
void func_02057ae4(void) {
    u8 i;
    u16 j;
    u8 *slot;
    u8 *widget;
    register u8 *bar;
    f32 ratio;
    u8 *actor;
    s32 sp2c;
    s32 sp28;

    func_02057a18(999, *(u32 *)(data_02160078 + 0x28), 0);

    for (i = 0; i < 3; i++) {
        slot = func_020bd438(i);
        if (slot != NULL && (*(u16 *)slot & 1)) {
            s32 base;
            actor = func_02021f10(slot[2]);
            base = i * 100;
            func_02057a18((u16)(base + 201), *(u8 *)(actor + 0x43), 1);
            func_02057a18((u16)(base + 202), *(u16 *)(actor + 0x10), 1);
            func_02057a18((u16)(base + 203), *(u16 *)(actor + 0x14), 1);
        }
    }

    for (i = 0; i < 3; i++) {
        slot = func_020bd438(i);
        if (slot != NULL && (*(u16 *)slot & 1)) {
            for (j = 0; j < 23; j++) {
                actor = func_02021f10(slot[2]);
                widget = func_0205817c((u16)(j + i * 23));
                if (widget != NULL && actor != NULL) {
                    switch (j) {
                        case 7:
                            bar = func_020f4d40(i + 1);
                            if (*(u16 *)(actor + 0x10) != 0) {
                                ratio = (f32)*(u16 *)(actor + 0x10) / (f32)(*(u16 *)(actor + 0x12) + *(s16 *)(actor + 0x24));
                                *(s32 *)(bar + 0x20) = (s32)(4096.0f * ratio);
                                *(s32 *)(widget + 0x8) = (s32)((f32)(i * 81 + 52) - (32.0f - 32.0f * ratio) / 2.0f);
                                *(s32 *)(bar + 0x28) = 1;
                                *(s32 *)(widget + 0x20) = 1;
                            } else {
                                *(s32 *)(widget + 0x20) = 0;
                            }
                            break;
                        case 8:
                            bar = func_020f4d40(i + 4);
                            if (*(u16 *)(actor + 0x14) != 0) {
                                ratio = (f32)*(u16 *)(actor + 0x14) / (f32)(*(u16 *)(actor + 0x16) + *(s16 *)(actor + 0x26));
                                *(s32 *)(bar + 0x20) = (s32)(4096.0f * ratio);
                                *(s32 *)(widget + 0x8) = (s32)((f32)(i * 81 + 52) - (32.0f - 32.0f * ratio) / 2.0f);
                                *(s32 *)(bar + 0x28) = 1;
                                *(s32 *)(widget + 0x20) = 1;
                            } else {
                                *(s32 *)(widget + 0x20) = 0;
                            }
                            break;
                        case 20:
                            bar = func_020f4d40(i + 7);
                            sp2c = 0;
                            sp28 = 0;
                            func_0208c788(*(u8 *)(actor + 0x42), *(u8 *)(actor + 0x43), &sp2c, &sp28);
                            if (*(u32 *)(actor + 0x4) != 0) {
                                ratio = (f32)(*(u32 *)(actor + 0x4) - sp28) / (f32)sp2c;
                                if (*(u8 *)(actor + 0x43) == 99) {
                                    ratio = 1.0f;
                                }
                                if (0.0f == ratio) {
                                    *(s32 *)(widget + 0x20) = 0;
                                } else {
                                    *(s32 *)(bar + 0x20) = (s32)(4096.0f * ratio);
                                    *(s32 *)(widget + 0x8) = (s32)((f32)(i * 81 + 29) - (64.0f - 64.0f * ratio) / 2.0f);
                                    *(s32 *)(widget + 0x20) = 1;
                                }
                            } else {
                                *(s32 *)(widget + 0x20) = 0;
                            }
                            *(s32 *)(bar + 0x28) = 1;
                            break;
                        case 21:
                        case 22:
                            break;
                    }
                    if (j >= 9 && j <= 19) {
                        if (*(u8 *)(data_02160204 + 0x11c) != 0) {
                            u16 val = *(u16 *)(actor + 0x34);
                            if (val == 100) {
                                *(s32 *)(widget + 0x20) = 1;
                            } else if ((s32)(j - 9) < (val % 100) / 9) {
                                *(s32 *)(widget + 0x20) = 1;
                            } else {
                                *(s32 *)(widget + 0x20) = 0;
                            }
                        } else {
                            *(s32 *)(widget + 0x20) = 0;
                        }
                    }
                    if (*(u8 *)(data_02160204 + 0x11c) == 0) {
                        if (j == 21) {
                            *(s32 *)(widget + 0x20) = 1;
                        }
                        if (j == 22) {
                            *(s32 *)(widget + 0x20) = 1;
                        }
                    } else {
                        if (j == 21) {
                            *(s32 *)(widget + 0x20) = 0;
                        }
                        if (j == 22) {
                            *(s32 *)(widget + 0x20) = 0;
                        }
                    }
                }
            }
        }
    }
}

void func_02057f5c(void) {
u8 *bar,*widget;
s32 one=1;
u8 *actor;
u32 i;
s32 idx,base;
f32 current,ratio,origin;
s32 other=1;
for(i=0;i<3;i=(u8)(i+1)) {
u8 *slot=func_020bd438(i);
if(!slot || !(*(u16 *)slot&1))continue;
actor=func_02021f10(slot[2]);
base=i*100;
func_02057a18((u16)(base+202),*(u16 *)(actor+16),one);
func_02057a18((u16)(base+203),*(u16 *)(actor+20),one);
idx=i*23;
widget=func_0205817c((u16)(idx+7));
if(widget && actor) {
bar=func_020f4d40(i+1);
if(!*(u16 *)(actor+16))*(s32 *)(widget+32)=0;
else {
current=func_0201f8cc(*(u16 *)(actor+16));
ratio=func_02020888(current,func_0201f884(*(u16 *)(actor+18)+*(s16 *)(actor+36)));
*(s32 *)(bar+32)=func_0201ff0c(func_020201f4(4096.0f,ratio));
origin=func_0201f884(i*81+52);
*(s32 *)(widget+8)=func_0201ff0c(func_02020604(origin,func_02020888(func_02020604(32.0f,func_020201f4(32.0f,ratio)),2.0f)));
*(s32 *)(bar+40)=one;*(s32 *)(widget+32)=one;
}
}
widget=func_0205817c((u16)(idx+8));
if(widget && actor) {
bar=func_020f4d40(i+4);
if(!*(u16 *)(actor+20))*(s32 *)(widget+32)=0;
else {
current=func_0201f8cc(*(u16 *)(actor+20));
ratio=func_02020888(current,func_0201f884(*(u16 *)(actor+22)+*(s16 *)(actor+38)));
*(s32 *)(bar+32)=func_0201ff0c(func_020201f4(4096.0f,ratio));
origin=func_0201f884(i*81+52);
*(s32 *)(widget+8)=func_0201ff0c(func_02020604(origin,func_02020888(func_02020604(32.0f,func_020201f4(32.0f,ratio)),2.0f)));
*(s32 *)(bar+40)=other;*(s32 *)(widget+32)=other;
}
}
}
}

void *func_0205817c(u32 arg0) {
    u8 *root = data_021600ac;
    u8 *node = *(u8 **)(root + 0x8c4);
    while (node != NULL) {
        if (*(u32 *)(node + 0x48) == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x3c);
    }
    return NULL;
}

extern void func_020bdcc0(s32);
extern void func_020bdd84(s32);
extern void func_02108eec(s32, s32);
void func_020581b8(void) {
    u8 *obj = *(u8 **)(data_021600ac + 0x68);
    s32 zero = 0;

    switch (*(u16 *)(*(u8 * volatile *)&data_0216020c + 0xbe)) {
    case 0:
        *(u16 *)(obj + 0x92) = zero;
        *(s32 *)(obj + 0) = 0xc8000;
        *(s32 *)(obj + 8) = 0x40000;
        func_020477dc(obj, zero, zero);
        *(s32 *)(*(u8 * volatile *)&data_0216020c + 0xb4) = 0x20000;
        *(u16 *)(*(u8 * volatile *)&data_0216020c + 0x8e) = 0x380;
        data_02162884[0] = -16;
        data_02162814[0] = -16;
        *(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) = zero;
        *(u16 *)(*(u8 * volatile *)&data_0216020c + 0xbe) = 1;
        *(u8 *)(*(u8 * volatile *)&data_0216020c + 0xd0) = zero;
        *(u8 *)(*(u8 * volatile *)&data_0216020c + 0xd8) = zero;
        break;
    case 1:
        ++*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba);
        if (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) > 60) {
            *(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) = 60;
            func_020477dc(obj, 2, 0);
        }
        *(s32 *)(*(u8 * volatile *)&data_0216020c + 0xb4) = 0x20000 - (((*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 128) / 60) << 10);
        *(u16 *)(*(u8 * volatile *)&data_0216020c + 0x8e) = 0x380 + (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 128) / 60;
        *(s32 *)(obj + 8) = (((*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 64) / 60) + 0x40) << 12;
        data_02162884[0] = (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 16) / 60 - 16;
        data_02162814[0] = (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 16) / 60 - 16;
        if (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) == 60)
            *(u16 *)(*(u8 * volatile *)&data_0216020c + 0xbe) = 2;
        break;
    case 2:
        func_020477dc(obj, 2, zero);
        *(s32 *)(data_021600ac + 0x10) = zero;
        func_020468e0(zero);
        *(u16 *)(*(u8 * volatile *)&data_0216020c + 0xbe) = 3;
        data_0216263c[0] = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
        if ((u16)(((data_0216263c[0] >> 16) * 2) >> 16) == 0)
            *(u8 *)(*(u8 * volatile *)&data_0216020c + 0xd0) |= 3;
        else
            *(u8 *)(*(u8 * volatile *)&data_0216020c + 0xd0) |= 5;
        break;
    case 3:
        *(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) = 60;
        break;
    case 4:
        func_020468e0(1);
        *(u16 *)(*(u8 * volatile *)&data_0216020c + 0xbe) = 5;
        break;
    case 5:
        func_020477dc(obj, zero, zero);
        --*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba);
        if (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) < 0)
            *(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) = zero;
        switch (*(u8 *)(*(u8 * volatile *)&data_0216020c + 0xc0)) {
        case 0:
            data_0216263c[0] = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
            *(u8 *)(*(u8 * volatile *)&data_0216020c + 0xc0) = (u8)((u16)(((data_0216263c[0] >> 16) * 4) >> 16) + 1);
            ++*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba);
            break;
        case 1:
            *(s32 *)(obj + 8) = (0xdf - (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 95) / 60) << 12;
            break;
        case 2:
            *(s32 *)(obj + 0) = (0xa9 + (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 31) / 60) << 12;
            *(s32 *)(obj + 8) = (0x43 + (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 61) / 60) << 12;
            *(u16 *)(obj + 0x92) = 0xc000;
            break;
        case 3:
            *(s32 *)(obj + 0) = (0xff - (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 55) / 60) << 12;
            *(s32 *)(obj + 8) = (0x63 + (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 29) / 60) << 12;
            *(u16 *)(obj + 0x92) = 0x4000;
            break;
        case 4:
            *(s32 *)(obj + 0) = (0x11f - (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 87) / 60) << 12;
            *(s32 *)(obj + 8) = (0xa3 - (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 35) / 60) << 12;
            *(u16 *)(obj + 0x92) = 0x4000;
            break;
        }
        *(s32 *)(*(u8 * volatile *)&data_0216020c + 0xb4) = 0x20000 - (((*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 128) / 60) << 10);
        *(u16 *)(*(u8 * volatile *)&data_0216020c + 0x8e) = 0x380 + (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 128) / 60;
        *(s32 *)(obj + 8) = (((*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 64) / 60) + 0x40) << 12;
        data_02162884[0] = (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 16) / 60 - 16;
        data_02162814[0] = (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 16) / 60 - 16;
        if (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) == 0)
            *(u16 *)(*(u8 * volatile *)&data_0216020c + 0xbe) = 2;
        break;
    case 6:
        data_02160204[0x11f] = *(u8 *)(*(u8 * volatile *)&data_0216020c + 0xc1);
        *(s32 *)(data_021600ac + 0xc) = 1;
        data_02160204[0xd8] = 0x26;
        if (func_02044f70() == NULL) break;
        {
            u8 *p2 = func_02044f70();
            if (*(s32 *)(p2 + 8) != 1) break;
            data_02160204[0xd8] = 0x12;
            p2 = func_02044f70();
            *(s32 *)(p2 + 0xc) |= 1;
            p2 = func_02044f70();
            *(s32 *)(p2 + 0xc) |= 2;
        }
        break;
    case 7:
        func_020477dc(obj, zero, zero);
        --*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba);
        if (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) < 0)
            *(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) = zero;
        switch (*(u8 *)(*(u8 * volatile *)&data_0216020c + 0xc0)) {
        case 0:
            data_0216263c[0] = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
            *(u8 *)(*(u8 * volatile *)&data_0216020c + 0xc0) = (u8)((u16)(((data_0216263c[0] >> 16) * 4) >> 16) + 1);
            ++*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba);
            break;
        case 1:
            *(s32 *)(obj + 8) = (0xdf - (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 95) / 60) << 12;
            break;
        case 2:
            *(s32 *)(obj + 0) = (0xa9 + (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 31) / 60) << 12;
            *(s32 *)(obj + 8) = (0x43 + (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 61) / 60) << 12;
            *(u16 *)(obj + 0x92) = 0xc000;
            break;
        case 3:
            *(s32 *)(obj + 0) = (0xff - (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 55) / 60) << 12;
            *(s32 *)(obj + 8) = (0x63 + (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 29) / 60) << 12;
            *(u16 *)(obj + 0x92) = 0x4000;
            break;
        case 4:
            *(s32 *)(obj + 0) = (0x11f - (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 87) / 60) << 12;
            *(s32 *)(obj + 8) = (0xa3 - (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 35) / 60) << 12;
            *(u16 *)(obj + 0x92) = 0x4000;
            break;
        }
        *(s32 *)(*(u8 * volatile *)&data_0216020c + 0xb4) = 0x20000 - (((*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 128) / 60) << 10);
        *(u16 *)(*(u8 * volatile *)&data_0216020c + 0x8e) = 0x380 + (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 128) / 60;
        *(s32 *)(obj + 8) = (((*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 64) / 60) + 0x40) << 12;
        data_02162884[0] = (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 16) / 60 - 16;
        data_02162814[0] = (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) * 16) / 60 - 16;
        if (*(s16 *)(*(u8 * volatile *)&data_0216020c + 0xba) != 0) return;
        {
            s32 two = 2, thousand = 1000;
            func_020bdcc0(two);
            func_020bdd84(two);
            data_02160204[0xd8] = two;
            data_02160204[0x11d] |= 1;
            func_02108eec(0, thousand);
            func_02108eec(1, thousand);
            *(s32 *)(data_021600ac + 0xc) = 1;
            *(u16 *)(*(u8 * volatile *)&data_0216020c + 0xbe) = 6;
        }
        break;
    }
}

