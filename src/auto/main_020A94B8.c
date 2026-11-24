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
    u8 *base = *arg0;
    u32 offset = *(u32 *)base;
    u32 *p = (u32 *)(base + 4);
    while (1) {
        u32 key = p[0];
        if (key == 0) {
            return NULL;
        }
        if (key == arg1) {
            return base + 4 + offset + p[1];
        }
        p += 2;
    }
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

void func_020a98a0(void) {
    func_0210da44();
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

void func_020a9b28(void *arg0) {
    func_020a9d60(arg0);
    func_020a9b40(arg0);
}

extern u8 *data_021600e4;
extern s32 func_020a9194(void *);
extern s32 func_020a916c(s32);
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

