/* 36 functions from 0x0210E694 to 0x0210F550 (main), found by ds-decomp. */
#include "common.h"

extern s32 data_02155c94[];
extern u8 data_02162954[256];
extern void (*data_0215615c)(void *);
extern void func_02005ec0(void *, u32, const char *, char *);
extern int func_020123f0(const u8 *, const u8 *);
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
extern void *data_02155c3c;
extern u8 data_02162a74[];
extern void *func_0210ed58(u32, u8);
extern s32 func_02012348(const char *);
extern void *func_0210c518(s32, void *);
extern void func_02008e68(s32, void *, s32);
extern u16 func_0210c060(void *, s32);
extern void func_021167f0(void *, void *);
extern void func_021168f8(void *, void *);
extern void *data_02162b80;
extern void func_0210f0b0(void);
extern void func_02125448(void *);
extern void func_02124c78(void);
extern void func_02125038(void);
extern void func_0210f344(const char *);
extern void func_0210e3dc(void);
extern s32 func_02120828(s32);
extern void func_0210f38c(void);
extern void *func_0210ec9c(const char *, s32, s32);
extern void *func_0210edac(u32, u8);
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
    u32 val;

    if (data_02162950 != 0) {
        arg1 = data_02162950;
    }
    val = func_0210f170((const char *)arg2, arg1, 0, 0);
    out[0] = val;
    if (val == 0) {
        return (void *)0;
    }
    out[1] = (u16)val << 3;
    if (!func_0210f2e4(val)) {
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
    if (!func_0210f314(arg3[0])) {
        func_02004588();
        func_020045bc(arg0, arg3[1], size);
        func_0200462c();
    }
    func_021091b4();
    return 1;
}

s32 func_0210e9e8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 *out = (u32 *)arg3;
    u32 val;

    if (data_02162950 != 0) {
        arg1 = data_02162950;
    }
    val = func_0210f170((const char *)arg2, arg1, 0, 0);
    out[0] = val;
    if (val == 0) {
        return 0;
    }
    out[1] = (u16)val << 3;
    if (!func_0210f2e4(val)) {
        func_0200439c();
        func_020043f8(arg0, out[1], arg1);
        func_02004544();
    }
    return 1;
}

s32 func_0210ea6c(void *arg0, u32 arg1, const char *arg2, u32 *arg3) {
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
    if (!func_0210f314(arg3[0])) {
        func_02004588();
        func_020045bc(arg0, arg3[1], size);
        func_0200462c();
    }
    return 1;
}

void func_0210eb14(void *arg0) {
    u32 *p = (u32 *)arg0;
    if (p[1] == 0) {
        return;
    }
    data_02156154(p[0]);
    p[0] = 0;
    p[1] = 0;
}

extern void func_0210eb14(void *);
extern void func_0210eb4c(void *);
void func_0210eb80(u8 *arg0) {
    func_0210eb14(arg0);
    func_0210eb4c(arg0 + 8);
}

void func_0210eb98(const char *arg0, ...) {
    char *vlist = (char *)((u32)&arg0 & ~3) + 4;
    func_02005ec0(data_02162954, 0x100, arg0, vlist);
}

void *func_0210ed58(u32 arg0, u8 arg1) {
    u8 *node = NULL;
    while ((node = (node != NULL) ? *(u8 **)(node + *(u16 *)((u8 *)data_02162a54 + 0x2a) + 4)
                                  : *(u8 **)((u8 *)data_02162a54 + 0x20)) != NULL) {
        if (*(u32 *)(node + 8) == arg0 && *(u8 *)(node + 0xc) == arg1) {
            return node;
        }
    }
    return NULL;
}

void *func_0210edac(u32 arg0, u8 arg1) {
    s32 len = func_02012348(data_02162b00);
    u8 *p = func_0210c518(len + 0x1c, data_02155c3c);
    func_02008e68(0, p, 0x1c);
    if (p != NULL) {
        func_02012210((char *)(p + 0x1a), data_02162b00);
        *(u16 *)(p + 0x18) = func_0210c060(p + 0x1a, len);
        *(u16 *)(p + 0x16) = data_02162a54[0];
        *(u32 *)(p + 8) = arg0;
        *(u16 *)(p + 0x14) = 1;
        *(u8 *)(p + 0xc) = arg1;
        *(u32 *)(p + 0x10) = 0;
        func_021167f0(data_02162a74, p);
    }
    return p;
}

