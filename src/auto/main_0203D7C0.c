/* 9 functions from 0x0203C998 to 0x0203D970 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160098[2];
extern u32 data_02155c3c;

extern void *func_0210c594(u32, u32);
extern void func_021167ac(void *, s32);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern void func_020020f8(void *, void *, void *);
extern void func_020f4668(void *);

extern u8 *data_02160a74;
extern u8 *data_02160110;
extern u8 *data_02160258;
extern BOOL func_020df03c(s32);
extern void func_020a5ce4(void *);
extern void func_020df38c(s32, s32);
extern void func_020de078(void);
extern void func_020df3f4(s32, s32);
extern void func_020e25fc(s32, s32, s32);
extern void func_020e26f0(s32, s32, s32);
extern void func_020d91bc(s32);
extern void func_020da0c8(s32);
extern void func_020e86c0(s32);
extern void func_020df0c0(void);

void func_0203d7c0(void) {
    u8 **p = data_02160098;
    if (p[1] != NULL) {
        return;
    }
    p[1] = func_0210c594(0x70, data_02155c3c);
    func_021167ac(p[1] + 0x64, 4);
}

void func_0203d800(void) {
    while (*(void **)(data_02160098[1] + 0x64) != NULL) {
        void *node = *(void **)(data_02160098[1] + 0x64);
        func_021168f8(data_02160098[1] + 0x64, node);
        if (node != NULL) {
            func_0210c5dc(node);
        }
    }
    if (data_02160098[1] != NULL) {
        func_0210c5dc(data_02160098[1]);
        data_02160098[1] = NULL;
    }
}

void func_0203d864(u32 *arg0) {
    u32 *dst = (u32 *)data_02160098[1];
    u32 a = *(volatile u32 *)&arg0[0];
    u32 b = *(volatile u32 *)&arg0[1];
    u32 c;
    *(volatile u32 *)&dst[0] = a;
    c = *(volatile u32 *)&arg0[2];
    *(volatile u32 *)&dst[1] = b;
    *(volatile u32 *)&dst[2] = c;
    func_020020f8(data_02160098[1], data_02160098[1] + 0xc, data_02160098[1]);
    func_020f4668(data_02160098[1]);
}

extern u16 data_02151fc8;
extern void func_02052328(void);
typedef struct Position_0203d8a8 { u32 x, y, z; } Position_0203d8a8;
static inline Position_0203d8a8 MakePosition_0203d8a8(u32 *src) {
 Position_0203d8a8 v;
 v.x=src[0]; v.y=0; v.z=src[2]; return v;
}
#pragma scheduling off
void func_0203d8a8(u32 *arg0)
{
  u16 val = *((u16 *) ((void *) data_02160098));
  u8 *node;
  if (val == 0)
  {
    goto do_call;
  }
  node = *((u8 **) (data_02160098[1] + 0x64));
  if (node == NULL)
  {
    goto found;
  }
  do
  {
    if ((*((u16 *) (node + 2))) == val)
    {
      goto found;
    }
    node = *((u8 **) (node + 8));
  }
  while (node != NULL);
  found:
  data_02151fc8 = *((u16 *) node);

  do_call:
  func_02052328();

  {
    u32 x;
    u32 value;
    u32 *p;
    u32 args[3];
    u32 zero = 0;
    value = 0xa000;
    ;
    ((u32 *) ((u8 * volatile *) data_02160098)[1])[6] = value;
    p = (p = (u32 *) ((u8 * volatile *) data_02160098)[1]);
    value = 0x20000;
    p[3] = zero;
    p = (u32 *) ((u8 * volatile *) data_02160098)[1];
    p[4] = value;
    x = arg0[0];
    p = (u32 *) ((u8 * volatile *) data_02160098)[1];
    p[5] = zero;
    value = arg0[2];
    p = args;
    p[0] = x;
    p[1] = zero;
    p[2] = value;
    func_0203d864(p);
    *((u16 *) (((u8 * volatile *) data_02160098)[1] + 0x60)) = zero;
  }
}
#pragma scheduling reset
s32 func_0203d960(s32 arg0) {
    return arg0 == 1;
}
