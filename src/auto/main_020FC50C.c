/* 6 functions from 0x020FC50C to 0x020FCEA0 (main), found by ds-decomp. */
#include "common.h"

typedef struct Unk020FC50C_Sub {
    u8 unk_000[0x2f0];
    u8 unk_2f0;
    u8 unk_2f1[3];
    s32 unk_2f4;
    u8 unk_2f8;
    u8 unk_2f9[3];
    s32 unk_2fc;
    u8 unk_300;
    u8 unk_301;
} Unk020FC50C_Sub;

typedef struct Unk020FC50C {
    u32 unk_00;
    Unk020FC50C_Sub *unk_04;
} Unk020FC50C;

extern Unk020FC50C data_02160c74;

extern void func_020a9544(void *);
extern void func_020c6d4c(void *);
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_0210dbe8(void *);
extern void func_0210c5dc(void *);
extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_0210d9e4(void *);
extern void func_0210db70(void *);
extern void func_0210dbd0(void *);
extern void *func_020a84b8(s32, s32);
extern void *func_020c6d5c(s32);
extern void func_020c8344(void *, s32, s32);
extern void func_020c8640(void *, s32);
extern void func_020c84e8(void *, s32, s32);
extern void func_020fce9c(void);
extern void func_020fcea0(void);
s32 func_020fc50c(void)
{
    typedef struct { s32 x, y, z; } VecFC;
    extern void *data_021626e8[];
    extern u8 *data_021600b8;
    extern u8 *data_021600ac;
    extern u8 *data_021600a4;
    extern u8 *data_02160204;
    extern const char data_021529e0[];
    extern const char data_021529e4[];
    extern const char data_021529ec[];
    extern const char data_021529f0[];
    extern const char data_021529f8[];
    extern const char data_02152a00[];
    extern const char data_02152a08[];
    extern const char data_02152a0c[];
    extern const char data_02152a14[];
    extern const char data_02152a1c[];
    extern const char data_02152a24[];
    extern const char data_02152a2c[];
    extern const char data_02152a38[];
    extern const char data_02152a40[];
    extern const char data_02152a44[];
    extern const char data_02152a48[];
    extern const char data_02152a54[];
    extern const char data_02152a5c[];
    extern const char data_02152a64[];
    extern const char data_02152a68[];
    extern const char data_02152a70[];
    extern const char data_02152a74[];
    extern const char data_02152a7c[];
    extern const char data_02152a84[];
    extern const char data_02152a8c[];
    extern const char data_02152a90[];
    extern const char data_02152a98[];
    extern const char data_02152a9c[];
    extern const char data_02152aa0[];
    extern const char data_02152aa4[];
    extern const char data_02152aac[];
    extern const char data_02152ab4[];
    extern const char data_02152ab8[];
    extern const char data_02152abc[];
    extern const char data_02152ac4[];
    extern const char data_02152ac8[];
    extern const char data_02152acc[];
    extern const char data_02152ad4[];
    extern const char data_02152adc[];
    extern s32 func_0210cc54(const char *);
    extern s32 func_0210cc88(const char *);
    extern s32 func_0210ce5c(void);
    extern s32 func_0210ce6c(void);
    extern void func_0210cd60(s32);
    extern void func_020fce80(void);
    extern void func_020a98a0(void *);
    extern void func_020a994c(void *);
    extern void func_020a957c(void ***);
    extern void func_021168f8(void *, void *);
    extern void func_020a56b4(s32);
    extern void func_020a5698(void);
    extern s32 func_020f5bdc(void);
    extern s32 func_020f5948(void);
    extern void *func_02047820(u16);
    extern s32 func_020ddc8c(void *, void *);
    extern s32 func_020ef4c8(void *);
    extern s32 func_021011a8(void);
    s32 repeat, handled;
    u8 *context;
    s32 zero, one;

    context = *(u8 **)((u8 *)data_021626e8[0] + 0x10);
    zero = 0;
    one = 1;
    handled = zero;
    do {
        repeat = 0;
        if (func_0210cc54(data_021529e0)) {
            if (func_0210cc88(data_021529e4)) {
                func_020fce80();
            } else if (func_0210cc88(data_021529ec)) {
                func_020a98a0(context + 0x144);
                if (*(void **)(context + 0x128) != NULL) {
                    func_020a957c((void ***)(context + 0x128));
                }
            } else if (func_0210cc88(data_021529f0)) {
                u8 *list = data_021600b8;
                u8 *node = *(u8 **)list;
                while (node != NULL) {
                    if (context == node) break;
                    node = *(u8 **)(node + 0x1dc);
                }
                if (node != NULL) {
                    func_021168f8(list, node);
                    if (*(void **)(node + 0x128) != NULL) {
                        (*(u32 *)(node + 0x178))++;
                        func_020a994c(node + 0x144);
                        func_020a98a0(node + 0x144);
                        func_020a957c((void ***)(node + 0x128));
                    }
                    *(void **)(data_021600ac + 0x7c) = NULL;
                }
            } else if (func_0210cc88(data_021529f8)) {
                u8 *node = *(u8 **)(data_021600ac + 0x7c);
                if (node != NULL) {
                    func_021168f8(data_021600b8, node);
                }
                func_020a98a0(context + 0x144);
                if (*(void **)(context + 0x128) != NULL) {
                    func_020a957c((void ***)(context + 0x128));
                }
            } else if (func_0210cc54(data_02152a00)) {
                context[0x1c2] = (u8)func_0210ce6c();
            } else {
                func_0210cd60(repeat);
            }
            handled = repeat = 1;
        }
        if (func_0210cc88(data_02152a08)) {
            handled = repeat = 1;
        }
        if (func_0210cc88(data_02152a0c)) {
            u16 value;
            handled = repeat = 1;
            value = *(u16 *)(data_021600a4 + 0x34);
            if (value != 0xff) *(u16 *)(data_021600a4 + 0x38) = value;
            *(u16 *)(data_021600a4 + 0x34) = zero;
            value = *(u16 *)(data_021600a4 + 0x3a);
            if (value != 0xff) *(u16 *)(data_021600a4 + 0x3e) = value;
            *(u16 *)(data_021600a4 + 0x3a) = zero;
        }
        if (func_0210cc88(data_02152a14)) {
            handled = repeat = 1;
        }
        if (func_0210cc88(data_02152a1c)) {
            handled = repeat = 1;
        }
        if (func_0210cc88(data_02152a24)) {
            handled = repeat = 1;
        }
        if (func_0210cc88(data_02152a2c)) {
            handled = repeat = 1;
        }
        if (func_0210cc54(data_02152a38)) {
            if (func_0210cc88(data_02152a40)) {
                func_020a56b4(0);
                handled = repeat = 1;
            } else if (func_0210cc88(data_02152a44)) {
                repeat = 1;
                func_020a56b4(repeat);
                handled = repeat;
            } else if (func_0210cc88(data_02152a48)) {
                repeat = 1;
                func_020a56b4(repeat);
                handled = repeat;
            } else if (func_0210cc88(data_02152a54)) {
                handled = repeat = 1;
            } else if (func_0210cc88(data_02152a5c)) {
                repeat = 1;
                func_020a56b4(repeat);
                handled = repeat;
            } else if (func_0210cc88(data_02152a64)) {
                handled = repeat = 1;
            } else if (func_0210cc88(data_02152a68)) {
                handled = repeat = 1;
            } else if (func_0210cc88(data_02152a70)) {
                func_020a56b4(0);
                handled = repeat = 1;
                func_020a5698();
            } else if (func_0210cc88(data_02152a74)) {
                repeat = 1;
                func_020a56b4(repeat);
                handled = repeat;
            } else if (func_0210cc54(data_02152a7c)) {
                data_02160204[0x117] = (u8)func_0210ce6c();
            } else if (func_0210cc54(data_02152a84)) {
                data_02160204[0x118] = (u8)func_0210ce6c();
            } else if (func_0210cc54(data_02152a8c)) {
                data_02160204[0x122] = (u8)one;
            }
        }
        if (func_0210cc88(data_02152a90)) {
            handled = repeat = 1;
        }
        if (func_0210cc54(data_02152a98)) {
            if (func_0210cc54(data_02152a9c)) {
                u16 angle = (u16)func_020f5bdc();
                handled = repeat = 1;
                *(u16 *)(context + 0x28) = angle;
            } else if (func_0210cc54(data_02152aa0)) {
                u16 angle = (u16)func_020f5bdc();
                handled = repeat = 1;
                *(u16 *)(context + 0x28) += angle;
            } else if (func_0210cc54(data_02152aa4)) {
                u16 angle = (u16)func_020f5bdc();
                handled = repeat = 1;
                *(u16 *)(data_02160204 + 0x78) = angle;
            } else if (func_0210cc54(data_02152aac)) {
                u16 a = (u16)func_0210ce5c();
                u16 b = (u16)func_0210ce6c();
                void *p = func_02047820(a);
                void *q = func_02047820(b);
                s32 angle = func_020ddc8c(p, q);
                repeat = 1;
                *(u16 *)(context + 0x28) = (u16)angle;
                handled = repeat;
            }
        }
        if (func_0210cc54(data_02152ab4)) {
            if (func_0210cc54(data_02152ab8)) {
                s32 z;
                *(s32 *)(context + 0x1c) = func_020f5948();
                *(s32 *)(context + 0x20) = func_020f5948();
                z = func_020f5bdc();
                handled = repeat = 1;
                *(s32 *)(context + 0x24) = z;
            } else if (func_0210cc54(data_02152abc)) {
                u8 *obj = *(u8 **)(data_021600ac + 0x68);
                *(s32 *)(context + 0x1c) = func_020f5948();
                *(s32 *)(context + 0x20) = func_020f5948();
                *(s32 *)(context + 0x24) = func_020f5bdc();
                *(VecFC *)obj = *(VecFC *)(context + 0x1c);
                repeat = 1;
                *(u16 *)(*(u8 **)(obj + 0xb0) + 4) = zero;
                handled = repeat;
            } else if (func_0210cc54(data_02152ac4)) {
                s32 z;
                s32 x, y;
                x = func_020f5948();
                *(s32 *)(context + 0x1c) += x;
                y = func_020f5948();
                *(s32 *)(context + 0x20) += y;
                z = func_020f5bdc();
                handled = repeat = 1;
                *(s32 *)(context + 0x24) += z;
            } else if (func_0210cc88(data_02152ac8)) {
                s32 height = func_020ef4c8(context + 0x1c);
                handled = repeat = 1;
                *(s32 *)(context + 0x20) = height;
            } else if (func_0210cc54(data_02152acc)) {
                u16 id = (u16)func_0210ce6c();
                void *obj;
                handled = repeat = 1;
                obj = func_02047820(id);
                if (obj != NULL) *(VecFC *)(context + 0x1c) = *(VecFC *)obj;
            } else if (func_0210cc54(data_02152ad4)) {
                u16 id = (u16)func_0210ce6c();
                void *obj;
                handled = repeat = 1;
                obj = func_02047820(id);
                if (obj != NULL) {
                    *(VecFC *)(context + 0x1c) = *(VecFC *)obj;
                    *(s32 *)(context + 0x24) += 0x20000;
                }
            }
        }
        if (func_0210cc54(data_02152adc)) {
            func_021011a8();
            handled = repeat = 1;
        }
    } while (repeat != 0);
    return handled;
}

