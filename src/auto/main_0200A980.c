/* 20 functions from 0x0200A980 to 0x0200B8FC (main), found by ds-decomp. */
#include "common.h"
typedef struct CmdPair_0200a980 { u32 a,b; } CmdPair_0200a980;
typedef struct CmdTriple_0200a980 { u32 a,b,c; } CmdTriple_0200a980;
extern s32 func_0200a85c(s32);
extern s32 func_0200a928(void *, s32);

void func_0200b888(u32 *arg0);
u8 *func_0200b6b8(u8 *arg0);
extern s32 func_0200a980(void *, s32);
extern u32 func_02008128(void);
extern void func_02006560(void *);
extern void func_0200813c(u32);
extern void func_0200a884();
extern s32 func_0200ad00(void *, s32);
extern void func_0200aeac();
extern void func_02008f74(void *, s32, s32);
extern s32 func_020124a8(s32, u8 *, s8 *);
extern u8 *data_0215ed68;
extern char data_02145c00[];
s32 func_0200b810(const char *str, s32 pos);
s32 func_0200b844(char *str);
extern s8 data_0215ed78[0x100];
extern s32 func_02012348(const char *);
s32 func_0200b77c(const char *str, s32 pos);

s32 func_0200a980(void *arg0,s32 op){
u8 *p=arg0,*arc=*(u8 **)(p+8);
void **table=*(void ***)(arc+0x24);
s32 ret;
if((u32)op>=35){ret=4;goto finish;}
if(table[op]==0){ret=4;goto finish;}
{
switch(op){
case 0:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,void *,u32,void *))table[0])(arc,p,*(u32 *)args,args+4);break;}
case 1:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,void *,u32,void *))table[1])(arc,p,*(u32 *)args,args+4);break;}
case 2:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,void *,u32,u32))table[2])(arc,p,*(u32 *)args,*(u32 *)(args+4));break;}
case 3:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,void *,u32))table[3])(arc,p,*(u32 *)args);break;}
case 4:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,u32,u32,void *,u32))table[4])(arc,*(u32 *)args,*(u32 *)(args+4),args+8,*(u32 *)(args+12));break;}
case 5:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,void *,u32,u32,void *))table[5])(arc,p,*(u32 *)args,*(u32 *)(args+4),args+8);break;}
case 6:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,void *,u32,u32))table[6])(arc,p,*(u32 *)args,*(u32 *)(args+4));break;}
case 7:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,void *,u32,u32,void *))table[7])(arc,p,*(u32 *)(args+4),*(u32 *)(args+8),args);break;}
case 8:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,void *))table[8])(arc,p);break;}
case 9:{u8 *args=*(u8 **)(p+0x10);((void (*)(void *))table[9])(arc);return 0;}
case 10:{u8 *args=*(u8 **)(p+0x10);((void (*)(void *))table[10])(arc);return 0;}
case 11:{u8 *args=*(u8 **)(p+0x10);((void (*)(void *))table[11])(arc);return 0;}
case 12:{u8 *args=*(u8 **)(p+0x10);((void (*)(void *))table[12])(arc);return 0;}
case 13:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,void *,u32,u32,u32))table[13])(arc,p,*(u32 *)args,*(u32 *)(args+4),*(u32 *)(args+8));break;}
case 14:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,void *,void *,u32))table[14])(arc,p,args,*(u32 *)(args+4));break;}
case 15:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,void *,void *))table[15])(arc,p,args);break;}
case 16:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,void *,void *))table[16])(arc,p,args);break;}
case 17:{u8 *args=*(u8 **)(p+0x10);((void (*)(void *))table[17])(arc);return 0;}
case 18:{u8 *args=*(u8 **)(p+0x10);((void (*)(void *))table[18])(arc);return 0;}
case 19:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,void *))table[19])(arc,args);break;}
case 20:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,u32,u32,u32))table[20])(arc,*(u32 *)args,*(u32 *)(args+4),*(u32 *)(args+8));break;}
case 21:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,u32,u32))table[21])(arc,*(u32 *)args,*(u32 *)(args+4));break;}
case 22:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,u32,u32,u32,u32))table[22])(arc,*(u32 *)args,*(u32 *)(args+4),*(u32 *)(args+8),*(u32 *)(args+12));break;}
case 23:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,u32,u32,u32))table[23])(arc,*(u32 *)args,*(u32 *)(args+4),*(u32 *)(args+8));break;}
case 24:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,u32,u32,u32))table[24])(arc,*(u32 *)args,*(u32 *)(args+4),*(u32 *)(args+8));break;}
case 25:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,u32,u32,u32))table[25])(arc,*(u32 *)args,*(u32 *)(args+4),*(u32 *)(args+8));break;}
case 26:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,u32,u32))table[26])(arc,*(u32 *)args,*(u32 *)(args+4));break;}
case 27:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,u32,u32,u32,u32))table[27])(arc,*(u32 *)args,*(u32 *)(args+4),*(u32 *)(args+8),*(u32 *)(args+12));break;}
case 28:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,u32))table[28])(arc,*(u32 *)args);break;}
case 30:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,void *))table[30])(arc,p);break;}
case 31:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,void *,u32))table[31])(arc,p,*(u32 *)args);break;}
case 32:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,void *,u32,u32,u32))table[32])(arc,p,*(u32 *)args,*(u32 *)(args+4),*(u32 *)(args+8));break;}
case 33:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,void *))table[33])(arc,p);break;}
case 34:{u8 *args=*(u8 **)(p+0x10);ret=((s32 (*)(void *,void *,u32,u32))table[34])(arc,p,*(u32 *)args,*(u32 *)(args+4));break;}
default:ret=4;break;
}}
finish:
if(func_0200a85c(op)==0){
if(*(u32 *)(p+0xc)&4)ret=func_0200a928(p,ret);
else if(ret!=0x100)func_0200a884(p,ret);
}
return ret;
}

