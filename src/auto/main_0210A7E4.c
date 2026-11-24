/* 25 functions from 0x0210A7E4 to 0x0210B7A4 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_02155c08[8];
extern u8 data_02155c10[8];
extern void *data_0215615c;
extern void func_0210c5dc(void *);
extern void *func_02109b14(s32, s32);
extern s32 func_02109f84(void *);
extern s32 func_02117774(void *, void *);
extern s32 func_021178d4(void *, void *);
extern void *func_02117904(void *, u32);
extern void *func_0210eb98(void *, s32);
extern s32 func_0210f3ec(void *, s32);
extern void *func_0210a7b4(void);
extern s32 func_0210a7e4(void *, s32, s32);
extern void func_0210f3ac(void *, void *, s32);
extern u32 data_02155c3c;
extern void *func_0210c518(u32, u32);
void func_0210b0ac(u8 *);
extern void func_0210b848(void *);
extern void func_02006dc4(u32, u32);
extern u32 *func_0210a4b4(void);
extern u32 *func_0210a4c0(void);
extern void func_0211883c(void *, u32, s32, u32);
extern void func_02118624(void *, u32, s32, u32);
extern s32 func_02117878(void *, u32 *);
extern void func_02118d0c(void *, u32, s32, s32, u32);
extern void func_02118c14(void *, s32, s32, u32);
extern void func_02008e68(s32, void *, u32);
extern void func_0210afcc(void *);
extern void func_021167ac(void *, s32);
extern void func_0210dae0(void *);
extern u32 data_02155c18[];
extern u8 data_02162618[];
extern u8 data_02162624[];
extern u8 data_02162648[];
extern u8 *func_02120fe4(s32, s32);
extern u8 *func_02120b8c(void *, u8 *, u32);

typedef struct {
    u16 bit0 : 1;
    u16 bit1 : 1;
    u16 bit2 : 1;
    u16 bit3 : 1;
    u16 pad4 : 4;
    u16 bit8 : 1;
    u16 pad9 : 7;
} Flags_0210afcc;

typedef struct {
    u8 pad[0x80];
    u16 arr[0x10];
    u16 pad_a0;
    u16 unkA2;
    Flags_0210afcc flags;
} Unk_0210afcc;

extern void func_0210b300(void);
void *func_0210a984(s32 arg0, s32 arg1) {
    void *p;
    void *obj;
    s32 ret;
    obj = func_0210eb98(data_02155c08, arg0);
    ret = func_0210f3ec(obj, arg1);
    if (ret != 0) {
        goto done;
    }
    p = func_0210a7b4();
    if (p == NULL) {
        ret = 0;
        goto done;
    }
    if (func_0210a7e4(p, arg0, 0) == 0) {
        if (p != NULL) {
            func_0210c5dc(p);
        }
        ret = 0;
        goto done;
    }
    func_0210f3ac(func_0210eb98(data_02155c10, arg0), p, arg1);
    *(s32 *)((u8 *)p + 0x20) = arg1;
    ret = (s32)p;
done:
    return (void *)ret;
}

void func_0210aa14(void *arg0) {
    void *p;
    if (arg0 == NULL) {
        return;
    }
    if (*(s32 *)((u8 *)arg0 + 0x20) != 0) {
        return;
    }
    p = *(void **)((u8 *)arg0 + 0x14);
    if (p != NULL) {
        ((void (*)(void *))data_0215615c)(p);
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_0210aa5c(void *arg0, s32 arg1, s32 arg2) {
    void *p;
    p = func_02109b14(arg1, arg2);
    if (p != NULL) {
        if (func_02109f84(p) == 0) {
            if (func_021178d4(p, arg0) == 0) {
                if (p != NULL) {
                    func_0210c5dc(p);
                    p = NULL;
                }
            }
        } else {
            *(void **)arg0 = (u8 *)func_02117904(p, 0x4e534352) + 8;
        }
    }
    return p;
}

void *func_0210aad0(void *arg0, s32 arg1, s32 arg2) {
    void *p;
    p = func_02109b14(arg1, arg2);
    if (p != NULL) {
        if (func_02109f84(p) == 0) {
            if (func_02117774(p, arg0) == 0) {
                if (p != NULL) {
                    func_0210c5dc(p);
                    p = NULL;
                }
            }
        } else {
            *(void **)arg0 = (u8 *)func_02117904(p, 0x43484152) + 8;
        }
    }
    return p;
}

void *func_0210ab44(void *arg0, s32 arg1, s32 arg2) {
    void *p;
    p = func_02109b14(arg1, arg2);
    if (p != NULL) {
        if (func_02109f84(p) == 0) {
            if (func_0211783c(p, arg0) == 0) {
                if (p != NULL) {
                    func_0210c5dc(p);
                    p = NULL;
                }
            }
        } else {
            *(void **)arg0 = (u8 *)func_02117904(p, 0x504c5454) + 8;
        }
    }
    return p;
}

void *func_0210abb8(void *arg0, s32 arg1, s32 arg2) {
    void *p;
    p = func_02109b14(arg1, arg2);
    if (p != NULL) {
        if (func_02109f84(p) == 0) {
            if (func_02117674(p, arg0) == 0) {
                if (p != NULL) {
                    func_0210c5dc(p);
                    p = NULL;
                }
            }
        } else {
            *(void **)arg0 = (u8 *)func_02117904(p, 0x4345424b) + 8;
        }
    }
    return p;
}

void *func_0210ac2c(void *arg0, s32 arg1, s32 arg2) {
    void *p;
    p = func_02109b14(arg1, arg2);
    if (p != NULL) {
        if (func_02109f84(p) == 0) {
            if (func_021174e4(p, arg0) == 0) {
                if (p != NULL) {
                    func_0210c5dc(p);
                    p = NULL;
                }
            }
        } else {
            *(void **)arg0 = (u8 *)func_02117904(p, 0x41424e4b) + 8;
        }
    }
    return p;
}

void *func_0210aca0(void *arg0, s32 arg1, s32 arg2) {
    void *p;
    p = func_02109b14(arg1, arg2);
    if (p != NULL) {
        if (func_02109f84(p) == 0) {
            if (func_02117774(p, arg0) == 0) {
                if (p != NULL) {
                    func_0210c5dc(p);
                    p = NULL;
                }
            }
        } else {
            *(void **)arg0 = (u8 *)func_02117904(p, 0x43484152) + 8;
        }
    }
    return p;
}

extern s32 func_021177c0(void *, void *);
void *func_0210ad14(void *arg0, s32 arg1, s32 arg2) {
    void *p;
    p = func_02109b14(arg1, arg2);
    if (p != NULL) {
        if (func_02109f84(p) == 0) {
            if (func_021177c0(p, arg0) == 0) {
                if (p != NULL) {
                    func_0210c5dc(p);
                    p = NULL;
                }
            }
        } else {
            *(void **)arg0 = (u8 *)func_02117904(p, 0x43484152) + 8;
        }
    }
    return p;
}

s32 func_0210ad88(u32 arg0, u32 *arg1, s32 arg2) {
    u32 *vram;
    if ((u32)(arg2 == 0) == 0) {
        func_02006dc4(arg1[5], arg1[4]);
        if (arg2 == 1) {
            vram = func_0210a4b4();
        } else {
            vram = func_0210a4c0();
        }
        if (arg1[2] == 0) {
            func_0211883c(arg1, *vram, arg2, arg0);
        } else {
            func_02118624(arg1, *vram, arg2, arg0);
        }
        *vram += arg1[4];
    }
    return 1;
}

s32 func_0210aee0(u32 arg0, u32 *arg1, s32 arg2, void *arg3) {
    if ((u32)(arg2 == 0) == 0) {
        u32 sp4 = 0;
        if (func_02117878(arg3, &sp4) == 0) {
            sp4 = 0;
        }
        func_02006dc4(arg1[3], arg1[2]);
        if (sp4 != 0) {
            func_02118d0c(arg1, sp4, 0, arg2, arg0);
        } else {
            func_02118c14(arg1, 0, arg2, arg0);
        }
    }
    if (arg3 != NULL) {
        func_0210c5dc(arg3);
    }
    return 1;
}

void func_0210af80(void) {
    func_0210b300();
}

void *func_0210af8c(void) {
    void *p = func_0210c518(0x1bc, data_02155c3c);
    func_02008e68(0, p, 0x1bc);
    func_0210afcc(p);
    return p;
}

void func_0210afcc(void *arg) {
    u8 *arg0 = arg;
    Unk_0210afcc *s = (Unk_0210afcc *)(arg0 + 0x100);
    s32 i;
    s->flags.bit3 = 0;
    s->flags.bit1 = 0;
    s->flags.bit2 = s->flags.bit1;
    *(u32 *)(arg0 + 0x104) = 0x1000;
    *(u8 *)(arg0 + 0x128) = 0;
    s->flags.bit0 = 1;
    *(u32 *)(arg0 + 0x12c) = 0;
    *(u32 *)(arg0 + 0x130) = 2;
    *(u8 *)(arg0 + 0x134) = 0;
    *(u8 *)(arg0 + 0x135) = 0x1f;
    *(u32 *)(arg0 + 0x138) = 0;
    *(volatile u16 *)((u8 *)s + 0xa4) &= ~0x100;
    *(void **)(arg0 + 0x1a8) = func_0210af80;
    s->unkA2 = 0x3e7;
    for (i = 0; i < 0x10; i++) {
        *(u16 *)(arg0 + 0x180 + i * 2) = 0x3e7;
    }
}

void func_0210b080(u8 *arg0) {
    void **p;
    func_0210b0ac(arg0);
    p = func_0210c518(0xc, data_02155c3c);
    *p = arg0;
    func_0210b848(p);
}

extern void func_0211cac0(u8 *, u32);
extern void func_0211cd78(u8 *);
extern s32 func_0211783c(void *, void *);
extern s32 func_02117674(void *, void *);
extern s32 func_021174e4(void *, void *);
void func_0210b0ac(u8 *arg0) {
    func_0211cac0(arg0, *(u32 *)(arg0 + 0x54));
    func_0211cd78(arg0);
}

s32 func_0210b0c8(u8 *arg0, s32 arg1) {
    u8 *x;
    s32 ret;
    ret = 0;
    x = func_02120fe4(arg1, 0);
    if (x != NULL) {
        u8 *y = func_02120b8c(data_02162648, x, *(u32 *)(arg0 + 0x54));
        *(u8 **)(arg0 + 0xfc) = y;
        func_0211ca28(y, x, *(u32 *)(arg0 + 0x54), *(u32 *)(arg0 + 0x58));
        func_0211cc30(arg0, *(u8 **)(arg0 + 0xfc));
        *(u32 *)(arg0 + 0x120) = arg1;
        ret = 1;
    }
    return ret;
}

s32 func_0210b130(u8 *arg0, s32 arg1) {
    u8 *x;
    s32 ret;
    ret = 0;
    x = func_02120fe4(arg1, 0);
    if (x != NULL) {
        u8 *y = func_02120b8c(data_02162648, x, *(u32 *)(arg0 + 0x54));
        *(u8 **)(arg0 + 0x100) = y;
        func_0211ca28(y, x, *(u32 *)(arg0 + 0x54), *(u32 *)(arg0 + 0x58));
        func_0211cc30(arg0, *(u8 **)(arg0 + 0x100));
        *(u32 *)(arg0 + 0x124) = arg1;
        ret = 1;
    }
    return ret;
}

extern void func_021167ac(void *, s32);
extern void func_0210dae0(void *);
extern u32 data_02155c18[];
extern u8 data_02162618[];
extern u8 data_02162624[];
extern u8 data_02162648[];
extern u8 *func_02120fe4(s32, s32);
extern u8 *func_02120b8c(void *, u8 *, u32);
void func_0210b750(u32 arg0) {
    u32 f;
    func_021167ac(data_02162624 - 0xc, 4);
    f = data_02155c18[0];
    if (f == 0) {
        f = (u32)func_0210af80;
        data_02155c18[0] = f;
    }
    *(u32 *)(data_02162618 + 0xc) = f;
    *(u32 *)(data_02162618 + 0x10) = arg0;
    func_0210dae0(data_02162624);
}

