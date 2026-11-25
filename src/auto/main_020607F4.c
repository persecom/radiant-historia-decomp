/* 13 functions from 0x020607F4 to 0x020617C8 (main), found by ds-decomp. */
#include "common.h"
extern void *data_02155c3c;
extern u8 *data_02160a74;
extern u8 *data_02160a6c;
extern void *func_0210c594(s32,void *);
extern void *func_02064cb8(void *,s32);
extern void func_020a5ce4(void *);
extern void func_020daa60(void *,void *,void *,void *,s32);
extern void func_020da8c0(void *,s32);
extern void func_0210c5dc(void *);
extern void func_020d4e90(void *,void *);
extern void func_020b52f4(s32);
extern void func_020dd810(void *,s32,s32);

extern u8 *func_020d56d8(u8 *, s32, s32, s32);
extern u8 **data_02160244;
extern void func_020d5fd0(u8 *);
extern void func_020d4eb8(u8 *);
extern void *func_0205bad4(void *);
extern s32 func_020dde4c(u32);
extern void func_020de0a8(void *);
extern void func_020bfff4(u16);
extern void func_020223f8(void *, s32);
extern void func_0205aa34(void *, s32);

u32 *func_0202c5a0(u8 *);
extern void func_0205bc60(u8 *, u8 *, s32);
extern void func_02030b7c(u8 *, s32, s32);
extern s32 func_0202bf08(u8 *, u8);
extern void func_020db6f0(u8 *, s16);
extern void func_020676c4(s32, u16);
extern void func_020ddd5c(u8 *);
extern void func_020020f8(u8 *, u8 *, u8 *);
void func_020607f4(u8 *p) {
    u8 *cur;
    u8 *r = *(u8 **)(p + 0x128);
    u8 *s = *(u8 **)(p + 0x124);
    u8 done = 0;

    if (*(s32 *)(p + 0x78) == 0x4b0) {
        func_0205bc60(p, &done, 5);
    } else {
        func_0205bc60(p, &done, 0x14);
    }

    if (*(s32 *)(p + 4) == 0x20000 && done >= 1 && r[0x7c] == 0) {
        if (*(s32 *)(p + 0x78) == 0x4b0) {
            u32 *v = func_0202c5a0(p);
            *(u32 *)(p + 0) = v[0];
            *(u32 *)(p + 4) = v[1];
            *(u32 *)(p + 8) = v[2];
        }
        if (*(s32 *)(p + 0x78) == 0x4b0) {
            func_02030b7c(p, 4, 0x1ff);
        } else {
            func_02030b7c(p, 1, 0x1ff);
        }
        if (((u8 *)data_02160244)[0x170] == 1 && (*(u32 *)(*(u8 **)(p + 0x118) + 0x8c) & 8) == 0) {
            cur = *(u8 **)(data_02160a6c + 0xb8);
            while (cur != 0) {
                if (cur != 0 && *(u8 **)(cur + 0x118) != 0) {
                    u32 f = *(u32 *)(*(u8 **)(cur + 0x118) + 0x8c);
                    if ((f & 8) && !(f & 0x800)) {
                        s16 i;
                        for (i = 0; i < 9; i++) {
                            if (func_0202bf08(cur, i) && func_0202bf08(p, i)) {
                                *(u32 *)(*(u8 **)(cur + 0x118) + 0x8c) |= 0x800;
                                func_02030b7c(cur, 1, 0x1ff);
                            }
                        }
                    }
                }
                cur = *(u8 **)(cur + 0x174);
            }
        }
        r[0x7c] = 1;
        if (*(u16 *)(r + 0x1e) & 0x400) {
            *(u16 *)(r + 0x1e) &= (u16)~0x400;
        }
    }

    if (*(u16 *)s == 1) {
        u32 f = *(u32 *)(s + 8);
        if (f & 0x20) {
            *(s32 *)(p + 4) += *(s32 *)(s + 0xc);
            *(s32 *)(s + 0xc) = (*(s32 *)(s + 0xc) * 0xd80) / 0x1000;
            if (*(s32 *)(s + 0xc) < 0x200) {
                done++;
                *(s32 *)(s + 0xc) = 0;
                *(u16 *)s = 3;
                *(u32 *)(s + 8) &= ~0x20;
            }
        } else if (f & 0x40) {
            *(s32 *)(p + 4) += *(s32 *)(s + 0xc);
            *(s32 *)(s + 0xc) -= 0x2000;
            if (*(s32 *)(p + 4) < 0x20000) {
                u32 fl;
                *(s32 *)(p + 4) = 0x20000;
                fl = *(u32 *)(*(u8 **)(p + 0x118) + 0x8c);
                if ((fl & 8) == 0 || ((fl & 8) != 0 && (fl & 0x800) != 0)) {
                    func_020db6f0(p, *(s16 *)(s + 0x10));
                    *(s16 *)(s + 0x10) = 0;
                }
                done++;
                *(s32 *)(s + 0xc) = 0;
                *(u16 *)s = 5;
            }
        }
    } else {
        done++;
    }

    if (done >= 2) {
        u32 f;
        func_020676c4(0x6b, *(u16 *)(p + 0x90));
        f = *(u32 *)(*(u8 **)(p + 0x118) + 0x78);
        if (!(f & 0x20) && *(s16 *)(s + 2) == 0 && *(u16 *)s == 0) {
            *(s32 *)(p + 0x78) = 0x4b0;
            func_020ddd5c(p);
            *(s32 *)(r + 0x24) = 0;
            *(s32 *)(*(u8 **)(p + 0x118) + 0x6c) = 0;
        } else if ((f & 0x20) && *(s16 *)(s + 2) == 0 && *(u16 *)s == 0) {
            *(s32 *)(p + 0x78) = 0x4b0;
            func_020ddd5c(p);
            *(s32 *)(r + 0x24) = 0;
            *(s32 *)(*(u8 **)(p + 0x118) + 0x6c) = 0;
        }
    } else {
        func_020020f8(p, p + 0x30, p);
    }
}