s32 func_0200ad00(void *arg0, s32 arg1) {
    u8 *arc = arg0;
    u8 *ret = NULL;
    u32 irq;

    irq = func_02008128();
    if (*(u32 *)(arc + 0x14) & 0x20) {
        u8 *cur;
        *(u32 *)(arc + 0x14) &= ~0x20;
        cur = *(u8 **)(arc + 8);
        while (cur != NULL) {
            u8 *next = *(u8 **)cur;
            s32 flag = (*(volatile u32 *)(cur + 0xc) & 2) ? 1 : 0;
            if (flag && !(*(volatile u32 *)(cur + 0xc) & 0x40)) {
                func_0200a884(cur, 3);
                if (next == NULL) {
                    next = *(u8 **)(arc + 8);
                }
            }
            cur = next;
        }
    }
    func_0200813c(irq);

    irq = func_02008128();
    if (!(*(u32 *)(arc + 0x14) & 0x40) && !(*(u32 *)(arc + 0x14) & 8) && *(u8 **)(arc + 8) != NULL) {
        s32 do_activate = (arg1 != 0 && !(*(u32 *)(arc + 0x14) & 0x10));
        if (do_activate) {
            *(u32 *)(arc + 0x14) |= 0x10;
        }
        func_0200813c(irq);
        if (do_activate) {
            func_0200a980(*(u8 **)(arc + 8), 9);
        }
        irq = func_02008128();
        if (arg1 != 0 || do_activate != 0) {
            ret = *(u8 **)(arc + 8);
            *(u32 *)(ret + 0xc) |= 0x40;
        }
        if (arg1 != 0 && (*(volatile u32 *)(ret + 0xc) & 4)) {
            func_02006560(ret + 0x18);
            ret = NULL;
        }
    } else if (arg1 != 0) {
        if (*(u32 *)(arc + 0x14) & 0x10) {
            u32 tmp[0x48 / 4];
            func_0200b888(tmp);
            tmp[2] = (u32)arc;
            *(u32 *)(arc + 0x14) &= ~0x10;
            func_0200a980(tmp, 10);
        }
        if (*(u32 *)(arc + 0x14) & 0x40) {
            *(u32 *)(arc + 0x14) = (*(u32 *)(arc + 0x14) & ~0x40) | 8;
            func_02006560(arc + 0xc);
        }
    }
    func_0200813c(irq);
    return (s32)ret;
}

void func_0200aeac(u8 *arg0) {
    u8 *r4;
    u8 *cur;
    s32 r6;
    u8 *next;
    cur = arg0;
    r4 = *(u8 **)(cur + 8);
    if (cur == NULL) {
        return;
    }
    next = NULL;
    r6 = 1;
    for (;;) {
        u32 r8 = func_02008128();
        u32 t = *(u32 *)(cur + 0xc);
        t |= 0x40;
        *(u32 *)(cur + 0xc) = t;
        if (t & 4) {
            func_02006560(cur + 0x18);
            cur = next;
        }
        func_0200813c(r8);
        if (cur == NULL) {
            return;
        }
        if (func_0200a980(cur, (*(u32 *)(cur + 0xc) >> 8) & 0xff) == 0x100) {
            return;
        }
        cur = (u8 *)func_0200ad00(r4, r6);
        if (cur == NULL) {
            return;
        }
    }
}

