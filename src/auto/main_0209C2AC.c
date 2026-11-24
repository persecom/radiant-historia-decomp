/* 16 functions from 0x0209C2AC to 0x0209D0F0 (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u16 unk[10];
} Unk20;

extern Unk20 data_02142bb4;
extern u8 *data_02160204;
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern u8 *func_0209ac14(void);
extern s32 func_020bd490(s32, u8);
extern u8 *func_02021f10(s32);
extern void func_02022100(void *);
extern void func_0203bc34(u32, void *, u32, u32, u32, u32);
extern void func_020a899c(void *);
extern void func_020a30c4(u32);
extern void func_021098ac(void *);

extern u8 *data_02160120;
extern u32 func_021136b0(void);
extern void func_0209c94c(void *);
typedef struct {
    u8 pad[0x3c];
    u32 flag;
} S_0209c920;

void *func_0209c888(u32 arg0, u32 arg1) {
    u8 *node = *(u8 **)(data_02160120 + 0x708);
    if (node != NULL) {
        do {
            if (arg0 == 0 && *(u16 *)(node + 2) == arg1) return node;
            if (arg0 == 1 && *(u16 *)(node + 0) == arg1) return node;
            node = *(u8 **)(node + 0xc);
        } while (node != NULL);
    }
    return NULL;
}

void *func_0209c8dc(u32 arg0) {
    u8 *node = *(u8 **)(data_02160120 + 0x708);
    u8 i = 0;
    if (node != NULL) {
        do {
            if (i == arg0) return node;
            node = *(u8 **)(node + 0xc);
            i++;
        } while (node != NULL);
    }
    return NULL;
}

unsigned int func_0209c920(u8 *arg0)
{
  u8 *new_var;
  new_var = arg0 + 0x3c;
  if ((*((u32 *) new_var)) == 0)
  {
    return;
  }
  do
  {
    if (1)
    {
    }
    func_0209c94c(arg0);
  }
  while ((*((u32 *) new_var)) != 0);
}

void func_0209c970(void) {
    u8 *r9 = func_0209ac14();
    while (r9 != NULL) {
        u8 *r10;
        if (func_020bd490(2, *r9) != 0) {
            r10 = func_02021f10(func_020bd490(1, *r9) - 1);
        } else {
            r10 = func_02021f10(func_020bd490(3, *r9));
        }
        if (r10 != NULL) {
            *(u32 *)(r10 + 4) = *(u32 *)(r9 + 4);
            *(u32 *)(r10 + 8) = 0;
            if (func_020bd490(4, *r9) == 0) {
                r10[0x44] = 1;
            } else {
                r10[0x44] = 0;
            }
        }
        r9 = *(u8 **)(r9 + 0x38);
    }
    func_02022100(*(void **)(data_02160204 + 0x108));
}

void func_0209ca18(u8 *arg0, u32 arg1, u32 arg2, s16 arg3, s16 arg4, s16 arg5) {
    s32 x, y, z;
    (*(void (**)(u8 *))(arg0 + 4))(arg0);
    func_0203bc34(arg1, arg0, arg2, 0, 0, 0);
    func_020a899c(arg0);
    x = arg3 << 12;
    y = arg4 << 12;
    z = arg5 << 12;
    *(s32 *)(arg0 + 0x44) = x;
    *(s32 *)(arg0 + 0x48) = y;
    *(s32 *)(arg0 + 0x4c) = z;
}

void func_0209ca84(u32 arg0, u16 arg1, u16 arg2, u16 arg3) {
    Unk20 buf = data_02142bb4;
    *(volatile u32 *)0x040004a4 = 0x001f0080;
    func_020a30c4(arg0);
    buf.unk[1] = 0;
    buf.unk[2] = 0;
    buf.unk[3] = 0x10;
    buf.unk[4] = 0x10;
    buf.unk[8] = 0x10;
    buf.unk[9] = 0x10;
    buf.unk[5] = arg1;
    buf.unk[6] = arg2;
    buf.unk[7] = arg3;
    func_021098ac(&buf);
}

u32 func_0209cb98(void) {
    u32 v = func_021136b0();
    if ((v & 2) == 0) return 0;
    return v;
}