void func_02060b4c(u8 *p){
s32 id;
u8 *r=*(u8 **)(p+0x128);
u8 *node,*b,*a;
s32 flags;
if(r[0x76]&1){
u8 *q=*(u8 **)(r+0x78);
b=*(u8 **)(q+0xc);a=*(u8 **)(q+4);node=*(u8 **)(b+0x28);
}else{
a=*(u8 **)(r+8);node=func_0205bad4(r);b=*(u8 **)(r+0xc);
}
flags=func_0205bcb0(p,(u16)*(s32 *)(r+0x34));
if((flags&1) && *(s16 *)(r+0x1c)==0){
s32 one=1;
*(s16 *)(r+0x1c)=one;
func_020d3fe8(p,node,a);
func_020d3160(one,*(u16 *)(a+0x16),b,*(u16 *)(p+0x90)&255);
if(node){
s32 zero=0,one=1,other=0;
do{
id=*(s32 *)node;
func_020d9e48(p,id);
if(*(s32 *)(r+0x30)==0)*(u16 *)(node+4)|=0x10;
func_020d56d8(p,id,zero,one);
func_020d56d8(p,id,zero,2);
if(*(s16 *)(r+0x90)){func_0210d27c(*(s16 *)(r+0x90));*(s16 *)(r+0x90)=zero;}
func_020daefc(p,id,a,other,node,other,other);
node=*(u8 **)(node+0x18);
}while(node);
}
func_020d5fd0(p);
func_020d9da8(32);
func_020d9ea8(8,0);
}
if(flags&2)func_020d4eb8(p);
}

void func_02060cc4(u8 *p){
u8 *r=*(u8 **)(p+0x128);
s32 state=*(s16 *)(r+0x1c);
if(state==0){
u32 *v=func_0202c5a0(p);
u32 x,y,z;
s32 zero=0,one=1;
x=v[0];*(u32 *)(p+0x18)=x;
y=v[1];*(u32 *)(p+0x1c)=y;
z=v[2];*(u32 *)(p+0x20)=z;
*(u32 *)(p+0x24)=x;*(u32 *)(p+0x28)=y;*(u32 *)(p+0x2c)=z;
*(u16 *)(p+0x92)=func_020ddc8c(p,p+0x24);
*(u32 *)(p+0x30)=zero;*(u32 *)(p+0x34)=zero;*(u32 *)(p+0x38)=zero;
func_020ddcd4(p);
func_020d56d8(p,zero,zero,one);func_020d5fd0(p);
*(u16 *)(r+0x1c)=one;
}else if(state==1){
u32 x,y,z;
if(!func_0205ba98(p,5))return;
if(*(u32 *)(p+0x80)&0x20)func_020ddfd0(p,1);
else func_020ddfd0(p,0);
x=*(volatile u32 *)(p+0x18);y=*(volatile u32 *)(p+0x1c);z=*(volatile u32 *)(p+0x20);
*(u32 *)(p)=x;*(u32 *)(p+4)=y;*(u32 *)(p+8)=z;
*(u32 *)(r+0x24)=0x270f;
}
}

