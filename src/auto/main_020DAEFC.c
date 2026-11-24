/* 13 functions from 0x020DAA60 to 0x020DB864 (main), found by ds-decomp. */
#include "common.h"

extern void func_020321cc(s32);
extern void func_020951b4(void);
extern s32 func_020deaf0(void *, s32, s32);
extern s32 func_0202e548(u8);
extern void func_02030878(void *, void *, s32, s32, s32, s32);
extern void func_020db35c(void *, s32);
extern void func_020de0a8(void *);
extern u8 *data_02160a6c;

extern u32 data_0216263c[3];
extern u8 *data_02160244;
extern void func_0205b710(void *, s32);
extern void *func_02022558(void *, s32);
extern s32 func_020da4f0(void *, s32);
extern s32 func_020d3160(s32, s32, s32, s32);
extern void func_0206e7a0(u8, void *, void *, u16);
extern void func_0210d27c(s32);
extern void func_020bfd78(s32, s32, u32, s32, s32, void *, u16, s32);
extern void func_0206e990(s32, u16);

extern void func_020da574(void *, void *, void *, void *, s32);
extern void func_02025f84(void *, s32);
extern void func_020daa60(void *, void *, void *, void *, u8);
extern void func_02023148(void *, void *, void *, s32);
extern void func_020da8c0(void *, s32);
typedef struct {
    u8 *p;
    s32 mode;
} DaefcArgs;
void func_020daefc(void *arg0, void *arg1, u8 *arg2, s32 arg3, u8 *arg4, s32 arg5, s32 arg6)
{
  u8 flags;
  u8 *p = arg4;
  s32 mode = arg6;
  if (arg2 == NULL)
  {
    return;
  }
  switch (arg2[7])
  {
    case 1:
    case 3:
      switch (*((s8 *) (arg2 + 0x1a)))
    {
      case 0:
      case 2:
        if ((*((u32 *) (p + 8))) == 0)
      {
        func_020da574(arg0, arg1, arg2, p, 0);
      }
        if (((*((u16 *) (p + 4))) & 0x10) == 0)
      {
        flags = 1;
      }
      else
      {
        flags = 2;
      }
        if (mode == 1)
      {
        flags = 1;
      }
      else
        if (mode == 2)
      {
        flags = 2;
      }
        if (mode == 3)
      {
        flags = 0x12;
      }
        if (mode == 4)
      {
        flags = 0x22;
      }
        if (mode != 3)
      {
        func_02025f84(arg1, 0x89);
        func_0205b710(arg0, 0x9f);
      }
        func_020daa60(arg0, arg1, arg2, p, (u8) (flags | 4));
        if ((mode != 3) && ((*((void **) (arg2 + 0x2c))) != NULL))
      {
        func_02023148(*((void **) (arg2 + 0x2c)), arg0, arg1, 0);
      }
        break;
        func_020da8c0(arg1, 9);

      case 1:
      case 3:
        if ((*((u32 *) (p + 8))) == 0)
      {
        func_020da574(arg0, arg1, arg2, p, 1);
      }
        if (((*((u16 *) (p + 4))) & 0x10) == 0)
      {
        flags = 1;
      }
      else
      {
        flags = 2;
      }
        if (mode == 1)
      {
        flags = 1;
      }
      else
        if (mode == 2)
      {
        flags = 2;
      }
        if (mode == 3)
      {
        flags = 0x12;
      }
        if (mode == 4)
      {
        flags = 0x22;
      }
        if (mode != 3)
      {
        func_02025f84(arg1, 0x89);
        func_0205b710(arg0, 0xa0);
      }
        func_020daa60(arg0, arg1, arg2, p, (u8) (flags | 8));
        if ((mode != 3) && ((*((void **) (arg2 + 0x2c))) != NULL))
      {
        func_02023148(*((void **) (arg2 + 0x2c)), arg0, arg1, 0);
      }
        func_020da8c0(arg1, 9);
        break;

    }
      if (arg2[0] == 5)
    {
      func_0205b710(arg0, 0xa1);
    }
      break;

    case 2:
    case 4:
    case 7:
      if (arg2[0] == 5)
    {
      func_0205b710(arg0, 0xa1);
    }
      if ((*((void **) (arg2 + 0x2c))) != NULL)
    {
      func_02023148(*((void **) (arg2 + 0x2c)), arg0, arg1, 0);
    }
      break;

    case 5:
      if (arg2[0] == 5)
    {
      func_0205b710(arg0, 0xa1);
    }
      if ((*((void **) (arg2 + 0x2c))) != NULL)
    {
      func_02023148(*((void **) (arg2 + 0x2c)), arg0, arg1, 0);
    }
      break;

    case 6:
    case 11:
      if (arg2[0] == 5)
    {
      func_0205b710(arg0, 0xa1);
    }
      if ((*((void **) (arg2 + 0x2c))) != NULL)
    {
      func_02023148(*((void **) (arg2 + 0x2c)), arg0, arg1, 0);
    }
      break;

    case 9:
      if (arg2[0] == 5)
    {
      func_0205b710(arg0, 0xa1);
    }
      if ((*((void **) (arg2 + 0x2c))) != NULL)
    {
      func_02023148(*((void **) (arg2 + 0x2c)), arg0, arg1, 0);
    }
      break;

    case 10:
      if ((*((void **) (arg2 + 0x2c))) != NULL)
    {
      func_02023148(*((void **) (arg2 + 0x2c)), arg0, arg1, 0);
    }
      break;

    case 0:
    case 8:
    default:
      break;

  }

}
