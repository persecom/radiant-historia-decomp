/* 52 functions from 0x020C83F4 to 0x020C93F4 (main), found by ds-decomp. */
#include "common.h"

extern void func_020c6f14(void);
extern void func_0210c5dc(void *);
extern void func_020c8dc0(void *, s32, s32);
extern void func_020a9610(void *, s32, s32, void *, s32, s32);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
extern void func_0203bc34(s32, void *, s32, s32, s32, s32);
extern void func_020a98a0(void *);
extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_020a9830(void *, void *, s32, s32, s32, s32);
extern s32 func_020c73c0(void *);
extern void func_020c9b64(void *);
extern u32 func_020c9c34(void *);
extern void *func_020c9c10(void *, u16);
extern void func_020c7f6c(void *, s32, s32);
extern void func_020c8008(void *, u8);
extern void func_020c9bb8(void *);
extern void func_020c9000(u8 *);
extern void func_020c8f20(u8 *);
extern void func_020c80ac(u8 *, s32, s32);
extern u8 *func_020c9b24(void *, s32, s32);
extern void func_020c8b58(u8 *, u8 *);
void func_020c83f4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    (*(void (**)(void *))(*(u8 **)(arg0 + 0x30) + 4))(*(void **)(arg0 + 0x30));
    (*(void (**)(void *))(*(u8 **)(arg0 + 0x30) + 8))(*(void **)(arg0 + 0x30));
    if (*(void **)(arg0 + 0x40) != NULL) {
        func_020a9610(arg0 + 0x44, arg1, arg2, *(void **)(arg0 + 0x30), 0, 0);
        func_020a98ac(*(void **)(arg0 + 0x40));
        func_020a98f4(*(void **)(arg0 + 0x40));
    } else {
        func_0203bc34(arg1, *(void **)(arg0 + 0x30), arg2, 0, 0, arg3);
    }
}

void func_020c8488(u8 *arg0) {
    (*(void (**)(void *))(*(u8 **)(arg0 + 0x30) + 4))(*(void **)(arg0 + 0x30));
    (*(void (**)(void *))(*(u8 **)(arg0 + 0x30) + 8))(*(void **)(arg0 + 0x30));
}

void func_020c84ac(u8 *arg0) {
    if (*(void **)(arg0 + 0x40) != NULL) {
        func_020a98a0(*(void **)(arg0 + 0x40));
        if (*(void **)(arg0 + 0x40) != NULL) {
            func_0210c5dc(*(void **)(arg0 + 0x40));
            *(void **)(arg0 + 0x40) = NULL;
        }
        *(void **)(arg0 + 0x40) = NULL;
    }
}

void func_020c84e8(u8 *arg0, s32 arg1, s32 arg2) {
    func_020c84ac(arg0);
    *(void **)(arg0 + 0x40) = func_0210c594(0x34, data_02155c3c);
    *(void **)(arg0 + 0x48) = *(void **)(arg0 + 0x30);
    func_020a9830(*(void **)(arg0 + 0x40), arg0 + 0x44, arg1, arg2, 0, 0);
}

void func_020c8548(u8 *arg0, s32 arg1) {
    *(s32 *)(*(u8 **)(arg0 + 0x30) + 0x44) = arg1 << 12;
}

void func_020c8558(u8 *arg0, s32 arg1) {
    *(s32 *)(*(u8 **)(arg0 + 0x30) + 0x48) = arg1 << 12;
}

void func_020c8568(u8 *arg0, s32 arg1, s32 arg2) {
    func_020c8548(arg0, arg1);
    func_020c8558(arg0, arg2);
}

void func_020c8588(u8 *arg0, u16 arg1) {
    *(u16 *)(arg0 + 0x3a) = arg1;
}

void func_020c8590(u8 *arg0, u16 arg1) {
    *(u16 *)(arg0 + 0x3c) = arg1;
}

void func_020c8598(u8 *arg0, s32 arg1) {
    *(s32 *)(*(u8 **)(arg0 + 0x30) + 0x4c) += arg1 << 12;
}

extern void func_020c8548(u8 *, s32);
extern void func_020c8558(u8 *, s32);
void func_020c85ac(u8 *arg0, s32 arg1) {
    *(s32 *)(*(u8 **)(arg0 + 0x30) + 0x4c) = arg1 << 12;
}

void func_020c85bc(u8 *arg0, s32 arg1) {
    *(s32 *)(*(u8 **)(arg0 + 0x30) + 0x4c) = arg1 << 12;
}

u8 func_020c85cc(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 0x30);
    if (p == NULL) {
        return 0x2d;
    }
    return *(s32 *)(p + 0x4c) >> 12;
}