void func_02060db4(u8 *p){
u8 *r=*(u8 **)(p+0x128);
u32 v[3];
if(*(s16 *)(r+0x1c)==0){
u32 x,y,z;
s32 zero=0,one=1;
func_0202bcd4(v,r[0x74]);
x=v[0];*(u32 *)(p+0x18)=x;
y=v[1];*(u32 *)(p+0x1c)=y;
z=v[2];*(u32 *)(p+0x20)=z;
*(u32 *)(p+0x24)=x;*(u32 *)(p+0x28)=y;*(u32 *)(p+0x2c)=z;
*(u16 *)(p+0x92)=func_020ddc8c(p,p+0x24);
*(u32 *)(p+0x30)=zero;*(u32 *)(p+0x34)=zero;*(u32 *)(p+0x38)=zero;
func_020ddcd4(p);
func_020d56d8(p,zero,zero,one);func_020d5fd0(p);
*(u16 *)(r+0x1c)=one;
}
if(!func_0205ba98(p,10))return;
*(u32 *)(p+0x30)=0;*(u32 *)(p+0x34)=0;*(u32 *)(p+0x38)=0;
func_0202bcd4(v,r[0x74]);
*(u32 *)p=v[0];*(u32 *)(p+4)=v[1];*(u32 *)(p+8)=v[2];
func_0202c328(p,r[0x74]);
func_02030b7c(p,1,511);
*(u32 *)(r+0x24)=0x270f;
}

void func_02060ec8(u8 *p) {
    s32 zero = 0;
    func_020d56d8(p, zero, zero, 1);
    func_020d56d8(p, zero, zero, 2);
    func_020d5fd0(p);
    func_020d4eb8(p);
}

void func_02060f0c(u8 *p){
u8 *r=*(u8 **)(p+0x128);
s32 flags;
if(*(s16 *)(r+0x1c)==0){
*(s16 *)(r+0x1c)=1;
func_020d56d8(p,0,0,1);
func_020d5fd0(p);
}
if(*(s32 *)(r+0x30)>-1){
++*(s32 *)(r+0x14);
if(*(s32 *)(r+0x14)>*(s32 *)(r+0x30))func_020d4eb8(p);
}else if(*(s32 *)(r+0x34)>-1){
flags=func_0205bcb0(p,(u16)*(s32 *)(r+0x34));
if((flags&1) && *(s32 *)(r+0x14)==0){
*(s32 *)(r+0x14)=1;
if(*(s16 *)(r+0x90)!=0){func_0210d27c(*(s16 *)(r+0x90));*(s16 *)(r+0x90)=0;}
func_020d56d8(p,0,0,1);func_020d5fd0(p);
}
if(flags&2)func_020d4eb8(p);
}
}

