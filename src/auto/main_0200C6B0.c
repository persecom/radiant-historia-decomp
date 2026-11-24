/* 47 functions from 0x0200C6B0 to 0x0200D63C (main), found by ds-decomp. */
#include "common.h"

extern s32 func_0200d510(u8 *);
extern s32 func_02010f10(void);
extern void func_0200b710(u32 *, u32);
extern s32 func_0200b6c8(u32 *, u32, u32);
extern s32 func_02010c40();
extern void func_0200d534(u32 *);
extern const u8 data_0213e964[];
extern u32 data_0215ef98[2];

extern s32 func_0200c248(void *, void *, u32);
extern s32 func_0200cb40(void *, s32, s32);
extern void func_0200b888(void *);
extern void *func_0200f998(void *);
extern u8 *func_0200d500(u8 *, s32);
extern void func_02009008(void *, void *, u32);
extern u32 data_0215ef98[2];
extern void func_0200f9b0(u16);
extern void func_0200fa20(u16);
s32 func_0200ca2c(void *arg0) {
    void *r3 = *(void **)((u8 *)arg0 + 0x8);
    u32 r4 = *(u32 *)((u8 *)arg0 + 0x34);
    void *r1 = *(void **)((u8 *)r3 + 0x20);
    u32 r2 = r4 * 8;
    struct { u32 a; u32 b; } sp8;
    struct { void *a; u32 b; } sp0;
    s32 res;
    if (r2 >= *(u32 *)((u8 *)r1 + 0x8)) {
        return 0xb;
    }
    sp0.a = r3;
    sp0.b = *(u32 *)((u8 *)r1 + 0x4) + r2;
    res = func_0200c248(&sp0, &sp8, 8);
    if (res == 0) {
        *(u32 *)((u8 *)arg0 + 0x30) = sp8.a;
        *(u32 *)((u8 *)arg0 + 0x34) = sp8.b;
        *(u32 *)((u8 *)arg0 + 0x38) = r4;
        res = func_0200cb40(arg0, 7, 1);
    }
    return res;
}

s32 func_0200cab4(void *arg0) {
    u32 r3 = *(u32 *)((u8 *)arg0 + 0x30);
    u32 r2 = *(u32 *)((u8 *)arg0 + 0x34);
    u32 r1 = *(u32 *)((u8 *)arg0 + 0x38);
    *(u32 *)((u8 *)arg0 + 0x24) = r3;
    *(u32 *)((u8 *)arg0 + 0x2c) = r3;
    *(u32 *)((u8 *)arg0 + 0x28) = r2;
    *(u32 *)((u8 *)arg0 + 0x20) = r1;
    return 0;
}

s32 func_0200cad8(void *arg0) {
    void *arc = *(void **)((u8 *)arg0 + 0x8);
    void *vtbl = *(void **)((u8 *)arc + 0x20);
    u32 pos = *(u32 *)((u8 *)arg0 + 0x2c);
    u32 len = *(u32 *)((u8 *)arg0 + 0x38);
    void *dst = *(void **)((u8 *)arg0 + 0x30);
    *(u32 *)((u8 *)arg0 + 0x2c) = pos + len;
    return (*(s32 (**)(void *, void *, u32, u32))((u8 *)vtbl + 0x20))(arc, dst, pos, len);
}

s32 func_0200cb08(void *arg0) {
    void *arc = *(void **)((u8 *)arg0 + 0x8);
    void *vtbl = *(void **)((u8 *)arc + 0x20);
    u32 pos = *(u32 *)((u8 *)arg0 + 0x2c);
    u32 len = *(u32 *)((u8 *)arg0 + 0x38);
    void *dst = *(void **)((u8 *)arg0 + 0x30);
    *(u32 *)((u8 *)arg0 + 0x2c) = pos + len;
    return (*(s32 (**)(void *, void *, u32, u32))((u8 *)vtbl + 0x24))(arc, dst, pos, len);
}

s32 func_0200cb38(void) {
    return 0;
}

