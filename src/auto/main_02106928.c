/* 32 functions from 0x02106928 to 0x021078D0 (main), found by ds-decomp. */
#include "common.h"

typedef struct UnkNode_02106aa0 {
    s16 unk00;
    u8 unk02;
    u8 unk03;
    s16 unk04;
    s16 unk06;
    s16 unk08;
    s16 unk0a;
    s16 unk0c;
    s16 unk0e;
    s16 unk10;
    s16 unk12;
    s32 unk14;
    s32 unk18;
    s32 unk1c;
    s32 unk20;
    s16 unk24;
    u8 unk26;
    u8 unk27[9];
    struct UnkNode_02106aa0 *next;
} UnkNode_02106aa0;

typedef struct UnkStruct_02106928 {
    void (*unk00)(void);
    s32 unk04;
    u8 unk08[0xC];
    void (*unk14)(void);
    s32 unk18;
    u8 unk1c[0xC];
    u8 unk28[0xC];
    UnkNode_02106aa0 *unk34;
    u8 unk38[0x8];
} UnkStruct_02106928;

extern u32 data_02155968;
extern u32 data_02155c3c;
extern UnkStruct_02106928 *data_02161064;
extern u8 *data_02161068;
extern u8 data_02161088[28];
extern u32 *data_02161070[];

extern void func_0200fa3c(u16);
extern void *func_0210c594(s32, u32);
extern void func_0210d9e4(void *);
extern void func_021167ac(void *, s32);
extern void func_021167f0(void *, void *);
extern void func_02106aa0(void);
extern void func_02106b18(void);
extern void func_02118234(void *);
extern void func_02118570(void *);
extern void *func_0203be60(void *, void *, void *);
extern void func_0210c5dc(void *);
extern void func_021168f8(void *, void *);
extern void func_0200f858(void);
extern u32 func_02005df8(void);
extern void func_021071fc(void);
extern void func_0201064c(void *);
extern void func_0210721c(void);
extern u32 data_0216106c;
extern void func_02117f54(u32, u32, u32, u32);
extern void func_02118008(u32, u32, u32, u32);
extern void func_020105e0(u32, u32, u32, u32, u32, u32, u32, u32, u32);
extern s32 func_020106a0(void);
extern s32 func_020106ac(void);

void func_02106928(void) {
    if (data_02161064 != NULL) {
        return;
    }
    data_02161064 = func_0210c594(0x40, data_02155c3c);
    data_02161064->unk00 = func_02106aa0;
    data_02161064->unk04 = 0x3f3;
    func_0210d9e4(data_02161064);
    data_02161064->unk14 = func_02106b18;
    data_02161064->unk18 = 0x3f3;
    func_0210d9e4(&data_02161064->unk14);
    func_021167ac(&data_02161064->unk28, 8);
    func_021167ac(&data_02161064->unk34, 0x2c);
}

void func_02106aa0(void) {
    UnkNode_02106aa0 *node = data_02161064->unk34;
    while (node != NULL) {
        node->unk0c += (s16)node->unk14;
        node->unk0e += (s16)node->unk18;
        node->unk10 += (s16)node->unk1c;
        node->unk12 += (s16)node->unk20;
        node = node->next;
    }
}

void func_02106bec(s16 *arg0) {
    UnkNode_02106aa0 *node;
    if (data_02161064 == NULL) {
        return;
    }
    node = func_0210c594(0x34, data_02155c3c);
    node->unk03 = arg0[0];
    node->unk04 = arg0[1];
    node->unk06 = arg0[2];
    node->unk08 = arg0[3];
    node->unk0a = arg0[4];
    node->unk0c = arg0[5];
    node->unk0e = arg0[6];
    node->unk10 = arg0[7];
    node->unk12 = arg0[8];
    node->unk24 = arg0[9] + 0x65;
    node->unk26 = arg0[10];
    node->unk00 = arg0[11];
    node->unk02 = 1;
    func_021167f0(&data_02161064->unk34, node);
}

UnkNode_02106aa0 *func_02106c9c(u16 arg0) {
    UnkNode_02106aa0 *node;
    if (data_02161064 == NULL) {
        return NULL;
    }
    node = data_02161064->unk34;
    while (node != NULL) {
        if (*(u16 *)node == arg0) {
            return node;
        }
        node = node->next;
    }
    return NULL;
}

void *func_02106f6c(void *arg0, u16 arg1) {
    u8 *p1;
    void *result;
    u8 *p2;
    p1 = func_0210c594(0x1c, data_02155c3c);
    p2 = func_0210c594(0x10, data_02155c3c);
    result = func_0203be60(p1, *(void **)arg0, *(void **)arg0);
    if (result != NULL) {
        *(s32 *)(p1 + 0x10) = *(s32 *)((u8 *)arg0 + 0x8);
        *(s32 *)(p1 + 0x14) = *(s32 *)((u8 *)arg0 + 0xc);
        *(s32 *)(p1 + 0x18) = *(s32 *)((u8 *)arg0 + 0x10);
        *(void **)p2 = p1;
        *(u16 *)(p2 + 0x4) = arg1;
        func_021167f0(&data_02161064->unk28, p2);
    } else {
        if (p1 != NULL) {
            func_0210c5dc(p1);
        }
        if (p2 != NULL) {
            func_0210c5dc(p2);
        }
    }
    return result;
}

