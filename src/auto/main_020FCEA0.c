/* 4 functions from 0x020FCEA0 to 0x020FDC0C (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160c74[2];

extern u8 *data_02160200;
extern u8 *data_021600bc;
extern void func_02009008(void *, void *, u32);
extern void func_02008f74(void *, s32, u32);
extern void func_02052240(void *);
extern void func_020a8810(void *,s32);
extern void func_020a9830(void *,void *,s32,s32,s32,s32);
extern void func_020a9610(void *,void *,s32,void *,s32,s32);
extern void func_020c83f4(void *,void *,s32,s32);
extern void func_020c738c(void *,s32,s32);
extern void func_020c85bc(void *,s32);
extern s32 func_020a96f0(void *);
s32 func_020fd8bc(s32 index,void *arg1,s32 arg2,s32 x,s8 y) {
s32 offset=index*0x50;
u8 *obj;
func_020a8810(*(void **)(data_02160c74[1]+offset+0x48),7);
func_020a9830(data_02160c74[1]+0x4c+offset,data_02160c74[1]+0x80+offset,240,16,0,0);
func_020a9610(data_02160c74[1]+0x80+offset,arg1,arg2,*(void **)(data_02160c74[1]+offset+0x48),0,0);
obj=*(u8 **)(data_02160c74[1]+index*4+0x2c8);
func_020c83f4(obj,arg1,arg2,0);
func_020c738c(obj,0,1);
((void (*)(void *,s16))*(void **)(obj+0x10))(obj,x+24);
((void (*)(void *,s16))*(void **)(obj+0x14))(obj,y*14+82);
func_020c85bc(obj,0x26c);
x+=func_020a96f0(*(void **)(data_02160c74[1]+offset+0x90));
++*(s8 *)(data_02160c74[1]+0x300);
return x;
}

void func_020fdb64(void) {
    u8 *node;
    if (*(u32 *)(data_02160200 + 0x15c) & 0x2000000) {
        return;
    }
    node = *(u8 **)(data_021600bc + 0x70);
    while (node != NULL) {
        if (*(u16 *)(node + 0x8e) == 0x1483) {
            func_02009008(node + 0x18, node, 0xc);
            func_02009008(node + 0x18, node + 0xc, 0xc);
            func_02009008(node + 0x18, node + 0x24, 0xc);
            func_02008f74(node + 0x30, 0, 0xc);
            func_02052240(node);
        }
        node = *(u8 **)(node + 0x17c);
    }
}
