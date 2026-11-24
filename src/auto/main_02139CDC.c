/* 7 functions from 0x02139CDC to 0x0213A394 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u8 pad[0x3c];
    u32 field_3c;
    u8 pad2[0x144];
    u8 field_184;
} Unk_021769fc;

extern Unk_021769fc *data_021769fc;
extern u32 data_02162868;
extern u32 data_0216bf84;
extern void func_0210968c(u32, u32, u32);
extern void func_02109790(u32);
extern void func_02139cdc(void);
extern void func_02139ee4(void);
extern void func_0210dc88(void);
extern s32 func_0210723c(void);

extern u32 data_02162858;
extern u32 data_02162854;
extern void func_020a994c(void *);
extern void func_020a98a0(void *);
extern void func_020a9544(void *);
extern void func_020a3b84(void);
extern void func_0210da14(void *);
extern void func_0210dba0(void *);
extern void func_0210dbe8(void *);
extern void func_0210c5dc(void *);
extern void func_0210e290(s32);
extern void func_0210f138(void);
void func_02139ee4(void) {
    u8 i;

    if (data_021769fc == NULL) {
        return;
    }

    for (i = 0; i < 4; i++) {
        u32 off = i * 0x50;
        void *obj;

        func_020a994c((u8 *)data_021769fc + 0x48 + off);
        func_020a98a0((u8 *)data_021769fc + 0x48 + off);
        obj = *(void **)((u8 *)data_021769fc + off + 0x44);
        (*(void (**)(void *))((u8 *)obj + 0xc))(obj);
    }

    func_020a9544(*(void **)((u8 *)data_021769fc + 0x40));
    func_020a3b84();
    func_0210da14(data_021769fc);
    func_0210dba0((u8 *)data_021769fc + 0x14);
    func_0210dbe8((u8 *)data_021769fc + 0x28);
    if (data_021769fc != NULL) {
        func_0210c5dc(data_021769fc);
        data_021769fc = NULL;
    }
    func_0210e290(0);
    data_02162858 = 0;
    data_02162854 = 0;
    func_0210f138();
}

s32 func_02139fc4(void) {
    data_02162868 = 1;
    data_0216bf84 = 0;
    func_0210968c(3, 16, 1);
    func_02139cdc();
    func_0210968c(3, 0, 30);
    func_02109790(3);
    for (;;) {
        if (data_021769fc->field_3c != 0) break;
        func_0210dc88();
    }
    func_0210968c(3, -16, 20);
    func_02109790(3);
    func_02139ee4();
    func_0210dc88();
    data_02162868 = 0;
    return 36;
}

void func_0213a06c(void) {
    if (data_021769fc->field_184 != 0) return;
    if (func_0210723c() == 0) {
        data_021769fc->field_184++;
    } else {
        data_021769fc->field_3c = 1;
    }
}

void func_0213a0b0(void) {
}

extern void func_0203bc34(void *, void *, void *, int, int, int);
extern void func_020a9610(void *, void *, void *, void *, int, int);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
void func_0213a248(int index, int x, int y, int z, void *arg, u8 mode, int a, int b) {
u32 off = index * 0x50;
func_020a994c((u8 *)data_021769fc + 0x48 + off);
if (!arg) return;
*(int *)(*(u8 **)((u8 *)data_021769fc + off + 0x44) + 0x4c) = (z + 101) << 12;
*(int *)(*(u8 **)((u8 *)data_021769fc + off + 0x44) + 0x44) = x;
*(int *)(*(u8 **)((u8 *)data_021769fc + off + 0x44) + 0x48) = y;
switch(mode) {
case 2: func_0203bc34(*(void **)((u8 *)data_021769fc+0x40), *(void **)((u8 *)data_021769fc+off+0x44),arg,a,b,2); break;
case 1: func_0203bc34(*(void **)((u8 *)data_021769fc+0x40), *(void **)((u8 *)data_021769fc+off+0x44),arg,a,b,1); break;
default:
func_020a9610((u8 *)data_021769fc+0x7c+off,*(void **)((u8 *)data_021769fc+0x40),arg,*(void **)((u8 *)data_021769fc+off+0x44),0,0);
func_020a98ac((u8 *)data_021769fc+0x48+off);
func_020a98f4((u8 *)data_021769fc+0x48+off);
}
}

