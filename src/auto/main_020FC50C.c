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
