/* 1 function from 0x0203FD08 to 0x020407FC (main), found by ds-decomp. */
#include "common.h"

extern void func_0200781c(void), func_02007904(void), func_0207b218(void), func_020437f0(void), func_020a5290(void);
extern void func_0210968c(u32, s32), func_02109790(u32);
extern s32 func_021090f4(s32, s32);
extern void func_020471b8(u8 *), func_020ed2d0(u8 *, s32);
extern u8 *func_020e9fe8(u32, u32);
extern void func_020f0154(u16);
extern void func_020f07b0(u32, u32, u32, u32, u32);
extern u8 *func_020f0aa4(u16);
extern void func_020f1dd4(u8 *, s32);
extern u8 *func_0210c594(u32, u32);
extern void *func_020f52dc(u32, s32, s32);
extern void func_0210dc88(void), func_020407fc(void), func_020f4640(void), func_020438d8(void);
extern s32 func_0210920c(s32);
extern void func_02108da0(s32, s32), func_02108d34(s32, s32), func_02108ea4(s32, s32);
extern s32 func_0201f8cc(s32), func_020201f4(u32, s32), func_02020604(u32, s32);
extern void func_020f5364(u32, void *), func_020ee6c8(u16), func_020eed30(s32);
extern u8 *func_020f0a5c(u16);
extern void func_021167f0(u32, void *), func_02124e68(void *), func_0212501c(void *);
extern void func_0204680c(u32), func_0210c5dc(void *);
extern u32 data_0216bf84, data_02162830, data_02162868, data_02162834, data_0216281c, data_02162820, data_02162870, data_021600a8, data_021600f0, data_021600b8, data_02155c3c;
extern u8 *data_02160204;
extern u32 D_0203FD08_a9c, D_0203FD08_aa0, D_0203FD08_aa4, D_0203FD08_aa8, D_0203FD08_ac0, D_0203FD08_ac8, D_0203FD08_acc, D_0203FD08_ad0, D_0203FD08_ad4, D_0203FD08_ad8, D_0203FD08_adc;
#pragma opt_cross_jump off
u32 func_0203fd08(void) {
    typedef struct {
        u32 x, y, z;
    } Vec;
    struct {
        u32 vram[2];
        u32 palettes[10];
        Vec origin;
    } scratch;

    extern u32 data_02162870;
    extern u8 *data_0216009c;
    extern u8 data_0214634c[];
    extern u16 data_02151fc8;
    extern u16 data_02151fca;
    extern u32 data_02151fcc;
    extern u8 *data_021600c0;
    extern s32 data_02162884;
    extern s32 data_02162814;
    extern u8 *data_02160200;
    extern u32 data_02146324[4];
    extern void func_020a5368(void);
    extern u16 func_020a567c(void);
    extern void func_02002858(u32, s32);
    extern void func_02108cc8(u32);
    extern void func_020a5338(void);
    extern void func_020f5798(void);
    extern void func_02041160(void);
    extern void func_02043870(void);

    u8 *ticket = NULL;
    u8 *mgr;
    u8 *obj;

    func_0200781c();
    func_02007904();
    data_02162830 = 0x1e;
    data_0216bf84 = 0;
    mgr = data_02160204;
    data_02162868 = 1;
    data_02162834 = 1;
    data_0216281c = 2;
    data_02162820 = 2;
    if (mgr[0x120] == 0) {
        ((void (*)(u32, s32, u32))func_0210968c)(3, -16, 1);
        func_02109790(3);
    } else {
        ((void (*)(u32, s32, u32))func_0210968c)(3, 16, 1);
        func_02109790(3);
    }
    data_02160204[0x120] = 0;
    data_02160204[0x11e] = 0;
    mgr = data_02160204;
    if (mgr[0x137] & 1) {
        data_02162870 = 0;
        mgr[0x137] &= 0xfe;
        data_02160204[0x137] |= 2;
    } else {
        if (func_021090f4(0, 0) == 2) {
            data_02162870 = 1;
        }
    }

    func_0207b218();
    func_02007904();
    func_020437f0();
    func_02007904();
    func_020a5290();

    mgr = data_02160204;
    if (mgr[0x7a] != 0) {
        obj = *(u8 **)(mgr + 0xe8);
        if (obj != NULL) {
            do {
                if (*(u32 *)(obj + 0x108) == 0 &&
                    *(u16 *)(obj + 0x8e) != 0x7d0 &&
                    *(u16 *)(obj + 0x8e) < 0x1770) {
                    u8 flag = obj[0x104];
                    u8 *effect;
                    func_020471b8(obj);
                    func_020ed2d0(*(u8 **)(obj + 0x108), flag);
                    if (*(u16 *)(obj + 0x90) == 0) {
                        *(Vec *)(obj + 0x24) = *(Vec *)obj;
                    }
                    effect = func_020e9fe8(0x1771, (u16)(*(u16 *)(obj + 0x90) + 0xbb9));
                    *(u32 *)(effect + 0x1c) = 0;
                    *(u32 *)(effect + 0x20) = 0;
                    *(u32 *)(effect + 0x24) = 0x32000;
                    *(u32 *)(effect + 0x18) &= ~1u;
                } else {
                    u32 id = *(u16 *)(obj + 0x8e);
                    if (id > 0x2710 && id < 0x2b01) {
                        u32 index = *(u16 *)(obj + 0x90);
                        u8 *res;
                        func_020f0154((u16)id);
                        if ((s32)id > 0x2710 && (s32)id < 0x2af8) {
                            ((void (*)(Vec, u32, u16))func_020f07b0)(*(Vec *)obj, (u16)id, (u16)index);
                        } else {
                            scratch.origin.x = 0;
                            scratch.origin.y = 0;
                            scratch.origin.z = 0;
                            ((void (*)(Vec, u32, u16))func_020f07b0)(scratch.origin, (u16)id, (u16)index);
                        }
                        res = func_020f0aa4((u16)index);
                        if (res != NULL) {
                            u8 *base = *(u8 **)res;
                            *(u32 *)(res + 0x14) |= 1;
                            *(u32 *)(base + 0x6c) = *(u32 *)(res + 4);
                            *(u32 *)(base + 0x70) = *(u32 *)(res + 8);
                            *(u32 *)(base + 0x74) = *(u32 *)(res + 0xc);
                            *(u32 *)(base + 0xf4) = 1;
                            *(u16 *)(res + 0x30) = *(u16 *)(*(u8 **)(obj + 0xb0) + 0x2a);
                            if (id == 0x2711 || id == 0x275c) {
                                func_020f1dd4(res, 0);
                            }
                        }
                    }
                }
                obj = *(u8 **)(obj + 0x134);
            } while (obj != NULL);
        }
        {
            u8 *effect = func_020e9fe8(0x177b, 0x32c9);
            *(u32 *)(effect + 0x1c) = 0;
            *(u32 *)(effect + 0x20) = 0;
            *(u32 *)(effect + 0x24) = 0x32000;
            *(u32 *)(effect + 0x18) &= ~1u;
        }
    }

    mgr = data_02160204;
    if (*(u16 *)(mgr + 0xda) != 0 && mgr[0xde] == 0) {
        goto scene_transition;
    }
    if (*(u8 **)((u8 *)&data_021600a8 + 4) == NULL) {
        u8 *p = func_0210c594(0x908, data_02155c3c);
        *(u8 **)((u8 *)&data_021600a8 + 4) = p;
        if ((*(u8 **)((u8 *)data_021600f0 + 8))[0] == 1) {
            *(u32 *)(p + 0x87c) = 1;
            *(u32 *)(*(u8 **)((u8 *)&data_021600a8 + 4) + 0x880) = 1;
        }
    }
    ticket = (u8 *)((void *(*)(u32, s16, s16))func_020f52dc)((u32)data_021600b8, 0, 0);
    data_02160204[0x112] = 0xff;
    func_02007904();
    if (ticket == NULL) goto ticket_ready;
ticket_wait:
    if (*(u32 *)(*(u8 **)(ticket + 0x14) + 8) != 0) goto ticket_ready;
    func_0210dc88();
    func_02007904();
    goto ticket_wait;
ticket_ready:
    func_020407fc();
    func_02007904();

    mgr = data_02160204;
    {
        u8 sound = mgr[0x112];
        if (sound != 0xff) {
            if (mgr[0x111] >= 1) {
                if (data_02162870 == 0) {
                    if (func_0210920c((u8)(mgr[0x111] - 1)) != sound) {
                        u16 k;
                        func_02108da0((u8)(data_02160204[0x111] - 1), sound);
                        func_02108d34((u8)(data_02160204[0x111] - 1), 0);
                        k = 10;
                        do {
                            u32 factor = ((u32 (*)(u32))func_0201f8cc)(k);
                            u32 amount = ((u32 (*)(u32, u32))func_020201f4)(0x3dcccccd, factor);
                            amount = ((u32 (*)(u32, u32))func_02020604)(0x3f800000, amount);
                            func_02108d34((u8)(data_02160204[0x111] - 1), amount);
                            func_0210dc88();
                            k = (u16)(k - 1);
                        } while (k != 0);
                        func_02108d34((u8)(data_02160204[0x111] - 1), 0x3f800000);
                        data_02160204[0x111] = 0;
                    }
                } else {
                    data_02162870 = 0;
                }
            }
        } else {
            if (func_0210920c(0) != -1) {
                func_02108ea4(0, 0);
            }
            if (func_0210920c(1) != -1) {
                func_02108ea4(1, 0);
            }
        }
    }

    {
        u8 *p = *(u8 **)((u8 *)&data_021600a8 + 4);
        data_0216bf84 = 1;
        p[0x3ac] = 0x20;
    }

scene_transition:
    if (ticket == NULL) {
        if (*(u16 *)(data_02160204 + 0xda) == 0) {
            goto teardown;
        }
    }

    if (ticket != NULL) {
        func_020f5364((u32)data_021600b8, ticket);
    }
    mgr = data_02160204;
    if (*(u16 *)(mgr + 0xda) != 0 && mgr[0xde] == 0) {
        u8 *res;
        func_020ee6c8(*(u16 *)(mgr + 0xdc));
        func_020eed30(0);
        {
            u16 scene = *(u16 *)(data_02160204 + 0x72);
            if (scene != 0) {
                func_020f0154(scene);
            }
        }
        res = func_020f0a5c(*(u16 *)(data_02160204 + 0x72));
        if (res != NULL) {
            u8 *base = *(u8 **)res;
            *(u32 *)(res + 0x14) |= 1;
            *(u32 *)(base + 0x6c) = 0;
            *(u32 *)(base + 0x70) = -0x4000;
            *(u32 *)(base + 0x74) = 0;
            *(u32 *)(base + 0xf4) = 1;
        }
        if (*(u16 *)(data_0216009c + 0x6c) == 0) {
            u8 *q = func_0210c594(0xc, data_02155c3c);
            *(u16 *)(q + 2) = 1;
            *(u16 *)q = 0x8000;
            func_021167f0((u32)(data_0216009c + 0x64), q);
        }
        *(u16 *)(data_02160204 + 0x72) -= 0x64;
        func_02124e68(scratch.palettes);
        func_0212501c(scratch.vram);
    }

    mgr = data_02160204;
    if (*(u16 *)(mgr + 0xda) != 0 && mgr[0xde] == 0) {
        func_020407fc();
        (*(u8 **)((u8 *)&data_021600a8 + 4))[0x3ac] = 0;
    }
    mgr = data_02160204;
    if (*(u16 *)(mgr + 0xda) != 0) {
        ((void (*)(void *, u16))func_0204680c)(data_0214634c, *(u16 *)(mgr + 0xda));
        *(u16 *)(data_02160204 + 0xda) = 0;
        *(u32 *)(*(u8 **)((u8 *)&data_021600a8 + 4) + 0x10) = 3;
        data_02160204[0x7e] = 1;
        mgr = data_02160204;
        if (*(u8 **)(mgr + 0xe4) != NULL) {
            u16 angle;
            angle = (u16)(*(u16 *)(*(u8 **)(mgr + 0xe4) + 8) % 360);
            data_02151fc8 = (u16)(((s32)((u32)angle << 16)) / 360);
            angle = (u16)(*(u16 *)(*(u8 **)(mgr + 0xe4) + 0xa) % 360);
            data_02151fca = (u16)(((s32)((u32)angle << 16)) / 360);
            data_02151fcc = *(u32 *)(*(u8 **)(mgr + 0xe4) + 0xc) << 12;
            func_020f4640();
            {
                u8 *entry = *(u8 **)(data_02160204 + 0xe4);
                if (entry != NULL) {
                    func_0210c5dc(entry);
                }
            }
            *(u8 **)(data_02160204 + 0xe4) = NULL;
        }
        mgr = *(u8 *volatile *)&data_02160204;
        *(u8 **)(mgr + 0xe4) = NULL;
        data_02160204[0xde] = 0;
    }
    func_0210dc88();
    func_020438d8();
    if (data_021600c0 != NULL) {
        data_021600c0[0] = 1;
    }

    mgr = data_02160204;
    if (mgr[0x138] == 0) {
        u32 screens = 3;
        u8 a = mgr[0x117];
        if (a != 0 || mgr[0x118] != 0) {
            u8 b = mgr[0x118];
            if (a != 0) screens &= ~2u;
            if (b != 0) screens &= ~1u;
            if ((s32)a + b > 1) {
                goto clear_fade_request;
            }
        } else if (*(u32 *)(*(u8 **)((u8 *)&data_021600a8 + 4) + 0xc) != 0) {
            goto clear_fade_request;
        }
        ((void (*)(u32, s32, u32))func_0210968c)(screens, 0, 0xf);
clear_fade_request:
        data_02160204[0x122] = 0;
    } else {
        mgr[0x138] = 0;
    }

    func_02007904();
    data_02162870 = 0;
    do {
        func_020a5368();
        func_0210dc88();
    } while (*(u32 *)(*(u8 **)((u8 *)&data_021600a8 + 4) + 0xc) == 0);

    if (func_020a567c() == 2) {
        data_02162884 = -16;
        data_02162814 = -16;
        func_02002858(0x0400006c, -16);
        func_02002858(0x0400106c, data_02162884);
    }

    if (func_020a567c() != 2) {
        u32 duration = 2;
        u32 mask = 3;
        u8 a;
        mgr = data_02160204;
        a = mgr[0x117];
        if (a != 0 || mgr[0x118] != 0) {
            u8 b = mgr[0x118];
            if (a != 0) mask &= ~2u;
            if (b != 0) mask &= ~1u;
        }
        switch (mgr[0x11e]) {
        case 0:
            if (mask != 0) {
                if (mgr[0x122] != 0) duration = 0x1e;
                ((void (*)(u32, s32, u32))func_0210968c)(mask, -16, duration);
                func_02109790(mask);
            }
            break;
        case 1:
            if (mask != 0) {
                if (mgr[0x122] != 0) duration = 0x1e;
                ((void (*)(u32, s32, u32))func_0210968c)(mask, 16, duration);
                func_02109790(mask);
            }
            break;
        case 2:
            mgr[0x11e] = 0;
            break;
        }
    }

    if (*(u32 *)(data_02160200 + 0x160) & 4) {
        func_02108cc8(0);
        func_02108cc8(1);
    }
    {
        u8 *state;
        state = *(u8 *volatile *)&data_02160200;
        *(u32 *)(state + 0x15c) &= ~0x8000000u;
        state = *(u8 *volatile *)&data_02160200;
        *(u32 *)(state + 0x160) &= ~2u;
        state = *(u8 *volatile *)&data_02160200;
        *(u32 *)(state + 0x160) &= ~4u;
        state = *(u8 *volatile *)&data_02160200;
        *(u32 *)(state + 0x160) &= ~8u;
        state = *(u8 *volatile *)&data_02160200;
        *(u32 *)(state + 0x160) &= ~0x10u;
    }
    func_020a5338();
    data_02160204[0x122] = 0;
    func_020f5798();
    mgr = data_02160204;
    if (mgr[0xd8] != 2 && data_02146324[3] != 0xb &&
        data_02146324[3] != 0xe && data_02146324[3] != 2) {
        mgr[0x137] &= 0xfb;
        if (func_021090f4(0, 0) == 2) {
            func_02108ea4(0, 0);
            data_02162870 = 0;
        }
    }
    if (func_021090f4(0, 0) != 2) {
        data_02162870 = 0;
    }
    data_02160204[0x124] = 0;
    func_02041160();
    goto finish;

teardown:
    func_02043870();
    if (data_02160200 != NULL) {
        func_0210c5dc(data_02160200);
        data_02160200 = NULL;
    }
    data_02146324[3] = 4;

finish:
    func_0210dc88();
    data_02162868 = 0;
    data_0216bf84 = 0;
    data_02162870 = 0;
    return data_02146324[3];
}
