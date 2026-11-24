/* 5 functions from 0x020B72E4 to 0x020B77D4 (main), found by ds-decomp. */
#include "common.h"

extern u16 data_02151024;
extern void *data_021601ec;
extern void func_0210968c(u32, u32, u32);
extern u32 func_020b77d4(void);
extern void func_0210dc88(void);
extern void func_020b8718(u32);

typedef struct {
    u8 pad[0x3c];
    u8 field_3c;
    u32 field_40;
} Unk_020b72e4;

s32 func_020b72e4(s32 arg) {
    u8 v;
    u16 val;
    func_0210968c(3, 0, 0);
    if (func_020b77d4() != 0) return arg;
    val = data_02151024;
    ((Unk_020b72e4 *)data_021601ec)->field_3c = val;
    for (;;) {
        if (((Unk_020b72e4 *)data_021601ec)->field_40 == 7) break;
        func_0210dc88();
    }
    v = ((Unk_020b72e4 *)data_021601ec)->field_3c;
    func_020b8718(((Unk_020b72e4 *)data_021601ec)->field_40);
    return v;
}

void func_020b7350(u16 arg0) {
    data_02151024 = arg0;
}