typedef s32 (*CmdFunc_0200cb40)(void *);
extern CmdFunc_0200cb40 data_0213e930[];
extern s32 func_0200a928(void *, s32);
s32 func_0200cb40(void *arg0, s32 arg1, s32 arg2) {
    void *r6 = *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x8) + 0x20);
    s32 res = 0x101;

    if (*(u32 *)((u8 *)r6 + 0x30) & (1 << arg1)) {
        res = (*(s32 (**)(void *, s32))((u8 *)r6 + 0x2c))(arg0, arg1);
        switch (res) {
        case 0:
        case 1:
        case 4:
        case 0x100:
            break;
        case 0x102:
            *(u32 *)((u8 *)r6 + 0x30) &= ~(1 << arg1);
            res = 0x101;
            break;
        default:
            break;
        }
    }

    if (res == 0x101) {
        if ((u32)arg1 >= 0xd) {
            res = 4;
        } else {
            res = data_0213e930[arg1](arg0);
        }
    }

    if (arg2 != 0) {
        res = func_0200a928(arg0, res);
    }

    return res;
}

s32 func_0200cc10(void *arg0, void *arg1, void *arg2, u32 *arg3) {
    void *p = *(void **)((u8 *)arg1 + 0x4);
    u32 req = *arg3;
    u32 rem = *(u32 *)((u8 *)p + 0x8) - *(u32 *)((u8 *)p + 0xc);
    if (req > rem) {
        *arg3 = rem;
    }
    *(u32 *)((u8 *)arg1 + 0x34) = req;
    *(void **)((u8 *)arg1 + 0x30) = arg2;
    *(u32 *)((u8 *)arg1 + 0x38) = *arg3;
    return func_0200cb40(arg1, 0, 0);
}

s32 func_0200cc54(void *arg0, void *arg1, void *arg2, u32 *arg3) {
    void *p = *(void **)((u8 *)arg1 + 0x4);
    u32 req = *arg3;
    u32 rem = *(u32 *)((u8 *)p + 0x8) - *(u32 *)((u8 *)p + 0xc);
    if (req > rem) {
        *arg3 = rem;
    }
    *(u32 *)((u8 *)arg1 + 0x34) = req;
    *(void **)((u8 *)arg1 + 0x30) = arg2;
    *(u32 *)((u8 *)arg1 + 0x38) = *arg3;
    return func_0200cb40(arg1, 1, 0);
}

s32 func_0200cc98(void *arg0, u8 *arg1, u32 arg2, u32 arg3) {
    s32 res;
    *(void **)(arg1 + 0x8) = arg0;
    *(void **)(arg1 + 0x30) = arg0;
    *(u16 *)(arg1 + 0x34) = (u16)arg2;
    *(u16 *)(arg1 + 0x36) = (u16)(arg2 >> 16);
    *(u32 *)(arg1 + 0x38) = arg3;
    res = func_0200cb40(arg1, 2, 1);
    if (res == 0) {
        *(u32 *)(arg1 + 0xc) = (*(u32 *)(arg1 + 0xc) | 0x20) & ~0x10;
        *(void **)(arg1 + 0x4) = arg1 + 0x20;
        *(void **)(arg1 + 0x8) = arg0;
    }
    return res;
}

extern s32 func_0200d52c();
s32 func_0200ccf0(void *arg0, void *arg1, void *arg2) {
    struct {
        u32 unk00;
        union {
            u32 file_id;
            struct {
                u16 dir_id;
                u16 unk06;
            } dir;
        } u;
        u32 unk08;
        u32 is_dir;
        u32 name_len;
        u8 name[128];
    } entry;
    s32 res;

    *(void **)((u8 *)arg1 + 0x30) = &entry;
    *(u32 *)((u8 *)arg1 + 0x34) = 0;
    res = func_0200cb40(arg1, 3, 1);
    if (res == 0) {
        u32 len;
        *(u32 *)((u8 *)arg2 + 0x10) = 0;
        len = entry.name_len;
        *(u32 *)((u8 *)arg2 + 0x118) = len;
        func_02009008(entry.name, (u8 *)arg2 + 0x14, len);
        *((u8 *)arg2 + 0x14 + *(u32 *)((u8 *)arg2 + 0x118)) = 0;
        if (entry.is_dir != 0) {
            *(u32 *)((u8 *)arg2 + 0x11c) = 0x100;
            *(u32 *)((u8 *)arg2 + 0x16c) = entry.u.dir.dir_id | (entry.u.dir.unk06 << 16);
            *(u32 *)((u8 *)arg2 + 0x168) = 0;
        } else {
            void *r1;
            u32 id;
            u32 r2;
            *(u32 *)((u8 *)arg2 + 0x11c) = 0;
            id = entry.u.file_id;
            *(u32 *)((u8 *)arg2 + 0x16c) = id;
            *(u32 *)((u8 *)arg2 + 0x168) = 0;
            r1 = *(void **)((u8 *)arg0 + 0x20);
            r2 = id * 8;
            if (r2 < *(u32 *)((u8 *)r1 + 0x8)) {
                struct { u32 a; u32 b; } sp8;
                struct { void *a; u32 b; } sp0;
                sp0.a = arg0;
                sp0.b = *(u32 *)((u8 *)r1 + 0x4) + r2;
                if (func_0200c248(&sp0, &sp8, 8) == 0) {
                    *(u32 *)((u8 *)arg2 + 0x168) = sp8.b - sp8.a;
                    if (func_0200d52c(arg0, sp8.a) != 0) {
                        *(u32 *)((u8 *)arg2 + 0x11c) |= 0x400;
                    }
                }
            }
        }
        *(u32 *)((u8 *)arg2 + 0x138) = 0;
        *(u32 *)((u8 *)arg2 + 0x13c) = 0;
        *(u32 *)((u8 *)arg2 + 0x140) = 0;
        *(u32 *)((u8 *)arg2 + 0x144) = 0;
        *(u32 *)((u8 *)arg2 + 0x148) = 0;
        *(u32 *)((u8 *)arg2 + 0x14c) = 0;
    }
    return res;
}

