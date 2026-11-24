/* 23 functions from 0x0203BAE4 to 0x0203C998 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160094;

extern void *data_02155c3c;
extern u8 *data_02162880;
extern void *func_0210c594(u32, void *);
extern void func_0210c5dc(void *);
extern void func_0210db70(void *);
extern void func_020a9830(void *, void *, s32, s32, s32, s32);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
extern void func_020a98a0(void *);
extern void *func_0210c518(u32, void *);
extern void func_02008e68(s32, void *, u32);
extern void func_02005e80(char *, const char *, ...);
extern void func_02108ffc(void);
extern void *func_0210e7f0(s32, s32);
extern s32 func_0210e848(void *, void *);
extern void func_021091b4(void);
extern char data_0214628c[8];
extern char data_02146294[8];
typedef struct {
    u32 f0;
    u8 pad[0x14];
    u32 f18;
    u32 f1c;
    u32 f20;
} Unk_0203c1f0;
void func_0203c1f0(u8 *, s32);
void func_0203bd68(u8 *, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0203be60(u8 *, s32, s32);
void func_0203bc74(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u8 arg6);
void func_0203c0f4(u8 *arg0);
void func_0203c20c(void);
void func_0203bc34(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5) {
    u8 local[0x18];
    func_0203bc74(local, arg0, arg1, arg2, arg3, arg4, arg5);
}

extern void func_020a9610(void *, s32, s32, s32, s32, s32);
void func_0203bc74(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u8 arg6) {
    u8 *p = arg0;
    s32 x;
    func_020a9610(p, arg1, arg3, arg2, arg4, arg5);
    if (arg6 == 1) {
        x = *(s32 *)(p + 8) - (func_020a96f0(*(void **)(p + 0x10)) >> 1);
    } else if (arg6 == 2) {
        x = *(s32 *)(p + 8) - func_020a96f0(*(void **)(p + 0x10));
    } else {
        goto done;
    }
    *(s32 *)(p + 8) = x & ~3;
done:
    while (func_020a9648(p) != 0) {
    }
}

void func_0203bcf8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    u32 local[6] = { 0, 0, 0, 0, 0, 0 };
    func_0203bd68(local, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void func_0203bd68(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    u32 local[13] = { 0 };
    func_020a9610(arg0, arg1, arg3, arg2, 0, 0);
    func_020a9830(local, arg0, arg6, arg7, arg4, arg5);
    local[7] = arg8;
    func_020a98ac(local);
    func_020a98f4(local);
    func_020a98a0(local);
}

void *func_0203be10(s32 arg0) {
    s32 size = arg0 * 0x1c;
    void *p = func_0210c518(size, data_02155c3c);
    func_02008e68(0, p, size);
    return p;
}

void func_0203be4c(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_0203be60(u8 *arg0, s32 arg1, s32 arg2) {
    char buf[0x64];
    char *p;
    func_02108ffc();
    p = buf;
    func_02005e80(p, data_0214628c, arg1);
    if (func_0210e7f0((s32)p, (s32)arg0) == 0) {
        return 0;
    }
    func_021091b4();
    func_02005e80(p, data_02146294, arg2);
    if (func_0210e848(p, arg0 + 8) == 0) {
        return 0;
    }
    func_021091b4();
    return 1;
}

void *func_0203c0d8(void) {
    return ((void *(*)(u32, void *))func_0210c594)(0x40, data_02155c3c);
}

void func_0203c0f4(u8 *arg0) {
    s32 i;
    if (*(void **)(arg0 + 0x34) == NULL) {
        return;
    }
    for (i = 0; i < *(u16 *)(arg0 + 0x3c); i++) {
        u8 *elem = ((u8 **)(*(void **)(arg0 + 0x34)))[i];
        if (elem != NULL && *(void **)(elem + 0x14) != NULL) {
            ((void (*)(u8 *))(*(void **)(elem + 0x14)))(elem);
        }
    }
    if (*(void **)(arg0 + 0x34) != NULL) {
        func_0210c5dc(*(void **)(arg0 + 0x34));
        *(void **)(arg0 + 0x34) = NULL;
    }
    *(u16 *)(arg0 + 0x3c) = 0;
}

void func_0203c168(u8 *arg0) {
    if (arg0 == NULL) {
        return;
    }
    func_0203be4c(*(void **)(arg0 + 0x30));
    func_0203c0f4(arg0);
    if (*(void **)(arg0 + 4) != NULL) {
        func_0210da14(arg0 + 4);
    }
    if (*(void **)(arg0 + 0x18) != NULL) {
        func_0210dba0(arg0 + 0x18);
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_0203c1c0(u8 *arg0, void *arg1, s32 arg2) {
    func_0203c1f0(arg0, arg2);
    *(void **)(arg0 + 4) = (void *)func_0203c20c;
    *(void **)(arg0 + 8) = arg1;
    *(void **)(arg0 + 0xc) = arg0;
    func_0210d9e4(arg0 + 4);
}

void func_0203c1f0(u8 *arg0, s32 arg1) {
    u32 v = *(u32 *)arg0;
    *(u32 *)(arg0 + 0x1c) = arg1;
    *(u32 *)(arg0 + 0x20) = (u32)arg0;
    *(u32 *)(arg0 + 0x18) = v;
    func_0210db70(arg0 + 0x18);
}

void func_0203c20c(void) {
    u8 *p = data_02162880;
    s32 count = 0;
    u8 *best;
    s32 i;
    s32 n;
    p[0x2c] = 0;
    *(void **)(p + 0x38) = NULL;
    if (p[0x2d] != 0) {
        return;
    }
    n = *(u16 *)(p + 0x3c);
    best = NULL;
    for (i = 0; i < n; i++) {
        u8 *elem = ((u8 **)(*(void **)(p + 0x34)))[i];
        if (elem[0xb] != 0) {
            continue;
        }
        if (*(void **)(elem + 0x10) == NULL) {
            continue;
        }
        if (((s32 (*)(u8 *))(*(void **)(elem + 0x10)))(elem) == 0) {
            continue;
        }
        count++;
        if (best == NULL || *(s16 *)(best + 4) < *(s16 *)(elem + 4)) {
            best = elem;
        }
    }
    if (count != 0) {
        p[0x2c] = 1;
        *(void **)(p + 0x38) = best;
    }
}

void func_0203c820(void) {
}

void func_0203c994(void) {
}

