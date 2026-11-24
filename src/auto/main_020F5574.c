/* 17 functions from 0x020F5574 to 0x020F6458 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_02160c9c[64];
extern void *data_02160204;
extern s32 data_02160c7c[8];
extern void func_02021c7c(void);
extern void func_020bd690(void);

extern u32 *data_02160200;
extern u32 data_02155c3c;
extern void *data_02160c74[2];
extern void *func_0210c594(u32, u32);
extern void func_02113c0c(u32 *);
extern void func_0210d6f4(void *);
extern void func_0210d828(void);
extern void func_0210d6a4(s32, s32);
extern void func_0210c5dc(void *);
extern void func_02046760();
extern void func_0210da14(void *);
extern void func_020a9544(void *);
extern void func_0210c970(void *);

typedef struct {
    void *f0;
    void *f4;
} Data021626e8;
extern Data021626e8 data_021626e8;
extern const char data_02152000[], data_02152004[], data_02152008[], data_0215200c[];
extern const char *func_0210cce4(const char *);
extern void func_02005e80(char *, const char *, ...);
extern void func_02012590(const char *, const char *, ...);
extern f64 func_02017f64(const char *);
extern s32 func_0201f114(f64);
extern s32 func_0201f678(s32, s32);
extern s32 func_020201f4(s32, s32);
extern s32 func_020203d4(s32, s32);
extern s32 func_02020604(s32, s32);
extern s32 func_0201ff0c(s32);
void func_020f56a4(void) {
    *(u16 *)((u8 *)data_02160204 + 0x72) = 0x14b;
    *(u16 *)((u8 *)data_02160204 + 0xdc) = 0xe7;
    *(u16 *)((u8 *)data_02160204 + 0x74) = 0;
    *(u16 *)((u8 *)data_02160204 + 0x76) = 0;
    *(u16 *)((u8 *)data_02160204 + 0xd4) = 1;
    *(u16 *)((u8 *)data_02160204 + 0xda) = 999;
    func_02021c7c();
    func_020bd690();
}

s32 func_020f5704(s32 arg0) {
    return data_02160c7c[arg0];
}

void func_020f5714(s32 arg0, s32 arg1) {
    data_02160c7c[arg0] = arg1;
}

void *func_020f5724(void) {
    return data_02160c9c;
}

s32 func_020f5730(s32 arg0) {
    return (data_02160200[(u32)arg0 >> 5] & (1 << (arg0 % 32))) != 0;
}

void func_020f5760(void) {
    void **p = data_02160c74;
    *p = func_0210c594(0x30, data_02155c3c);
    func_02113c0c(*p);
    *(u8 *)((u8 *)*p + 0x24) = 0;
}

void func_020f5798(void) {
    void *p = data_02160c74[0];
    if (*(void **)p != NULL) {
        func_0210d6f4(p);
        func_0210d828();
    }
    func_0210d6a4(0x7f, 1);
    if (data_02160c74[0] != NULL) {
        func_0210c5dc(data_02160c74[0]);
        data_02160c74[0] = NULL;
    }
}

void func_020f58c0(u8 *p) {
    if (p[0x1f4] == 1) {
        func_02046760(p);
    }
    func_0210da14(p);
    void **q;
    q = *(void ***)(p + 0x128);
    if (q != NULL && *q != NULL) {
        func_020a9544(q);
    }
    func_0210c970(*(void **)(p + 0x14));
    if (p != NULL) {
        func_0210c5dc(p);
    }
}

s32 func_020f5948(void) {
    char buf[0x40];
    s32 index = 0;
    u8 *r4;
    s8 c;
    s32 i;
    void *tmp;

    r4 = *(u8 **)((u8 *)data_021626e8.f0 + 0x10);
    tmp = (void *)func_0210cce4(0);
    *(u8 *)((u8 *)data_02160204 + 0x146) = 0;
    func_02005e80(buf, data_02152000, tmp);
    c = buf[0];
    if ((c >= '0' && c <= '9') || c == '-') {
        func_02012590(buf, data_02152004, &index);
        *(u8 *)((u8 *)data_02160204 + 0x146) = 1;
        return index;
    }
    for (i = 0; i < 0x3f; i++) {
        buf[i] = buf[i + 1];
    }
    if (c != 'x') {
        func_02012590(buf, data_02152008, &index);
    }
    switch (c) {
    case 'f': {
        f32 f = (f32)func_02017f64(buf);
        return (s32)((f > 0.0f) ? (0.5f + 4096.0f * f) : (4096.0f * f - 0.5f));
    }
    case 'r':
        return (index % 360) * 0x10000 / 360;
    case 'x':
        func_02012590(buf, data_0215200c, &index);
        return index;
    case 'b':
        return *(u8 *)(r4 + index + 0x44);
    case 'n':
        return *(u32 *)(r4 + index * 4 + 0x64);
    case 'l':
        return *(u32 *)(r4 + index * 4 + 0xe4);
    case 'a':
        return *(u32 *)(r4 + 0x124);
    case 'm':
        *(u8 *)((u8 *)data_02160204 + 0x146) = 1;
        return (index << 17) + 0x10000;
    case 's':
        *(u8 *)((u8 *)data_02160204 + 0x146) = 2;
        return (index << 16) + 0x8000;
    }
    return 0;
}