void func_0202f41c(u8 *,u8 *,s32,u8 *,u8 *,s32,s32);
void func_02060ff8(u8 *p)
{
  s32 id;
  s32 first;
  u8 *actor;
  u8 *r = *((u8 **) (p + 0x128));
  u8 *node;
  u16 i;
  s32 zero = 0;
  u8 *a;
  s32 mode;
  s32 mark;
  s32 flags = func_0205bcb0(p, (u16) (*((s32 *) (r + 0x34))));
  if ((flags & 1) && (!(*((s16 *) (r + 0x1c)))))
  {
    mode = 1;
    *((s16 *) (r + 0x1c)) = 1;
    if (!(r[0x76] & 1))
    {
      node = func_0205bad4(r);
      a = *((u8 **) (r + 8));
      first = *((s32 *) r);
      mode = zero;
    }
    else
    {
      u8 *q = *((u8 **) (r + 0x78));
      u8 *b = *((u8 **) (q + 12));
      a = *((u8 **) (q + 4));
      node = *((u8 **) (b + 0x28));
      first = zero;
    }
    for (i = 0; node; i++, node = *((u8 **) (node + 0x18)))
    {
      id = *((s32 *) node);
      if (!first)
      {
        first = id;
      }
      actor = func_020d56d8(p, id, zero, 1);
      if (actor)
      {
        *((u16 *) (actor + 0x90)) = (((*((u16 *) (p + 0x90))) - 101) * 10) + (i + 630);
        func_020d2b78(actor, id, zero, 1);
        if (!(*((s32 *) (r + 0x30))))
        {
          *((u16 *) (node + 4)) |= 16;
          mark = 1;
        }
        else
        {
          mark = zero;
        }
        if (*((s16 *) (r + 0x90)))
        {
          func_0210d27c(*((s16 *) (r + 0x90)));
          *((s16 *) (r + 0x90)) = zero;
          first = id;
        }
        func_0202f41c(actor, p, id, a, *((u8 **) (node + 0x18)), mode, mark);
        *((s32 *) (actor + 0x28)) += 0x10000;
        if ((*((s32 *) (actor + 4))) != (*((s32 *) (actor + 0x28))))
        {
          func_0205baf8(actor);
        }
        {
          u8 *q = *data_02160244;
          if (q[0x6c] == 6)
          {
            q[0x6c] = 7;
            func_020d9e48(actor, first);
            func_020d9dc8(actor, *((u16 *) (actor + 0x90)), 10, 1);
            func_020d9da8(32);
            func_020d9ea8(8, zero);
          }
        }
        func_020d56d8(p, id, (s32) actor, 2);
      }
    }

    func_020d5fd0(p);
  }
  if (flags & 2)
  {
    func_020d4eb8(p);
  }
}

void func_02061214(u8 *p) {
    u8 *r = *(u8 **)(p + 0x128);
    u16 value;
    u8 *node;
    u16 count, i;
    if ((r[0x76] & 1) == 0) {
        node = func_0205bad4(r);
        value = (*(u16 *)(p + 0x90) - 0x65) * 10;
    } else {
        u8 *t = *(u8 **)(r + 0x78);
        node = *(u8 **)(*(u8 **)(t + 0xc) + 0x28);
        value = (*(u16 *)(p + 0x90) - 0x65) * 10;
    }
    i = 0;
    count = 0;
    if (node != NULL) {
        do {
            if (func_020dde4c(value + 0x76 + 0x200 + i) != 0) {
                count++;
            }
            i++;
            node = *(u8 **)(node + 0x18);
        } while (node != NULL);
    }
    if (count == 0) {
        *(u32 *)(r + 0x24) = 0x270f;
    }
}

void func_020612d0(u8 *p){
 u8 *c;
 u8 *r=*(u8 **)(p+0x128);
 u8 *a,*b;
 s32 zero=0;
 if(!(r[0x76]&1)){b=*(u8 **)(r+12);a=*(u8 **)(r+8);c=*(u8 **)(b+4);}
 else {u8 *q=*(u8 **)(r+0x78);a=*(u8 **)(q+4);b=*(u8 **)(q+12);c=*(u8 **)(q+8);}
 switch(a[0]){
 case 1:break;
 case 2:case 7:
 func_02030b7c(p,zero,511);
 if(a[6]==7){
 if(func_02065c44(a)==1){
 func_0202cbf8(*(u16 *)(a+0x38),b);
 *(s32 *)r=func_0202e260(1);
 {s32 v=func_0202cc74(*(u16 *)(a+0x38));if(v)*(u16 *)(data_02160a74+0x1e0)=v;}
 }else{*(s32 *)r=zero;func_0202c950(*(u16 *)(a+0x38),b,zero);}
 if(a[0x3a])r[0x75]=3;
 }else{
 switch(a[7]){
 case 1:case 2:case 3:case 4:
 if(c){func_02032b98(b,c,zero);r[0x75]=zero;}break;
 case 5:case 6:case 9:case 11:{
 s32 valid=1;
 if(!c)valid=zero;else{u8 *q=*(u8 **)(c+0x118);if(!*(s32 *)(q+0x70))valid=zero;if(q[0]!=1)valid=0;}
 if(!valid){if(a[7]==6)func_0202c950(func_0202e84c(p),b,0);}
 else{
 u8 *q=*(u8 **)(c+0x124);
 u8 v=func_0202c658(c);
 {s32 k=*(s8 *)(b+0x12);if(k==0){}else if(k==1)v++;else if(k==2)v-=3;else if(k==3)v-=2;else if(k==4)v=7;}
 func_0202c950(func_020deaf0(a,v,**(u8 **)(c+0x118)),b,*(s16 *)(q+2));
 }
 break;}
 }
 }
 break;
 }
 func_020d4eb8(p);
}

