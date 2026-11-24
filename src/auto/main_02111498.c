/* 45 functions from 0x02111498 to 0x0211242C (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u8 pad[0x6c];
    void *field;
} MainSub_6C;

extern void func_0210c5dc(void *);
extern void func_020c9490(void *);
extern void *func_020c9c10(void *, u32);
extern void func_020c7930(void *);
extern void func_020c6d78(void *);
extern void *func_020c641c(s32);
extern void func_020c992c(void *);
extern void *func_0210c594(s32, u32);
extern void func_021167ac(void *, s32);
extern u32 data_02155c3c;
extern void func_02111728(void *);
void func_02111594(void) {
}

extern void func_020c7090(void *);
void func_02111598(void *arg0) {
    func_020c7090(func_020c9c10(*(void **)((u8 *)arg0 + 0x30), 0));
}

void func_021115b0(u8 *arg0, u32 arg1) {
    *(u16 *)(arg0 + 0x3c) = (u8)arg1;
}

void func_021115bc(u8 *arg0, u16 arg1) {
    int result = 0;
    void *p = func_020c9c10(*(void **)(arg0 + 0x30), 0);
    result |= (*(u16 *)((u8 *)p + 0x30) != arg1);
    *(u16 *)((u8 *)p + 0x30) = arg1;
    if (result) {
        func_020c7930(p);
    }
}

u32 func_02111630(u32 *arg) {
    return arg[0x10];
}

void func_02111638(u8 *arg0) {
    *(u32 *)(arg0 + 0x40) = 1;
    arg0[0x44] = 4;
}

void func_02111708(void *arg0) {
    func_02111728(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

extern void func_0211192c(u8 *, s32, s32);
void func_02111a18(u8 *arg0, s32 arg1) {
    func_0211192c(arg0, arg1, *(s16 *)(arg0 + 0x46));
}

s32 func_02111da8(u8 *arg0) {
    return *(s32 *)(arg0 + 0x38);
}

void func_02111db0(u8 *arg0, u32 arg1, u32 arg2) {
    *(u32 *)(arg0 + 0x78 + (arg2 << 2)) = arg1;
}

u32 func_02111dbc(u8 *arg0, u32 arg1) {
    return *(u32 *)(arg0 + 0x78 + (arg1 << 2));
}

void func_02112038(MainSub_6C *arg0) {
    func_020c9490(arg0->field);
}

extern void func_020c8ee4(void *);
void func_02112094(MainSub_6C *arg0) {
    func_020c8ee4(arg0->field);
}

u8 func_021120a4(u8 *arg) {
    return arg[0x75];
}

extern void func_021121b8(void *);
void func_02112198(void *arg0) {
    func_021121b8(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

