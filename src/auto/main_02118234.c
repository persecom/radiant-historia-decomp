/* 33 functions from 0x02118234 to 0x021191F0 (main), found by ds-decomp. */
#include "common.h"
typedef struct { u8 pad[0x100]; u16 entries[128][4]; u8 tail[0x40]; } UnkOamBuffer;
extern u8 data_0216e274[];
static inline u8 *GetOamEntries(u32 index) { return ((UnkOamBuffer *)data_0216e274)[index].pad + 0x100; }
extern u32 data_02145ba4;
extern void func_02006d8c(void *,u32);
extern void func_02008568(u32,void *,u32,u32,u32);
extern void func_02008e24(u32,void *,u32);

extern void func_02118234(void *);
extern void func_02118430(void *);
void func_02118430(void *arg0) {
u8 *p=arg0;
if (*(u32 *)(p+0x14)) {
u32 size;
u8 *dst;
s32 valid=0;
u32 channel;
if (*(u16 *)(p+8)<=*(u16 *)(p+6)+1 && *(u16 *)(p+4)<=*(u16 *)(p+6)) valid=1;
if (!valid) size=0;
else size=(u16)(*(u16 *)(p+6)-*(u16 *)(p+4)+1)*8;
dst=(u8 *)((u32)data_0216e274+*(u32 *)p*0x540+0x100+*(u16 *)(p+4)*8);
func_02006d8c(dst,size);
channel=data_02145ba4;
if(channel>3) channel=-1;
if(channel!=-1) func_02008568(channel,dst,0xc0,size,1);
else func_02008e24(0xc0,dst,size);
} else {
u8 *dst=(u8 *)((u32)data_0216e274+*(u32 *)p*0x540+0x100+*(u16 *)(p+4)*8);
u16 count=*(u16 *)(p+6)-*(u16 *)(p+4)+1;
u16 i;
for(i=0;i<count;i++) { *(u16 *)dst=0xc0;dst+=8; }
}
*(u16 *)(p+8)=*(u16 *)(p+4);
*(u16 *)(p+0xe)=*(u16 *)(p+0xa);
}

void func_02118570(void *arg0) {
    func_02118234(arg0);
    func_02118430(arg0);
}

u16 func_02118588(u16 *arg0, s32 arg1) {
    return arg0[arg1];
}

void func_02118594(s32 *arg0) {
    s32 i;
    for (i = 0; i < 3; i++) {
        arg0[i] = -1;
    }
}

void func_021185b0(s32 *arg0, s32 arg1, s32 arg2) {
    arg0[arg1] = arg2;
}

s32 func_021185b8(s32 *arg0, s32 arg1) {
    return arg0[arg1];
}

s32 func_021185c0(s32 *arg0, s32 arg1) {
    return arg0[arg1] != -1;
}

void func_021185d4(s32 *arg0) {
    s32 i;
    for (i = 0; i < 3; i++) {
        arg0[i + 2] = -1;
    }
}

void func_021185f4(u8 *arg0, s32 arg1, s32 arg2) {
    *(s32 *)(arg0 + 8 + arg1 * 4) = arg2;
}

s32 func_02118600(u8 *arg0, s32 arg1) {
    return *(s32 *)(arg0 + 8 + arg1 * 4);
}

s32 func_0211860c(u8 *arg0, s32 arg1) {
    return *(s32 *)(arg0 + arg1 * 4 + 8) != -1;
}

extern void func_02006dc4(void *, u32);
extern void func_0200439c(void);
extern void func_020043f8(void *, u32, u32);
extern void func_02004544(void);
extern void func_02003830(void *, u32, u32);
extern void func_02003894(void *, u32, u32);
