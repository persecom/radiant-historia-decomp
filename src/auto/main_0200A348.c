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

typedef struct ChanBits {
    u32 ch : 5;
    u32 pad : 27;
} ChanBits;
typedef union ChanCmd {
    u32 raw;
    ChanBits bits;
} ChanCmd;
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
extern u8 data_0215d480[0x1000];
extern u32 data_0215d1dc[9];
extern void func_02006dc4(void *, int);
extern s32 func_0200a6e4(s32, u32, s32);

extern u32 func_02009da8(void);
extern u32 func_02009de4(void);
extern void func_02009ffc(u32);

extern u8 data_0215ec80[0x60];
extern void func_0200a674(s32, void *);
extern s32 func_02009f34(void);
extern s32 func_0200a6c0(s32, s32);
extern void func_020081a4(s32);
extern s32 func_0200a6e4();

extern u32 *data_0215ece0;
extern void func_02006d8c(void *, s32);
extern void func_02006dc4(void *, s32);

extern const u8 data_0213e61c[724];
extern void func_0200986c(void);
extern void func_02009880(void);
extern void func_02006da8(void *, s32);

extern s32 func_0200698c(void);

s32 func_0200a348(u8 *arg0, u8 *arg1, u32 *arg2) {
    while (arg2[0] < *(u32 *)(arg0 + 0x38)) {
        u32 entry = *(u32 *)(arg0 + 0x3c + arg2[0] * 4);
        u8 type = (u8)(entry & 0xff);
        u32 offset = entry >> 8;
        arg1[0] = type;
        switch (type) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5: {
            u16 *src = (u16 *)(arg0 + offset);
            u16 *dst = (u16 *)(arg1 + 2);
            u16 a = src[0], b = src[1], c = src[2], d = src[3], e = src[4];
            dst[0] = a;
            dst[1] = b;
            dst[4] = e;
            dst[2] = c;
            dst[3] = d;
            arg2[0]++;
            return 1;
        }
        case 0x10: {
            u8 *drum = arg0 + offset;
            while (arg2[1] < (u32)(drum[1] - drum[0] + 1)) {
                u16 *src = (u16 *)(drum + 2 + arg2[1] * 12);
                u16 *dst = (u16 *)arg1;
                u16 a = src[0], b = src[1], c = src[2], d = src[3], e = src[4], f = src[5];
                dst[0] = a;
                dst[1] = b;
                dst[5] = f;
                dst[2] = c;
                dst[3] = d;
                dst[4] = e;
                arg2[1]++;
                return 1;
            }
            break;
        }
        case 0x11: {
            u8 *key = arg0 + offset;
            while (arg2[1] < 8) {
                if (key[arg2[1]] == 0) {
                    break;
                }
                {
                    u16 *src = (u16 *)(key + 8 + arg2[1] * 12);
                    u16 *dst = (u16 *)arg1;
                    u16 a = src[0], b = src[1], c = src[2], d = src[3], e = src[4], f = src[5];
                    dst[0] = a;
                    dst[1] = b;
                    dst[5] = f;
                    dst[2] = c;
                    dst[3] = d;
                    dst[4] = e;
                }
                arg2[1]++;
                return 1;
            }
            break;
        }
        }
        arg2[0]++;
        arg2[1] = 0;
    }
    return 0;
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

s32 func_0200a6e4(s32 arg0, u32 arg1, s32 arg2) {
    union {
        struct {
            u32 tag : 5;
            u32 err : 1;
            u32 data : 26;
        } e;
        u32 raw;
    } msg;
    s32 irq;
    msg.e.tag = arg0;
    msg.e.err = arg2;
    msg.e.data = arg1;
    if ((*(volatile u16 *)0x4000184 & 0x4000) != 0) {
        *(volatile u16 *)0x4000184 |= 0xc000;
        return -1;
    }
    irq = func_02008128();
    if ((*(volatile u16 *)0x4000184 & 2) != 0) {
        func_0200813c(irq);
        return -2;
    }
    *(volatile u32 *)0x4000188 = msg.raw;
    func_0200813c(irq);
    return 0;
}

void func_0200a75c(void) {
    volatile u16 *reg = (volatile u16 *)0x04000184;
    ChanCmd cmd;
    s32 ret;
    s32 irq;
    u32 val = cmd.raw;
    u32 ch;

    while (1) {
        if ((*reg & 0x4000) != 0) {
            *reg |= 0xc000;
            ret = -3;
        } else {
            irq = func_02008128();
            if ((*reg & 0x100) != 0) {
                func_0200813c(irq);
                ret = -4;
            } else {
                val = *(volatile u32 *)0x04100000;
                func_0200813c(irq);
                ret = 0;
            }
        }
        if (ret == -4) {
            return;
        }
        if (ret == -3) {
            continue;
        }
        cmd.raw = val;
        ch = cmd.bits.ch;
        if (ch == 0) {
            continue;
        }
        if (((void (**)(u32, u32, u32))data_0215ece8)[ch] != NULL) {
            ((void (**)(u32, u32, u32))data_0215ece8)[ch](ch, val >> 6, (val << 26) >> 31);
            continue;
        }
        if (((val << 26) >> 31) != 0) {
            continue;
        }
        val |= 0x20;
        if ((*reg & 0x4000) != 0) {
            *reg |= 0xc000;
            continue;
        }
        irq = func_02008128();
        if ((*reg & 2) != 0) {
            func_0200813c(irq);
        } else {
            *(volatile u32 *)((u8 *)reg + 4) = val;
            func_0200813c(irq);
        }
    }
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

