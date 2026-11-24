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

void func_020a98a0(void) {
    func_0210da44();
}

extern void func_0210c5dc(void *);
void func_020a9aa8(void *arg0) {
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020a9b28(void *arg0) {
    func_020a9d60(arg0);
    func_020a9b40(arg0);
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

