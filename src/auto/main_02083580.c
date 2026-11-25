/* 1 function from 0x02083580 to 0x0208480C (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_0216010c, *data_02160078;
extern void func_0208b144(void);
extern void func_02084a70(u32);
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);
extern void func_02091cd8(void);
extern const u16 data_02140c78[10];
void func_02083580(void) {
    typedef struct {
        u16 first;
        u16 second;
    } Pair;
    extern const u16 data_02140c78[10];
    extern void func_0208ccc4(u32, s16, s16);
    extern void func_0209250c(s32, s32, s16, s16, s16, s16, s16, s16, s16, s16, s16, s16, s16);
    extern u8 func_02084f80(u16);
    extern u8 *func_02021f10(s32);
    extern void func_0208d080(s32, s16, s16, s32);
    extern void func_0208cef8(s32);
    extern void func_0208ce74(void);
    extern void func_02092814(s32, s32, s16, s16, s16, s16, s16);
    extern void func_0208dc14(s16, s16, s16, s16, s32);
    extern void func_0208e000(u32, s16, s16, s16, s16);
    extern void func_0208e1cc(s32, s32);
    extern void func_0208e67c(s16, s16, s32, s32);
    extern void func_0208dea4(u32, s32, s16, s16, s16, u8);
    extern void func_0208f4e4(s16, s16, s16, s32);
    extern void func_0208f7a0(s16, s16, s16, s32);
    extern void func_020a994c(void *);
    extern void func_0208e864(s16, s16, s16, s16, u8);
    extern void func_02090ea8(s16, s16, s16);
    extern void func_02091814(s16, s16, s16, s16, s16, s16, s16, s16, s16, s16, s16, s16);
    extern void func_02091b38(s32, s16, s16, s16, s16, s16);
    extern void func_02091c54(u16, u16, u16);
    extern void func_0208eef4(s16, s16, s16);
    u8 *g = data_0216010c;
    Pair local[5];
    register s32 layer = 0x8e;
    register s32 one = 1;
    register s32 zero = 0;
    register s32 four, two, backLayer;
    u32 i;

    if (g[0x3f] >= 7) return;
    if (g[0x3f] == 6) {
        func_0208b144();
        return;
    }
    func_02084a70(*(u32 *)(g + 0x5fc));
    {
        const u16 *src = data_02140c78;
        Pair *dst = local;
        i = 5;
        do {
            u16 second = src[1];
            u16 first = src[0];
            src += 2;
            four = 4;
            dst->second = second;
            dst->first = first;
            ++dst;
        } while (--i);
    }
    two = 2;
    backLayer = 0x8d;
    func_020a3bbc(0x1d);
    func_021098ac(local);
    func_02091cd8();

    switch (data_0216010c[0x3f]) {
    case 0: {
        s32 row;
        s32 x;
        one = 0;
        do {
            two = (s16)(one * 0x53 + 3);
            row = 0;
            four = 0x32;
            do {
                func_0208ccc4((u8)(row + one * 2), (s16)two, (s16)(row * four + 9));
                row = (s16)(row + 1);
            } while (row < 2);
            four = 4;
            x = one * 0x51 + 8;
            row = 0x7b;
            func_0209250c(0x21, zero, (s16)x, (s16)row, 0x4f, 0x33, 8, 8, four, 2, four, 2, layer);
            two = 0x8d;
            if (data_0216010c[0x614] > one) {
                func_02021f10(func_02084f80((u8)one));
                func_0208d080((u8)func_02084f80((u8)one), (s16)x, (s16)row, zero);
            }
            one = (s16)(one + 1);
        } while (one < 3);
        func_0208cef8(*(s32 *)(data_02160078 + 0x28));
        func_0208ce74();
        func_0209250c(0x10, zero, 5, 0x78, 0xf7, 0x39, 8, 8, four, 2, four, 2, two);
        return;
    }
    case 1: {
        u8 *menu;
        s32 width = 0x26;
        s32 j;
        u8 id;
        s32 x;
        four = 0x90;
        func_0208ce74();
        menu = *(u8 **)(data_0216010c + 0x44);
        if (menu == 0) return;
        switch (menu[0]) {
        case 1:
        case 2:
        case 3:
            func_02092814(6, zero, zero, 0x1b, 0xb4, four, backLayer);
            func_02092814(0x1e, one, 4, 0x31, 0xaf, 0x78, layer);
            layer = 0x8f;
            backLayer = 0x15;
            for (j = 0; j < 5; j = (s16)(j + 1)) {
                id = (u8)j;
                if (j == 4) {
                    id = 5;
                    width = 0x30;
                } else if (j == 3) {
                    width = 0x3a;
                }
                if (menu[2] == j) {
                    x = j * backLayer + 4;
                    func_0208dc14(id, (s16)x, 0x1d, layer, one);
                    func_0208e000((u8)j, (s16)x, 7, (s16)width, layer);
                } else {
                    func_0208dc14(id, (s16)(j * 0x15 + 4), 0x1d, 0x8f, zero);
                }
            }
            g = data_0216010c;
            if (*(s16 *)(g + 0x50d4) < 1) return;
            if (menu[2] == 0) {
                s16 kind = *(s16 *)(g + g[0x50d7] * 0x64 + 0x5578);
                if (kind == 0x1f5) {
                    func_0208e1cc(2, 0);
                    *(s16 *)(data_0216010c + 0x5382) |= 1;
                    return;
                } else if (kind == 0x1f6) {
                    func_0208e1cc(2, 0);
                    *(s16 *)(data_0216010c + 0x5382) |= 1;
                    return;
                } else {
                    func_0208e1cc(0xa, 0);
                    *(s16 *)(data_0216010c + 0x5382) &= ~1;
                    return;
                }
            }
            func_0208e1cc(0xa, 0);
            *(s16 *)(data_0216010c + 0x5382) &= ~1;
            return;
        case 4:
        case 5:
        case 6: {
            s16 flags;
            func_02092814(6, zero, zero, 0x1b, 0x84, four, backLayer);
            func_02092814(0x1e, one, 4, 0x1e, 0x7e, 0x8a, layer);
            func_0208e67c(8, 0x21, backLayer, (s8)data_0216010c[0x50de]);
            flags = *(s16 *)(data_0216010c + 0x5382);
            if (flags & 1) {
                if (flags & 4) {
                    func_0208dea4(one, zero, 0xc5, 0x89, layer, one);
                    *(s16 *)(data_0216010c + 0x5382) &= ~4;
                } else if (flags & 2) {
                    func_0208dea4(one, zero, 0xc5, 0x89, layer, one);
                } else {
                    func_0208dea4(one, zero, 0xc5, 0x89, layer, zero);
                }
            }
            if (menu[0x36] != 1) {
                func_0208f4e4(0x8e, 0x49, 0x8d, data_0216010c[0x50d7]);
            }
            return;
        }
        case 7:
            func_02092814(6, 0, 0, 0x1b, 0x84, four, backLayer);
            func_02092814(0x1e, 1, 4, 0x1e, 0x7e, 0x8a, layer);
            func_0208e67c(8, 0x21, backLayer, (s8)data_0216010c[0x50de]);
            func_020a994c(data_0216010c + 0x2a4);
            return;
        }
        break;
    }
    case 3: {
        u8 *menu;
        s16 flags;
        s32 panelHeight = 0x8a;
        four = 0x84;
        two = 0x90;
        func_0208ce74();
        menu = *(u8 **)(data_0216010c + 0x44);
        if (menu == 0) return;
        switch (menu[0]) {
        case 1:
        case 2:
        case 3:
            func_02092814(6, zero, zero, 0x1b, four, two, backLayer);
            func_02092814(0x1e, one, 4, 0x1e, 0x7e, panelHeight, layer);
            func_0208e67c(8, 0x21, backLayer, (s8)data_0216010c[0x50dc]);
            flags = *(s16 *)(data_0216010c + 0x5382);
            if ((flags & 2) || (flags & 4)) {
                func_0208dea4(1, 0, 0xc5, 0x89, layer, 1);
            } else {
                func_0208dea4(one, zero, 0xc5, 0x89, layer, zero);
            }
            return;
        case 4:
        case 5:
        case 6:
            func_02092814(6, zero, zero, 0xb, 0xb4, 0xa0, backLayer);
            func_02092814(0x1e, 1, 4, 0x21, 0xae, 0x88, layer);
            func_0208e864(zero, 0xb, 0xb1, 2, zero);
            return;
        case 7:
        case 8:
        case 9:
            func_02092814(6, zero, zero, 0x1b, four, two, backLayer);
            func_02092814(0x1e, one, 4, 0x1e, 0x7e, panelHeight, layer);
            func_0208f7a0(layer, 0x49, backLayer, data_0216010c[0x50d7]);
            func_0208e67c(8, 0x21, backLayer, (s8)data_0216010c[0x50de]);
            flags = *(s16 *)(data_0216010c + 0x5382);
            if (!(flags & 1)) return;
            if ((flags & 2) || (flags & 4)) {
                func_0208dea4(1, 0, 0xc5, 0x89, layer, 1);
            } else {
                func_0208dea4(one, zero, 0xc5, 0x89, layer, zero);
            }
            return;
        }
        break;
    }
    case 2: {
        u8 *menu;
        s16 flags;
        s32 j;
        u8 id;
        s32 x;
        s32 panelHeight = 0x8a;
        u8 **pp = &data_0216010c;
        two = 0x90;
        func_0208ce74();
        menu = *(u8 **)(data_0216010c + 0x44);
        if (menu == 0) return;
        switch (menu[0xe]) {
        case 1:
        case 2:
        case 3:
            func_02092814(6, zero, zero, 0x1b, 0x84, two, backLayer);
            func_02092814(0x1e, one, four, 0x1e, 0x7e, panelHeight, layer);
            func_0208e67c(8, 0x21, backLayer, (s8)data_0216010c[0x50dc]);
            flags = *(s16 *)(data_0216010c + 0x5382);
            if ((flags & 2) || (flags & 4)) {
                func_0208dea4(1, 0, 0xc5, 0x89, layer, 1);
            } else {
                func_0208dea4(one, zero, 0xc5, 0x89, layer, zero);
            }
            return;
        case 4:
        case 5:
        case 6:
        case 7:
            func_02090ea8(zero, 0x1b, backLayer);
            flags = *(s16 *)(data_0216010c + 0x5382);
            if ((flags & 2) || (flags & 4)) {
                func_0208dea4(1, 0, 0xc5, 0x89, layer, 1);
            } else {
                func_0208dea4(1, zero, 0xc5, 0x89, layer, zero);
            }
            flags = *(s16 *)(*pp + 0x539c);
            if (!(flags & 1)) return;
            if ((flags & 2) || (flags & 4)) {
                func_0208dea4(4, 2, 0xc5, 0x9a, layer, one);
            } else {
                func_0208dea4(4, 2, 0xc5, 0x9a, layer, zero);
            }
            return;
        case 8:
        case 9:
        case 10:
            func_02092814(6, zero, zero, 0x1b, 0xb4, two, backLayer);
            func_02092814(0x1e, 1, 4, 0x31, 0xaf, 0x78, layer);
            layer = 0x8f;
            backLayer = 0x1d;
            for (j = 0; j < 5; j = (s16)(j + 1)) {
                id = (u8)(j + 1);
                if ((u16)(s16)(j - 3) <= 1) id = 3;
                if (data_0216010c[0x50dd] == j) {
                    x = j * 0x15 + 4;
                    func_0208dc14(id, (s16)x, backLayer, layer, one);
                    if (id != 3) {
                        func_0208e000(id, (s16)x, 7, 0x26, layer);
                    } else {
                        func_0208e000(id, (s16)x, 7, 0x3a, layer);
                    }
                } else {
                    func_0208dc14(id, (s16)(j * 0x15 + 4), backLayer, 0x8f, zero);
                }
            }
            func_0208e1cc(1, 0);
            return;
        }
        break;
    }
    case 4: {
        u8 *menu;
        s32 y;
        func_0208ce74();
        menu = *(u8 **)(data_0216010c + 0x44);
        if (menu == 0) return;
        switch (menu[0]) {
        case 1:
            func_02092814(6, zero, zero, 0x13, 0x84, 0x90, backLayer);
            func_02092814(0x1e, one, four, 0x16, 0x7e, 0x8a, layer);
            func_0208e67c(8, 0x19, backLayer, 0xa);
            func_02091814(one, 8, (s16)(data_0216010c[0x50dc] * 0x13 + 0x19), 0x7f, 0x11, 8, 8, 0xb2, four, two, four, two);
            func_02091b38(one, 6, (s16)(data_0216010c[0x50dc] * 0x13 + 0x17), 0x7b, 0xb, 0xb4);
            if (data_0216010c[0x614] >= 3 && data_0216010c[0x50dc] != 0) {
                if (*(s16 *)(data_0216010c + 0x5382) & 4) {
                    func_0208dea4(one, zero, 0xa4, 0xa0, layer, one);
                    *(s16 *)(data_0216010c + 0x5382) &= ~4;
                } else {
                    func_0208dea4(one, zero, 0xa4, 0xa0, layer, zero);
                }
            }
            backLayer = 2;
            one = 8;
            layer = 4;
            four = 0;
            two = 0x4f;
            zero = 0x2a;
            do {
                y = four * 0x2c + 0x19;
                func_0209250c(0x21, 0, 0xac, (s16)y, two, zero, one, one, layer, backLayer, layer, backLayer, 0x8e);
                if (data_0216010c[0x614] > four) {
                    func_02021f10(func_02084f80((u8)four));
                    func_0208d080((u8)func_02084f80((u8)four), 0xac, (s16)y, 1);
                }
                four = (s16)(four + 1);
            } while (four < 3);
            func_0209250c(0x10, 0, 0xaa, 0x17, 0x53, 0x86, 8, 8, 4, 2, 4, 2, 0x8d);
            if (data_0216010c[0x50e1] & 2) {
                func_02091c54(0x93, 0x42, 0xb4);
            }
            return;
        case 2:
            func_02092814(6, zero, zero, 0x13, 0x84, 0x90, backLayer);
            func_02092814(0x1e, one, four, 0x16, 0x7e, 0x8a, layer);
            func_0208e67c(8, 0x19, backLayer, 0xa);
            func_02091814(one, 8, (s16)(data_0216010c[0x50dc] * 0x13 + 0x19), 0x7f, 0x11, 8, 8, 0xb2, four, two, four, two);
            if (*(s16 *)(data_0216010c + 0x5382) & 4) {
                func_0208dea4(one, zero, 0xa4, 0xa0, layer, one);
                *(s16 *)(data_0216010c + 0x5382) &= ~4;
            } else {
                func_0208dea4(one, zero, 0xa4, 0xa0, layer, zero);
            }
            backLayer = 2;
            one = 8;
            layer = 4;
            four = 0;
            two = 0x4f;
            zero = 0x2a;
            do {
                y = four * 0x2c + 0x19;
                func_0209250c(0x21, 0, 0xac, (s16)y, two, zero, one, one, layer, backLayer, layer, backLayer, 0x8e);
                if (data_0216010c[0x614] > four) {
                    func_02021f10(func_02084f80((u8)four));
                    func_0208d080((u8)func_02084f80((u8)four), 0xac, (s16)y, 1);
                }
                four = (s16)(four + 1);
            } while (four < 3);
            func_0209250c(0x10, 0, 0xaa, 0x17, 0x53, 0x86, 8, 8, 4, 2, 4, 2, 0x8d);
            func_02091814(1, 0xac, (s16)((s8)data_0216010c[0x50de] * 0x2c + 0x45), 0x4f, 0x2a, 8, 8, 0xb3, 4, 2, 4, 2);
            func_02091b38(0, 0xaa, (s16)((s8)data_0216010c[0x50de] * 0x2c + 0x43), 0x42, 0x23, 0xb4);
            func_02091c54(0x93, 0x42, 0xb4);
            return;
        }
        break;
    }
    case 5: {
        u8 *menu;
        s16 flags;
        s32 bottom = 0x90;
        two = 0x84;
        four = 0x8a;
        func_0208ce74();
        menu = *(u8 **)(data_0216010c + 0x44);
        if (menu == 0) return;
        switch (menu[0]) {
        case 1:
        case 2:
        case 3:
            func_02092814(6, zero, zero, 0x1b, two, bottom, backLayer);
            func_02092814(0x1e, one, 4, 0x1e, 0x7e, four, layer);
            func_0208e67c(8, 0x21, backLayer, (s8)data_0216010c[0x50dc]);
            flags = *(s16 *)(data_0216010c + 0x5382);
            if ((flags & 2) || (flags & 4)) {
                func_0208dea4(1, 0, 0xc5, 0x89, layer, 1);
            } else {
                func_0208dea4(one, zero, 0xc5, 0x89, layer, zero);
            }
            return;
        case 4:
        case 5:
        case 6:
            func_02092814(6, zero, zero, 0xb, 0xb4, 0xa0, backLayer);
            func_02092814(0x1e, 1, 4, 0x21, 0xae, 0x88, layer);
            func_0208eef4(zero, 0xb, 0xb1);
            return;
        }
        break;
    }
    case 6:
    default:
        break;
    }
}
