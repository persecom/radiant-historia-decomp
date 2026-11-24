/* 46 functions from 0x0210C6E0 to 0x0210D6D8 (main), found by ds-decomp. */
#include "common.h"
extern s32 func_021093f0(void *);
extern void func_02012590(const char *, const char *, ...);
extern char data_02155c58[];
extern char data_02155c60[];
extern u32 data_021626f0[];
extern u8 data_021626f4[];
extern u8 data_021626fc[];
extern u8 data_0216270c[];
extern u8 data_0216271c[];
extern s32 func_02113c34(s32);
extern void func_02005e80(char *, const char *, const char *);
extern void func_0210d03c(void);
extern void func_0210cfc4(void);
extern void func_0210cfc8(void);
extern void func_0210d014(void);
extern void func_02117a58(void *);
extern void func_0200ea34(s32, s32, s32);
extern u8 data_02155c64[];
extern void func_021156bc(u16, void *);
extern void func_021160c0(u32, u32, u32);
extern void func_0200f084(void *);
extern void func_0200f0c4(void *);
extern void func_0210d9e4(void *);
extern s32 func_0200ef20(s32);
extern u8 data_02155c7c[];
extern s16 data_0216274c[];
extern u8 *data_02162730;
extern void func_021138f0(void *);
extern void func_02115368(void *);
extern void func_021166a0(void *);
extern void func_02114a64(void);
extern void func_02113ce8(void *, u8);
extern s32 func_02113c88(s32, s32);
extern u8 data_02162744[];
extern s32 data_02162834;
extern void func_02113b68(s32, s32, s32);
extern void func_02113b58(void *, s32);
extern void func_02113c18(void *);
extern void func_02116078(void *, s32);
extern void func_02113d10(void *, u8, s32);
extern void func_0210d5a0(void);
extern void func_0210d5dc(s32);
extern u8 data_02162740[];


extern const char *func_0210cce4(const char *);
extern void *func_0210c924();
extern void func_0210c970(void *);
extern void func_0210c9cc();
typedef struct {
    void *f0;
    void *f4;
} Data021626e8;
extern Data021626e8 data_021626e8;
extern u8 data_0216273c[];
extern char data_02155c4c[];
extern char data_02155c50[];
extern char data_02155c54[];
extern u8 *data_02160204;
extern s32 func_0210cc54(const char *);
extern void func_0210cef8(void);
extern u8 data_021626a0[];
extern u8 data_021626b6[];
extern u16 data_021626ce[];
extern u32 data_02155c3c;
extern void func_02008f74(void *, s32, u32);
extern void *func_0210c594(s32, u32);
extern void *func_021092d8(void *);
extern void func_0210c5dc(void *);
extern s32 func_021095d0(void *);
extern void func_021093b0(void *);
extern s32 func_02109444(void *);
extern void *func_0210ca88(void *, s32);
void func_0210c898(void) {
    *(u16 *)(data_021626a0 + 0xc) = 0;
    *(u16 *)(data_021626a0 + 0xe) = 0;
    *(u16 *)(data_021626a0 + 0x10) = 0;
    *(u16 *)(data_021626a0 + 0x14) = 0;
    *(u16 *)(data_021626a0 + 0x8) = 0;
    *(u16 *)(data_021626a0 + 0xa) = 0;
    data_021626a0[0] = 0;
    data_021626a0[2] = 0;
    *(u16 *)(data_021626a0 + 0x6) = 0;
    *(u16 *)(data_021626a0 + 0x12) = 0;
    *(u16 *)(data_021626a0 + 0x4) = 0;
    func_02008f74(data_021626b6, 0, 0x18);
}

u32 func_0210c8e8(u32 arg0) {
    u32 ret = 0;
    s32 i;
    for (i = 0; i < 12; i++) {
        if (arg0 & (1 << i)) {
            ret |= data_021626ce[i];
        }
    }
    return ret;
}

void *func_0210c924(arg0, arg1)
void *arg0;
u32 arg1;
{
    void *r4 = func_0210c594(0x60, data_02155c3c);
    *(void **)r4 = func_021092d8(arg0);
    if (*(void **)r4 == NULL) {
        func_0210c970(r4);
        return NULL;
    }
    *(u32 *)((u8 *)r4 + 0xc) = arg1;
    return r4;
}

void func_0210c970(void *arg0) {
    u8 *p = (u8 *)arg0;
    if (*(void **)(p + 0x18) != NULL) {
        func_0210c5dc(*(void **)(p + 0x18));
        *(void **)(p + 0x18) = NULL;
    }
    if (func_021095d0(*(void **)p) == 0) {
        if (*(void **)p != NULL) {
            func_021093b0(*(void **)p);
            *(void **)p = NULL;
        }
    }
    if (p != NULL) {
        func_0210c5dc(p);
    }
}