s32 func_0200ce18(void *arg0, u16 arg1, void *arg2, u32 *arg3, s32 arg4) {
    u8 file[0x48];
    u32 sp0[3];
    s32 res;

    func_0200b888(file);
    *(void **)(file + 0x8) = arg0;
    *(void **)(file + 0x30) = arg0;
    *(u16 *)(file + 0x34) = arg1;
    *(u16 *)(file + 0x36) = 0;
    *(u32 *)(file + 0x38) = 0;
    *(void **)(file + 0x3c) = arg2;
    *(s32 *)(file + 0x40) = arg4;
    *(void **)(file + 0x44) = sp0;
    res = func_0200cb40(file, 4, 1);
    if (res == 0) {
        if (arg4 != 0) {
            *arg3 = *(u16 *)((u8 *)sp0 + 4);
        } else {
            *arg3 = sp0[1];
        }
    }
    return res;
}

s32 func_0200cea4(void *arg0, u8 *arg1, u32 arg2, u32 arg3, u32 *arg4) {
    s32 res;
    *(u16 *)(arg1 + 0x38) = 0;
    *(u16 *)(arg1 + 0x3a) = 0;
    *(u32 *)(arg1 + 0x30) = arg3;
    *(u32 *)(arg1 + 0x34) = *arg4;
    res = func_0200cb40(arg1, 5, 1);
    if (res == 0) {
        *arg4 = *(u32 *)(arg1 + 0x34);
    }
    return res;
}

s32 func_0200cee8(void *arg0, u8 *arg1, u32 arg2, void *arg3) {
    s32 res;
    *(u32 *)(arg1 + 0x34) = arg2;
    *(void **)(arg1 + 0x30) = arg0;
    res = func_0200cb40(arg1, 6, 1);
    if (res == 0) {
        *(u32 *)(arg1 + 0xc) = (*(u32 *)(arg1 + 0xc) | 0x10) & ~0x20;
        *(void **)(arg1 + 4) = arg1 + 0x20;
        *(void **)(arg1 + 8) = arg0;
    }
    return res;
}

s32 func_0200cf30(void *arg0, u8 *arg1, u32 arg2, u32 arg3, u32 *arg4) {
    s32 res;
    *(u32 *)(arg1 + 0x30) = arg2;
    *(u32 *)(arg1 + 0x34) = arg3;
    *(u32 *)(arg1 + 0x38) = *arg4;
    res = func_0200cb40(arg1, 7, 1);
    if (res == 0) {
        *(u32 *)(arg1 + 0xc) = (*(u32 *)(arg1 + 0xc) | 0x10) & ~0x20;
        *(void **)(arg1 + 4) = arg1 + 0x20;
        *(void **)(arg1 + 8) = arg0;
    }
    return res;
}

s32 func_0200cf84(void *arg0, u8 *arg1) {
    s32 res = func_0200cb40(arg1, 8, 1);
    *(void **)(arg1 + 4) = NULL;
    *(u32 *)(arg1 + 0xc) &= ~0x30;
    return res;
}

s32 func_0200cfb4(void *arg0) {
    u32 buf[0x12];
    func_0200b888(buf);
    buf[2] = (u32)arg0;
    return func_0200cb40(buf, 9, 0);
}

s32 func_0200cfe8(void *arg0) {
    u32 buf[0x12];
    func_0200b888(buf);
    buf[2] = (u32)arg0;
    return func_0200cb40(buf, 0xa, 0);
}

