/* 19 functions from 0x02091CD8 to 0x02092CA0 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160110;
extern void func_0210c5dc(void *);
extern void *data_02155c3c;
extern void *func_0210c594(u32, void *);
extern void func_02094700(void);
extern void func_021167ac(void *, s32);
extern void func_020949f4(void);
extern void func_02094aec(void);
extern void func_02094cc0(void);
extern void func_0210d9e4(void *);
extern void func_02092cec(void);
extern void func_02096e94(void);
extern void func_020947e8(void);
extern void func_02094774(void);
extern void func_020951b4(void);
extern void func_020934ac(void);
extern void func_02092c54(void);
extern void func_02092ca0(void);
extern void func_020948ac(void);
extern void func_0210da14(void *);

extern u8 data_0214874c[4];
extern s32 func_021093f0(void *);
extern void func_02092194(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_02012590(const char *, const char *, ...);
void func_02092190(void) {
}

void func_020922bc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7) {
    func_02092194(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, 5, 5);
}

s32 func_02092994(u8 *arg0, s32 arg1) {
    const char *r4 = *(const char **)(arg0 + 8);
    if (!func_021093f0(arg0)) {
        return arg1;
    }
    if (*r4 == '\0') {
        return arg1;
    }
    func_02012590(r4, (const char *)data_0214874c, &arg1);
    return arg1;
}

const char *func_020929f4(u8 *arg0, s32 arg1) {
    const char *r4 = *(const char **)(arg0 + 8);
    if (arg1 == 1 && !func_021093f0(arg0)) {
        return NULL;
    }
    if (*r4 == '\0') {
        return NULL;
    }
    return r4;
}

extern u8 data_02148750[4];
extern s32 func_020123f0(const char *, const char *);
extern s32 func_02109444(void *);
BOOL func_02092a28(const char *arg0, const char *arg1) {
    return func_020123f0(arg0, arg1) == 0;
}

const char *func_02092a40(u8 *arg0, const char *arg1) {
    const char *r4 = *(const char **)(arg0 + 8);
    if (!func_021093f0(arg0)) {
        return arg1;
    }
    if (*r4 == '\0') {
        r4 = arg1;
    }
    return r4;
}

s32 func_02092a70(const char *arg0, s32 arg1) {
    if (*arg0 == '\0') {
        return arg1;
    }
    func_02012590(arg0, (const char *)data_02148750, &arg1);
    return arg1;
}

s32 func_02092ab0(u8 *arg0, s32 arg1) {
    s32 val = func_02092994(arg0, 0);
    while (val != arg1) {
        if (func_02109444(arg0)) {
            val = func_02092994(arg0, 0);
        } else {
            return -1;
        }
    }
    return val;
}

void func_02092b04(void) {
    u8 *p;
    if (data_02160110 != NULL) {
        return;
    }
    p = func_0210c594(0x10c, data_02155c3c);
    data_02160110 = p;
    func_02094700();
    func_021167ac(p + 0x84, 0x3c);
    func_021167ac(p + 0x90, 0x18);
    func_021167ac(p + 0x9c, 0);
    func_020949f4();
    *(u32 *)(p + 0x6c) = 0;
    *(u16 *)(p + 0x70) = 0;
    *(s16 *)(p + 0xce) = -1;
    func_02094aec();
    *(void **)p = func_02094cc0;
    *(u32 *)(p + 4) = 0x3fa;
    func_0210d9e4(p);
    func_02092cec();
    func_02096e94();
    func_020947e8();
}

void func_02092bac(void) {
    if (data_02160110 == NULL) {
        return;
    }
    func_02094774();
    func_020951b4();
    if (*(void **)(data_02160110 + 0x104) != NULL) {
        func_020934ac();
    }
    func_02092c54();
    func_02092ca0();
    func_020948ac();
    if (data_02160110 != NULL) {
        func_0210da14(data_02160110);
        if (data_02160110 != NULL) {
            func_0210c5dc(data_02160110);
            data_02160110 = NULL;
        }
    }
}

extern void *data_02155c3c;
extern void *func_0210c594(u32, void *);
extern void func_02094700(void);
extern void func_021167ac(void *, s32);
extern void func_020949f4(void);
extern void func_02094aec(void);
extern void func_02094cc0(void);
extern void func_0210d9e4(void *);
extern void func_02092cec(void);
extern void func_02096e94(void);
extern void func_020947e8(void);
extern void func_02094774(void);
extern void func_020951b4(void);
extern void func_020934ac(void);
extern void func_02092c54(void);
extern void func_02092ca0(void);
extern void func_020948ac(void);
extern void func_0210da14(void *);
u32 func_02092c1c(void) {
    if (data_02160110 != NULL) {
        return *(u32 *)(data_02160110 + 0x84);
    }
    return 0;
}

u32 func_02092c38(void) {
    if (data_02160110 != NULL) {
        return *(u32 *)(data_02160110 + 0x90);
    }
    return 0;
}

extern u8 *data_02160110;
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
void func_02092c54(void) {
    u8 *base = data_02160110;
    void *node = *(void **)(base + 0x84);
    while (node != NULL) {
        func_021168f8(base + 0x84, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
        base = data_02160110;
        node = *(void **)(base + 0x84);
    }
}