void func_0210c9cc(arg0)
u8 *arg0;
{
    u64 saved = *(u64 *)&data_021626e8;
    data_021626e8.f0 = arg0;
    data_021626e8.f4 = *(void **)arg0;
    *(u32 *)(arg0 + 4) = 0;
    while (*(u32 *)((u8 *)data_021626e8.f0 + 4) == 0) {
        s8 c = **(s8 **)((u8 *)data_021626e8.f4 + 8);
        if (c != 0 && c != '#' && c != '[') {
            (*(void (**)(void))((u8 *)data_021626e8.f0 + 0xc))();
        }
        if (func_02109444(data_021626e8.f4) == 0) {
            if (*(u32 *)((u8 *)data_021626e8.f0 + 4) == 0) {
                *(u32 *)((u8 *)data_021626e8.f0 + 8) = 1;
            }
            break;
        }
    }
    *(u64 *)&data_021626e8 = saved;
}

void func_0210ca6c(void) {
    u32 r4 = func_0210c924();
    func_0210c9cc();
    func_0210c970(r4);
}

s32 func_0210cba0(u8 *arg0, s32 arg1) {
    void *res;
    if (arg1 == 0) {
        return 0;
    }
    res = func_0210ca88(arg0, arg1);
    if (res != NULL) {
        *(void **)((u8 *)*(void **)arg0 + 8) = res;
        return 1;
    }
    return 0;
}

s32 func_0210cbd0(void) {
    if (func_0210cc54(data_02155c4c)) {
        u8 *p = data_02160204;
        if (p[0x12a] & 0x10) {
            p[0x12a] &= 0x10;
        }
        *(s32 *)((u8 *)data_021626e8.f0 + 8) = 1;
        func_0210cef8();
        return 1;
    }
    if (func_0210cc54(data_02155c50)) {
        return 1;
    }
    if (func_0210cc54(data_02155c54)) {
        return 1;
    }
    return 0;
}

extern s32 func_020123f0(const char *, const char *);
extern void func_0210c5dc(void *);
extern s32 func_021095d0(void *);
extern void func_021093b0(void *);
extern s32 func_02109444(void *);
extern void *func_0210ca88(void *, s32);
s32 func_0210cc54(const char *arg0) {
    if (func_020123f0(arg0, *(const char **)((u8 *)data_021626e8.f4 + 8)) != 0) {
        return 0;
    }
    func_021093f0(data_021626e8.f4);
    return 1;
}

s32 func_0210cc88(const char *arg0) {
    if (func_020123f0(arg0, *(const char **)((u8 *)data_021626e8.f4 + 8)) != 0) {
        return 0;
    }
    func_02109444(data_021626e8.f4);
    return 1;
}

s32 func_0210ccbc(const char *arg0) {
    return func_020123f0(arg0, *(const char **)((u8 *)data_021626e8.f4 + 8)) == 0;
}

const char *func_0210cce4(const char *arg0) {
    void *r0 = data_021626e8.f4;
    const char *r4 = *(const char **)((u8 *)r0 + 8);
    if (!func_021093f0(r0)) {
        return arg0;
    }
    if (*r4 == '\0') {
        r4 = arg0;
    }
    return r4;
}

const char *func_0210cd20(u8 *arg0, const char *arg1) {
    const char *r4 = *(const char **)(arg0 + 8);
    if (!func_021093f0(arg0)) {
        return arg1;
    }
    if (*r4 == '\0') {
        r4 = arg1;
    }
    return r4;
}

void func_0210cd50(void) {
    func_0210cce4(0);
}

const char *func_0210cd60(const char *arg0) {
    void *r0 = data_021626e8.f4;
    const char *r4 = *(const char **)((u8 *)r0 + 8);
    func_02109444(r0);
    if (*r4 == '\0') {
        r4 = arg0;
    }
    return r4;
}

s32 func_0210cd90(s32 arg0) {
    void *r0 = data_021626e8.f4;
    const char *r4 = *(const char **)((u8 *)r0 + 8);
    if (!func_021093f0(r0)) {
        return arg0;
    }
    if (*r4 == '\0') {
        return arg0;
    }
    func_02012590(r4, (const char *)data_02155c58, &arg0);
    return arg0;
}

