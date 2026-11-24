/* 54 functions from 0x02116350 to 0x02117304 (main), found by ds-decomp. */
#include "common.h"

extern void func_02116ad8();
extern u32 data_0216e21c;
extern u8 data_0216e220[12];
extern void *func_021169cc(void *, const void *);
extern void func_021167ac(void *, u16);
extern u8 data_0216cb1c[12];
extern u8 data_0216e1f8[24];
extern u8 data_0216e210[12];
extern u8 *data_0216cb10[3];
extern s32 data_02155dc4[54];
extern void *func_02116958(void *, void *);
void func_0211645c(u8 *arg0);
void func_021164e0(u8 *arg0);
void func_02116578(u8 *arg0);
void func_021165e0(u8 *arg0);
void func_02116604(void *arg0, void *arg1);
void func_02116674(void *arg0);
void func_02116720(s32 *arg0, s32 arg1, s32 arg2);
s32 func_02116748(s32 *arg0);
extern void func_021167f0(void *, void *);
extern void func_021168f8(void *, void *);
extern s32 func_02008128(void);
extern void func_0200813c(s32);
void func_0211645c(u8 *arg0) {
    typedef struct {
        u8 pad[0x118];
        s32 b0 : 1;
        s32 b1 : 1;
        s32 b2 : 1;
        s32 b3 : 1;
        u8 pad2[0x38];
        void **unk154;
    } SndStrmPlayer;
    SndStrmPlayer *p = (SndStrmPlayer *)arg0;
    if (p->unk154 != NULL) {
        *p->unk154 = NULL;
        p->unk154 = NULL;
    }
    p->b0 = 0;
    p->b2 = 0;
    p->b1 = 0;
}