s32 func_0200d01c(void *arg0) {
    u32 buf[0x12];
    func_0200b888(buf);
    buf[2] = (u32)arg0;
    return func_0200cb40(buf, 0xb, 0);
}

s32 func_0200d050(void *arg0) {
    u32 buf[0x12];
    func_0200b888(buf);
    buf[2] = (u32)arg0;
    return func_0200cb40(buf, 0xc, 0);
}

s32 func_0200d084(void *arg0, u8 *arg1, u16 arg2, void *arg3, void *arg4) {
    u32 val;
    s32 res = func_0200ce18(arg0, arg2, arg3, &val, 0);
    if (res != 0) {
        return res;
    }
    return func_0200cee8(arg0, arg1, val, arg4);
}

s32 func_0200d0d4(void *arg0, void *arg1, s32 *arg2, s32 arg3) {
    s32 *p = *(s32 **)((u8 *)arg1 + 4);
    s32 pos = *arg2;
    switch (arg3) {
    case 0:
        pos += p[1];
        break;
    case 1:
    default:
        pos += p[3];
        break;
    case 2:
        pos += p[2];
        break;
    }
    if (pos < p[1] || pos > p[2]) {
        return 6;
    }
    p[3] = pos;
    *arg2 = pos;
    return 0;
}

s32 func_0200d140(void *arg0, void *arg1, void *arg2) {
    u32 *p = *(u32 **)((u8 *)arg1 + 4);
    *(u32 *)arg2 = p[2] - p[1];
    return 0;
}

s32 func_0200d15c(void *arg0, void *arg1, void *arg2) {
    u32 *p = *(u32 **)((u8 *)arg1 + 4);
    *(u32 *)arg2 = p[3] - p[1];
    return 0;
}

void func_0200d178(u8 *arg0) {
    u32 *p = *(u32 **)(arg0 + 0x20);
    func_0200d510(arg0);
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
}

void func_0200d1a8(u32 arg0, u32 *ptr) {
    *ptr = 0;
}

s32 func_0200d1b4(void *arg0, u8 *arg1, u16 arg2, void *arg3) {
    u32 val = 0;
    s32 res = func_0200ce18(arg0, arg2, arg3, &val, 1);
    if (res != 0) {
        return res;
    }
    return func_0200cc98(arg0, arg1, val, 0);
}

s32 func_0200d20c(u32 arg0, void *arg1) {
    *(u32 *)((u8 *)arg1 + 4) = 0;
    *(u32 *)((u8 *)arg1 + 0xc) &= ~0x30;
    return 0;
}

extern void func_02008f74(void *, s32, u32);
s32 func_0200d224(void *arg0, u16 arg1, void *arg2, void *arg3) {
    u32 id = 0;
    s32 res = 5;

    func_02008f74(arg3, 0, 0x54);
    if (func_0200ce18(arg0, arg1, arg2, &id, 1) == 0) {
        *(u32 *)((u8 *)arg3 + 0x0) = 0x100;
        *(u32 *)((u8 *)arg3 + 0x50) = id;
        res = 0;
    } else if (func_0200ce18(arg0, arg1, arg2, &id, 0) == 0) {
        void *r3;
        u32 r2;
        *(u32 *)((u8 *)arg3 + 0x0) = 0;
        *(u32 *)((u8 *)arg3 + 0x50) = id;
        *(u32 *)((u8 *)arg3 + 0x4c) = 0;
        r3 = *(void **)((u8 *)arg0 + 0x20);
        r2 = id * 8;
        if (r2 < *(u32 *)((u8 *)r3 + 0x8)) {
            struct { u32 a; u32 b; } spc;
            struct { void *a; u32 b; } sp4;
            sp4.a = arg0;
            sp4.b = *(u32 *)((u8 *)r3 + 0x4) + r2;
            if (func_0200c248(&sp4, &spc, 8) == 0) {
                *(u32 *)((u8 *)arg3 + 0x4c) = spc.b - spc.a;
                if (func_0200d52c(arg0, spc.a) != 0) {
                    *(u32 *)((u8 *)arg3 + 0x0) |= 0x400;
                }
            }
        }
        res = 0;
    }
    *(u32 *)((u8 *)arg3 + 0x0) |= 0x200;
    return res;
}