void func_020614e0(u8 *p) {
    u8 *r = *(u8 **)(p + 0x128);
    s32 zero = 0;
    if (*(s16 *)(p + 0x98) == 0) {
        func_020de0a8(p);
    }
    func_020bfff4(*(u16 *)(p + 0x90));
    if ((r[0x76] & 1) == 0) {
        func_020223f8(r, 0);
    }
    *(s32 *)(p + 0x30) = zero;
    *(s32 *)(p + 0x34) = zero;
    *(s32 *)(p + 0x38) = zero;
    func_0205aa34(p, 0xa);
    *(s32 *)(r + 0x24) = zero;
}

void func_02061540(u8 *p) {
    u8 *q = *(u8 **)(p + 0x118);
    u8 *r = *(u8 **)(p + 0x128);
    u8 *s;
    u8 v;
    if (*(u32 *)(q + 4) == 0) return;
    if (*(u32 *)(r + 0x18) & 8) return;
    s = *(u8 **)(r + 0x58);
    if (s == NULL) return;
    v = s[4];
    if ((v & 1) == 0) {
        s[4] = v | 1;
        *(u32 *)(r + 0x24) = 0x578;
    }
}

void func_0206158c(u8 *p){
u8 *r=*(u8 **)(p+0x128);
u8 *q=*(u8 **)(p+0x118);
u8 *s=**(u8 ***)(r+0x58);
if(*(u32 *)(q+0x6c)!=0 || *(u32 *)(*(u8 **)(s+0x128)+0x24)!=0x38d)return;
*(u16 *)(r+0x1c)=0;
if(*(u32 *)(p+0x120)){func_02026c00(*(u32 *)(p+0x120));*(u32 *)(p+0x120)=0;}
*(u32 *)(p+0x120)=func_0202662c((u16)((*(u16 *)(*(u8 **)(p+0x118)+0x4c)/10)*10+1),0x5a);
func_020d4eb8(p);
}

void func_02061628(u8 *p){
u8 *node;
u8 *r=*(u8**)(p+0x128);
u8 *q=*(u8**)(r+0x58);
s32 flags=func_0205bcb0(p,(u16)*(u32*)(r+0x34));
if((flags&1)&&*(s16*)(r+0x1c)==0&&*(u16*)(r+0x60)!=0){
s32 one=1;
u8 *buf;
void *value;
*(s16*)(r+0x1c)=one;
node=*(u8**)q;
value=func_02064cb8(*(void**)(p+0x11c),11);
buf=func_0210c594(0x1c,data_02155c3c);
*(u8**)buf=node;
*(u16*)(buf+4)|=0x10;
*(u16*)(data_02160a74+0x1e0)|=(u16)(one<<*(u16*)(node+0x90));
func_020a5ce4(*(void**)(data_02160a74+0x78));
func_0210d27c(0x6b);
*(u32*)(buf+8)=*(u32*)(q+8);
func_020daa60(p,node,value,buf,6);
func_020da8c0(node,9);
if(buf)func_0210c5dc(buf);
{u8 *a=*(u8**)(node+0x118);if(*(s32*)(a+4)<=0)*(s32*)(a+4)=1;}
*(u32*)(*(u8**)(node+0x128)+0x24)=0x38e;
(*(s8*)(*(u8**)(node+0x128)+0xac))--;
func_020d4e90(p,q);
}
if(flags&2){
s32 zero=0;
func_020b52f4(zero);
func_020a5ce4(*(void**)(data_02160a74+0x94));
func_020dd810(p,zero,zero);
if(*(u32*)(p+0x1c0)==1){
u32 x=*(u32*)(p+0xec),z=*(u32*)(p+0xf4);
*(u32*)(p+0x1c0)=zero;*(u32*)(p+8)=z;*(u32*)p=x;
}
*(u32*)(r+0x24)=0;
}
}

