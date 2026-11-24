/* 28 functions from 0x0200B8FC to 0x0200C6B0 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    void *arc;
    u32 file_id;
} FSFileID;

typedef struct CallbackNode {
    struct CallbackNode *next;
    void (*callback)(u32);
    u32 arg;
} CallbackNode;

extern CallbackNode *data_0216004c;
extern u32 func_02008128(void);
extern void func_0200813c(u32);

typedef struct {
    void *file;
    u16 unk4;
    u16 unk6;
    u32 unk8;
} FSFilePos;

extern u32 func_0200bab8(u8 *);
extern s32 func_0200ba20(void *, void *, s32);
extern void *func_0200b2ac(const char *, u32 *, u8 *);
extern void func_0200b888(u8 *);
extern void func_02006e00(u32, u32);
extern void func_02006d8c(u32, u32);
extern void func_02008f74(void *, s32, s32);
extern void func_02009008(void *, void *, s32);
extern u32 func_020118c0(u32);
extern void func_02011bdc(void *, void *, u32, u32 *);
extern s32 func_0200afb4(u8 *, s32, s32);
extern s32 func_0200d460(u8 *, u32 *);
extern s32 func_0200d4a0(u8 *, u32 *);
extern s32 func_020081e0(void);
extern u32 func_0200b0ec(void *, s32, s32);
extern u32 data_0215ef7c[];
extern u8 data_0213e8f0[];
extern u8 data_02145c04[];
s32 func_0200b8fc(u32 *arg0, const char *arg1) {
    s32 ret = 0;
    u8 path[0x118];
    u8 file[0x48];
    u32 sp4[4];
    u32 sp0 = 0;
    void *arc;

    arc = func_0200b2ac(arg1, &sp0, path);
    if (arc != NULL) {
        func_0200b888(file);
        *(void **)(file + 8) = arc;
        *(void **)(file + 0x10) = sp4;
        sp4[0] = sp0;
        sp4[1] = (u32)path;
        sp4[3] = 0;
        if (func_0200afb4(file, 4, 1) != 0) {
            arg0[0] = (u32)arc;
            arg0[1] = sp4[2];
            ret = 1;
        }
    }
    return ret;
}

s32 func_0200b988(u8 *arg0, void *arg1, u32 arg2, u32 arg3, u32 arg4) {
    u32 sp0[4];
    *(void **)(arg0 + 8) = arg1;
    *(void **)(arg0 + 0x10) = sp0;
    sp0[0] = arg4;
    sp0[1] = arg2;
    sp0[2] = arg3;
    sp0[3] = 0;
    return func_0200afb4(arg0, 7, 1);
}

s32 func_0200b9c8(u8 *arg0, FSFileID arg1) {
    s32 ret = 0;
    if (arg1.arc != NULL) {
        u32 sp0[2];
        *(void **)(arg0 + 8) = arg1.arc;
        *(void **)(arg0 + 0x10) = sp0;
        sp0[0] = arg1.file_id;
        sp0[1] = 0;
        ret = func_0200afb4(arg0, 6, 1);
    }
    return ret;
}

s32 func_0200ba20(void *arg0, void *arg1, s32 arg2) {
    u8 *file = (u8 *)arg0;
    s32 ret = 0;
    u8 path[0x118];
    u32 sp4[3];
    u32 sp0 = 0;
    void *arc;

    arc = func_0200b2ac((const char *)arg1, &sp0, path);
    if (arc != NULL) {
        func_0200b888(file);
        *(void **)(file + 0x10) = sp4;
        *(void **)(file + 8) = arc;
        sp4[0] = sp0;
        sp4[1] = (u32)path;
        sp4[2] = arg2;
        if (func_0200afb4(file, 0xd, 1) != 0) {
            ret = 1;
        } else {
            *(void **)(file + 8) = NULL;
        }
    }
    return ret;
}

s32 func_0200baa4(u8 *arg0) {
    return func_0200afb4(arg0, 8, 1);
}

u32 func_0200bab8(u8 *arg0) {
    u32 ret = 0;
    if (func_0200d460(arg0, &ret) == 0) {
        u32 sp0;
        *(u32 **)(arg0 + 0x10) = &sp0;
        sp0 = 0;
        if (func_0200afb4(arg0, 0xf, 1) != 0) {
            ret = sp0;
        }
    }
    return ret;
}

s32 func_0200bb10(u8 *arg0, u32 arg1, u32 arg2) {
    u32 sp0[2];
    *(u32 **)(arg0 + 0x10) = sp0;
    sp0[0] = arg1;
    sp0[1] = arg2;
    return func_0200afb4(arg0, 0xe, 1);
}

s32 func_0200bb3c(u8 *arg0, void *arg1, s32 arg2) {
    u32 sp0[2];
    *(u32 **)(arg0 + 0x10) = sp0;
    sp0[0] = (u32)arg1;
    sp0[1] = arg2;
    if (func_0200afb4(arg0, 0, 1) != 0) {
        arg2 = sp0[1];
    } else {
        arg2 = -1;
        if (*(u32 *)(arg0 + 0x14) != 6) {
            arg2 = sp0[1];
        }
    }
    return arg2;
}

u32 func_0200bb90(u8 *arg0, void *arg1, u32 arg2) {
    u32 sp4;
    u32 sp0;
    u32 *ptr;
    if (func_0200d4a0(arg0, &sp0) != 0 && func_0200d460(arg0, &sp4) != 0) {
        if (sp0 + arg2 > sp4) {
            arg2 = sp4 - sp0;
        }
    }
    ptr = (u32 *)(arg0 + 0x30);
    *(u32 **)(arg0 + 0x10) = ptr;
    ptr[0] = (u32)arg1;
    ptr[1] = arg2;
    func_0200afb4(arg0, 0, 0);
    return arg2;
}

s32 func_0200bc08(void *arg0, void *arg1) {
    return func_0200ba20(arg0, arg1, 1);
}

u32 func_0200bc18(u8 *arg0) {
    return func_0200bab8(arg0);
}

void func_0200bc24(void) {
    if (func_020081e0() == 2) {
        data_0215ef7c[1] = -1;
        data_0215ef7c[2] = 0;
        data_0215ef7c[3] = -1;
        data_0215ef7c[4] = 0;
    } else {
        data_0215ef7c[1] = 0;
        data_0215ef7c[2] = 0;
        data_0215ef7c[3] = 0;
        data_0215ef7c[4] = 0;
    }
    data_0215ef7c[5] = (u32)data_0213e8f0;
    data_0215ef7c[6] = 0x40;
    data_0215ef7c[0] = func_0200b0ec(data_02145c04, 3, 0x40);
}

extern s32 func_0200d4a0(u8 *, u32 *);
extern s32 func_020081e0(void);
extern u32 func_0200b0ec(void *, s32, s32);
extern u32 data_0215ef7c[];
extern u8 data_0213e8f0[];
extern u8 data_02145c04[];
u32 func_0200bc94(u8 *arg0) {
    struct {
        u32 low : 24;
        u32 flag : 8;
    } *s = (void *)(arg0 + 0x1c);
    if (s->flag & 1) {
        return s->low;
    }
    return *(u32 *)(arg0 + 8);
}

void func_0200bcb0(u32 *arg0) {
    u32 a = arg0[1];
    u32 b = arg0[2];
    u32 sum = b + arg0[3];
    func_02006e00(a, sum);
    func_02006d8c(a, sum);
    func_02008f74((void *)(a + b), 0, sum - b);
}

void func_0200bcec(FSFileID *arg0, u8 *arg1) {
    FSFileID file;
    file.arc = (void *)data_0215ef7c[0];
    file.file_id = *(u32 *)(arg1 + 0x18);
    *arg0 = file;
}

s32 func_0200be78(u8 *arg0) {
    u8 file[0x48];
    FSFileID id;
    s32 ret = 0;
    func_0200b888(file);
    func_0200bcec(&id, arg0);
    if (func_0200b9c8(file, id) != 0) {
        u32 val = func_0200bc94(arg0);
        func_0200bcb0((u32 *)arg0);
        if (func_0200bb3c(file, *(void **)(arg0 + 4), val) == val) {
            ret = 1;
        }
        func_0200baa4(file);
    }
    return ret;
}

s32 func_0200bef8(u8 *arg0, void *arg1, u32 arg2, s32 arg3) {
    u32 len;
    u8 work[0x40];
    u8 buf[0x14];
    s32 ret = 0;
    func_02008f74(buf, 0, 0x14);
    func_02009008((void *)data_0215ef7c[5], work, data_0215ef7c[6]);
    if (arg3 != 0) {
        ret = func_020118c0(1);
        len = data_0215ef7c[6];
        func_02011bdc(buf, arg1, arg2, work);
    }
    if (arg3 != 0) {
        func_020118c0(ret);
        s32 i;
        for (i = 0; i < 0x14; i += 4) {
            if (*(u32 *)(buf + i) != *(u32 *)(arg0 + i)) {
                break;
            }
        }
        ret = (i == 0x14) ? 1 : 0;
    }
    return ret;
}

extern void func_02008414(void);
extern void func_02000950(void *);
extern void func_02006dc4(void *, u32);
extern u8 data_0215cd08[];
extern u8 data_0215cd08_end[];
void func_0200bfb8(u8 *arg0) {
    u32 r4 = func_0200bc94(arg0);
    if (func_020081e0() != 1) {
        s32 r3 = 0;
        if (((*(u32 *)(arg0 + 0x1c) >> 24) & 2) != 0) {
            u32 cnt = (s32)(data_0215cd08_end - data_0215cd08) / 20;
            if (*(u32 *)arg0 < cnt) {
                r3 = func_0200bef8(data_0215cd08 + *(u32 *)arg0 * 20, *(void **)(arg0 + 4), r4, 0);
            }
        }
        if (r3 == 0) {
            func_02008f74(*(void **)(arg0 + 4), 0, r4);
            func_02008414();
            return;
        }
    }
    if (((*(u32 *)(arg0 + 0x1c) >> 24) & 1) != 0) {
        func_02000950(*(u8 **)(arg0 + 4) + r4);
    }
    func_02006dc4(*(void **)(arg0 + 4), *(u32 *)(arg0 + 8));
    {
        void (**p)(void) = *(void (***)(void))(arg0 + 0x10);
        void (**end)(void) = *(void (***)(void))(arg0 + 0x14);
        while (p < end) {
            if (*p != NULL) {
                (*p)();
            }
            p++;
        }
    }
}

void func_0200c0a8(u8 *arg0) {
    for (;;) {
        CallbackNode *extractedHead = NULL;
        CallbackNode *tail = NULL;
        u32 start = *(u32 *)(arg0 + 4);
        u32 end = start + (*(u32 *)(arg0 + 8) + *(u32 *)(arg0 + 0xc));
        u32 ime = func_02008128();
        CallbackNode *prev = NULL;
        CallbackNode *head = data_0216004c;
        CallbackNode *node = head;
        CallbackNode *next;

        for (; node != NULL; node = next) {
            u32 arg = node->arg;
            next = node->next;
            u32 cbAddr = (u32)node->callback;
            if ((arg == 0 && cbAddr >= start && cbAddr < end)
                || (arg >= start && arg < end)) {
                if (tail != NULL) {
                    tail->next = node;
                } else {
                    extractedHead = node;
                }
                if (head == node) {
                    data_0216004c = next;
                    head = next;
                }
                node->next = NULL;
                tail = node;
                if (prev != NULL) {
                    prev->next = next;
                }
            } else {
                prev = node;
            }
        }
        func_0200813c(ime);
        if (extractedHead == NULL) {
            return;
        }
        do {
            void (*cb)(u32) = extractedHead->callback;
            next = extractedHead->next;
            if (cb != NULL) {
                cb(extractedHead->arg);
            }
            extractedHead = next;
        } while (extractedHead != NULL);
    }
}

extern void func_0200c0a8(u8 *);
extern s32 func_0200cb40(u8 *, s32, s32);
extern s32 func_0200bd18(u8 *, void *, void *);
extern s32 func_0200be78(u8 *);
extern void func_0200bfb8(u8 *);
extern s32 func_0200a928(void *, s32);
s32 func_0200c198(void *arg0) {
    func_0200c0a8(arg0);
    return 1;
}

s32 func_0200c1a8(void *arg0, void *arg1) {
    u8 buf[0x2c];
    s32 ret = 0;
    if (func_0200bd18(buf, arg0, arg1) != 0 && func_0200be78(buf) != 0) {
        func_0200bfb8(buf);
        ret = 1;
    }
    return ret;
}

s32 func_0200c1fc(void *arg0, void *arg1) {
    u8 buf[0x2c];
    if (func_0200bd18(buf, arg0, arg1) != 0 && func_0200c198(buf) != 0) {
        return 1;
    }
    return 0;
}

s32 func_0200c248(u32 *arg0, void *arg1, u32 arg2) {
    u8 *p = (u8 *)arg0[0];
    u8 *v = *(u8 **)(p + 0x20);
    s32 ret;
    if (*(u32 *)(v + 0x1c) != 0) {
        func_02009008((void *)arg0[1], arg1, arg2);
        ret = 0;
    } else {
        s32 res = ((s32 (*)(u8 *, void *, u32, u32))(*(void **)(v + 0x20)))(p, arg1, arg0[1], arg2);
        ret = func_0200a928(*(void **)(p + 8), res);
    }
    arg0[1] += arg2;
    return ret;
}

s32 func_0200c2a8(u8 *arg0, u16 arg1) {
    *(u32 *)(arg0 + 0x30) = *(u32 *)(arg0 + 8);
    *(u16 *)(arg0 + 0x34) = arg1;
    *(u16 *)(arg0 + 0x36) = 0;
    *(u32 *)(arg0 + 0x38) = 0;
    return func_0200cb40(arg0, 2, 1);
}

s32 func_0200c2d4(u8 *arg0) {
    u32 sp0[4];
    u8 *file = *(u8 **)(arg0 + 8);
    u32 *vtbl = *(u32 **)(file + 0x20);
    FSFilePos *pos = (FSFilePos *)(arg0 + 0x30);
    s32 ret;

    sp0[0] = (u32)file;
    sp0[1] = vtbl[3] + (pos->unk4 << 3);
    ret = func_0200c248(sp0, &sp0[2], 8);
    if (ret != 0) {
        goto quit;
    }
    *(FSFilePos *)(arg0 + 0x20) = *pos;
    if (pos->unk6 == 0 && pos->unk8 == 0) {
        *(u16 *)(arg0 + 0x26) = *(u16 *)((u8 *)sp0 + 0xc);
        *(u32 *)(arg0 + 0x28) = vtbl[3] + sp0[2];
    }
    *(u32 *)(arg0 + 0x2c) = *(u16 *)((u8 *)sp0 + 0xe) & 0xfff;
quit:
    return ret;
}

