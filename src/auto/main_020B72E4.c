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

extern void *func_020c9c10(void *,u32);
extern void func_020c738c(void *,s32,s32);
extern void func_020b748c(void);
void func_020b7360(void) {
u16 a[6]={1,9,2,3,5,8};
u16 b[5]={4,10,6,7,11};
u16 i;
for(i=0;i<6;i++) func_020c738c(func_020c9c10(*(void **)((u8 *)data_021601ec+0x48),a[i]),0,1);
for(i=0;i<5;i++) func_020c738c(func_020c9c10(*(void **)((u8 *)data_021601ec+0x48),b[i]),1,1);
*((u8 *)data_021601ec+0x50)=1;
*(u16 *)((u8 *)data_021601ec+0x52)=0;
*(u32 *)((u8 *)data_021601ec+0x54)=0x50000;
func_020b748c();
}