void func_0200af30(u8 *s) {
    u32 r4 = func_02008128();
    while (!(*(u32 *)(s + 0xc) & 0x40) && (*(u32 *)(s + 0xc) & 1)) {
        func_02006510(s + 0x18);
    }
    func_0200813c(r4);
    if (!(*(u32 *)(s + 0xc) & 0x40)) {
        return;
    }
    u8 *r4b = *(u8 **)(s + 8);
    func_0200a884(s, func_0200a980(s, (*(volatile u32 *)(s + 0xc) >> 8) & 0xff));
    s32 next = func_0200ad00(r4b, 1);
    if (next == 0) {
        return;
    }
    func_0200aeac((void *)next);
}

s32 func_0200afb4(void *arg0,s32 arg1,s32 arg2) {
u8 *p=arg0;
u8 *arc;
u32 irq;
u32 zero=0;
s32 ret=zero;
arc=*(u8 **)(p+8);
u32 busy=(*(u32 *)(p+12)&1)?1:ret;
u8 *next;
if(busy) func_02008414();
if(!arc){*(s32 *)(p+20)=6; return 0;}
*(s32 *)(p+20)=2;
*(u32 *)(p+12)=(*(u32 *)(p+12)&~0xff00)|(arg1<<8);
*(u32 *)(p+12)|=1;
*(u32 *)p=zero;
if(arg2) *(u32 *)(p+12)|=4;
irq=func_02008128();
if(*(u32 *)(arc+20)&0x80) func_0200a884(p,3);
else {
u8 **tail=(u8 **)(arc+8);
while(*tail) tail=(u8 **)*tail;
*tail=p;
}
zero=0;
if(*(u8 **)(arc+8)==p && !(*(u32 *)(arc+20)&0x10)) zero=1;
func_0200813c(irq);
if(*(s32 *)(p+20)!=3) {
next=(u8 *)func_0200ad00(arc,zero);
if(arg2) {
func_0200af30(p);
ret=1;
if(*(s32 *)(p+20)!=0) ret=0;
} else {
if(next) func_0200aeac(next);
ret=1;
}
}
return ret;
}

u8 *func_0200b0ec(u8 *arg0, s8 *arg1) {
    u32 r6 = func_02008128();
    u8 *r7 = data_0215ed68;
    u32 r4 = 0;
    u32 r5 = 1;
    while (r7 != NULL) {
        u32 hit = (*(u32 *)(r7 + 0x14) & 2) ? r5 : r4;
        if (hit != 0) {
            s32 r10 = (s32)func_0200b6b8(r7);
            if (func_020124a8(r10, arg0, arg1) == 0 && arg1[r10] == 0) {
                break;
            }
        }
        r7 = *(u8 **)(r7 + 4);
    }
    func_0200813c(r6);
    return r7;
}

extern s8 data_0215ee78[0x104];
extern u8 *func_0200b2ac(const char *, u32 *, u8 *);
extern void func_02012244(void *, void *, s32);
extern s32 func_0200afb4(void *, s32, s32);
s32 func_0200b178(const char *arg0) {
    s32 ret = 0;
    u8 path[0x104];
    u8 file[0x48];
    u32 sp4[4];
    u32 sp0 = 0;
    u8 *arc;

    arc = func_0200b2ac(arg0, &sp0, path);
    if (arc != NULL) {
        *(u8 **)((u8 *)&data_0215ed68 + 4) = arc;
        *(u16 *)((u8 *)&data_0215ed68 + 8) = 0;
        *(u16 *)((u8 *)&data_0215ed68 + 0xa) = 0;
        *(u32 *)((u8 *)&data_0215ed68 + 0xc) = 0;
        func_02012244(data_0215ee78, path, 0x104);
        if (*(u32 *)(*(u8 **)(arc + 0x24) + 0x10) != 0) {
            func_0200b888((u32 *)file);
            *(u8 **)(file + 8) = arc;
            *(u32 **)(file + 0x10) = sp4;
            sp4[0] = sp0;
            sp4[1] = (u32)path;
            sp4[3] = 1;
            if (func_0200afb4(file, 4, 1) != 0) {
                *(u16 *)((u8 *)&data_0215ed68 + 8) = sp4[2];
                func_02012244(data_0215ee78, path, 0x104);
            }
        }
        ret = 1;
    }
    return ret;
}

s32 func_0200b24c(char *dst, s32 dst_len, const char *src, s32 src_len, s32 *truncated) {
    s32 i;
    s32 max_len = (dst_len - 1 < src_len) ? (dst_len - 1) : src_len;
    for (i = 0; i < max_len && src[i] != '\0'; i++) {
        dst[i] = src[i];
    }
    if (i < src_len && src[i] != '\0') {
        *truncated = 1;
    }
    dst[i] = '\0';
    return i;
}