extern u8 data_02155c5c[4];
extern s32 func_021093f0(void *);
extern void func_02012590(const char *, const char *, ...);
s32 func_0210cdfc(u8 *arg0, s32 arg1) {
    const char *r4 = *(const char **)(arg0 + 8);
    if (!func_021093f0(arg0)) {
        return arg1;
    }
    if (*r4 == '\0') {
        return arg1;
    }
    func_02012590(r4, (const char *)data_02155c5c, &arg1);
    return arg1;
}

extern s32 func_0210cd90(s32);
s32 func_0210ce5c(void) {
    return func_0210cd90(0);
}

s32 func_0210ce6c(void) {
    s32 r4 = func_0210ce5c();
    func_02109444(data_021626e8.f4);
    return r4;
}

s32 func_0210ce90(void) {
    char buf[0x40] = {0};
    func_02005e80(buf, data_02155c60, *(const char **)((u8 *)data_021626e8.f4 + 8));
    return buf[0] == '[';
}

extern char data_02155c58[];
extern s32 func_0210ce5c(void);
void func_0210cef8(void) {
    *(u32 *)((u8 *)data_021626e8.f0 + 4) = 1;
}

void func_0210cf10(void) {
    if (data_021626f0[0] != 0) {
        return;
    }
    data_021626f0[0] = (u32)func_0210c594(8, data_02155c3c);
    *(void **)(data_021626f0[0] + 4) = (void *)func_0210d03c;
    data_021626f0[7] = (u32)func_0210cfc4;
    data_021626f0[8] = (u32)data_021626f4;
    data_021626f0[3] = (u32)func_0210cfc8;
    data_021626f0[4] = 0;
    func_0200f084(data_0216270c);
    func_0200f0c4(data_021626fc);
    data_021626f0[11] = (u32)func_0210d014;
    data_021626f0[12] = 0x270f;
    *(u32 *)data_021626f0[0] = 1;
    func_0210d9e4(data_0216271c);
}

void func_0210cfc4(void) {
}

void func_0210cfc8(void) {
}

void func_0210cfcc(s32 arg0) {
    if (data_021626f0[2] == arg0) {
        return;
    }
    data_021626f0[2] = arg0;
    if (arg0 != 0) {
        func_0200ef20(0);
    } else {
        while (func_0200ef20(1) == 0) {
        }
    }
}

void func_0210d014(void) {
    u32 *p = (u32 *)data_021626f0[0];
    if (*p != 0) {
        ((void (*)(void))*(void **)(p + 1))();
    }
}

void func_0210d03c(void) {
    if (((*(volatile u16 *)0x02ffffa8 & 0x8000) >> 15) == 1) {
        func_0200ea34(0xc, 0, 0);
        func_0210cfcc(0);
    }
}

void func_0210d07c(void) {
    struct {
        u32 unk0[3];
        void *ptr;
        u32 unk10, unk14;
        u16 unk18, unk1a;
        u32 unk1c, unk20, unk24, unk28, unk2c;
        u8 unk30[4];
        u16 unk34, unk36, unk38, unk3a;
        u8 unk3b;
    } unk = {0};
    unk.ptr = &data_02155c64;
    func_02117a58(&unk);
}

void func_0210d0dc(u32 arg0, u16 arg1) {
    func_021156bc(arg1, *(void **)data_02162730);
    func_021160c0(arg0, 0, arg1);
}

void func_0210d220(void) {
    if (data_02162730 == NULL) {
        return;
    }
    func_021138f0(data_02162730);
    if (*(void **)data_02162730 != NULL) {
        func_02115368(*(void **)data_02162730);
        *(void **)data_02162730 = NULL;
    }
    if (*(void **)(data_02162730 + 0x14) != NULL) {
        func_021166a0(*(void **)(data_02162730 + 0x14));
        func_02114a64();
    }
}

extern s16 data_0216274c[];
extern u8 data_02155c7c[];
extern char data_02155c4c[];
extern char data_02155c50[];
extern char data_02155c54[];
extern u8 *data_02160204;
void func_02113ce8(void *, u8);
s32 func_0210cc54(const char *);
void func_0210cef8(void);
s32 func_020123f0(const char *, const char *);
s32 func_021093f0(void *);
void func_0210d27c(s32 arg0) {
    s16 *slot;
    s32 i;
    if (arg0 < 0) {
        return;
    }
    slot = NULL;
    for (i = 0; i < 8; i++) {
        if (arg0 == data_0216274c[i * 2]) {
            slot = NULL;
            break;
        }
        if (slot == NULL && data_0216274c[i * 2] == -1) {
            slot = &data_0216274c[i * 2];
        }
    }
    if (slot == NULL) {
        return;
    }
    if (!(*(s32 (**)(void *, s32))(data_02155c7c + 4))(data_0216273c, arg0)) {
        return;
    }
    func_02113ce8(data_0216273c, data_02155c7c[0]);
    slot[0] = (s16)arg0;
    slot[1] = 6;
}

