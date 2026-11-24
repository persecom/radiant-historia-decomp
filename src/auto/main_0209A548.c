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
    s16 unk_698;
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
s32 func_02092994(void *, s32);
void func_021093b0(void *);
Node_0209b108 *func_0210c594(s32, s32);
void func_021167f0(Node_0209b108 **, Node_0209b108 *);

void *func_0209ac14(void) {
    return data_02160120->unk_6d4;
}

u16 func_0209ac28(u8 *arg0, s32 arg1) {
    char buf[0x20];
    void *r5;
    u16 ret;

    func_02005e80(buf, data_021488e0, func_020bd490(1, *arg0));
    r5 = func_021092d8(buf);
    if (r5 == NULL) {
        return 0;
    }

    ret = 0;
    if (func_02092ab0(r5, arg1) != -1) {
        u16 i;
        for (i = 0; i < 8; i++) {
            func_02092994(r5, 0);
        }
        ret = func_02092994(r5, 0);
    }

    if (r5 != NULL) {
        func_021093b0(r5);
    }
    return ret;
}

void func_0209b108(u8 arg0, u16 arg1) {
    Node_0209b108 *cur = data_02160120->unk_6ec;
    s32 found = 0;

    while (cur != NULL) {
        if (cur->unk_0 == arg0 && cur->unk_2 == arg1) {
            found = 1;
            break;
        }
        cur = cur->next;
    }

    if (found == 0) {
        Node_0209b108 *node = func_0210c594(0xc, data_02155c3c);
        node->unk_0 = arg0;
        node->unk_2 = arg1;
        func_021167f0(&data_02160120->unk_6ec, node);
    }
}

void func_0209b194(u16 arg0) {
    Mgr_0209a548 *mgr = data_02160120;
    if (mgr->unk_60 != arg0) {
        mgr->unk_698 = 0;
        mgr->unk_69a = 0;
        mgr->unk_69c = 0;
    }
    mgr->unk_60 = arg0;
}

