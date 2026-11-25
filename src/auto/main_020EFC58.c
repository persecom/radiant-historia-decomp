/* 12 functions from 0x020EFC58 to 0x020F0AEC (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160af0;
extern u32 data_02155c3c;
extern void func_021167f0(void *, void *);
extern u8 *func_0210c594(s32, u32);
extern void func_021167ac(void *, s32);
extern void func_0210d9e4(void *);
extern void func_0210dae0(void *);
extern void func_0210db40(void *);
extern void func_020f0a58(void);
extern void func_020f0aec(void);
extern void func_020f0fd0(void);

typedef struct {
    u32 x;
    u32 y;
    u32 z;
} Unk_Vec3_020f07b0;
typedef struct {
    u8 pad[0x1a4];
    u16 flags;
} Unk_020f0154;
extern u8 data_02162618[];
extern void func_021168f8(void *, void *);
extern void func_0210b4cc(void *);
extern void func_0210c5dc(void *);
extern void func_0210b860(void **);

extern u8 *data_02160aec;
void func_020efc58(u8 *arg0, s32 arg1, s32 arg2) {
    u8 val = arg0[0];
    if (val == 0xff || val == 0) {
        arg0[0] = 0xff;
    } else if ((s32)val + 0x40 > 0x45 && (s32)val + 0x40 != 0x48 && (s32)val + 0x40 != 0x49 && (s32)val + 0x40 != 0x4a) {
        s32 arr[8];
        s32 i;
        s32 dx, dy;
        s32 bit = 0;
        u32 mask = 0;
        for (i = 0; i < 8; i++) {
            arr[i] = 0;
        }
        for (dy = -1; dy < 2; dy++) {
            for (dx = -1; dx < 2; dx++) {
                if (dx != 0 || dy != 0) {
                    s32 idx = (arg1 + dx) + *(s16 *)(data_02160aec + 0x58d36) * (arg2 + dy);
                    if (idx >= 0 && idx < 0x4000) {
                        u8 tile = *(u8 *)(data_02160aec + idx * 0xc + 0xbc8);
                        if ((s32)tile + 0x40 >= 0x42 && (s32)tile + 0x40 <= 0x45) {
                            mask |= 1 << bit;
                            arr[bit] = tile;
                        }
                    }
                }
                bit++;
            }
        }
        if (((mask & 0x80) && (mask & 0x20)) ||
            ((mask & 0x80) && (mask & 0x8)) ||
            ((mask & 0x2) && (mask & 0x20)) ||
            ((mask & 0x2) && (mask & 0x8))) {
            s32 found = 0;
            s32 prev = 0;
            for (i = 0; i < 8; i++) {
                if (arr[i] != 0) {
                    if (prev != 0) {
                        if (prev == arr[i]) {
                            found = 1;
                        }
                    } else {
                        prev = arr[i];
                    }
                }
            }
            if (found != 0) {
                arg0[0] = 0x1a;
            }
        }
    }

    if (arg0[0] == 0xff || arg0[0] < 6) {
        arg0[1] = 0xff;
        return;
    }

    {
        u8 *g = data_02160aec;
        s32 y;
        s32 bit = 0;
        u32 mask = 0;
        s32 dy, dx;
        for (dy = -1; dy < 2; dy++) {
            y = arg2 + dy;
            for (dx = -1; dx < 2; dx++) {
                if (dx != 0 || dy != 0) {
                    s32 idx = (arg1 + dx) + *(s16 *)(g + 0x58d36) * y;
                    if (idx >= 0 && idx < 0x4000) {
                        u8 tile = *(u8 *)(g + idx * 0xc + 0xbc8);
                        if (tile > 1 && tile < 6) {
                            mask |= 1 << bit;
                        }
                    }
                }
                bit++;
            }
        }
        if ((mask & 0x80) && (mask & 0x20)) {
            arg0[1] = 1;
            return;
        }
        if ((mask & 0x80) && (mask & 0x8)) {
            arg0[1] = 2;
            return;
        }
        if ((mask & 0x2) && (mask & 0x20)) {
            arg0[1] = 3;
            return;
        }
        if ((mask & 0x2) && (mask & 0x8)) {
            arg0[1] = 4;
            return;
        }
        if (mask & 0x2) {
            arg0[1] = 5;
            return;
        }
        if (mask & 0x80) {
            arg0[1] = 6;
            return;
        }
        if (mask & 0x20) {
            arg0[1] = 7;
            return;
        }
        if (mask & 0x8) {
            arg0[1] = 8;
        } else {
            arg0[1] = 0xff;
        }
    }
}

void func_020eff58(void) {
}

void func_020eff5c(s32 arg0) {
    s32 val = 0x3f3;
    if (data_02160af0 != NULL) {
        return;
    }
    data_02160af0 = func_0210c594(0x80, data_02155c3c);
    func_021167ac(data_02160af0 + 0x64, 0x48);
    func_021167ac(data_02160af0 + 0x70, 0x50);
    *(void (**)(void))(data_02160af0 + 0x0) = func_020f0a58;
    *(s32 *)(data_02160af0 + 0x4) = val;
    func_0210d9e4(data_02160af0);
    *(void (**)(void))(data_02160af0 + 0x14) = func_020f0aec;
    *(s32 *)(data_02160af0 + 0x18) = val - 9;
    func_0210dae0(data_02160af0 + 0x14);
    if (arg0 == 1) {
        *(void (**)(void))(data_02160af0 + 0x28) = func_020f0aec;
        *(s32 *)(data_02160af0 + 0x2c) = val - 9;
        func_0210db40(data_02160af0 + 0x28);
    }
    *(void (**)(void))(data_02160af0 + 0x3c) = func_020f0fd0;
    *(s32 *)(data_02160af0 + 0x40) = 0x3ea;
    func_0210dae0(data_02160af0 + 0x3c);
    if (arg0 == 1) {
        *(void (**)(void))(data_02160af0 + 0x50) = func_020f0fd0;
        *(s32 *)(data_02160af0 + 0x54) = 0x3ea;
        func_0210db40(data_02160af0 + 0x50);
    }
    *(u8 *)(data_02160af0 + 0x7c) = 0;
    *(u8 *)(data_02160af0 + 0x7d) = 0;
}

extern void func_020f09d4(void *);
extern void func_020f0984(u32 *);
extern void func_0210da14(void *);
extern void func_0210db10(void *);
extern void func_0210db58(void *);
void func_020f0090(s32 arg0) {
    if (data_02160af0 == NULL) {
        return;
    }
    while (*(void **)(data_02160af0 + 0x70) != NULL) {
        func_020f09d4(*(void **)(data_02160af0 + 0x70));
    }
    while (*(u32 **)(data_02160af0 + 0x64) != NULL) {
        func_020f0984(*(u32 **)(data_02160af0 + 0x64));
    }
    func_0210da14(data_02160af0);
    func_0210db10(data_02160af0 + 0x14);
    func_0210db10(data_02160af0 + 0x3c);
    if (arg0 == 1) {
        func_0210db58(data_02160af0 + 0x28);
        func_0210db58(data_02160af0 + 0x50);
    }
    if (data_02160af0 != NULL) {
        func_0210c5dc(data_02160af0);
        data_02160af0 = NULL;
    }
}

extern u8 *func_0210af8c(void);
extern void func_02108ffc(void);
#pragma optimization_level 0
extern void func_02005e80(char *, const char *, ...);
extern void *func_021092d8(char *);
extern s32 func_02092ab0(void *, s32);
extern s32 func_0210cd20(void *, s32);
extern s32 func_0210cdfc(void *, s32);
extern s32 func_020123f0(const char *, const char *);
extern void func_0210b8f8(u8 *, u32, u32, u32);
extern void func_0210ba48(u8 *, u32, u32, u32);
extern void func_0210bbc8(u8 *, u32, u32, u32);
extern void func_0210b0ac(u8 *);
extern void func_02120c34(u8 *, u32);
extern void func_021093b0(void *);
extern s32 func_020f1a1c(u8 *, s32);
extern s32 func_020f1b70(u8 *, s32);
extern void func_020f18ec(u8 *, s32);
extern char data_02151d10[], data_02151d20[], data_02151d24[], data_02151d28[], data_02151d30[], data_02151d44[], data_02151d48[];
s32 func_020f0154(u32 arg0) {
    u8 flag = 0;
    s32 tmp;
    void *file = NULL;
    u8 *mgr = NULL;
    u8 *node = NULL;
    s32 zero = 0;
    char name[50];
    char path[50];
    s32 found;
    char *p;

    if (!data_02160af0) return 0;

    ((s32 *)&data_02160af0)[1] = 0;
    ((s32 *)&data_02160af0)[2] = 0;
    ((s32 *)&data_02160af0)[3] = 0;
    ((s32 *)&data_02160af0)[4] = 0;
    ((s32 *)&data_02160af0)[7] = 0;
    mgr = func_0210af8c();
    func_02108ffc();

    if (arg0 != 0 && arg0 < 1000) {
        func_02005e80(name, data_02151d10);
        file = func_021092d8(name);
        found = func_02092ab0(file, arg0);
        if (found != -1) {
            ((s32 *)&data_02160af0)[1] = func_0210cd20(file, 0);
            ((s32 *)&data_02160af0)[2] = func_0210cd20(file, 0);
            ((s32 *)&data_02160af0)[3] = func_0210cd20(file, 0);
            ((s32 *)&data_02160af0)[4] = func_0210cd20(file, 0);
            ((s32 *)&data_02160af0)[7] = func_0210cdfc(file, 0);
        }
        func_02005e80(name, data_02151d20, ((s32 *)&data_02160af0)[1]);
        func_02005e80(path, data_02151d24, ((s32 *)&data_02160af0)[2]);
        p = name;
        while (*p != '.') p++;
        if (func_020123f0(p, data_02151d28) == 0) {
            flag = 1;
        }
        if (flag == 0) {
            func_0210b8f8(mgr, (u32)name, (u32)path, 0);
        } else {
            func_0210ba48(mgr, (u32)name, (u32)path, 0);
        }
        func_02108ffc();
        func_0210b0ac(mgr);
    } else if (arg0 > 0x2710 && arg0 < 0x2b01) {
        func_02005e80(name, data_02151d30);
        file = func_021092d8(name);
        found = func_02092ab0(file, arg0);
        if (found != -1) {
            ((s32 *)&data_02160af0)[1] = func_0210cd20(file, 0);
            ((s32 *)&data_02160af0)[2] = func_0210cd20(file, 0);
            ((s32 *)&data_02160af0)[3] = func_0210cd20(file, 0);
            ((s32 *)&data_02160af0)[4] = func_0210cd20(file, 0);
            ((s32 *)&data_02160af0)[7] = func_0210cdfc(file, 0);
        }
        func_02005e80(name, data_02151d44, ((s32 *)&data_02160af0)[1]);
        func_02005e80(path, data_02151d48, ((s32 *)&data_02160af0)[2]);
        func_0210bbc8(mgr, (u32)name, (u32)path, 0);
        func_02120c34(*(u8 **)(mgr + 0x54), 1);
        func_0210b0ac(mgr);
        func_02108ffc();
    }

    *(u8 *)(mgr + 0x134) = 0;
    *(u16 *)(mgr + 0x1b8) = (u16)arg0;
    ((s32 *)mgr)[0x78 / 4] = ((s32 *)&data_02160af0)[7];
    ((s32 *)mgr)[0x7c / 4] = ((s32 *)&data_02160af0)[7];
    ((s32 *)mgr)[0x80 / 4] = ((s32 *)&data_02160af0)[7];
    *(u32 *)(mgr + 0xf4) = 1;
    *(u16 *)(mgr + 0x94) = 0x8000;
    *(u16 *)(mgr + 0x96) = 0x8000;
    *(u32 *)(mgr + 0xf4) = 1;
    *(u32 *)(mgr + 0xf8) = 1;
    node = func_0210c594(0x58, data_02155c3c);
    func_02108ffc();
    *(u32 *)(node + 0x10) = arg0;

    if (arg0 > 0x2af8) {
        *(u32 *)(mgr + 0x1a8) = (u32)func_020eff58;
        *(u32 *)(node + 0) = (u32)mgr;
        *(u32 *)(node + 0x18) = 0;
    } else if (arg0 > 0x2710) {
        *(u32 *)(mgr + 0x1a8) = (u32)func_020eff58;
        *(u32 *)(mgr + 0x104) = 0x1000;
        *(u32 *)(node + 0) = (u32)mgr;
        if (arg0 != 0x2774) {
            tmp = func_020f1a1c(mgr, 0);
            *(u32 *)(node + 0) = (u32)mgr;
            if (tmp != 0) {
                *(u32 *)(node + 0x18) = 1;
                ((Unk_020f0154 *)mgr)->flags = (u16)(((u32)((Unk_020f0154 *)mgr)->flags & ~8) | 8);
                ((Unk_020f0154 *)mgr)->flags = (u16)(((u32)((Unk_020f0154 *)mgr)->flags & ~0x20) | 0x20);
            } else {
                *(u32 *)(node + 0x18) = 0;
            }
            tmp = func_020f1a1c(mgr, 1);
            if (tmp != 0) {
                *(u32 *)(node + 0x1c) = 1;
                ((Unk_020f0154 *)mgr)->flags = (u16)(((u32)((Unk_020f0154 *)mgr)->flags & ~0x10) | 0x10);
                ((Unk_020f0154 *)mgr)->flags = (u16)(((u32)((Unk_020f0154 *)mgr)->flags & ~0x40) | 0x40);
            } else {
                *(u32 *)(node + 0x1c) = 0;
            }
        } else {
            func_020f18ec(mgr, 0x385);
            *(u32 *)(node + 0x18) = 1;
        }
    } else if (arg0 != 0 && arg0 < 0x3e8) {
        tmp = func_020f1b70(mgr, 0);
        *(u32 *)(node + 0) = (u32)mgr;
        if (tmp != 0) {
            *(u32 *)(node + 0x18) = 1;
            ((Unk_020f0154 *)mgr)->flags = (u16)(((u32)((Unk_020f0154 *)mgr)->flags & ~8) | 8);
            ((Unk_020f0154 *)mgr)->flags = (u16)(((u32)((Unk_020f0154 *)mgr)->flags & ~0x20) | 0x20);
        } else {
            *(u32 *)(node + 0x18) = 0;
        }
        tmp = func_020f1b70(mgr, 1);
        if (tmp != 0) {
            *(u32 *)(node + 0x1c) = 1;
            ((Unk_020f0154 *)mgr)->flags = (u16)(((u32)((Unk_020f0154 *)mgr)->flags & ~0x10) | 0x10);
            ((Unk_020f0154 *)mgr)->flags = (u16)(((u32)((Unk_020f0154 *)mgr)->flags & ~0x40) | 0x40);
        } else {
            *(u32 *)(node + 0x1c) = 0;
        }
    } else {
        tmp = func_020f1a1c(mgr, 0);
        *(u32 *)(node + 0) = (u32)mgr;
        if (tmp != 0) {
            *(u32 *)(node + 0x18) = 1;
            ((Unk_020f0154 *)mgr)->flags = (u16)(((u32)((Unk_020f0154 *)mgr)->flags & ~8) | 8);
            ((Unk_020f0154 *)mgr)->flags = (u16)(((u32)((Unk_020f0154 *)mgr)->flags & ~0x20) | 0x20);
        } else {
            *(u32 *)(node + 0x18) = 0;
        }
        tmp = func_020f1a1c(mgr, 1);
        if (tmp != 0) {
            *(u32 *)(node + 0x1c) = 1;
            ((Unk_020f0154 *)mgr)->flags = (u16)(((u32)((Unk_020f0154 *)mgr)->flags & ~0x10) | 0x10);
            ((Unk_020f0154 *)mgr)->flags = (u16)(((u32)((Unk_020f0154 *)mgr)->flags & ~0x40) | 0x40);
        } else {
            *(u32 *)(node + 0x1c) = 0;
        }
    }

    func_021167f0(data_02160af0 + 0x64, node);
    if (file != NULL) {
        func_021093b0(file);
        file = NULL;
    }
    func_02108ffc();
    return 1;
}
#pragma optimization_level 4
extern u8 *func_0210c594(s32, u32);
extern void func_021167f0(void *, void *);
void func_020f07b0(Unk_Vec3_020f07b0 arg0, u32 arg1, u16 arg2) {
    u8 *r4 = NULL;
    u8 *node = *(u8 **)(data_02160af0 + 0x64);
    u8 *r3;

    while (node != NULL) {
        r4 = *(u8 **)node;
        node = *(u8 **)(node + 0x4c);
    }

    if (r4 == NULL) {
        return;
    }

    if (arg1 <= 0x2710 || arg1 >= 0x2b01) {
        return;
    }

    r3 = func_0210c594(0x58, data_02155c3c);
    *(Unk_Vec3_020f07b0 *)(r3 + 4) = arg0;
    *(u32 *)(r3 + 0x2c) = arg2;
    if (*(u32 *)(r4 + 0xfc) != 0) {
        *(u32 *)(r3 + 0x18) = 1;
    }
    if (*(u32 *)(r4 + 0x100) != 0) {
        *(u32 *)(r3 + 0x1c) = 1;
    }
    *(u8 **)r3 = r4;
    func_021167f0(data_02160af0 + 0x70, r3);
}

void func_020f0898(Unk_Vec3_020f07b0 arg0, u32 arg1, u16 arg2) {
    u8 *r12 = NULL;
    u8 *node = *(u8 **)(data_02160af0 + 0x64);
    u8 *r4;

    while (node != NULL) {
        if (*(u16 *)(*(u8 **)node + 0x1b8) == arg1) {
            break;
        }
        node = *(u8 **)(node + 0x4c);
    }

    if (node == NULL) {
        return;
    }

    r4 = *(u8 **)node;
    if (arg1 > 0x2710 && arg1 < 0x2af7) {
        r12 = func_0210c594(0x58, data_02155c3c);
        *(Unk_Vec3_020f07b0 *)(r12 + 4) = arg0;
        *(u32 *)(r12 + 0x2c) = arg2;
        if (*(u32 *)(r4 + 0xfc) != 0) {
            *(u32 *)(r12 + 0x18) = 1;
        }
        if (*(u32 *)(r4 + 0x100) != 0) {
            *(u32 *)(r12 + 0x1c) = 1;
        }
        *(u8 **)r12 = r4;
    }
    func_021167f0(data_02160af0 + 0x70, r12);
}