void func_0210701c(u16 arg0) {
    UnkStruct_02106928 *p;
    u8 *node;

    p = data_02161064;
    if (p == NULL) return;
    node = *(u8 **)p->unk28;
    if (node == NULL) return;
    for (;;) {
        if (*(u16 *)(node + 4) == arg0) {
            u8 *d = *(u8 **)node;
            *(volatile u32 *)0x040004a8 = (*(u32 *)(d + 4) >> 3) | (*(u32 *)(d + 0x18) << 26) |
                                          0x40000000 | (*(u32 *)(d + 0x10) << 20) |
                                          (*(u32 *)(d + 0x14) << 23) | 0x20000000;
            *(volatile u32 *)0x040004ac = *(u32 *)(d + 0xc) >> (4 - (*(u32 *)(d + 0x18) == 2));
            *(volatile u32 *)0x04000480 = 0x7fff;
            return;
        }
        node = *(u8 **)(node + 0xc);
        if (node == NULL) return;
    }
}

void func_021070c4(void) {
    data_02161068 = func_0210c594(0x10, data_02155c3c);
    func_021167ac(data_02161068 + 4, 0x14);
    data_02161068[0] = 0;
}

void func_02107104(void) {
    while (*(void **)(data_02161068 + 4) != NULL) {
        void *node = *(void **)(data_02161068 + 4);
        func_021168f8(data_02161068 + 4, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
    if (data_02161068 != NULL) {
        func_0210c5dc(data_02161068);
        data_02161068 = NULL;
    }
}

void func_02107168(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 *node = (s32 *)func_0210c594(0x1c, data_02155c3c);
    node[0] = arg0;
    node[2] = arg0 + arg2;
    node[1] = arg1;
    node[3] = arg1 + arg3;
    node[4] = arg4;
    func_021167f0(data_02161068 + 4, node);
}

void func_021071cc(void *arg0) {
    func_0200f858();
    data_02155968 = func_02005df8();
    func_021071fc();
    func_0201064c(arg0);
    func_0210721c();
}

void func_021071fc(void) {
    func_0200fa3c((u16)data_02155968);
}

extern void func_0200fa4c(u16);
void func_0210721c(void) {
    func_0200fa4c((u16)data_02155968);
}

s32 func_0210723c(void) {
    u8 var = 0;
    s32 result;
    func_021071fc();
    func_020105e0(0, (u32)&var, 1, 0, 0, 1, 6, 1, 0);
    result = func_020106a0();
    func_0210721c();
    return result;
}

u32 func_02107294(void) {
    if (data_0216106c != 0) {
        if (func_020106ac() != 0) {
            data_0216106c = 0;
            func_0210721c();
        }
    }
    return data_0216106c;
}

void func_021072d0(u32 arg0, u32 arg1, u32 arg2) {
    func_021071fc();
    data_0216106c = 1;
    func_020105e0(arg1, arg0, arg2, 0, 0, 1, 8, 10, 2);
}

void func_02107334(u32 arg0, u32 arg1, u32 arg2) {
    func_021071fc();
    data_0216106c = 1;
    func_020105e0(arg0, arg1, arg2, 0, 0, 1, 6, 1, 0);
}

extern char data_0215596c[];
extern void func_02005e80(char *, char *, ...);
extern void *func_0210aa5c(u32 *, char *, u32 *);
void *func_02107390(void) {
    u32 *p = (u32 *)func_0210c594(0x20, data_02155c3c);
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
    return p;
}

void func_021073d0(void **arg0) {
    if (arg0 == NULL) {
        return;
    }
    if (arg0[0] != NULL) {
        func_0210c5dc(arg0[0]);
        arg0[0] = NULL;
    }
    if (arg0[1] != NULL) {
        func_0210c5dc(arg0[1]);
        arg0[1] = NULL;
    }
    if (arg0[2] != NULL) {
        func_0210c5dc(arg0[2]);
        arg0[2] = NULL;
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

s32 func_02107438(u8 *arg0, char *arg1) {
    char buf[0x100];
    u32 sp4;
    u32 sp0 = 0;
    void *res;
    func_02005e80(buf, data_0215596c, arg1);
    res = func_0210aa5c(&sp0, buf, &sp4);
    if (res == NULL) {
        return 0;
    }
    *(void **)(arg0 + 8) = res;
    *(u32 *)(arg0 + 0xc) = sp0;
    return 1;
}

void func_021077f0(u32 arg0, u32 arg1) {
    func_02117f54(arg0, 0, 0x7f, arg1);
    ((void (*)(u32, u32, u32))func_02118008)(arg0, 0, 0x1f);
}

void func_02107820(void) {
    func_02118234(data_02161088);
    func_02118570(data_02161088);
}

extern u8 data_021610a4[28];
void func_02107840(void) {
    func_02118234(data_021610a4);
    func_02118570(data_021610a4);
}

extern u32 *data_02161070[];
s32 func_02107860(u8 *arg0, u8 *arg1, s32 *arg2) {
    u32 r4 = ((*(u16 *)(arg0 + 2) & 0x3f) << 2) & 0xff;
    s32 dy = *(s32 *)(arg1 + 0x14) - arg2[1];
    s32 dx = *(s32 *)(arg1 + 0x10) - arg2[0];
    s32 y0 = dy + (r4 << 12);
    s32 y1 = dy - (r4 << 12);
    s32 x0 = dx - (r4 << 12);
    s32 x1 = dx + (r4 << 12);
    if (y0 > 0 && y1 < arg2[3] && x1 > 0 && x0 < arg2[2]) {
        return 1;
    }
    return 0;
}