s32 func_0200d350(void *arg0, u32 *arg1) {
    void *p = func_0200f998(arg0);
    arg1[8] = 0;
    arg1[9] = 0;
    arg1[10] = 0;
    arg1[11] = 0;
    *(u64 *)(arg1 + 0) = *(u32 *)((u8 *)p + 0x80);
    *(u64 *)(arg1 + 2) = 0;
    arg1[4] = 0x7fffffff;
    arg1[5] = 0;
    arg1[6] = 0x7fffffff;
    arg1[7] = 0;
    return 0;
}

s32 func_0200d3a0(u8 *arg0, void *arg1, s32 arg2, u32 arg3) {
    func_02009008(func_0200d500(arg0, arg2), arg1, arg3);
    return 0;
}

s32 func_0200d3c8(u8 *arg0, void *arg1, s32 arg2, u32 arg3) {
    func_02009008(arg1, func_0200d500(arg0, arg2), arg3);
    return 0;
}

void func_0200d3f4(void *p, u32 arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5, void *arg6, void *arg7) {
    struct {
        u32 base;
        u32 fat;
        u32 fat_size;
        u32 fnt;
        u32 fnt_size;
        u32 fat_bak;
        u32 fnt_bak;
        void *load_mem;
        void *read_func;
        void *write_func;
    } *s = (void *)((u8 *)p + 0x28);
    s->base = arg1;
    s->fat = arg2;
    s->fat_size = arg3;
    s->fnt_size = arg5;
    s->fnt = arg4;
    s->fat_bak = arg2;
    s->fnt_bak = arg4;
    s->read_func = arg6 ? arg6 : (void *)func_0200d3a0;
    s->write_func = arg7 ? arg7 : (void *)func_0200d3c8;
    s->load_mem = 0;
    func_0200b6c8(p, (u32)s, (u32)data_0213e964);
}

extern const u8 data_0213e964[];
extern s32 func_0200d140(void *, void *, void *);
BOOL func_0200d460(u8 *arg0, void *arg1) {
    BOOL ret = FALSE;
    u8 *arc = *(u8 **)(arg0 + 8);
    if (*(const void **)(arc + 0x24) == data_0213e964) {
        if (func_0200d140(arc, arg0, arg1) == 0) {
            ret = TRUE;
        }
    }
    return ret;
}

extern s32 func_0200d15c(void *, void *, void *);
BOOL func_0200d4a0(u8 *arg0, void *arg1) {
    BOOL ret = FALSE;
    u8 *arc = *(u8 **)(arg0 + 8);
    if (*(const void **)(arc + 0x24) == data_0213e964) {
        if (func_0200d15c(arc, arg0, arg1) == 0) {
            ret = TRUE;
        }
    }
    return ret;
}

void func_0200d4e0(void *arg0, void *arg1, u32 arg2) {
    if (arg2 == 0) {
        arg1 = NULL;
    } else if (arg1 == NULL) {
        arg2 = 0;
    }
    *(void **)((u8 *)arg0 + 0x54) = arg1;
    *(u32 *)((u8 *)arg0 + 0x58) = arg2;
}

u8 *func_0200d500(u8 *arg0, s32 arg1) {
    return *(u8 **)(*(u8 **)(arg0 + 0x20)) + arg1;
}

s32 func_0200d510(u8 *arg0) {
    return (*(s32 *)(arg0 + 0x14) & 4) ? 1 : 0;
}

u32 func_0200d524(u8 *arg0) {
    return *(u32 *)(arg0 + 0x24);
}

s32 func_0200d52c(void) {
    return 0;
}

void func_0200d534(u32 *arg0) {
    s32 res = func_02010f10();
    u32 mode = 5;
    if (res == 0) {
        mode = 0;
    }
    func_0200b710(arg0, mode);
}

s32 func_0200d558(u32 arg0, u32 arg1, u32 arg2, void *arg3) {
    func_02010c40(*(void **)data_0215ef98, arg2, arg1, arg3, func_0200d534, arg0, 1);
    return 0x100;
}

u32 func_0200d5a0(void *arg0, s32 arg1) {
    switch (arg1) {
    case 9:
        func_0200f9b0((u16)data_0215ef98[1]);
        return 0;
    case 10:
        func_0200fa20((u16)data_0215ef98[1]);
        return 0;
    case 1:
        return 4;
    default:
        return 0x102;
    }
}

u32 func_0200d610(void *arg0, s32 arg1) {
    return (arg1 == 1) ? 4 : 0x102;
}

s32 func_0200d624(void) {
    return 4;
}

s32 func_0200d62c(void) {
    return 4;
}

s32 func_0200d634(void) {
    return 0;
}

