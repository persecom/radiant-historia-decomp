/* 37 functions from 0x02009B24 to 0x0200A980 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_0215d1b8[9];
extern u8 data_0215ec80[0x60];
extern void *data_0215ece8[32];

extern void func_02006510(void *);
extern void func_02006560(void *, u32);
extern s32 func_0200a85c(s32);

typedef struct Unk_0200a328 {
    u32 field_0;
    u32 field_4;
} Unk_0200a328;
extern s32 func_02008128(void);
extern void func_0200813c(s32);
extern s32 func_02009964(s32);
extern void func_02009ec4(void);
s32 func_02009d58(u32);
extern void func_0200a674(s32, void *);
extern void func_020081a4(s32);
extern u32 *data_0215ece0;
extern void func_02006d8c(void *, s32);

extern void func_0200a578(void);
void func_02009cc0(u32 arg0) {
    if (func_02009d58(arg0)) {
        return;
    }
    while (func_02009964(0) != 0) {
    }
    if (func_02009d58(arg0)) {
        return;
    }
    func_02009ec4();
    if (func_02009d58(arg0)) {
        return;
    }
    do {
        func_02009964(1);
    } while (!func_02009d58(arg0));
}

u32 func_02009d2c(void) {
    s32 irq = func_02008128();
    u32 ret = (data_0215d1b8[2] == 0) ? data_0215d1b8[1] : data_0215d1b8[8];
    func_0200813c(irq);
    return ret;
}

s32 func_02009d58(u32 arg0) {
    s32 irq = func_02008128();
    u32 cur = data_0215d1b8[1];
    s32 ret;
    if (arg0 > cur) {
        if (arg0 - cur < 0x80000000U) {
            ret = 0;
        } else {
            ret = 1;
        }
    } else {
        ret = 1;
        if (cur - arg0 >= 0x80000000U) {
            ret = 0;
        }
    }
    func_0200813c(irq);
    return ret;
}

u32 func_02009da8(void) {
    s32 irq = func_02008128();
    u32 count = 0;
    u8 *p = (u8 *)data_0215d1b8[0];

    while (p != NULL) {
        p = *(u8 **)p;
        count++;
    }
    func_0200813c(irq);
    return count;
}

u32 func_02009de4(void) {
    s32 irq = func_02008128();
    u32 count = 0;
    u8 *p = (u8 *)data_0215d1b8[2];

    while (p != NULL) {
        p = *(u8 **)p;
        count++;
    }
    func_0200813c(irq);
    return count;
}

extern u32 func_02009da8(void);
extern u32 func_02009de4(void);
extern void func_02009ffc(u32);
s32 func_02009e20(void) {
    return 0x100 - func_02009da8() - func_02009de4();
}

void func_02009e3c(u32 arg0, u32 arg1) {
    s32 irq = func_02008128();
    func_02009ffc(arg1);
    func_0200813c(irq);
}

void func_02009e60(void) {
    func_0200a674(7, func_02009e3c);
    if (func_02009f34() == 0) {
        return;
    }
    while (func_0200a6c0(7, 1) == 0) {
        func_020081a4(50);
    }
}

void func_02009ec4(void) {
    while (func_0200a6e4(7, 0, 0) < 0) {
    }
}

void *func_02009eec(void) {
    s32 irq = func_02008128();
    void **node = (void **)data_0215d1b8[0];
    if (node == NULL) {
        func_0200813c(irq);
        return NULL;
    }
    data_0215d1b8[0] = (u32)*node;
    if (data_0215d1b8[0] == 0) {
        data_0215d1b8[4] = 0;
    }
    func_0200813c(irq);
    return node;
}

s32 func_02009f34(void) {
    s32 irq;
    u32 val;
    if (func_0200698c() == 0) {
        return 1;
    }
    irq = func_02008128();
    *(volatile u32 *)0x4fff200 = 0x10;
    val = *(volatile u32 *)0x4fff200;
    func_0200813c(irq);
    return val != 0;
}

void func_02009f74(void) {
    s32 i;
    for (i = 0; i < 8; i++) {
        u8 *p = data_0215ec80 + i * 12;
        *(u32 *)p = 0;
        *(u32 *)(p + 4) = 0;
        *(u8 *)(p + 8) = 0;
    }
}

extern u8 data_0215ec80[0x60];
extern void func_0200a674(s32, void *);
extern s32 func_02009f34(void);
extern s32 func_0200a6c0(s32, s32);
extern void func_020081a4(s32);
extern s32 func_0200a6e4();
void func_02009fac(s32 arg0) {
    u8 *p = data_0215ec80 + arg0 * 12;
    p[8]++;
}

u32 func_02009fcc(s32 arg0, u32 arg1, u32 arg2) {
    u8 *p = data_0215ec80 + arg0 * 12;
    *(u32 *)p = arg1;
    *(u32 *)(p + 4) = arg2;
    return ++p[8];
}

void func_02009ffc(u32 arg0) {
    u8 *p = data_0215ec80 + (arg0 & 0xff) * 12;
    if ((((s32)arg0 >> 8) & 0xff) != p[8]) {
        return;
    }
    if (*(void **)p != NULL) {
        (*(void (**)(void *))p)(*(void **)(p + 4));
    }
}

u32 func_0200a040(void) {
    func_02006d8c(data_0215ece0 + 1, 4);
    return data_0215ece0[1];
}

extern u32 *data_0215ece0;
extern void func_02006d8c(void *, s32);
extern void func_02006dc4(void *, s32);
u32 func_0200a068(void) {
    func_02006d8c(data_0215ece0, 4);
    return *data_0215ece0;
}

void func_0200a08c(u8 *arg0) {
    s32 i, j;
    *(u32 *)(arg0 + 4) = 0;
    *(u16 *)(arg0 + 8) = 0;
    *(u16 *)(arg0 + 0xa) = 0;
    *(u32 *)(arg0 + 0) = 0;
    for (i = 0; i < 16; i++) {
        u8 *p = arg0 + i * 0x24;
        *(u32 *)(p + 0x40) = 0;
        for (j = 0; j < 16; j++) {
            *(s16 *)(p + 0x20 + j * 2) = -1;
        }
    }
    for (i = 0; i < 16; i++) {
        *(s16 *)(arg0 + 0x260 + i * 2) = -1;
    }
    func_02006dc4(arg0, 0x280);
}

extern const u8 data_0213e61c[724];
extern void func_0200986c(void);
extern void func_02009880(void);
extern void func_02006da8(void *, s32);
u16 func_0200a108(s32 arg0) {
    u32 val;
    s32 shift;
    if (arg0 < -723) {
        arg0 = -723;
    } else if (arg0 > 0) {
        arg0 = 0;
    }
    val = data_0213e61c[arg0 + 723];
    if (arg0 < -240) {
        shift = 3;
    } else if (arg0 < -120) {
        shift = 2;
    } else if (arg0 < -60) {
        shift = 1;
    } else {
        shift = 0;
    }
    return (u16)(val | (shift << 8));
}

void func_0200a178(u8 *arg0, s32 arg1, u8 *arg2) {
    struct {
        u8 pad[0x18];
        struct {
            u8 *node;
            u8 *next;
        } links[4];
    } *s = (void *)arg0;
    u8 *node;
    func_0200986c();
    node = s->links[arg1].node;
    if (node != NULL) {
        if (arg2 == node) {
            func_02009880();
            return;
        }
        {
            u8 *cur = *(u8 **)(node + 0x18);
            u8 *target = (u8 *)&s->links[arg1];
            if (target == cur) {
                *(u8 **)(node + 0x18) = s->links[arg1].next;
                func_02006da8(s->links[arg1].node, 0x3c);
            } else {
                while (cur != NULL) {
                    if (target == *(u8 **)(cur + 4)) {
                        break;
                    }
                    cur = *(u8 **)(cur + 4);
                }
                *(u8 **)(cur + 4) = s->links[arg1].next;
                func_02006da8(cur, 8);
            }
        }
    }
    {
        u8 *old = *(u8 **)(arg2 + 0x18);
        *(u8 **)(arg2 + 0x18) = (u8 *)&s->links[arg1];
        s->links[arg1].next = old;
        s->links[arg1].node = arg2;
    }
    func_02009880();
    func_02006da8(arg0, 0x3c);
    func_02006da8(arg2, 0x3c);
}

void func_0200a248(u8 *arg0) {
    struct {
        u8 pad[0x18];
        struct {
            u8 *node;
            u8 *next;
        } links[4];
    } *s = (void *)arg0;
    s32 i;
    func_0200986c();
    for (i = 0; i < 4; i++) {
        u8 *node = s->links[i].node;
        if (node != NULL) {
            u8 *cur = *(u8 **)(node + 0x18);
            u8 *target = (u8 *)&s->links[i];
            if (target == cur) {
                *(u8 **)(node + 0x18) = s->links[i].next;
                func_02006da8(node, 0x3c);
            } else {
                while (cur != NULL) {
                    if (target == *(u8 **)(cur + 4)) {
                        break;
                    }
                    cur = *(u8 **)(cur + 4);
                }
                *(u8 **)(cur + 4) = s->links[i].next;
                func_02006da8(cur, 8);
            }
        }
    }
    func_02009880();
}

void func_0200a2e0(u8 *arg0) {
    u8 *cur;
    func_0200986c();
    cur = *(u8 **)(arg0 + 0x18);
    while (cur != NULL) {
        u8 *next = *(u8 **)(cur + 4);
        *(u32 *)(cur + 0) = 0;
        *(u32 *)(cur + 4) = 0;
        func_02006da8(cur, 8);
        cur = next;
    }
    func_02009880();
}

extern s32 func_0200698c(void);
void func_0200a328(u32 *arg0) {
    volatile u32 a;
    volatile u32 b;
    b = 0;
    a = 0;
    arg0[0] = 0;
    arg0[1] = 0;
}

s32 func_0200a4f4(u8 *arg0) {
    return *(s32 *)(arg0 + 0x38);
}

void func_0200a4fc(u8 *arg0, s32 arg1, u32 arg2) {
    func_0200986c();
    *(u32 *)(arg0 + arg1 * 4 + 0x3c) = arg2;
    func_02006da8(arg0 + 0x3c + arg1 * 4, 4);
    func_02009880();
}

s32 func_0200a530(u8 *arg0, s32 arg1) {
    u32 off;
    s32 ret;
    func_0200986c();
    off = *(u32 *)(arg0 + arg1 * 4 + 0x3c);
    if (off != 0) {
        if (off < 0x2000000) {
            ret = (s32)(arg0 + off);
        } else {
            ret = (s32)off;
        }
    } else {
        ret = 0;
    }
    func_02009880();
    return ret;
}

void func_0200a56c(void) {
    func_0200a578();
}

extern u16 data_0215ece4;
extern void func_02005a14(u32);
extern void func_020057e8(u32, void *);
extern void func_020059b4(u32);
extern void func_0200a75c(void);
void func_0200a578(void) {
    struct {
        u8 pad[0x388];
        u32 flags;
    } *work = (void *)0x02fffc00;
    s32 i;
    s32 irq = func_02008128();
    if (!data_0215ece4) {
        s32 timeout;
        u32 val;
        s32 count;
        data_0215ece4 = 1;
        work->flags = 0;
        for (i = 0; i < 32; i++) {
            data_0215ece8[i] = NULL;
        }
        *(volatile u16 *)0x04000184 = 0xc408;
        func_02005a14(0x40000);
        func_020057e8(0x40000, func_0200a75c);
        func_020059b4(0x40000);
        count = 0;
        while (1) {
            val = *(volatile u16 *)0x04000180 & 0xf;
            *(volatile u16 *)0x04000180 = (u16)(val << 8);
            if (val == 0 && count > 4) {
                break;
            }
            timeout = 1000;
            while ((*(volatile u16 *)0x04000180 & 0xf) == val) {
                if (timeout <= 0) {
                    count = 0;
                    break;
                }
                timeout--;
            }
            count++;
        }
    }
    func_0200813c(irq);
}

void func_0200a674(s32 arg0, void *arg1) {
    struct {
        u8 pad[0x388];
        u32 flags;
    } *work = (void *)0x02fffc00;
    s32 cookie = func_02008128();
    data_0215ece8[arg0] = arg1;
    if (arg1 != NULL) {
        work->flags |= 1 << arg0;
    } else {
        work->flags &= ~(1 << arg0);
    }
    func_0200813c(cookie);
}

s32 func_0200a6c0(s32 arg0, s32 arg1) {
    struct {
        u8 pad[0x388];
        u32 ready[2];
    } *work = (void *)0x02fffc00;
    return (work->ready[arg1] & (1 << arg0)) ? 1 : 0;
}
u32 func_0200a928(u8 *arg0, u32 arg1) {
    s32 irq;
    u32 ret = arg1;
    u32 flags;
    if (arg1 == 0x100) {
        irq = func_02008128();
        if ((*(u32 *)(arg0 + 0xc) & 8) == 0) {
            do {
                func_02006510(arg0 + 0x18);
            } while ((*(u32 *)(arg0 + 0xc) & 8) == 0);
        }
        func_0200813c(irq);
        flags = *(u32 *)(arg0 + 0xc) & ~8;
        ret = *(u32 *)(arg0 + 0x14);
        *(u32 *)(arg0 + 0xc) = flags;
    }
    return ret;
}
void func_0200a884(u8 *arg0, u32 arg1) {
    s32 irq = func_02008128();
    u8 *p = *(u8 **)(arg0 + 8);
    u8 **link;
    u8 *cur;
    u8 id;
    u32 flags;

    if (p != NULL) {
        link = (u8 **)(p + 8);
        cur = *link;
        if (cur != NULL) {
            while (1) {
                if (cur == arg0) {
                    *link = *(u8 **)arg0;
                    break;
                }
                link = (u8 **)cur;
                cur = *(u8 **)cur;
                if (cur == NULL) break;
            }
        }
        *(u8 **)arg0 = NULL;
    }
    id = (u8)((*(u32 *)(arg0 + 0xc) >> 8) & 0xff);
    if (func_0200a85c(id) == 0) {
        if (p != NULL) {
            *(u32 *)(p + 0x18) = id;
            *(u32 *)(p + 0x1c) = arg1;
        }
    }
    flags = *(u32 *)(arg0 + 0xc) & ~0xcf;
    *(u32 *)(arg0 + 0x14) = arg1;
    *(u32 *)(arg0 + 0xc) = flags;
    func_02006560(arg0 + 0x18, flags);
    func_0200813c(irq);
}

s32 func_0200a6e4(s32 arg0, s32 arg1, u32 arg2, s32 arg3) {
    u32 v = (arg3 & ~0x1f) | (arg0 & 0x1f);
    u32 val;
    volatile u16 *reg = (volatile u16 *)0x4000184;
    s32 irq;
    v &= ~0x20;
    v = (v | ((arg2 << 31) >> 26)) & 0x3f;
    val = v | (arg1 << 6);
    if ((*reg & 0x4000) != 0) {
        *reg |= 0xc000;
        return -1;
    }
    irq = func_02008128();
    if ((*reg & 2) != 0) {
        func_0200813c(irq);
        return -2;
    }
    *(volatile u32 *)((u8 *)reg + 4) = val;
    func_0200813c(irq);
    return 0;
}

s32 func_0200a85c(s32 c) {
    u32 d = c - 9;
    s32 ret = 0;
    if (d > 0x1a) {
        return ret;
    }
    if (0x400030f & (1 << d)) {
        ret = 1;
    }
    return ret;
}

