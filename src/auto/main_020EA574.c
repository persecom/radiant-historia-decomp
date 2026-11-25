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

BOOL func_020ea574(u8 *arg0, s32 arg1, s32 arg2)
{
    u8 *obj = *(u8 **)arg0;
    u8 *table = *(u8 **)(obj + 0x58);
    BOOL invalid;

    if (**(u16 **)(table + 0xc) <= (u32)arg1) {
        return FALSE;
    }

    invalid = (func_021086d4(obj, arg1) == 0);

    if (invalid != FALSE) {
        return FALSE;
    }

    func_02108680(*(u8 **)arg0, arg1, arg2);

    return TRUE;
}

s32 func_020ea5d4(u8 *arg0, s32 arg1) {
    u8 *r2 = *(u8 **)arg0;
    u8 *r3 = *(u8 **)(arg0 + 0xc);
    if (*(u16 *)(*(u8 **)(*(u8 **)(r2 + 0x58) + 0xc)) <= arg1 * 2) {
        return 0;
    }
    switch (r3[arg1 * 4]) {
    case 0:
        return 0;
    case 1:
        return func_020ea574(arg0, *(u16 *)(r3 + arg1 * 4 + 2), 1);
    case 3:
        return func_020ea574(arg0, *(u16 *)(r3 + arg1 * 4 + 2), 1);
    default:
        return 0;
    }
}