void func_020fcbec(u8 arg0) {
    s32 i;
    data_02160c74.unk_04 = (Unk020FC50C_Sub *)func_0210c594(0x304, data_02155c3c);
    *(void **)((u8 *)data_02160c74.unk_04 + 0x0) = (void *)func_020fce9c;
    *(s32 *)((u8 *)data_02160c74.unk_04 + 0x4) = 0x3e9;
    *(void **)((u8 *)data_02160c74.unk_04 + 0x8) = data_02160c74.unk_04;
    func_0210d9e4(data_02160c74.unk_04);
    *(void **)((u8 *)data_02160c74.unk_04 + 0x14) = (void *)func_020fcea0;
    *(s32 *)((u8 *)data_02160c74.unk_04 + 0x18) = 0x3ec;
    *(void **)((u8 *)data_02160c74.unk_04 + 0x1c) = data_02160c74.unk_04;
    if (arg0 == 0) {
        func_0210db70((u8 *)data_02160c74.unk_04 + 0x14);
    } else {
        func_0210dbd0((u8 *)data_02160c74.unk_04 + 0x14);
    }
    *((u8 *)data_02160c74.unk_04 + 0x302) = arg0;
    for (i = 0; i < 8; i++) {
        *(void **)((u8 *)data_02160c74.unk_04 + i * 0x50 + 0x48) = func_020a84b8(4, 1);
    }
    data_02160c74.unk_04->unk_2f0 = 0;
    data_02160c74.unk_04->unk_300 = 0;
    for (i = 0; i < 8; i++) {
        *(void **)((u8 *)data_02160c74.unk_04 + i * 4 + 0x2c8) = func_020c6d5c(4);
        func_020c8344(*(void **)((u8 *)data_02160c74.unk_04 + i * 4 + 0x2c8), 4, 1);
        func_020c8640(*(void **)((u8 *)data_02160c74.unk_04 + i * 4 + 0x2c8), 7);
        func_020c84e8(*(void **)((u8 *)data_02160c74.unk_04 + i * 4 + 0x2c8), 0xc8, 0x20);
    }
}