extern void func_020c9940(void *);
extern void func_020a9544(void *);
void func_020c85e8(u8 *arg0) {
    (*(void (**)(void *))(*(u8 **)(arg0 + 0x30) + 4))(*(void **)(arg0 + 0x30));
    (*(void (**)(void *))(*(u8 **)(arg0 + 0x30) + 8))(*(void **)(arg0 + 0x30));
    if (*(void **)(arg0 + 0x34) != NULL) {
        func_020a9544(*(void **)(arg0 + 0x34));
        *(void **)(arg0 + 0x34) = NULL;
    }
}

s32 func_020c8624(void) {
    return 4;
}

void func_020c862c(u8 *arg0, u8 arg1) {
    arg0[0x38] = arg1;
}

void func_020c8634(u8 *arg0, u8 arg1, u8 arg2) {
    arg0[0x3e] = arg1;
    arg0[0x3f] = arg2;
}

extern void func_020a8810(void *);
extern void func_020a30c4(u16);
void func_020c8640(u8 *arg0) {
    func_020a8810(*(void **)(arg0 + 0x30));
}

extern void func_020c6dbc(void *);
void func_020c8794(u8 *arg0);
s32 func_020c874c(u8 *arg0) {
    func_020c6dbc(arg0);
    *(void **)(arg0 + 0x48) = (void *)func_020c8794;
    *(u16 *)(arg0 + 0x36) = 0x10;
    *(u16 *)(arg0 + 0x38) = 0x10;
    *(u16 *)(arg0 + 0x3e) = 0x10;
    *(u16 *)(arg0 + 0x40) = 0x10;
    return 0;
}