extern void func_0211a4c0(void *, s32, s32);
extern void func_0211ad90(void (*)(void));
extern void func_0211a4d4(void *, void *, void *);
extern void func_02119da4(void *);
extern void func_02119f1c(void);
extern void func_0211a178(s32, s32, s32);
extern void func_0211a3ac(s32, s32);
extern void func_0211a26c(s32, s32, s32);
extern void func_02119eb8(void *);
extern void func_0211a128(void);
extern void func_02119e4c(void);
extern void func_0211ada0(void);
extern void func_02117be0(void *, s32);
extern void *func_021176b0(void *, u32);
extern void func_02118eec(void *, s32);
extern void func_02118ed0(void *, s32, s32);
extern void func_02118eb4(void *, s32);
extern void func_02118e94(void *, s16, s16);
extern void func_02107aec(void);
extern u8 data_021612c8[];
extern u32 data_02162860;
extern s16 data_0213a394[];
extern s32 data_02162834[];
#pragma push
#pragma opt_propagation off
void func_020ea64c(void)
{
  u8 *g;
  u8 *node;
  u8 *obj;
  u8 *bank;
  u8 *seq;
  u8 *v;
  s32 scale;
  s32 vis;
  s32 sx;
  u8 *new_var2;
  s32 sy;
  s32 flip = 0;
  s32 idx;
  unsigned char new_var;
  struct
  {
    u8 b0 : 1;
    u8 b1 : 1;
  } *bf;
  u32 cull = 2;
  *((volatile u32 *) 0x040004a4) = (cull << 6) | 0x1f0000;
  *((volatile u32 *) 0x04000480) = 0x7fff;
  func_0211a4c0(data_021612c8, 0, 0);
  if (data_02162860 == 0)
  {
    g = data_02160a80;
    if ((*((s32 *) (g + 0x54))) != 0)
    {
      return;
    }
  }
  else
  {
    g = data_02160a80;
    if ((*((s32 *) (g + 0x54))) == 0)
    {
      return;
    }
  }
  node = *((u8 **) (g + 0x3c));
  while (node != NULL)
  {
    u32 flag1 = (*((u32 *) (node + 0x18))) & 1;
    obj = *((u8 **) (node + 0));
    new_var2 = obj + 0x0;
    vis = 1;
    if (flag1 && (!((*((u32 *) (node + 0x18))) & 0x10)))
    {
      sx = (*((s32 *) (node + 0x1c))) >> 12;
      sy = (*((s32 *) (node + 0x20))) >> 12;
      if ((((sx < (-48)) || (sx > 0x130)) || (sy < (-24))) || (sy > 0xd8))
      {
        vis = 0;
      }
    }
    if (vis && flag1)
    {
      bf = (void *) (obj + 0x70);
      scale = *((s32 *) (node + 0x28));
      if (bf->b1)
      {
        s32 neg = -1;
        scale = scale * neg;
        flip = 1;
        func_0211ad90(func_02107aec);
      }
      bank = *((u8 **) (obj + 0x58));
      func_0211a4d4(data_021612c8, *((void **) (bank + 0x10)), *((void **) (bank + 0x14)));
      func_02119da4(data_021612c8);
      func_02119f1c();
      func_0211a178(*((s32 *) (node + 0x1c)), *((s32 *) (node + 0x20)), *((s32 *) (node + 0x24)));
      if ((*((u32 *) (node + 0x18))) & 4)
      {
        idx = ((*((u16 *) (obj + 0x5e))) >> 4) << 1;
        func_0211a3ac(data_0213a394[idx], data_0213a394[idx + 1]);
      }
      func_0211a26c(scale, *((s32 *) (node + 0x2c)), 0x1000);
      func_02119eb8(obj);
      func_0211a128();
      func_02119e4c();
      if (flip)
      {
        func_0211ada0();
      }
    }
    if ((*((s32 *) (node + 0x14))) == 0)
    {
      s32 step = (*((s32 *) (obj + 0x60))) << data_02162834[0];
      s32 changed = 0;
      *((s32 *) (node + 0x10)) = 0;
      if ((*((s32 *) (obj + 0xc))) != 0)
      {
        s32 delta = (s32) (((((s64) (*((s32 *) (obj + 0x14)))) * step) + 0x800) >> 12);
        if (delta < 0)
        {
          delta = -delta;
        }
        *((s32 *) (obj + 0x10)) += delta;
        v = obj + 0x1c;
        while (((*((s32 *) (obj + 0xc))) != 0) && ((*((s32 *) (obj + 0x10))) >= ((s32) ((*((u16 *) ((*((u8 **) new_var2)) + 4))) << 12))))
        {
          s32 ended;
          u8 *cur;
          u8 *base;
          u8 *end;
          changed = 1;
          *((s32 *) (obj + 0x10)) -= (s32) ((*((u16 *) ((*((u8 **) new_var2)) + 4))) << 12);
          *((u8 **) new_var2) += 8;
          cur = *((u8 **) new_var2);
          seq = *((u8 **) v);
          base = *((u8 **) (seq + 0xc));
          if ((((*((s32 *) (obj + 0x14))) > 0) ^ (*((s32 *) (obj + 0x8)))) != 0)
          {
            ended = (cur >= (base + ((*((u16 *) (seq + 0))) << 3))) ? (1) : (0);
          }
          else
          {
            ended = (cur <= ((base + ((*((u16 *) (seq + 2))) << 3)) - 8)) ? (1) : (0);
          }
          if (node != NULL)
          {
            *((s32 *) (node + 0x10)) = ended;
          }
          if (ended != 0)
          {
            s32 mode = *((s32 *) (obj + 0x18));
            if (mode == 0)
            {
              mode = *((s32 *) ((*((u8 **) v)) + 8));
            }
            if ((mode != 2) && (mode != 4))
            {
              *((s32 *) (obj + 0xc)) = 0;
            }
            else
            {
              seq = *((u8 **) (obj + (new_var = 0x1c)));
              *((u8 **) new_var2) = (*((u8 **) (seq + 0xc))) + ((*((u16 *) (seq + 2))) << 3);
              *((s32 *) (obj + 0x10)) = 0;
              func_02117be0(obj, 0);
            }
            seq = *((u8 **) v);
            cur = *((u8 **) new_var2);
            base = *((u8 **) (seq + 0xc));
            end = (base + ((*((u16 *) (seq + 0))) << 3)) - 8;
            if (cur > end)
            {
              *((u8 **) new_var2) = end;
            }
            else
              if (cur < base)
            {
              *((u8 **) new_var2) = base;
            }
          }
        }
      }
      if ((changed != 0) && ((*((u16 *) ((*((u8 **) new_var2)) + 4))) != 0))
      {
        v = *((u8 **) (*((u8 **) new_var2)));
        *((void **) (obj + 0x30)) = func_021176b0(*((void **) (obj + 0x34)), *((u16 *) v));
        idx = (*((s32 *) ((*((u8 **) (obj + 0x1c))) + 4))) & 0xff;
        func_02118eec((void *) (obj + 0x3c), 1);
        if (idx != 0)
        {
          if (idx == 2)
          {
            func_02118e94((void *) (obj + 0x3c), *((s16 *) (v + 4)), *((s16 *) (v + 6)));
          }
          else
          {
            func_02118ed0((void *) (obj + 0x3c), *((s32 *) (v + 4)), *((s32 *) (v + 8)));
            func_02118eb4((void *) (obj + 0x3c), *((u16 *) (v + 2)));
            func_02118e94((void *) (obj + 0x3c), *((s16 *) (v + 0xc)), *((s16 *) (v + 0xe)));
          }
        }
      }
    }
    node = *((u8 **) (node + 0x38));
  }
}
#pragma pop
extern u8 *data_02160a80;
void func_020eaa10(u32 arg0) {
    *(u32 *)(data_02160a80 + 0x54) = arg0;
}

void *func_020eaa24(s32 arg0, s32 arg1) {
    void *r5 = func_0210a4cc();
    if (r5 == NULL) {
        return NULL;
    }
    if (!func_020f1ffc(r5, arg0, 0, arg1)) {
        if (r5 != NULL) {
            func_0210c5dc(r5);
        }
        return NULL;
    }
    func_0210f3ac(func_0210eb98(&data_021518c0, arg0), r5, 0);
    *(s32 *)((u8 *)r5 + 0x30) = 1;
    return r5;
}

#pragma opt_propagation off
void func_020eaaa0(u32 arg0) {
 data_02160a90[0]=(u32)func_020eaae0;
 data_02160a90[1]=arg0;
 func_0210db70(&data_02160a90[2]);
}
#pragma opt_propagation on
s32 func_020eaacc(void) {
    return func_0210dba0(&data_02160a90);
}

void func_020ebc94(void *,u16,s32);
#pragma opt_propagation off