s32 func_0200b24c(char *dst, s32 dst_len, const char *src, s32 src_len, s32 *truncated);
u8 *func_0200b0ec(u8 *arg0, s8 *arg1);
u8 *func_0200b2ac(const char *str, u32 *arg1, u8 *arg2)
{
  u32 cur = *((u32 *) (((u8 *) (&data_0215ed68)) + 4));
  s32 len = 0;
  u32 *argp = arg1;
  const char *p = str;
  u8 *buf = arg2;
  s32 truncated = 0;
  s32 one = 1;
  s32 zero = 0;
  u8 *sp4;
  u8 c;
  short new_var;
  s32 pos;
  s32 step;
  if (cur == 0)
  {
    *((u8 **) (((u8 *) (&data_0215ed68)) + 4)) = data_0215ed68;
    *((u16 *) (((u8 *) (&data_0215ed68)) + 8)) = 0;
    *((u32 *) (((u8 *) (&data_0215ed68)) + 0xc)) = 0;
    *((u16 *) (((u8 *) (&data_0215ed68)) + 0xa)) = 0;
    data_0215ee78[0] = 0;
  }
  c = *p;
  if ((c == '/') || (c == '\\'))
  {
    sp4 = *((u8 **) (((u8 *) (&data_0215ed68)) + 4));
    p += 1;
    if (arg1 != 0)
    {
      *arg1 = zero;
    }
  }
  else
  {
    pos = 0;
    for (;;)
    {
      c = p[pos];
      if (((c == 0) || (c == '/')) || (c == '\\'))
      {
        sp4 = *((u8 **) (((u8 *) (&data_0215ed68)) + 4));
        if (argp != 0)
        {
          *argp = *((u16 *) (((u8 *) (&data_0215ed68)) + 8));
        }
        if (((buf != 0) && ((*((u16 *) (((u8 *) (&data_0215ed68)) + 8))) == 0)) && (data_0215ee78[0] != 0))
        {
          len += func_0200b24c(buf, 0x104, data_0215ee78, 0x104, &truncated);
          len += func_0200b24c(buf + len, 0x104 - len, data_02145c00, 1, &truncated);
        }
        break;
      }
      if (c == ':')
      {
        sp4 = (u8 *) func_0200b0ec((u8 *) p, (s8 *) pos);
        c = *(p += pos + 1);
        if ((c == '/') || (c == '\\'))
        {
          p += 1;
        }
        if (argp != 0)
        {
          *argp = zero;
        }
        break;
      }
      step = (((u32) ((c ^ 0x20) - 0xa1)) < 0x3c) ? (one) : (zero);
      pos = (pos + 1) + step;
    }

  }
  if (buf != 0)
  {
    s32 one2 = 1;
    s32 pos2 = 0;
    s32 sep;
    s32 step2;
    s8 c2;
    if (truncated == 0)
    {
      for (;;)
      {
        c2 = p[pos2];
        new_var = c2;
        if (new_var != 0)
        {
          sep = one2;
          if ((((u8) c2) != '/') && (((u8) c2) != '\\'))
          {
            sep = zero;
          }
          if (sep != 0)
          {
            goto comp_end;
          }
          step2 = zero;
          if (((u32) ((((u8) new_var) ^ 0x20) - 0xa1)) < 0x3c)
          {
            s8 next = p[pos2 + 1];
            if ((next != 0x7f) && (((u8) (next - 0x40)) <= 0xbc))
            {
              step2 = one2;
            }
          }
          pos2 += (step2 != 0) ? (2) : (one2);
          goto tail_check;
        }
        comp_end:
        if (pos2 != 0)
        {
          if ((pos2 == 1) && (p[0] == '.'))
          {
            goto shared;
          }
          if (((pos2 == 2) && (p[0] == '.')) && (p[1] == '.'))
          {
            if (len > 0)
            {
              len--;
            }
            len = func_0200b810(buf, len) + 1;
            goto shared;
          }
          len += func_0200b24c(buf + len, 0x104 - len, p, pos2, &truncated);
          if (c2 != 0)
          {
            len += func_0200b24c(buf + len, 0x104 - len, data_02145c00, 1, &truncated);
          }
        }

        shared:
        if (new_var == 0)
        {
          break;
        }

        p += pos2 + 1;
        pos2 = zero;
        tail_check:
        if (truncated != 0)
        {
          break;
        }

      }

    }
    buf[len] = 0;
    func_0200b844(buf);
  }
  if (truncated != 0)
  {
    sp4 = 0;
  }
  return sp4;
}

