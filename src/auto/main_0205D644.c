/* 5 functions from 0x0205D644 to 0x0205DF48 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160244;
extern u8 *func_0205bad4(u8 *);
extern void func_020d3fe8(u8 *,u8 *,u8 *);
extern u32 func_020d3160(s32,u8,void *,u8);
extern void func_02030468(void *,s32);
extern void func_0210d27c();
void func_02031498(void);
u8 *func_02023108(u32);
u8 *func_02022558(void *,int);
void func_020d4e54(void *,void *,int);
void func_020d6048(int);
void func_020d9da8(int);
void func_020d9ea8(int,int);
extern void func_0206e7a0(s32,void *,void *,s32);
extern void func_020d9e1c(u8 *);
extern void func_020daefc(u8 *,u8 *,u8 *,s32,u8 *,s32,s32);
extern void func_02060110(u8 *,u8 *,u8 *,s32,u8 *);


extern u8 *data_02160a6c;
extern u32 func_0205bcb0(u8 *, u16);
extern void func_020d56d8(u8 *, s32, s32, s32);
extern void func_020d5fd0(u8 *);
extern void func_020d4eb8(u8 *);
extern s32 func_02032c14(u8 *, u8 *);
extern void func_020de0a8(u8 *);
extern void func_020db35c(u8 *, s32);
#pragma scheduling off
void func_0205d644(u8 *self, char mode, char force)
{
  u8 *obj;
  u8 *p = *((u8 **) (self + 0x128));
  u8 *node;
  u8 *info;
  u8 *arg;
  u32 res;
  unsigned int count;
  int run = 0;
  u32 *new_var;
  int one = 1;
  if (mode == 0)
  {
    res = func_0205bcb0(self, (u16) (*((u32 *) (p + 0x34))));
    if (res & 1)
    {
      run = one;
    }
  }
  else
    if (mode == 1)
  {
    run = one;
  }
  if (force)
  {
    *((s16 *) (p + 0x1c)) = 0;
  }
  if (run && ((*((s16 *) (p + 0x1c))) == 0))
  {
    *((s16 *) (p + 0x1c)) = one;
    data_02160244[0x16c] = 0;
    if (!(*((u32 *) (p + 0x30))))
    {
      func_02031498();
    }
    node = func_0205bad4(p);
    info = *((u8 **) (p + 8));
    arg = *((u8 **) (p + 12));
    func_020d3fe8(self, node, info);
    func_020d3160(1, (u8) (*((s16 *) (info + 0x16))), arg, (u8) (*((u16 *) (self + 0x90))));
    if (((u16) func_020d3160(8, 0, 0, 0)) >= 2)
    {
      func_02030468(*((void **) (self + 0x118)), 5);
    }
    count = 0;
    while (node)
    {
      int counter = 0;
      obj = *((u8 **) node);
      func_020d9e1c(obj);
      if (!(*((u32 *) (p + 0x30))))
      {
        *((u16 *) (node + 4)) |= 16;
      }
      func_020daefc(self, obj, info, counter, node, counter, force);
      *((u32 *) (obj + 0x80)) |= 128;
      if (*((s16 *) (p + 0x90)))
      {
        func_0210d27c(*((s16 *) (p + 0x90)));
        *((s16 *) (p + 0x90)) = 0;
      }
      if (mode == 0)
      {
        if (data_02160244[0x14d] == 1)
        {
          if (count == 0)
          {
            func_020d56d8(self, (s32) obj, 0, 1);
            func_020d56d8(self, (s32) obj, 0, 2);
          }
        }
        else
        {
          func_020d56d8(self, (s32) obj, 0, 1);
          func_020d56d8(self, (s32) obj, 0, 2);
        }
      }
      skip:
      if (!(*((u32 *) (p + 0x30))))
      {
        counter = 0;
        if (((((!((*((u16 *) (p + 0x1e))) & 8)) && ((*((u16 *) (node + 0x10))) == 0)) && ((*((s8 *) (info + 0x1a))) == 0)) && (!((*((u32 *) ((*((u8 **) (obj + 0x128))) + 0x18))) & 8))) && ((*((s32 *) ((*((u8 **) (obj + 0x118))) + 4))) >= 1))
        {
          u8 *stat = *((u8 **) (obj + 0x118));
          int amount;
          u8 *skill = 0;
          amount = 1;
          u32 flags = *((u32 *) (stat + 0x8c));
          if (flags & 0x20)
          {
            skill = func_02022558(*((void **) (stat + 0x60)), 166);
            counter = 1;
          }
          else
            if (flags & 0x200)
          {
            skill = func_02022558(*((void **) (stat + 0x60)), 170);
            counter = 1;
          }
          else
            if (flags & 0x40)
          {
            u8 *test = func_02023108(*((u32 *) (info + 0x2c)));
            if (test && ((*((u16 *) test)) == 211))
            {
              skill = func_02022558(*((void **) ((*((u8 **) (obj + 0x118))) + 0x60)), 167);
              counter = 1;
            }
          }
          else
            if (flags & 0x80)
          {
            u8 *test = func_02023108(*((u32 *) (info + 0x2c)));
            if (test && ((*((u16 *) test)) == 212))
            {
              skill = func_02022558(*((void **) ((*((u8 **) (obj + 0x118))) + 0x60)), 168);
              counter = 1;
            }
          }
          else
            if (flags & 0x100)
          {
            u8 *test = func_02023108(*((u32 *) (info + 0x2c)));
            if (test && ((*((u16 *) test)) == 213))
            {
              skill = func_02022558(*((void **) ((*((u8 **) (obj + 0x118))) + 0x60)), 169);
              counter = 1;
            }
          }
          if (counter)
          {
            u8 *q;
            if (skill)
            {
              amount = (*((s16 *) (skill + 4))) + ((*((s32 *) (node + 8))) * ((*((s16 *) (skill + 6))) / 100));
            }
            q = *((u8 **) (data_02160a6c + 0xb8));
            while (q)
            {
              if ((q && (*((void **) (q + 0x118)))) && ((*((s32 *) (q + 0x1c0))) == 1))
              {
                break;
              }
              q = *((u8 **) (q + 0x174));
            }

            if (!q)
            {
              if (!((*((u16 *) (p + 0x1e))) & 8))
              {
                func_020d4e54(obj, self, amount);
                ++(*((s8 *) (p + 0xac)));
                *((u16 *) (p + 0x1e)) |= 8;
              }
            }
            else
              if (q == obj)
            {
              if (!((*((u16 *) (p + 0x1e))) & 8))
              {
                func_020d4e54(obj, self, amount);
                ++(*((s8 *) (p + 0xac)));
                *((u16 *) (p + 0x1e)) |= 8;
              }
            }
            else
            {
              counter = 0;
            }
          }
        }
        if ((obj && (counter == 0)) && ((*(*((u8 **) (obj + 0x118)))) == 1))
        {
          if ((*((s8 *) (info + 0x1a))) == 1)
          {
            func_02060110(obj, info, node, 1, p);
          }
          else
          {
            func_02060110(obj, info, node, 0, p);
          }
        }
      }

      count = (u16)(count + 1);
      node = *((u8 **) (node + 24));
    }

    new_var = (u32 *) (p + 0x30);
    if (mode == 0)
    {
      func_020d5fd0(self);
    }
    if (!(*new_var))
    {
      if ((*((u16 *) (arg + 0xe))) & 4)
      {
        *((u16 *) (p + 0x1e)) |= 0x20;
      }
      if (count)
      {
        func_02030468(*((void **) (self + 0x118)), 1);
      }
      *((u16 *) (p + 0x1e)) |= 0x40;
    }
    if (!(*new_var))
    {
      if (data_02160244[0x16c] & 1)
      {
        func_020d6048(70);
        data_02160244[0x16c] = 0;
        data_02160244[0x16d] = one;
      }
      else
        if (data_02160244[0x16c] & 2)
      {
        func_020d6048(72);
        data_02160244[0x16c] = 0;
        data_02160244[0x16d] = one;
      }
      else
        if (data_02160244[0x16c] & 4)
      {
        func_020d6048(71);
        data_02160244[0x16c] = 0;
        data_02160244[0x16d] = one;
      }
    }
    func_020d9da8(32);
    func_020d9ea8(8, 0);
  }
  data_02160244[0x14d] = 0;
  if ((mode == 0) && (res & 2))
  {
    func_020d4eb8(self);
  }
}
#pragma scheduling reset
void func_0205db90(u8 *self,u8 *target,u16 mode,u16 kind) {
u8 effect[24];
s32 pos[3];
u8 *obj;
u8 *p=*(u8 **)(self+0x128);
u8 *node,*info;
void *arg;
u16 count;
*(s16 *)(p+0x1c)=1;
node=func_0205bad4(p);
info=*(u8 **)(p+8);
arg=*(void **)(p+12);
func_020d3fe8(self,node,info);
func_020d3160(1,(u8)*(s16 *)(info+0x16),arg,(u8)*(u16 *)(self+0x90));
if((u16)func_020d3160(8,0,0,0)>=2)func_02030468(*(void **)(self+0x118),5);
count=0;
while(node) {
obj=*(u8 **)node;
if(!*(u32 *)(p+0x30))*(u16 *)(node+4)|=16;
if(*(s16 *)(p+0x90) && count==0) {
func_0210d27c();*(s16 *)(p+0x90)=0;
}
if(obj==target && mode==3 && (kind==0 || kind==8)) {
effect[12]=2;
*(u16 *)(effect+14)=0;effect[16]=0;effect[20]=0;
*(s32 *)(effect)=0;*(s32 *)(effect+4)=0;*(s32 *)(effect+8)=0;
pos[0]=*(s32 *)target+*(s32 *)(p+0x98);
pos[1]=*(s32 *)(target+4)+*(s32 *)(p+0x9c);
pos[2]=*(s32 *)(target+8)+*(s32 *)(p+0xa0);
func_0206e7a0(1,pos,effect,0);
}
if(mode==2) {
func_020d9e1c(obj);
func_020daefc(self,obj,info,0,node,0,mode);
*(u32 *)(obj+0x80)|=128;
} else if(mode==3) {
func_020daefc(self,obj,info,0,node,0,mode);
} else if(mode==4) {
func_020daefc(self,obj,info,0,node,0,mode);
if(**(u8 **)(obj+0x118)==1)func_02060110(obj,info,node,1,p);
*(s16 *)(obj+0x1c6)=0;
}
count++;
node=*(u8 **)(node+24);
}
if(!*(u32 *)(p+0x30) && count)func_02030468(*(void **)(self+0x118),1);
data_02160244[0x14d]=0;
}

void func_0205de08(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 0x128);
    u32 res = func_0205bcb0(arg0, (u16)*(u32 *)(p + 0x34));
    if ((res & 1) && *(s16 *)(p + 0x1c) == 0) {
        *(s16 *)(p + 0x1c) = 1;
        func_020d56d8(arg0, 0, 0, 1);
        func_020d5fd0(arg0);
    }
    if (res & 2) {
        func_020d4eb8(arg0);
    }
}

s16 func_0205de70(void) {
    s16 count = 0;
    u8 *node = *(u8 **)(data_02160a6c + 0xb8);
    while (node != NULL) {
        if (*(u32 *)(*(u8 **)(node + 0x118) + 0x70) != 0) {
            count++;
        }
        node = *(u8 **)(node + 0x174);
    }
    return count;
}

void func_0205deb4(u8 *arg0) {
    u8 *node;
    if (func_0205de70() < 2) {
        return;
    }
    node = *(u8 **)(data_02160a6c + 0xb8);
    while (node != NULL) {
        if (*(u32 *)(*(u8 **)(node + 0x118) + 0x70) != 0 && func_02032c14(arg0, node) != 0) {
            if (*(s32 *)(*(u8 **)(node + 0x118) + 4) <= 0) {
                func_020db35c(node, 0);
            } else {
                func_020de0a8(node);
            }
        }
        if (func_0205de70() <= 1) {
            return;
        }
        node = *(u8 **)(node + 0x174);
    }
}

