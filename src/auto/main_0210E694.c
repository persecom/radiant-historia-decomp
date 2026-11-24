/* 36 functions from 0x0210E694 to 0x0210F550 (main), found by ds-decomp. */
#include "common.h"

extern s32 data_02155c94[];
extern char data_02162a80[];
extern char data_02162b00[];
extern u16 data_02162a54[];
extern s32 (*data_02156150)(s32, s32, s32);
typedef struct {
    u16 a;
    u16 b;
} UnkPair;
typedef struct {
    u16 x;
    u16 y;
    u16 touch;
    u16 validity;
} UnkTPData;
typedef struct {
    u16 trg;
    u16 rel;
    u16 pad4;
    u16 pad6;
    UnkTPData prev;
    UnkTPData cur;
} UnkTouchState;
extern u8 data_02162910[];
extern u8 data_02162908[];
extern u16 data_021628f8[];
void func_02012210(char *, const char *);
void func_0200dadc(void);
s32 func_0200db50(void *);
void func_0200dbe4(void *);
void func_0200dcd4(s32, s32, void *, s32);
void func_0200e254(s32);
void func_0200e26c(s32);
void func_02008f74(void *, s32, s32);
void func_0200df30(void *);
extern s32 (*data_02156158)(s32, s32, s32);
extern void func_020081c0(void);
extern void func_02002790(void);
extern void func_02002750(void);
extern void *func_02109b14(s32, void *);
extern void *func_0210e8b4(void *, s32, s32, s32);
extern void func_0210c5dc(void *);
void func_0210e694(void) {
    u8 buf[8];
    func_0200dadc();
    if (func_0200db50(buf)) {
        func_0200dbe4(buf);
    }
    func_0200dcd4(0x64, 4, data_02162910, 8);
    func_0200e254(2);
    func_0200e26c(2);
}

void func_0210e6f0(void) {
    func_02008f74(data_02162908, 0, 8);
    *(UnkPair *)&data_021628f8[4] = *(UnkPair *)&data_021628f8[8];
    *(UnkPair *)&data_021628f8[6] = *(UnkPair *)&data_021628f8[10];
    data_021628f8[1] = 0;
    data_021628f8[0] = 0;
}

void func_0210e740(void) {
    u16 prev = data_021628f8[10];
    u16 cur;
    u32 diff;
    func_0200df30(data_02162908);
    cur = data_021628f8[10];
    diff = cur ^ prev;
    data_021628f8[0] = cur & diff;
    data_021628f8[1] = prev & diff;
    if (cur == 0) {
        data_021628f8[8] = data_021628f8[4];
        data_021628f8[9] = data_021628f8[5];
    } else {
        u16 v;
        *(UnkPair *)&data_021628f8[4] = *(UnkPair *)&data_021628f8[8];
        v = data_021628f8[11];
        data_021628f8[6] = cur;
        data_021628f8[7] = v;
    }
}

s32 func_0210f170(const char *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 ret;
    if (data_02155c94[2] != 0 && arg0 != NULL) {
        if (data_02162a80[0] == '\0') {
            func_02012210(data_02162b00, arg0);
        } else {
            func_02012210(data_02162b00, data_02162a80);
        }
        data_02162a54[0] = 0;
    }
    ret = data_02156150(arg1, arg2, arg3);
    data_02162b00[0] = '\0';
    data_02162a54[0] = 0;
    return ret;
}