void func_020c8780(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020c8794(u8 *arg0) {
    func_020a30c4(*(u16 *)(arg0 + 0x4c));
}

extern void func_020c8818(void *);
void func_020c87f8(void *arg0) {
    func_020c8818(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_020c885c(u8 *arg0) {
    if (func_020c73c0(arg0) == 0) {
        return 2;
    }
    func_020c786c(arg0);
    func_020c9b64(*(void **)(arg0 + 0x54));
    return 0;
}

void func_020c888c(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *obj;
    s16 y;
    s16 x;
    u16 i;
    u32 count = func_020c9c34(*(void **)(arg0 + 0x54));
    for (i = 0; i < count; i++) {
        obj = func_020c9c10(*(void **)(arg0 + 0x54), i);
        if (obj != NULL) {
            ((void (*)(u8 *))(*(void **)(obj + 0x28)))(obj);
            x = (*(s16 *)(obj + 0x3a) - *(s16 *)(arg0 + 0x58)) + arg1;
            y = (*(s16 *)(obj + 0x3c) - *(s16 *)(arg0 + 0x5a)) + arg2;
            ((void (*)(u8 *, s32))(*(void **)(obj + 0x10)))(obj, x);
            ((void (*)(u8 *, s32))(*(void **)(obj + 0x14)))(obj, y);
        }
    }
    *(s16 *)(arg0 + 0x58) = arg1;
    *(s16 *)(arg0 + 0x5a) = arg2;
    func_020c7f6c(arg0, arg1, arg2);
}

extern void func_020c888c(u8 *, s32, s32);
void func_020c8948(u8 *arg0, s32 arg1) {
    func_020c888c(arg0, arg1, *(s16 *)(arg0 + 0x5a));
}

extern void func_020c77d8(u8 *);
extern void func_020c992c(void);
extern void func_020c9a04(void *, s32);
extern void func_020c7838(void *);
extern s32 func_020c786c(u8 *);
void func_020c8958(u8 *arg0, s32 arg1) {
    func_020c888c(arg0, *(s16 *)(arg0 + 0x58), arg1);
}

void func_020c896c(u8 *arg0, s32 arg1) {
    u8 *obj;
    u16 i;
    u32 count = func_020c9c34(*(void **)(arg0 + 0x54));
    for (i = 0; i < count; i++) {
        obj = func_020c9c10(*(void **)(arg0 + 0x54), i);
        if (obj != NULL) {
            s32 delta;
            if (((s32 (*)(u8 *))(*(void **)(obj + 0x28)))(obj) == 4) {
                delta = func_020c85cc(obj) - arg0[0x5c];
            } else {
                delta = obj[0x43] - arg0[0x5c];
            }
            ((void (*)(u8 *, u8))(*(void **)(obj + 0x1c)))(obj, arg1 + delta);
        }
    }
    arg0[0x5c] = arg1;
    func_020c8008(arg0, arg1);
}

void func_020c8a08(void) {
    func_020c6f14();
}

void func_020c8a14(u8 *arg0, s32 arg1) {
    u16 i;
    u32 count = func_020c9c34(*(void **)(arg0 + 0x54));
    for (i = 0; i < count; i++) {
        u8 *obj = func_020c9c10(*(void **)(arg0 + 0x54), i);
        if (obj != NULL) {
            ((void (*)(u8 *, s32))(*(void **)(obj + 0x20)))(obj, arg1);
        }
    }
}

void func_020c8a6c(u8 *arg0, s32 arg1, s32 arg2) {
    u16 i;
    u32 count = func_020c9c34(*(void **)(arg0 + 0x54));
    for (i = 0; i < count; i++) {
        u8 *obj = func_020c9c10(*(void **)(arg0 + 0x54), i);
        if (obj != NULL) {
            ((void (*)(u8 *, s32, s32))(*(void **)(obj + 0x24)))(obj, arg1, arg2);
        }
    }
    func_020c80ac(arg0, arg1, arg2);
}

u8 *func_020c8adc(u8 *arg0) {
    u8 *obj = func_020c9c10(*(void **)(arg0 + 0x54), 0);
    if (obj != NULL) {
        return obj;
    }
    return func_020c9b24(*(void **)(arg0 + 0x54), 0, 4);
}

void func_020c8b58(u8 *arg0, u8 *obj) {
    ((void (*)(u8 *, s16))(*(void **)(obj + 0x10)))(obj, *(s16 *)(arg0 + 0x58));
    ((void (*)(u8 *, s16))(*(void **)(obj + 0x14)))(obj, *(s16 *)(arg0 + 0x5a));
}

s32 func_020c8b88(void) {
    return 0x12;
}

extern void func_020c71bc(void);
s32 func_020c8b90(void) {
    func_020c71bc();
    return 0;
}

void func_020c8ba0(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

BOOL func_020c8bb4(u8 *arg0) {
    s32 *pos = (s32 *)(arg0 + 0x4c);
    s32 delta = *(s32 *)(arg0 + 0x58);
    s32 next = *pos + delta;
    *pos = next;
    if (delta > 0) {
        if (next >= *(s32 *)(arg0 + 0x54)) {
            *pos = *(s32 *)(arg0 + 0x54);
            *(s32 *)(arg0 + 0x58) = 0;
        }
    } else if (delta < 0) {
        if (next <= *(s32 *)(arg0 + 0x54)) {
            *pos = *(s32 *)(arg0 + 0x54);
            *(s32 *)(arg0 + 0x58) = 0;
        }
    }
    return FALSE;
}

void func_020c8d24(u8 *arg0) {
    if (*(void **)(arg0 + 0x30) != NULL) {
        func_020c9940(*(void **)(arg0 + 0x30));
        if (*(void **)(arg0 + 0x30) != NULL) {
            func_0210c5dc(*(void **)(arg0 + 0x30));
            *(void **)(arg0 + 0x30) = NULL;
        }
        *(void **)(arg0 + 0x30) = NULL;
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_020c8d70(u8 *arg0) {
    if (func_020c73c0(arg0) == 0) {
        return 1;
    }
    func_020c9b64(*(void **)(arg0 + 0x30));
    return 0;
}

s32 func_020c8d98(u8 *arg0) {
    func_020c9bb8(*(void **)(arg0 + 0x30));
    func_020c9000(arg0);
    func_020c8f20(arg0);
    return 0;
}

void func_020c8dc0(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = arg0;
    u16 i;
    s16 x;
    s16 y;
    u32 count = func_020c9c34(*(void **)(p + 0x30));
    for (i = 0; i < count; i++) {
        u8 *obj = func_020c9c10(*(void **)(p + 0x30), i);
        x = arg1 + (*(s16 *)(obj + 0x3a) - *(s16 *)(p + 0x34));
        y = arg2 + (*(s16 *)(obj + 0x3c) - *(s16 *)(p + 0x36));
        ((void (*)(u8 *, s32))(*(void **)(obj + 0x10)))(obj, x);
        ((void (*)(u8 *, s32))(*(void **)(obj + 0x14)))(obj, y);
    }
    *(s16 *)(p + 0x34) = arg1;
    *(s16 *)(p + 0x36) = arg2;
}

void func_020c8e5c(u8 *arg0, u8 arg1) {
    u16 i;
    u32 count = func_020c9c34(*(void **)(arg0 + 0x30));
    for (i = 0; i < count; i++) {
        u8 *obj = func_020c9c10(*(void **)(arg0 + 0x30), i);
        s32 delta = obj[0x43] - arg0[0x38];
        ((void (*)(u8 *, u8))(*(void **)(obj + 0x1c)))(obj, arg1 + delta);
    }
    arg0[0x38] = arg1;
}

void func_020c8ec0(u8 *arg0, s32 arg1) {
    func_020c8dc0(arg0, arg1, *(s16 *)(arg0 + 0x36));
}

extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_020a9830(void *, void *, s32, s32, s32, s32);
void func_020c8ed0(u8 *arg0, s32 arg1) {
    func_020c8dc0(arg0, *(s16 *)(arg0 + 0x34), arg1);
}