void func_0210d314(s32 arg0, u8 arg1) {
    s16 *slot;
    s32 i;
    if (arg0 < 0) {
        return;
    }
    slot = NULL;
    for (i = 0; i < 8; i++) {
        if (arg0 == data_0216274c[i * 2]) {
            slot = NULL;
            break;
        }
        if (slot == NULL && data_0216274c[i * 2] == -1) {
            slot = &data_0216274c[i * 2];
        }
    }
    if (slot == NULL) {
        return;
    }
    if (!(*(s32 (**)(void *, s32))(data_02155c7c + 4))(data_0216273c, arg0)) {
        return;
    }
    func_02113ce8(data_0216273c, arg1);
    slot[0] = (s16)arg0;
    slot[1] = 6;
}

void func_0210d3b0(s32 arg0) {
    s16 *slot;
    s32 i;
    if (arg0 < 0) {
        return;
    }
    slot = NULL;
    for (i = 0; i < 8; i++) {
        if (arg0 == data_0216274c[i * 2]) {
            slot = NULL;
            break;
        }
        if (slot == NULL && data_0216274c[i * 2] == -1) {
            slot = &data_0216274c[i * 2];
        }
    }
    if (slot == NULL) {
        return;
    }
    if (!(*(s32 (**)(void *, s32))(data_02155c7c + 4))(data_02162740, arg0)) {
        return;
    }
    func_02113ce8(data_02162740, data_02155c7c[0]);
    slot[0] = (s16)arg0;
    slot[1] = 6;
}

extern void func_02113b58(void *, s32);
extern void func_02113c18(void *);
extern void func_02008f74(void *, s32, u32);
extern void *func_0210c594(s32, u32);
extern void *func_021092d8(void *);
void func_0210d448(void) {
    func_02113b58(data_0216273c, 0);
    func_02113c18(data_0216273c);
}

extern u8 data_02162740[];
void func_0210d46c(void) {
    func_02113b58(data_02162740, 0);
    func_02113c18(data_02162740);
}

s32 func_0210d490(s32 arg0) {
    s16 *slot;
    s32 i;
    if (arg0 >= 0) {
        slot = NULL;
        for (i = 0; i < 8; i++) {
            if (arg0 == data_0216274c[i * 2]) {
                slot = NULL;
                break;
            }
            if (slot == NULL && data_0216274c[i * 2] == -1) {
                slot = &data_0216274c[i * 2];
            }
        }
        if (slot != NULL) {
            if (func_02113c88(0, arg0) > 0) {
                return 0;
            }
            if ((*(s32 (**)(void *, s32))(data_02155c7c + 4))(data_0216273c, arg0)) {
                func_02113ce8(data_0216273c, data_02155c7c[0]);
                slot[0] = (s16)arg0;
                slot[1] = 6;
            }
        }
    }
    return 1;
}

s32 func_0210d548(void) {
    s32 ret = 0;
    if (func_02113c34(0) >= 6) {
        ret = 1;
    }
    return ret;
}

void func_0210d568(s32 arg0) {
    if (arg0 < 0) {
        return;
    }
    if (func_02113c88(0, arg0) <= 0) {
        return;
    }
    func_02113b68(0, arg0, 0);
}

void func_0210d5a0(void) {
    func_02113b58(data_02162744, 0);
    func_02113c18(data_02162744);
    *(s32 *)(data_02162730 + 0xc) = -1;
}

void func_0210d5dc(s32 arg0) {
    void *p = data_02162744;
    func_0210d5a0();
    if (arg0 > -1) {
        func_02116078(p, arg0);
        func_02113ce8(p, 0x7f);
        func_02113d10(p, data_02155c7c[1], 0);
    }
    *(s32 *)(data_02162730 + 0xc) = arg0;
    *(s32 *)(data_02162730 + 8) = -1;
}

void func_0210d648(s32 arg0, s32 arg1) {
    void *p = data_02162744;
    if (arg1 == 0) {
        func_0210d5dc(arg0);
        return;
    }
    func_02113b58(p, arg1 >> data_02162834);
    *(s32 *)(data_02162730 + 8) = arg0;
    if (arg0 < 0) {
        *(s32 *)(data_02162730 + 0xc) = -1;
    }
}

void func_0210d6a4(void) {
}

void func_0210d6a8(void *arg0, s32 arg1) {
    if (!(*(s32 (**)(void *, s32))(data_02155c7c + 4))(arg0, arg1)) {
        return;
    }
    func_02113ce8(arg0, data_02155c7c[0]);
}