void func_0200b594(u8 *arg0) {
    u32 r4 = 0;
    u8 *r5 = arg0;
    func_02008f74(arg0, r4, 0x5c);
    *(u32 *)(r5 + 0x10) = r4;
    *(u32 *)(r5 + 0xc) = r4;
}

#pragma optimization_level 3
s32 func_0200b5b8(u8 *arg0, s8 *arg1, u32 arg2) {
    s32 ret = 0;
    u32 lock = func_02008128();
    if (func_0200b0ec(arg1, arg2) == NULL) {
        u8 *cur = data_0215ed68;
        u8 **slot = &data_0215ed68;
        while (cur != NULL) {
            slot = (u8 **)(cur + 4);
            cur = *(u8 **)(cur + 4);
        }
        *slot = arg0;
        if (arg2 <= 3) {
            *(u32 *)arg0 = 0;
            func_02012244(arg0, arg1, arg2 + 1);
        } else if (arg2 <= 0xf) {
            s32 i;
            for (i = 0; ; i++) {
                if (i >= 0x10) {
                    func_02008414();
                } else if (((s8 (*)[16])data_0215ed78)[i][0] == 0) {
                    func_02012244(((s8 (*)[16])data_0215ed78)[i], arg1, arg2 + 1);
                    *(void **)arg0 = ((s8 (*)[16])data_0215ed78)[i];
                    break;
                }
            }
        } else {
            func_02008414();
        }
        *(u32 *)(arg0 + 0x14) |= 1;
        ret = 1;
    }
    func_0200813c(lock);
    return ret;
}
#pragma optimization_level 4
u8 *func_0200b6b8(u8 *arg0) {
    if (*(s8 *)(arg0 + 3) != 0) {
        return *(u8 **)(arg0 + 0);
    }
    return arg0;
}

s32 func_0200b6c8(u32 *arg0, u32 arg1, u32 arg2) {
    u32 sp[18];
    arg0[8] = arg1;
    arg0[9] = arg2;
    func_0200b888(sp);
    sp[2] = (u32)arg0;
    func_0200a980(sp, 0x11);
    arg0[5] |= 2;
    return 1;
}

void func_0200b710(u32 *arg0, u32 arg1) {
    u32 *arc = (u32 *)arg0[2];
    if (arc[3] & 4) {
        u32 bak = func_02008128();
        arc[3] |= 8;
        arc[5] = arg1;
        func_02006560(&arc[6]);
        func_0200813c(bak);
    } else {
        func_0200a884(arc);
        void *res = (void *)func_0200ad00(arg0, 1);
        if (res != 0) {
            func_0200aeac(res);
        }
    }
}

s32 func_0200b77c(const char *str, s32 pos) {
    s32 i = pos - 1;
    while (i > 0 && ((u32)(((u8)str[i - 1] ^ 0x20) - 0xa1) < 0x3c)) {
        i--;
    }
    return (pos - 1) - (((pos - 1) - i) & 1);
}

s32 func_0200b7bc(const char *str, s32 pos) {
    s32 c;
    while ((c = str[pos]) != '\0' && (u8)c != '/' && (u8)c != '\\') {
        s32 step = ((u32)(((u8)c ^ 0x20) - 0xa1) < 0x3c) ? 1 : 0;
        pos += 1;
        pos += step;
    }
    return pos;
}

s32 func_0200b810(const char *str, s32 pos) {
    for (;;) {
        pos = func_0200b77c(str, pos);
        if (pos < 0 || (u8)str[pos] == '/' || (u8)str[pos] == '\\') {
            break;
        }
    }
    return pos;
}

s32 func_0200b844(char *str) {
    s32 len = func_02012348(str);
    s32 pos = func_0200b77c(str, len);
    if (pos >= 0 && ((u8)str[pos] == '/' || (u8)str[pos] == '\\')) {
        str[pos] = '\0';
        len = pos;
    }
    return len;
}

void func_0200b888(u32 *arg0) {
    arg0[2] = 0;
    arg0[1] = 0;
    arg0[0] = 0;
    arg0[7] = 0;
    arg0[6] = 0;
    arg0[3] = 0;
    arg0[3] |= 0x2300;
    arg0[4] = 0;
    arg0[5] = 0;
}

void func_0200b8b4(u32 *arg0) {
u32 bak=func_02008128();
u32 flag=(arg0[3]&1)!=0;
if(flag){u32 *arc=(u32 *)arg0[2];arg0[3]|=2;arc[5]|=0x20;}
func_0200813c(bak);
}

