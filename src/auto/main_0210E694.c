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
extern void (*data_02156154)(u32);
extern s32 data_02162950;
extern s32 func_0210f170(const char *, s32, s32, s32);
extern s32 func_0210f20c(const char *, s32, s32, s32);
extern s32 func_0210f2e4();
extern s32 func_0210f314();
extern void func_0200439c(void);
extern void func_020043f8(void *, u32, s32);
extern void func_02004544(void);
extern void func_02004588(void);
extern void func_020045bc(void *, u32, u32);
extern void func_0200462c(void);
extern void func_021091b4(void);
extern s32 func_0210e93c(void *, u32, const char *, u32 *);
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

void func_0210e7ac(void) {
    func_020081c0();
    func_02002790();
    *(volatile u32 *)0x04001000 |= 0x10000;
}

void func_0210e7d0(void) {
    func_02002750();
    *(volatile u32 *)0x04001000 &= ~0x10000;
}

void *func_0210e7f0(s32 arg0, s32 arg1) {
    s32 local;
    void *p;
    void *result;

    p = func_02109b14(arg0, &local);
    if (p == NULL) {
        return NULL;
    }
    result = func_0210e8b4(p, local, arg0, arg1);
    if (p != NULL) {
        func_0210c5dc(p);
    }
    return result;
}

s32 func_0210e848(const char *arg0, u32 *arg1) {
    u32 local;
    void *p;

    p = func_02109b14((s32)arg0, &local);
    if (p == NULL) {
        data_02156154(arg1[0]);
        return 0;
    }
    func_0210e93c(p, local, arg0, arg1);
    if (p != NULL) {
        func_0210c5dc(p);
    }
    return 1;
}

void *func_0210e8b4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 *out = (u32 *)arg3;

    if (data_02162950 != 0) {
        arg1 = data_02162950;
    }
    out[0] = func_0210f170((const char *)arg2, arg1, 0, 0);
    if (out[0] == 0) {
        return (void *)0;
    }
    out[1] = (u16)out[0] << 3;
    if (!func_0210f2e4()) {
        func_0200439c();
        func_020043f8(arg0, out[1], arg1);
        func_02004544();
    }
    func_021091b4();
    return (void *)1;
}

s32 func_0210e93c(void *arg0, u32 arg1, const char *arg2, u32 *arg3) {
    u32 size;
    s32 flag;

    if (arg1 < 8) {
        arg1 = 8;
    } else if (arg1 < 0x20) {
        arg1 = 0x20;
    }
    size = (arg1 + 3) & ~3;
    flag = (arg1 <= 8) ? 1 : 0;
    arg3[0] = func_0210f20c(arg2, size, flag, 0);
    if (arg3[0] == 0) {
        data_02156154(arg3[0]);
        return 0;
    }
    arg3[1] = (u16)arg3[0] << 3;
    if (!func_0210f314()) {
        func_02004588();
        func_020045bc(arg0, arg3[1], size);
        func_0200462c();
    }
    func_021091b4();
    return 1;
}

extern void func_0210eb14(void *);
extern void func_0210eb4c(void *);
void func_0210eb80(u8 *arg0) {
    func_0210eb14(arg0);
    func_0210eb4c(arg0 + 8);
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

s32 func_0210f20c(const char *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 ret;
    if (data_02155c94[2] != 0 && arg0 != NULL) {
        if (data_02162a80[0] == '\0') {
            func_02012210(data_02162b00, arg0);
        } else {
            func_02012210(data_02162b00, data_02162a80);
        }
        data_02162a54[0] = 0;
    }
    ret = data_02156158(arg1, arg2, arg3);
    data_02162b00[0] = '\0';
    data_02162a54[0] = 0;
    return ret;
}

