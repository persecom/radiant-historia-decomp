/* 37 functions from 0x02009B24 to 0x0200A980 (main), found by ds-decomp. */
#include "common.h"
typedef struct { u16 a,b,c,d,e; } Unk0200A348Five;
typedef struct { u16 a,b,c,d,e,f; } Unk0200A348Six;

extern u32 data_0215d1b8[9];
extern u8 data_0215ec80[0x60];
extern void *data_0215ece8[32];

extern void func_02006510(void *);
extern void func_02006560(void *, u32);
extern s32 func_0200a85c(s32);

typedef struct Unk_0200a328 {
    u32 field_0;
    u32 field_4;
} Unk_0200a328;

typedef struct ChanBits {
    u32 ch : 5;
    u32 pad : 27;
} ChanBits;
typedef union ChanCmd {
    u32 raw;
    ChanBits bits;
} ChanCmd;
extern s32 func_02008128(void);
extern void func_0200813c(s32);
extern s32 func_02009964(s32);
extern void func_02009ec4(void);
s32 func_02009d58(u32);
extern void func_0200a674(s32, void *);
extern void func_020081a4(s32);
extern u32 *data_0215ece0;
extern void func_02006d8c(void *, s32);

extern void func_0200a578(void);
extern u8 data_0215d480[0x1000];
extern u32 data_0215d1dc[9];
extern void func_02006dc4(void *, int);
extern s32 func_0200a6e4(s32, u32, s32);

extern u32 func_02009da8(void);
extern u32 func_02009de4(void);
extern void func_02009ffc(u32);

extern u8 data_0215ec80[0x60];
extern void func_0200a674(s32, void *);
extern s32 func_02009f34(void);
extern s32 func_0200a6c0(s32, s32);
extern void func_020081a4(s32);
extern s32 func_0200a6e4();

extern u32 *data_0215ece0;
extern void func_02006d8c(void *, s32);
extern void func_02006dc4(void *, s32);

extern const u8 data_0213e61c[724];
extern void func_0200986c(void);
extern void func_02009880(void);
extern void func_02006da8(void *, s32);

extern s32 func_0200698c(void);

s32 func_0200a348(u8 *arg0, u8 *arg1, u32 *arg2) {
    while (arg2[0] < *(u32 *)(arg0 + 0x38)) {
        u32 entry = *(u32 *)(arg0 + 0x3c + arg2[0] * 4);
        arg1[0] = entry;
        int type = entry & 0xff;
        u32 offset = entry >> 8;
        switch (type) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5: {
            u16 *src = (u16 *)(arg0 + offset);
            u16 *dst = (u16 *)(arg1 + 2);
            u16 e = src[4], d = src[3], c = src[2], b = src[1], a = src[0];
            dst[4] = e;
            dst[2] = c;
            dst[3] = d;
            dst[0] = a;
            dst[1] = b;
            arg2[0]++;
            return 1;
        }
        case 0x10: {
            u8 *drum = arg0 + offset;
            while (arg2[1] < (u32)(drum[1] - drum[0] + 1)) {
                u16 *src = (u16 *)(drum + arg2[1] * 12);
                u16 *dst = (u16 *)arg1;
                u16 f = src[6], e = src[5], d = src[4], c = src[3], b = src[2], a = src[1];
                dst[5] = f;
                dst[2] = c;
                dst[3] = d;
                dst[4] = e;
                dst[0] = a;
                dst[1] = b;
                arg2[1]++;
                return 1;
            }
            break;
        }
        case 0x11: {
            u8 *key = arg0 + offset;
            while (arg2[1] < 8) {
                if (key[arg2[1]] == 0) {
                    break;
                }
                u16 *src = (u16 *)(key + arg2[1] * 12);
                u16 *dst = (u16 *)arg1;
                u16 f = src[9], e = src[8], d = src[7], c = src[6], b = src[5], a = src[4];
                dst[5] = f;
                dst[2] = c;
                dst[3] = d;
                dst[4] = e;
                dst[0] = a;
                dst[1] = b;
                arg2[1]++;
                return 1;
            }
            break;
        }
        }
        arg2[0]++;
        arg2[1] = 0;
    }
    return 0;
}