void func_020fcd54(void) {
    s32 i;
    if (data_02160c74.unk_04 == NULL) {
        return;
    }
    for (i = 0; i < 8; i++) {
        if (*(void **)((u8 *)data_02160c74.unk_04 + i * 4 + 0x28) != NULL) {
            func_020a9544(*(void **)((u8 *)data_02160c74.unk_04 + i * 4 + 0x28));
            *(void **)((u8 *)data_02160c74.unk_04 + i * 4 + 0x28) = NULL;
        }
    }
    for (i = 0; i < 8; i++) {
        void *obj = *(void **)((u8 *)data_02160c74.unk_04 + i * 0x50 + 0x48);
        ((void (*)(void *))(*(void **)((u8 *)obj + 0xc)))(obj);
        if (*(void **)((u8 *)data_02160c74.unk_04 + i * 4 + 0x2c8) != NULL) {
            func_020c6d4c(*(void **)((u8 *)data_02160c74.unk_04 + i * 4 + 0x2c8));
            *(void **)((u8 *)data_02160c74.unk_04 + i * 4 + 0x2c8) = NULL;
        }
    }
    func_0210da14(data_02160c74.unk_04);
    if (*((u8 *)data_02160c74.unk_04 + 0x302) == 0) {
        func_0210dba0((u8 *)data_02160c74.unk_04 + 0x14);
    } else {
        func_0210dbe8((u8 *)data_02160c74.unk_04 + 0x14);
    }
    if (data_02160c74.unk_04 != NULL) {
        func_0210c5dc(data_02160c74.unk_04);
    }
    data_02160c74.unk_04 = NULL;
}

void func_020fce30(s32 arg0, s32 arg1, u8 arg2, u8 arg3) {
    if (data_02160c74.unk_04 == NULL) {
        return;
    }
    data_02160c74.unk_04->unk_2f4 = arg0;
    data_02160c74.unk_04->unk_2fc = arg1;
    data_02160c74.unk_04->unk_2f8 = arg2;
    data_02160c74.unk_04->unk_301 = arg3;
    data_02160c74.unk_04->unk_300 = 0;
    data_02160c74.unk_04->unk_2f0 = 1;
}

void func_020fce80(void) {
    if (data_02160c74.unk_04 != NULL) {
        data_02160c74.unk_04->unk_2f0 = 3;
    }
}

void func_020fce9c(void) {
}
