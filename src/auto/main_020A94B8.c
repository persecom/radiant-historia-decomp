/* 43 functions from 0x020A94B8 to 0x020AA464 (main), found by ds-decomp. */
#include "common.h"

extern void *data_02155c3c;
extern char data_02150098[];
extern void *func_0210c594(s32, void *);
extern void func_0210c5dc(void *);
extern void func_02005e80(char *, char *, s32);
extern void *func_02109b14(char *, s32);
extern void func_021091b4(void);
extern void func_020a9d60(void *);
extern void func_020a9b40(void *);
extern u8 *data_02162880;
extern u32 data_021601d4;
extern void func_020a9988(void);
extern void func_0210d9e4(void *);
void func_020a9a58(void);
void func_020a9abc(u8 *);
void func_020a9b28(void *);
extern void func_021167ac(void *, s32);
extern s32 func_020a932c(void *);
extern u32 data_021601d4;

extern void func_0210da44(void);
void *func_020a94b8(s32 arg0) {
    char buf[0x40];
    void **ptr = func_0210c594(4, data_02155c3c);
    if (ptr == NULL) {
        return NULL;
    }
    func_02005e80(buf, data_02150098, arg0);
    *ptr = func_02109b14(buf, 0);
    if (*ptr == NULL) {
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
        return NULL;
    }
    func_021091b4();
    return ptr;
}

void func_020a9544(void **arg0) {
    if (arg0 != NULL) {
        if (*arg0 != NULL) {
            func_0210c5dc(*arg0);
            *arg0 = NULL;
        }
        if (arg0 != NULL) {
            func_0210c5dc(arg0);
        }
    }
}

void func_020a957c(void ***arg0) {
    if (*arg0 != NULL) {
        if (**arg0 != NULL) {
            func_0210c5dc(**arg0);
            **arg0 = NULL;
        }
        if (*arg0 != NULL) {
            func_0210c5dc(*arg0);
            *arg0 = NULL;
        }
        *arg0 = NULL;
    }
}

void *func_020a95d0(void **arg0, u32 arg1) {
    u32 *p;
    u32 offset;
    u8 *base = *arg0;
    u32 key;
    u32 val;
    offset = *(u32 *)base;
    p = (u32 *)(base + 4);
    do {
        key = p[0];
        if (key == 0) {
            return NULL;
        }
        val = p[1];
        p += 2;
    } while (key != arg1);
    return base + 4 + offset + val;
}

void func_020a9610(u32 *arg0, void **arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5) {
    arg0[0] = (u32)arg1;
    arg0[1] = arg3;
    arg0[2] = arg4;
    arg0[3] = arg5;
    arg0[4] = (u32)func_020a95d0(arg1, arg2);
    arg0[5] = 0;
}

s32 func_020a9648(u32 *arg0) {
    s32 val = func_020a9194(arg0 + 4);
    if (val < 0x500) {
        if (val != 0) {
            void *obj = (void *)arg0[1];
            (*(void (**)(void *, u32, u32, s32))obj)(obj, arg0[2], arg0[3], val);
        }
        arg0[2] += func_020a916c(val);
        return (val == 0) ? 1 : 2;
    }
    if (val == 0xff00) {
        return 0;
    }
    if (val == 0xfd14) {
        return 5;
    }
    if (val == 0xfd00) {
        return 3;
    }
    return 4;
}

void func_020a96d4(u32 *arg0) {
    while (func_020a9648(arg0) >= 4) {
    }
}

u32 func_020a96f0(u32 arg0) {
    u32 total = 0;
    u32 state[2];
    s32 val;
    state[0] = arg0;
    state[1] = 0;
    while (1) {
        val = func_020a9194(state);
        if (val < 0x500) {
            total += func_020a916c(val);
        } else if (val == 0xff00) {
            return total;
        }
    }
}

u32 func_020a9738(u32 arg0, u16 arg1) {
    u32 total = 0;
    u16 counter = arg1;
    u32 i = 0;
    u32 state[2];
    s32 val;
    state[0] = arg0;
    state[1] = 0;
    while (1) {
        val = func_020a932c(state);
        if (i == 0) {
            state[0] += val + 3;
            i++;
            continue;
        }
        if (val < 0x500) {
            total += func_020a916c(val);
            continue;
        }
        if (val == 0xfd00) {
            counter--;
            if (counter == 0) {
                break;
            }
            total = 0;
            continue;
        }
        if (val == 0xfd14) {
            data_021601d4 = 1;
        }
    }
    return total;
}

