/* 10 functions from 0x020EA188 to 0x020EB180 (main), found by ds-decomp. */
#include "common.h"
typedef struct {s32 x,y,z;} Vec_EAAE0;
static inline u32 GetRenderId(const u8 *node) {return node[0x104];}
extern u8 *data_02160a80;

extern u32 data_02160a90[5];
extern u8 data_021518c0[8];
extern s32 func_0210dba0(void *);
extern s32 func_021086d4();
extern char data_02151784[],data_0215179c[],data_021517b4[],data_021517c8[],data_021517e4[],data_02151800[],data_0215181c[],data_0215183c[],data_02151860[],data_0215187c[],data_0215189c[];
extern u32 data_02155c3c;
extern void *func_0210957c(s32);
extern void func_0210950c(void *);
extern void func_02005e80(char *,const char *,...);
extern void *func_021092d8(char *);
extern s32 func_02092ab0(void *,s32);
extern s32 func_0210cd20(void *,s32);
extern void func_021091b4(void);
extern s32 func_02108620(void *,char *,char *,char *,s32);
extern void func_021093b0(void *);
extern u8 *func_02109f3c(void *);
extern s32 func_020020bc(u32,u32);
extern s32 func_02002080(u32,u32);
extern u8 *func_0210c594(u32,u32);
extern void func_02108680(void *, u32, s32);
extern void *func_0210a4cc(void);
extern s32 func_020f1ffc(void *, s32, s32, s32);
extern void func_0210c5dc(void *);
extern void *func_0210eb98(void *, s32);
extern void func_0210f3ac(void *, void *, s32);
extern s32 func_0210db70(void *);
extern void func_020eaae0(void);
extern s32 data_02170248[],data_02170204[];
extern void func_02001134(void *,void *);
extern void func_02002028(s32);
extern s64 func_02001fd0(void);
static inline void ProjectRenderPosition(const Vec_EAAE0 *pos,s32 *outX,s32 *outY){
const s32 *m=data_02170248,*p=data_02170204;
register s32 z,y;
s32 x,py,px,sy,sx;
s64 inv;
x=m[9]+(s32)(((s64)pos->x*m[0]+(s64)pos->y*m[3]+(s64)pos->z*m[6])>>12);
y=m[10]+(s32)(((s64)pos->x*m[1]+(s64)pos->y*m[4]+(s64)pos->z*m[7])>>12);
z=m[11]+(s32)(((s64)pos->x*m[2]+(s64)pos->y*m[5]+(s64)pos->z*m[8])>>12);
func_02002028(p[15]+(s32)(((s64)x*p[3]+(s64)y*p[7]+(s64)z*p[11])>>12));
px=p[12]+(s32)(((s64)x*p[0]+(s64)y*p[4]+(s64)z*p[8])>>12);
py=p[13]+(s32)(((s64)x*p[1]+(s64)y*p[5]+(s64)z*p[9])>>12);
inv=func_02001fd0();
sy=(s32)((inv*py+0x80000000LL)>>32);
sy=(sy+4096)>>1;
sy=((sy<<7)+(sy<<6)+2048)>>12;
sx=(s32)((inv*px+0x80000000LL)>>32);
sx=((((sx+4096)>>1)<<8)+2048)>>12;
sy=192-sy;
*outX=sx;*outY=sy;
}
extern s32 func_020ebddc(void *, s32);
extern void func_020dd810(void *, s32, s32);
extern u8 *data_02160a6c;
#pragma opt_loop_invariants off
s32 func_020ea188(u8 *arg0, s32 id, u8 type)
{
  char filename[40];
  char pathA[50];
  char pathB[50];
  char pathC[50];
  s32 cached;
  u16 *new_var;
  s32 zero = 0;
  void *file = 0;
  u8 *resource;
  int new_var2;
  if (type == 0)
  {
    func_02005e80(filename, data_02151784);
  }
  else
    if (((u8) (type + 255)) <= 1)
  {
    if (func_0210957c(0))
    {
      file = func_0210957c(0);
      func_0210950c(file);
      cached = 1;
    }
    else
    {
      func_02005e80(filename, data_0215179c);
    }
  }
  ((s32 *) (&data_02160a80))[1] = zero;
  ((s32 *) (&data_02160a80))[2] = zero;
  new_var2 = 0;
  ((s32 *) (&data_02160a80))[3] = zero;
  if (!cached)
  {
    file = func_021092d8(filename);
  }
  if (func_02092ab0(file, id) != (-1))
  {
    ((s32 *) (&data_02160a80))[1] = func_0210cd20(file, zero);
    ((s32 *) (&data_02160a80))[2] = func_0210cd20(file, zero);
    ((s32 *) (&data_02160a80))[3] = func_0210cd20(file, zero);
    func_021091b4();
  }
  if ((((s32 *) (&data_02160a80))[1] && ((s32 *) (&data_02160a80))[2]) && ((s32 *) (&data_02160a80))[3])
  {
    if (type == new_var2)
    {
      func_02005e80(pathA, data_021517b4, ((s32 *) (&data_02160a80))[1]);
      func_02005e80(pathB, data_021517c8, ((s32 *) (&data_02160a80))[2]);
      func_02005e80(pathC, data_021517e4, ((s32 *) (&data_02160a80))[3]);
    }
    else
      if (type == 1)
    {
      func_02005e80(pathA, data_02151800, ((s32 *) (&data_02160a80))[1]);
      func_02005e80(pathB, data_0215181c, ((s32 *) (&data_02160a80))[2]);
      func_02005e80(pathC, data_0215183c, ((s32 *) (&data_02160a80))[3]);
    }
    else
      if (type == 2)
    {
      func_02005e80(pathA, data_02151860, ((s32 *) (&data_02160a80))[1]);
      func_02005e80(pathB, data_0215187c, ((s32 *) (&data_02160a80))[2]);
      func_02005e80(pathC, data_0215189c, ((s32 *) (&data_02160a80))[3]);
    }
    if (!func_02108620(*((void **) arg0), pathA, pathB, pathC, zero))
    {
      return zero;
    }
  }
  if ((!cached) && file)
  {
    func_021093b0(file);
  }
  resource = func_02109f3c(*((void **) ((*((u8 **) ((*((u8 **) arg0)) + 0x58))) + 8)));
  if (!(*((u8 **) (resource + 0x10))))
  {
    if (type <= 1)
    {
      s32 i;
      s32 *pi = &i;
      u8 *allocation;
      s32 count;
      s32 j;
      s32 index;
      s32 total = *((u16 *) (*((u8 **) ((*((u8 **) ((*((u8 **) arg0)) + 0x58))) + 0xc))));
      s32 extra = func_020020bc(total, 2) != new_var2;
      count = (u16) (extra + func_02002080(total, 2));
      allocation = func_0210c594(count * 4, data_02155c3c);
      u8 *p = allocation;
      s32 yes = 1;
      s32 no = new_var2;
      s32 bit = 1;
      for (*pi = new_var2; (*pi) < count; (*pi)++)
      {
        ;
        *((u16 *) (p + 2)) = (*pi) * 2;
        p[new_var2] = new_var2;
        for (j = new_var2; j < 2; j++, index++)
        {
          if (total <= index)
          {
            break;
          }
          {
            s32 absent = (func_021086d4(*((void **) arg0), (u16) index) == new_var2) ? (yes) : (no);
            if (!absent)
            {
              p[new_var2] |= (u8) (bit << j);
            }
            cached = new_var2;
          }
        }

        p += 4;
      }

      *((u8 **) (resource + 0x10)) = allocation;
    }
    else
      if (type == 2)
    {
      s32 total = *((u16 *) (*((u8 **) ((*((u8 **) ((*((u8 **) arg0)) + 0x58))) + 0xc))));
      s32 extra = func_020020bc(total, 4) != new_var2;
      s32 count = (u16) (extra + func_02002080(total, 4));
      u8 *allocation = func_0210c594(count * 4, data_02155c3c);
      u8 *p = allocation;
      s32 i;
      for (i = new_var2; i < count; i++)
      {
        new_var = (u16 *) (p + 2);
        *new_var = i;
        p[new_var2] |= 1;
        p += 4;
      }

      *((u8 **) (resource + 0x10)) = allocation;
    }
  }
  *((u8 **) (arg0 + 0xc)) = *((u8 **) (resource + 0x10));
  return 1;
}
#pragma opt_loop_invariants on
