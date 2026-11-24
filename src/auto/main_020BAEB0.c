/* 28 functions from 0x020BA63C to 0x020BB558 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160204;
extern u16 data_021626a8,data_021628f8,data_021626aa;
extern s32 func_02064b3c(s32,s32,s32,s32);
extern void func_020a98f4(void *),func_020a994c(void *),func_020a98ac(void *);
extern void func_0210d27c(s32);

extern void func_02110b94(void *);
extern void func_02110d94(void *);
extern void func_020ba9c4(u8 *);
extern void func_020baae0(u8 *);
extern u8 *func_020c9b24(void *, u32, u32);
extern void func_020babe8(void);
extern void func_020ba948(u8 *);
extern void func_020baa74(u8 *);
extern void func_020c4c60(void *, s32);
extern void func_0211137c(void *, void *);
extern u8 *func_02111d7c(void *, u32);
extern void *func_02022068(u32);
extern void func_020a98a0(void *);
extern void func_020a9544(void *);
extern void func_0210c5dc(void *);
extern void func_020a9610(void *, void *, void *, void *, s32, s32);
extern void *func_020c9c10(void *, u32);
extern void func_020c738c(void *, u32, u32);
extern void **data_021601ec;
extern void *func_020c8b10(void);
extern void func_020c7894(void *);
extern u16 data_02143954[];
extern void func_020c52c0(void);
extern u8 data_021601f0;
extern u32 data_02162868;
extern u32 data_0216bf84;
extern void func_020bb558(u8 *);
extern void func_020c83f4(u8 *, s32, s32, s32);
extern void func_020c8640(u8 *, u32);
extern void func_020c4e00(void *, u32);
extern void func_020c4fa4(void *);
extern void func_0210968c(u32, u32, u32);
extern void func_02109790(u32);
extern void func_02108e54(u32);
extern void func_020bad3c(void);
extern void func_020baeb0(void);
extern void func_0210dc88(void);

extern u32 data_02162858[2];
extern u32 data_02162854;
extern u8 data_0216242c[20];
extern void *data_02155984;
extern void func_020a3b84(void);
extern void func_020eb344(u32, u32);
extern void func_020ec218(void);
extern void func_0210e290(u32);
extern void func_020c4bec(void *);
extern void func_020c4c1c(void *);
extern void func_020c4c4c(void *);
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_0210dbe8(void *);
extern void func_0210f138(void);

typedef struct {
    u8 pad_00[0x44];
    s32 unk_44;
    s32 unk_48;
    s32 unk_4c;
} UnkObj_020bb034;

typedef struct {
    UnkObj_020bb034 *unk_00[3];
    void *unk_0c[3];
    u8 unk_18[3][0x34];
    u8 unk_b4[3][0x18];
    s32 unk_fc[3];
    u8 unk_108[0xc];
} UnkCtx_020bb034;
void func_020baeb0(void) {
    u8 **pp = (u8 **)&data_021601f0;
    if (pp[1] == NULL) {
        return;
    }
    data_0216bf84 = 0;
    func_020a3b84();
    func_020eb344(3, 1);
    func_020ec218();
    func_0210e290(0);
    data_02162858[0] = 0;
    data_02162854 = 0;
    data_02155984 = data_0216242c;
    if (pp[1] != NULL) {
        func_020c4bec(*(void **)(pp[1] + 0x40));
        *(void **)(pp[1] + 0x40) = NULL;
        func_020c4c1c(*(void **)(pp[1] + 0x3c));
        *(void **)(pp[1] + 0x3c) = NULL;
        func_020c4c4c(*(void **)(pp[1] + 0x44));
        *(void **)(pp[1] + 0x44) = NULL;
        func_020c4c4c(*(void **)(pp[1] + 0x4c));
        *(void **)(pp[1] + 0x4c) = NULL;
        func_0210da14(pp[1]);
        func_0210dba0(pp[1] + 0x14);
        func_0210dbe8(pp[1] + 0x28);
        if (pp[1] != NULL) {
            func_0210c5dc(pp[1]);
            pp[1] = NULL;
        }
    }
    func_0210f138();
}

void func_020bafb4(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

void func_020bafdc(void) {
    func_020c52c0();
}

void func_020bafe8(void) {
    u8 *p = *(u8 **)(&data_021601f0 + 4);
    func_020c4c60(*(void **)(p + 0x3c), 10);
}

void func_020bb008(void) {
    func_020c4e00(*(void **)(*(u8 **)((u8 *)&data_021601f0 + 4) + 0x3c), 10);
    func_020c4fa4(*(void **)(*(u8 **)((u8 *)&data_021601f0 + 4) + 0x40));
}

extern void *data_02155c3c;
extern u8 data_02151034[];
extern u8 data_0215103c[];
extern u8 data_02151044[];
extern void *func_0210c594(s32, void *);
extern u8 *func_020a84b8(s32, s32);
extern u8 *func_020a8604(s32, s32);
extern void func_020a8810(void *, s32);
extern void *func_020a94b8(void *);
extern void func_020a9830(void *, void *, s32, s32, s32, s32);
extern void func_020bb294(u8 *, int);
void *func_020bb034(s32 arg0) {
    UnkCtx_020bb034 *p = func_0210c594(0x114, data_02155c3c);
    u16 i;

    for (i = 0; i < 3; i++) {
        if (i == 1) {
            if (arg0 == 0) {
                p->unk_00[i] = (UnkObj_020bb034 *)func_020a84b8(5, 3);
            } else if (arg0 == 1) {
                p->unk_00[i] = (UnkObj_020bb034 *)func_020a8604(5, 3);
            }
            p->unk_00[i]->unk_4c = 0x2bd000;
            p->unk_00[i]->unk_44 = 0x1a000;
            p->unk_00[i]->unk_48 = 0x14000;
        } else if (i == 0) {
            if (arg0 == 0) {
                p->unk_00[i] = (UnkObj_020bb034 *)func_020a84b8(4, 1);
            } else if (arg0 == 1) {
                p->unk_00[i] = (UnkObj_020bb034 *)func_020a8604(4, 1);
            }
            p->unk_00[i]->unk_4c = 0x2bd000;
            p->unk_00[i]->unk_44 = 0x18000;
            p->unk_00[i]->unk_48 = 0x2000;
            func_020a8810(p->unk_00[i], 7);
        } else if (i == 2) {
            p->unk_00[i] = (UnkObj_020bb034 *)func_020a84b8(4, 1);
            p->unk_00[i]->unk_4c = 0x2bd000;
            p->unk_00[i]->unk_44 = 0x18000;
            p->unk_00[i]->unk_48 = 0x2000;
            func_020a8810(p->unk_00[i], 7);
        }

        if (i == 1) {
            p->unk_0c[i] = func_020a94b8(data_02151034);
            func_020a9830(p->unk_18[i], p->unk_b4[i], 0xf0, 0x40, 0, 0);
        } else if (i == 0) {
            p->unk_0c[i] = func_020a94b8(data_0215103c);
            func_020a8810(p->unk_00[i], 0x11);
            func_020a9830(p->unk_18[i], p->unk_b4[i], 0x80, 0x10, 0, 0);
        } else if (i == 2) {
            p->unk_0c[i] = func_020a94b8(data_02151044);
            func_020a9830(p->unk_18[i], p->unk_b4[i], 0x80, 0x10, 0, 0);
        }

        p->unk_fc[i] = 1;
        func_020bb294((u8 *)p, (u8)i);
    }

    return p;
}

void func_020bb234(u8 *arg0) {
    u16 i;
    if (arg0 == NULL) {
        return;
    }
    for (i = 0; i < 3; i++) {
        void *obj;
        func_020a98a0(arg0 + 0x18 + i * 0x34);
        func_020a9544(((void **)(arg0 + 0xc))[i]);
        obj = ((void **)arg0)[i];
        ((void (*)(void *))(*(void **)((u8 *)obj + 0xc)))(obj);
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020bb294(u8 *arg0, s32 arg1) {
    func_020a9610(arg0 + 0xb4 + arg1 * 0x18, ((void **)(arg0 + 0xc))[arg1], ((void **)(arg0 + 0xfc))[arg1], ((void **)arg0)[arg1], 0, 0);
}

void func_020bb508(u8 *arg0) {
    if (arg0 == NULL) {
        return;
    }
    if (*(u32 *)(arg0 + 0x108) & 1) {
        func_020bb558(arg0);
    }
}

extern void func_020bbb1c(void);
extern void func_020bbc24(void);
extern void func_020a98a0(void *);
extern void func_020a9544(void *);
extern void func_0210c5dc(void *);
extern void func_020a9610(void *, void *, void *, void *, s32, s32);
void func_020bb528(u8 *arg0) {
    if (arg0 == NULL) {
        return;
    }
    if (*(u32 *)(arg0 + 0x108) & 0x10) {
        func_020bbb1c();
    }
    if (*(u32 *)(arg0 + 0x108) & 0x20) {
        func_020bbc24();
    }
}