u32 func_020a97e4(void **arg0, u32 arg1) {
    u32 total = 0;
    u32 state[2];
    s32 val;
    void *p = func_020a95d0(arg0, arg1);
    state[0] = (u32)p;
    state[1] = 0;
    while (1) {
        val = func_020a9194(state);
        if (val < 0x500) {
            total += func_020a916c(val);
        } else if (val == 0xff00) {
            return total;
        }
    }
}

void func_020a9830(u8 *arg0, u8 *arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5) {
    *(u8 **)(arg0 + 0x18) = arg1;
    *(void (**)(void))(arg0 + 0) = func_020a9a58;
    *(u32 *)(arg0 + 4) = 1000;
    *(u8 **)(arg0 + 8) = arg0;
    func_0210d9e4(arg0);
    *(u32 *)(arg0 + 0x20) = arg2;
    *(u32 *)(arg0 + 0x24) = arg3;
    *(u32 *)(arg0 + 0x28) = arg4;
    *(u32 *)(arg0 + 0x2c) = arg5;
    *(u32 *)(*(u8 **)(arg0 + 0x18) + 8) = arg4;
    *(u32 *)(*(u8 **)(arg0 + 0x18) + 0xc) = arg5;
    *(u32 *)(arg0 + 0x1c) = 0xe;
    *(u32 *)(arg0 + 0x30) = 0;
    *(u32 *)(arg0 + 0x14) = 0;
}

void func_020a98a0(void) {
    func_0210da44();
}

void func_020a98ac(u8 *arg0) {
    *(u32 *)(*(u8 **)(arg0 + 0x18) + 8) = *(u32 *)(arg0 + 0x28);
    *(u32 *)(*(u8 **)(arg0 + 0x18) + 0xc) = *(u32 *)(arg0 + 0x2c);
    *(u32 *)(arg0 + 0x30) = 0;
    *(u32 *)(arg0 + 0x14) = (*(u32 *)(*(u8 **)(arg0 + 0x18) + 0x10) != 0) ? 1 : 0;
    data_021601d4 = 0;
}

void func_020a98f4(u8 *arg0) {
    u8 *obj;
    data_02162880 = arg0;
    data_021601d4 = 0;
    if (*(u32 *)(arg0 + 0x14) == 0) {
        return;
    }
    while (*(u32 *)(arg0 + 0x14) != 0) {
        func_020a9988();
    }
    obj = *(u8 **)(*(u8 **)(arg0 + 0x18) + 4);
    (*(void (**)(void *))(obj + 8))(obj);
}

void func_020a994c(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 0x18);
    if (p != NULL) {
        u8 *obj = *(u8 **)(p + 4);
        (*(void (**)(void *))(obj + 4))(obj);
        obj = *(u8 **)(*(u8 **)(arg0 + 0x18) + 4);
        (*(void (**)(void *))(obj + 8))(obj);
    }
    *(u32 *)(arg0 + 0x14) = 0;
}

void func_020a9a58(void) {
    u8 *p = data_02162880;
    u8 *obj;
    func_020a9988();
    obj = *(u8 **)(*(u8 **)(p + 0x18) + 4);
    (*(void (**)(void *))(obj + 8))(obj);
}

void *func_020a9a80(void) {
    void *ptr = func_0210c594(0x14, data_02155c3c);
    func_020a9abc(ptr);
    return ptr;
}

extern void func_0210c5dc(void *);
void func_020a9aa8(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020a9abc(u8 *arg0) {
    arg0[8] = 0x1f;
}

void func_020a9ac8(u8 **arg0) {
    u8 *cur = *arg0;
    while (cur != NULL) {
        func_020a9abc(cur);
        cur = *(u8 **)(cur + 0x10);
    }
}

void func_020a9af0(u8 *arg0, u16 arg1, u16 arg2) {
    *(u16 *)(arg0 + 0x1a) = arg1;
    *(u16 *)(arg0 + 0x1c) = arg2;
    *(u16 *)(arg0 + 0x18) = 0;
    func_021167ac(arg0, 0xc);
    func_021167ac(arg0 + 0xc, 4);
    func_020a9b28(arg0);
}

void func_020a9b28(void *arg0) {
    func_020a9d60(arg0);
    func_020a9b40(arg0);
}

extern u8 *data_021600e4;
extern s32 func_020a9194(void *);
extern s32 func_020a916c(s32);
extern s32 func_020a932c(void *);
extern u32 data_021601d4;
u32 func_020aa19c(void) {
    return *(u32 *)(data_021600e4 + 0x13c8);
}

void *func_020aa318(void) {
    return func_0210c594(0xc, data_02155c3c);
}

void func_020aa334(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void *func_020aa380(void) {
    return func_0210c594(0xc, data_02155c3c);
}

void func_020aa39c(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

