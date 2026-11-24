/* 10 functions from 0x020F36B0 to 0x020F46A0 (main), found by ds-decomp. */
#include "common.h"

typedef struct UnkF_020f36b0 {
    u8 unk00[4];
    u16 unk04;
} UnkF_020f36b0;

typedef struct UnkE_020f36b0 {
    u16 count;
    u8 unk02[2];
    UnkF_020f36b0 *items;
} UnkE_020f36b0;

extern s32 func_0201f884(s32);
extern s32 func_02020888(s32, s32);
extern s32 func_020201f4(s32, s32);
extern s32 func_0201ff0c(s32);

extern void func_020f4668(void *);
extern s32 func_020f3fcc(u8 *, s32, s32);
extern void *func_0210c518(u32, void *);
extern void func_02008e68(s32, void *, s32);
extern s32 func_02107d58(u32, u16, u16);
extern void func_0210d9e4(void *);
extern void func_0210da14(void *);
extern void func_0210c5dc(void *);

extern u32 data_02155c3c;

typedef struct {
    u16 field_0;
    u16 field_2;
    u32 field_4;
} Unk_02151fc8;

extern Unk_02151fc8 data_02151fc8;

typedef struct {
    u8 field_0;
    u8 pad[3];
    void *field_4;
} Unk_02160c34;

extern Unk_02160c34 data_02160c34;

extern void func_020f4210(void);
void func_020f36b0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 j;
    s32 v;
    UnkF_020f36b0 *f;

    for (i = 0; i < *(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)arg0 + 0x58) + 4)); i++) {
        for (j = 0; j < (*(UnkE_020f36b0 **)(*(u8 **)(*(u8 **)(*(u8 **)arg0 + 0x58) + 4) + 4))[i].count; j++) {
            f = &(*(UnkE_020f36b0 **)(*(u8 **)(*(u8 **)(*(u8 **)arg0 + 0x58) + 4) + 4))[i].items[j];
            f->unk04 += (u16)(arg1 + (arg2 << 5));
            f = &(*(UnkE_020f36b0 **)(*(u8 **)(*(u8 **)(*(u8 **)arg0 + 0x58) + 4) + 4))[i].items[j];
            v = func_0201ff0c(func_020201f4(0x42000000, func_02020888(func_0201f884((f->unk04 % 0x1000 % 0x400) / 0x10), 0x40000000)));
            f->unk04 += (u16)(v - (arg1 + (arg2 << 5)));
        }
    }
}

s32 func_020f402c(u8 *arg0, s32 arg1) {
    u8 *r2 = *(u8 **)arg0;
    u8 *r3 = *(u8 **)(arg0 + 0x10);
    if (*(u16 *)(*(u8 **)(*(u8 **)(r2 + 0x58) + 0xc)) <= arg1 * 2) {
        return 0;
    }
    switch (r3[arg1 * 4]) {
    case 0:
        return 0;
    case 1:
        return func_020f3fcc(arg0, *(u16 *)(r3 + arg1 * 4 + 2), 1);
    case 3:
        return func_020f3fcc(arg0, *(u16 *)(r3 + arg1 * 4 + 2), 1);
    default:
        return 0;
    }
}

void func_020f40a4(void) {
    void *p;

    if (data_02160c34.field_4 != NULL) {
        return;
    }
    p = func_0210c518(0x50, (void *)data_02155c3c);
    data_02160c34.field_4 = p;
    func_02008e68(0, p, 0x50);
    data_02151fc8.field_4 = 0x226000;
    data_02151fc8.field_2 = 0x1555;
    data_02151fc8.field_0 = 0x2000;
    data_02160c34.field_0 = 0;
    func_02107d58(data_02151fc8.field_4, data_02151fc8.field_2, data_02151fc8.field_0);
    p = data_02160c34.field_4;
    *(void **)p = func_020f4210;
    *(u32 *)((u8 *)p + 4) = 0x3f8;
    func_0210d9e4(p);
}

void func_020f4144(void) {
    func_0210da14(data_02160c34.field_4);
    if (data_02160c34.field_4 != NULL) {
        func_0210c5dc(data_02160c34.field_4);
        data_02160c34.field_4 = NULL;
    }
}

void func_020f4640(void) {
    u32 buf[3];
    buf[0] = 0;
    buf[1] = 0;
    buf[2] = 0;
    func_020f4668(buf);
}

