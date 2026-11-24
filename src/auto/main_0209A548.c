/* 10 functions from 0x0209A548 to 0x0209B328 (main), found by ds-decomp. */
#include "common.h"

typedef struct Node_0209b108 {
    u8 unk_0;
    u8 pad_1;
    u16 unk_2;
    u8 pad_4[4];
    struct Node_0209b108 *next;
} Node_0209b108;

typedef struct Mgr_0209a548 {
    u8 pad_00[0x60];
    u16 unk_60;
    u8 pad_62[0x636];
    u16 unk_698;
    u8 unk_69a;
    u8 pad_69b;
    u16 unk_69c;
    u8 pad_69e[0x36];
    void *unk_6d4;
    u8 pad_6d8[0x14];
    Node_0209b108 *unk_6ec;
} Mgr_0209a548;

extern Mgr_0209a548 *data_02160120;
extern const char data_021488e0[];
extern s32 data_02155c3c;

s32 func_020bd490(s32, u8);
void func_02005e80(char *, const char *, ...);
void *func_021092d8(char *);
s32 func_02092ab0(void *, s32);
u16 func_02092994(void *, s32);
void func_021093b0(void *);
Node_0209b108 *func_0210c594(s32, s32);
void func_021167f0(Node_0209b108 **, Node_0209b108 *);

void *func_0209ac14(void) {
    return data_02160120->unk_6d4;
}
