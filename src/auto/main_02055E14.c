/* 8 functions from 0x02055E14 to 0x02056D10 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_021600c0;
extern u8 *data_021600ac;
typedef struct Unk_02056460 { s16 field[10]; } Unk_02056460;
extern const Unk_02056460 data_0213f39c;
extern void func_020a3bbc(s32);
extern void func_021098ac(void *);

void func_02055e14(u16 arg0) {
    u8 *p;
    u8 *node;
    p = data_021600c0;
    if (p == NULL) return;
    node = *(u8 **)(p + 0x40);
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

extern u8 *data_021600ac;
extern void func_020a994c(void *);
extern void func_020a9610(void *,s32,s32,void *,s32,s32);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
void func_0205654c(s32 n,s32 x){
s32 off=n*0x50;
func_020a994c(data_021600ac+0xb8+off);
func_020a9610(data_021600ac+0xec+off,*(s32 *)(data_021600ac+0xac),n+1,*(void **)(data_021600ac+off+0xb4),0,0);
func_020a98ac(data_021600ac+0xb8+off);
func_020a98f4(data_021600ac+0xb8+off);
*(s32 *)(*(u8 **)(data_021600ac+off+0xb4)+0x4c)=0x2bc000;
*(s32 *)(*(u8 **)(data_021600ac+off+0xb4)+0x44)=x;
*(s32 *)(*(u8 **)(data_021600ac+off+0xb4)+0x48)=(0xc5-(4-n)*25)<<12;
}

