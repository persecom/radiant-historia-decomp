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