u32 func_0210ee58(s32 arg0, s32 arg1, s32 arg2) {
    u8 *p;
    u32 ret;

    if (data_02162b00[0] == '\0') {
        return (*(u32 (**)(s32, s32, s32))((u8 *)data_02162a54 + 0xc))(arg0, arg1, arg2);
    }
    data_02162a54[0]++;
    p = func_0210ec9c(data_02162b00, *(volatile u16 *)&data_02162a54[0], 0);
    if (p != NULL) {
        *(u16 *)(p + 0x14) += 1;
        return *(u32 *)(p + 8);
    }
    ret = (*(u32 (**)(s32, s32, s32))((u8 *)data_02162a54 + 0xc))(arg0, arg1, arg2);
    if (ret != 0) {
        func_0210edac(ret, 0);
    }
    return ret;
}

void func_0210eef8(u32 arg0) {
    u8 *p = func_0210ed58(arg0, 0);
    if (p != NULL) {
        if (*(s32 *)((u8 *)data_02162a54 + 0x10) != 0) {
            *(u16 *)(p + 0x14) -= 1;
        }
        if (*(u16 *)(p + 0x14) == 0) {
            func_021168f8(data_02162a74, p);
            if (*(void **)(p + 0x10) != NULL) {
                func_0210c5dc(*(void **)(p + 0x10));
                *(void **)(p + 0x10) = NULL;
            }
            if (p != NULL) {
                func_0210c5dc(p);
            }
        }
    }
    (*(void (**)(u32))((u8 *)data_02162a54 + 8))(arg0);
}

u32 func_0210ef84(s32 arg0, s32 arg1, s32 arg2) {
    u8 *p;
    u32 ret;

    if (data_02162b00[0] == '\0') {
        return (*(u32 (**)(s32, s32, s32))((u8 *)data_02162a54 + 4))(arg0, arg1, arg2);
    }
    data_02162a54[0]++;
    p = func_0210ec9c(data_02162b00, *(volatile u16 *)&data_02162a54[0], 1);
    if (p != NULL) {
        *(u16 *)(p + 0x14) += 1;
        return *(u32 *)(p + 8);
    }
    ret = (*(u32 (**)(s32, s32, s32))((u8 *)data_02162a54 + 4))(arg0, arg1, arg2);
    if (ret != 0) {
        func_0210edac(ret, 1);
    }
    return ret;
}

void func_0210f024(u32 arg0) {
    u8 *p = func_0210ed58(arg0, 1);
    if (p != NULL) {
        if (*(s32 *)((u8 *)data_02162a54 + 0x10) != 0) {
            *(u16 *)(p + 0x14) -= 1;
        }
        if (*(u16 *)(p + 0x14) == 0) {
            func_021168f8(data_02162a74, p);
            if (*(void **)(p + 0x10) != NULL) {
                func_0210c5dc(*(void **)(p + 0x10));
                *(void **)(p + 0x10) = NULL;
            }
            if (p != NULL) {
                func_0210c5dc(p);
            }
        }
    }
    (*(void (**)(u32))((u8 *)data_02162a54 + 0x14))(arg0);
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

s32 func_0210f2e4(u32 arg0) {
    u8 *p = func_0210ed58(arg0, 0);
    if (p == NULL) {
        return 0;
    }
    return (*(u16 *)(p + 0x14) >= 2) ? 1 : 0;
}

s32 func_0210f314(u32 arg0) {
    u8 *p = func_0210ed58(arg0, 1);
    if (p == NULL) {
        return 0;
    }
    return (*(u16 *)(p + 0x14) >= 2) ? 1 : 0;
}

void func_0210f38c(void) {
    data_02162b00[0] = '\0';
    data_02162a54[0] = 0;
}

void *func_0210f3ec(void *arg0, s32 arg1) {
    void *ret = func_0210ec9c((const char *)arg0, 0, arg1);
    if (ret == NULL) {
        return NULL;
    }
    return *(void **)((u8 *)ret + 0x10);
}

