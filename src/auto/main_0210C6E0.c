/* 46 functions from 0x0210C6E0 to 0x0210D6D8 (main), found by ds-decomp. */
#include "common.h"
extern const u8 data_02144b9c[];
extern u32 func_0210c8e8(u32);
typedef struct { char *name; u16 hash; u16 pad; } SectionEntry;
extern char data_02155c40[4], data_02155c44[8];
extern s32 func_02012348(const char *);
extern s32 func_0210c060(const char *, s32);
extern s32 func_020123f0(const char *, const char *);
extern u8 data_0216276c[];
extern void func_02113844(void);
extern void *func_0210c518(s32,u32);
extern void *func_021152f4(void *,s32);
extern void func_02114d00(void *,s32,void *,s32);
extern void func_02115fe0(void *);
extern void func_02113c0c(void *);
extern void func_0210d828(void);
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
typedef struct { u8 a,b,c,d; u16 repeat,trigger,pressed,held,released,down,raw,pad,up; } InputState;
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
void func_0210c6e0(void) {
    u16 i = 0;
    s32 keys = *(volatile u16 *)0x4000130 | *(volatile u16 *)0x2ffffa8;
    u16 prev;
    keys = (u16)((keys ^ 0x2fff) & 0x2fff);
    keys = (u16)(keys & ~((keys & 0x40) << 1) & ~((keys & 0x20) >> 1));
    prev = ((InputState *)data_021626a0)->raw;
    ((InputState *)data_021626a0)->down = (prev ^ keys) & keys;
    ((InputState *)data_021626a0)->released = prev & (prev ^ keys);
    ((InputState *)data_021626a0)->raw = keys;
    ((InputState *)data_021626a0)->trigger = ((InputState *)data_021626a0)->down;
    for (; i < 12; i++) {
        u16 bit = 1 << i;
        if (keys & bit) {
            u16 repeat = ((volatile InputState *)data_021626a0)->repeat;
            u16 timer = ((volatile u16 *)data_021626b6)[i];
            if (repeat & bit) {
                if (timer >= 2) {
                    ((volatile u16 *)data_021626b6)[i] = 0;
                    ((volatile InputState *)data_021626a0)->trigger |= bit;
                } else {
                    ((volatile InputState *)data_021626a0)->trigger &= (u16)~bit;
                }
            } else if (timer >= 10) {
                ((volatile u16 *)data_021626b6)[i] = 0;
                ((volatile InputState *)data_021626a0)->trigger |= bit;
                ((volatile InputState *)data_021626a0)->repeat = repeat | bit;
            }
            ((volatile u16 *)data_021626b6)[i]++;
        } else {
            ((volatile u16 *)data_021626b6)[i] = 0;
            ((volatile InputState *)data_021626a0)->repeat &= (u16)~bit;
            ((volatile InputState *)data_021626a0)->trigger &= (u16)~bit;
        }
    }
    data_021626a0[0] = data_02144b9c[(keys & 0xf0) >> 4];
    if (data_021626a0[1]) {
        keys = func_0210c8e8(keys);
    }
    prev = ((volatile InputState *)data_021626a0)->held;
    ((volatile InputState *)data_021626a0)->pressed = keys & (keys ^ prev);
    ((volatile InputState *)data_021626a0)->up = prev & (keys ^ prev);
    ((volatile InputState *)data_021626a0)->held = keys;
    data_021626a0[2] = data_02144b9c[(keys & 0xf0) >> 4];
}
