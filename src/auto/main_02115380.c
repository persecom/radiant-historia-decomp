/* 35 functions from 0x02115380 to 0x02116350 (main), found by ds-decomp. */
#include "common.h"
typedef struct { void *base; u16 ids[4]; } Entry021157d0;
typedef struct { u8 header[0x38]; u32 count; } Header_0216cad4;
extern Header_0216cad4 data_0216cad4;
extern void func_02115df0(void *,s32,s32,s32);
extern void func_02009008(void *,void *,u32);
extern void func_02008f74(void *,s32,u32);

extern s32 func_02116140(u32, u8, u16, u8, void *, u32);
extern void *func_021166c8(void *, u32);
extern s32 func_02116244(u32, u8, u16, u8, void *, void *, u32, u32);

typedef union UnkBits24 {
    u32 all;
    u32 bits : 24;
} UnkBits24;

extern void func_02115d90(void *, s32, s32, s32);
extern void func_02115d10(void *, s32, s32);
extern void func_02009740(void *, void *);
extern void func_0200a248(void *);
extern u8 *func_021150ac(void *);
extern void *func_02115be8(void *, void *, s32);
extern void *func_02115b7c(void *, void *, s32);
extern u8 *func_02115174(void *);
extern void *func_0211519c(void *, void *, void *, void *);
extern void func_02006da8(void *, void *);
extern u32 func_02008128(void);
extern void func_0200813c(u32);
extern void *func_02114f58(void *);

extern void func_021167ac(void *, void *);
extern void *func_02116970(void *, void *);
extern void func_021168f8(void *, void *);
extern void func_02117250(void *, s32);
extern void func_0211566c(void);
extern void func_02115d10(void *, s32, s32);
extern void func_02009720(void *, void *);
extern void func_02009760(void *, void *);
extern void func_0200a2e0(void *);
extern u32 func_02009d2c(void);
extern void func_02009b24(s32);
extern void func_02009cc0(u32);
extern u8 *func_02114f80(void *);
extern u8 *func_02114fe4(void *);
extern s32 func_021157d0(u16, u32, void *, s32, void *);
extern void *func_02115a38(void *, void *, s32);
extern void *func_02115aa4(void *, void *, s32);
extern void *func_02115264(void *);
extern s32 func_02115770(void *, u32, void *, s32, void **);
extern s32 func_02115630(void *);
extern void *func_0211721c(void *, u32, u32);
extern void func_021167f0(void *, void *);
extern s32 func_021172b4(void *, u16);
extern void func_02117304(void *, u32);
extern u32 func_0211727c(void *, u32);

typedef struct {
    u8 pad[0x118];
    s32 flag : 1;
    u8 pad2[0x60];
} Unk_0216cb40;

extern Unk_0216cb40 data_0216cb40[4];
extern void func_02116488(Unk_0216cb40 *, s32);
extern s32 func_0200a530(void *, s32);
extern void func_0200a4fc(void *, s32, s32);
extern void func_0200a328(void *);
extern s32 func_0200a348(void *, void *, void *);
extern s32 func_02115e58(s32, u16, s32, s32);
extern void *func_02114f70(void);
extern void *func_02115110(s32);
extern void func_02113a9c(s32, u8);
extern void func_02113abc(s32, u16);
extern s32 func_02113ad4(s32, void *, void *);

void func_02115380(void *arg0) {
    void *node;
    BOOL flag = FALSE;
    node = func_02116970((u8 *)arg0 + 4, NULL);
    while (node != NULL) {
        void *sub = func_02116970(node, NULL);
        while (sub != NULL) {
            void (*cb)(void *, u32, u32, u32) = *(void (**)(void *, u32, u32, u32))((u8 *)sub + 0xc);
            if (cb != NULL) {
                cb((u8 *)sub + 0x20, *(u32 *)((u8 *)sub + 8), *(u32 *)((u8 *)sub + 0x10), *(u32 *)((u8 *)sub + 0x14));
                flag = TRUE;
            }
            sub = func_02116970(node, sub);
        }
        func_021168f8((u8 *)arg0 + 4, node);
        node = func_02116970((u8 *)arg0 + 4, NULL);
    }
    func_02117250(*(void **)arg0, 3);
    if (flag) {
        func_0211566c();
    }
    func_02115630(arg0);
}

void *func_0211543c(void *arg0, u32 arg1, void *arg2, u32 arg3, u32 arg4) {
    void *buf = func_0211721c(*(void **)arg0, ((arg1 + 0x1f) & ~0x1f) + 0x20, 0x20);
    void *head;
    if (buf == NULL) {
        return NULL;
    }
    head = func_02116970((u8 *)arg0 + 4, NULL);
    *(u32 *)((u8 *)buf + 8) = arg1;
    *(void **)((u8 *)buf + 0xc) = arg2;
    *(u32 *)((u8 *)buf + 0x10) = arg3;
    *(u32 *)((u8 *)buf + 0x14) = arg4;
    func_021167f0(head, buf);
    return (u8 *)buf + 0x20;
}

s32 func_021154a4(void *arg0) {
    s32 ret;
    if (!func_021172b4(*(void **)arg0, *(u16 *)((u8 *)arg0 + 0xc))) return -1;
    if (func_02115630(arg0) != 0) return *(u16 *)((u8 *)arg0 + 0xc) - 1;
    ret = 0;
    func_02117304(*(void **)arg0, ret);
    return ret - 1;
}

void func_021154f4(void *arg0, s32 arg1) {
void *node;
BOOL flag;
void *sub = NULL;
flag = FALSE;
if (arg1 == 0) { func_02115380(arg0); return; }
while (arg1 < *(u16 *)((u8 *)arg0+0xc)) {
node = func_02116970((u8 *)arg0+4,NULL);
sub = func_02116970(node, sub);
while (sub != NULL) {
void (*cb)(void *,u32,u32,u32) = *(void (**)(void *,u32,u32,u32))((u8 *)sub+0xc);
if (cb != NULL) {
cb((u8 *)sub+0x20,*(u32 *)((u8 *)sub+8),*(u32 *)((u8 *)sub+0x10),*(u32 *)((u8 *)sub+0x14));
flag=TRUE;
}
sub=func_02116970(node,sub);
}
func_021168f8((u8 *)arg0+4,node);
}
func_02117304(*(void **)arg0,arg1);
if (flag) func_0211566c();
func_021172b4(*(void **)arg0,*(u16 *)((u8 *)arg0+0xc));
func_02115630(arg0);
}

u32 func_021155c8(void *arg0) {
    u32 val = func_0211727c(*(void **)arg0, 0x20);
    if (val < 0x20) {
        return 0;
    }
    return (val - 0x20) & ~0x1f;
}

void func_021155ec(void *arg0) {
    func_021167ac(arg0, NULL);
}

s32 func_021155fc(void *arg0, void *arg1) {
    func_021167ac((u8 *)arg0 + 4, (void *)0xc);
    *(void **)arg0 = arg1;
    return func_02115630(arg0) != 0;
}

s32 func_02115630(void *arg0) {
    void *r4 = func_0211721c(*(void **)arg0, 0x14, 4);
    if (r4 == NULL) {
        return 0;
    }
    func_021155ec(r4);
    func_021167f0((u8 *)arg0 + 4, r4);
    return 1;
}

void func_0211566c(void) {
    u32 ret = func_02009d2c();
    func_02009b24(1);
    func_02009cc0(ret);
}

extern u32 func_02009d2c(void);
extern void func_02009b24(s32);
extern void func_02009cc0(u32);
extern u8 *func_02114f80(void *);
extern u8 *func_02114fe4(void *);
extern s32 func_021157d0(u16, u32, void *, s32, void *);
extern void *func_02115a38(void *, void *, s32);
extern void *func_02115aa4(void *, void *, s32);
extern s32 func_02115770(void *, u32, void *, s32, void **);
BOOL func_0211568c(void *arg0, void *arg1) {
    return func_02115770(arg0, 0xff, arg1, 1, NULL) == 0;
}

BOOL func_021156bc(u16 arg0, void *arg1) {
    return func_021157d0(arg0, 0xff, arg1, 1, NULL) == 0;
}

s32 func_021156ec(void *arg0, u32 arg1, void *arg2, s32 arg3, void **arg4) {
    u8 *p = func_02114f80(arg0);
    s32 ret;
    void *val;
    if (p == NULL) {
        return 2;
    }
    ret = func_021157d0(*(u16 *)(p + 4), arg1, arg2, arg3, NULL);
    if (ret != 0) {
        return ret;
    }
    if ((arg1 & 1) != 0) {
        val = func_02115a38(*(void **)p, arg2, arg3);
        if (val == NULL) {
            return 6;
        }
    } else {
        val = func_02115264(*(void **)p);
    }
    if (arg4 != NULL) {
        *arg4 = val;
    }
    return 0;
}

s32 func_02115770(void *arg0, u32 arg1, void *arg2, s32 arg3, void **arg4) {
    u8 *p = func_02114fe4(arg0);
    void *val;
    if (p == NULL) {
        return 3;
    }
    if ((arg1 & 8) != 0) {
        val = func_02115aa4(*(void **)p, arg2, arg3);
        if (val == NULL) {
            return 7;
        }
    } else {
        val = func_02115264(*(void **)p);
    }
    if (arg4 != NULL) {
        *arg4 = val;
    }
    return 0;
}

u8 *func_02115048(u16);
void *func_02115b10(void *, void *, s32);
s32 func_02115910(void *,u32,void *,s32,void **);
s32 func_02115f20(s32,void *,u16,s32,s32);
void func_0200a178(void *,s32,void *);
s32 func_021157d0(u16 id, u32 flags, void *arg2, s32 arg3, void *out) {
 u8 *entry;
 Entry021157d0 *p;
 void *val;
 s32 i;
 p=(Entry021157d0 *)func_02115048(id);
 if(!p) return 4;
 if(flags&2) {
 val=func_02115b10(p->base,arg2,arg3);
 if(!val) return 8;
 } else val=func_02115264(p->base);
 for(i=0;i<4;i++) {
 void *child;
 s32 result;
 if(p->ids[i]==0xffff) continue;
 entry=func_021150ac((void *)(u32)p->ids[i]);
 if(!entry) return 5;
 result=func_02115910((void *)(u32)p->ids[i],flags,arg2,arg3,&child);
 if(result) return result;
 if(((*(u32 *)entry>>24)&1) && (flags&4)) {
 if(!((s32 (*)(s32,void *,s32,s32,s32))func_02115f20)((s32)child,val,i,(*(volatile u32 *)entry<<8)>>8,(s32)arg2)) return 9;
 }
 if(val && child) func_0200a178(val,i,child);
 }
 if(out) *(void **)out=val;
 return 0;
}

#pragma opt_propagation off
s32 func_02115910(void *arg0,u32 arg1,void *arg2,s32 arg3,void **arg4) {
u8 *p=func_021150ac(arg0); s32 v; void *addr; void *val;
if(!p)return 5; v=*(s32*)p;
if(arg1&4) { u32 flags=(u32)v>>24; addr=(void*)((u32)(v<<8)>>8); arg0=addr;
if(flags&1) val=func_02115be8(arg0,arg2,arg3); else val=func_02115b7c(arg0,arg2,arg3);
if(!val)return 9;
}else val=func_02115264((void*)((u32)(v<<8)>>8));
if(arg4)*arg4=val; return 0;
}
#pragma opt_propagation on
void *func_02115994(void *arg0,void *arg1,void *arg2,void *arg3,void *arg4) {
 void *p=func_02115174(arg0);
 void *buf;
 if(!p)return NULL;
 if(!arg4)return NULL;
 buf=func_0211543c(arg4,(u32)p+0x20,arg1,(u32)arg2,(u32)arg3);
 if(!buf)return NULL;
 if(p!=func_0211519c(arg0,buf,p,NULL))return NULL;
 func_02006da8(buf,p);
 return buf;
}

extern void *func_02115264(void *);
extern void *func_02114f70(void);
extern void *func_02115994(void *, void *, void *, void *, void *);
extern void func_0211528c(void *, void *);
extern void func_02115d68(void *, s32, s32, s32);
extern u32 func_0211727c(void *, u32);
void *func_02115a38(void *arg0, void *arg1, s32 arg2) {
    void *r4 = func_02115264(arg0);
    if (r4 == NULL) {
        r4 = func_02115994(arg0, func_02115d68, arg2 != 0 ? func_02114f70() : NULL, arg0, arg1);
        if (arg2 != 0 && r4 != NULL) {
            func_0211528c(arg0, r4);
        }
    }
    return r4;
}

void *func_02115aa4(void *arg0, void *arg1, s32 arg2) {
    void *r4 = func_02115264(arg0);
    if (r4 == NULL) {
        r4 = func_02115994(arg0, func_02115d68, arg2 != 0 ? func_02114f70() : NULL, arg0, arg1);
        if (arg2 != 0 && r4 != NULL) {
            func_0211528c(arg0, r4);
        }
    }
    return r4;
}

extern void func_02115d90(void *, s32, s32, s32);
extern void func_02115d10(void *, s32, s32);
extern void func_02009740(void *, void *);
extern void func_0200a248(void *);
extern u8 *func_021150ac(void *);
extern void *func_02115be8(void *, void *, s32);
extern u8 *func_02115174(void *);
extern void *func_0211519c(void *, void *, void *, void *);
extern void func_02006da8(void *, void *);
void *func_02115b10(void *arg0, void *arg1, s32 arg2) {
    void *r4 = func_02115264(arg0);
    if (r4 == NULL) {
        r4 = func_02115994(arg0, func_02115d90, arg2 != 0 ? func_02114f70() : NULL, arg0, arg1);
        if (arg2 != 0 && r4 != NULL) {
            func_0211528c(arg0, r4);
        }
    }
    return r4;
}

extern void func_02115dc0(void *, s32, s32, s32);
void *func_02115b7c(void *arg0, void *arg1, s32 arg2) {
    void *r4 = func_02115264(arg0);
    if (r4 == NULL) {
        r4 = func_02115994(arg0, func_02115dc0, arg2 != 0 ? func_02114f70() : NULL, arg0, arg1);
        if (arg2 != 0 && r4 != NULL) {
            func_0211528c(arg0, r4);
        }
    }
    return r4;
}

#pragma optimization_level 2
void *func_02115be8(void *arg0,void *arg1,s32 arg2) {
unsigned long total; u8 *p=func_02115264(arg0); unsigned long size; void *ctx;
if(!p) {
ctx=0;
if((s32)func_0211519c(arg0,&data_0216cad4,(void *)0x3c,0)!=0x3c)return 0;
size=data_0216cad4.count*4;total=size*2;
if(!arg1)return 0;
if(arg2)ctx=func_02114f70();
p=func_0211543c(arg1,total+0x5c,func_02115df0,(u32)ctx,(u32)arg0);
if(!p)return 0;
{s32 got=(s32)func_0211519c(arg0,p,(void *)(size+0x3c),0); if(got!=(s32)size+0x3c)return 0;}
func_02009008(p+0x3c,p+0x3c+*(u32 *)(p+0x38)*4,size);
func_02008f74(p+0x3c,0,size);
func_02006da8(p,(void *)(total+0x3c));
if(arg2)func_0211528c(arg0,p);
}
return p;
}
#pragma optimization_level 4
void func_02115d10(void *arg0, s32 arg1, s32 arg2)
{
  void *r5;
  void *r4;
  if (arg1 == 0)
  {
    return;
  }
  r5 = func_02008128();
  r4 = func_02114f58((void *) arg1);
  if (arg0 == func_02115264((void *) arg2))
  {
    func_0211528c((void *) arg2, NULL);
    func_02114f58(r4);
  }
  func_0200813c(r5);
}
#pragma peephole on
void func_02115d68(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02115d10(arg0, arg2, arg3);
    func_02009720(arg0, (u8 *)arg0 + arg1);
}

void func_02115d90(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02115d10(arg0, arg2, arg3);
    func_02009740(arg0, (u8 *)arg0 + arg1);
    func_0200a248(arg0);
}

void func_02115dc0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02115d10(arg0, arg2, arg3);
    func_02009760(arg0, (u8 *)arg0 + arg1);
    func_0200a2e0(arg0);
}

void func_02115df0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02115d10(arg0, arg2, arg3);
    func_0200a2e0(arg0);
}

#pragma peephole off
void func_02115e10(s32 arg0, s32 arg1, void *arg2, s32 arg3) {
    if (func_0200a530(arg2, arg3) != arg0) {
        goto quit;
    }
    func_0200a4fc(arg2, arg3, 0);
    func_02009760((void *)arg0, (void *)(arg0 + arg1));
quit:
    return;
}
extern s32 func_0200a4f4(void *);
s32 func_02115e58(s32 arg0, u16 arg1, s32 arg2, s32 arg3) {
    u8 *obj = (u8 *)arg0;
    u32 count;
    u8 *entry;
    u32 field3c;
    s32 len;
    void *buf;

    if (func_0200a530((void *)arg0, arg1) != 0) {
        return 1;
    }
    count = func_0200a4f4((void *)arg0);
    entry = (u8 *)arg0 + (*(u32 *)((u8 *)arg0 + 0x38) + arg1) * 4;
    field3c = *(u32 *)(entry + 0x3c);
    if (arg1 < count - 1) {
        len = *(u32 *)(entry + 0x40) - field3c;
    } else {
        len = *(u32 *)((u8 *)arg0 + 8) - field3c;
    }
    if (arg3 == 0) {
        return 0;
    }
    buf = func_0211543c((void *)arg3, len + 0x20, (void *)func_02115e10, arg0, arg1);
    if (buf == NULL) {
        return 0;
    }
    if ((s32)func_0211519c((void *)arg2, buf, (void *)len, (void *)field3c) != len) {
        return 0;
    }
    func_02006da8(buf, (void *)len);
    func_0200a4fc((void *)arg0, arg1, buf);
    return 1;
}

s32 func_02115f20(s32 arg0,void *arg1,u16 arg2,s32 arg3,s32 arg4) {
 u8 c[12];
 u32 b[2];
 u32 a[2];
 u32 *p;
 func_0200a328(a);
 b[0]=a[0];b[1]=a[1];
 p=b;
 if(!arg1)return 0;
 while(func_0200a348(arg1,c,p)){
 if(c[0]==1 && arg2==*(u16 *)(c+4)){
 if(!func_02115e58(arg0,*(u16 *)(c+2),arg3,arg4))return 0;
 }
 }
 return 1;
}

s32 func_02115fe0(void *arg0) {
 s32 i;
 u8 *p;
 s32 j;
 func_02114f70();
 for(i=0;i<32;i++){
 p=(u8 *)func_02115110(i);
 if(!p)continue;
 func_02113a9c(i,p[0]);
 func_02113abc(i,*(u16 *)(p+2));
 if(*(u32 *)(p+4) && arg0) {
 for(j=0;j<p[0];j++){
 if(!func_02113ad4(i,arg0,*(void **)(p+4)))return 0;
 }
 }
 }
 return 1;
}

s32 func_02116078(u32 arg0, u32 arg1) {
    u8 *p = func_02114f80((void *)arg1);
    if (p == NULL) return 0;
    return func_02116140(arg0, p[9], *(u16 *)(p + 4), p[8], p, arg1);
}

s32 func_021160c0(u32 arg0, u32 arg1, u32 arg2) {
    u8 *p = func_02114fe4((void *)arg1);
    if (p == NULL) return 0;
    void *q = func_02115264(*(void **)p);
    if (q == NULL) return 0;
    u8 *r = func_021166c8(q, arg2);
    if (r == NULL) return 0;
    return func_02116244(arg0, r[9], *(u16 *)(r + 4), r[8], r, q, arg1, arg2);
}

extern void *func_02113fc0(u32,u8,u8);
extern void *func_02114108(u8,void *);
extern void func_0211405c(void *);
extern void func_02114068(void *,void *,u32,u32);
extern void func_02113cfc(u32,u8);
extern void func_02113d3c(u32,u8);
extern void func_02113d5c(u32,u32);
s32 func_02116140(u32 arg0,u8 arg1,u16 arg2,u8 arg3,void *arg4,u32 arg5) {
u8 *data; u32 value; u8 *info=arg4;
void *p=func_02113fc0(arg0,arg1,arg3); void *ctx;
if(!p)return 0;
ctx=func_02114108(arg1,p);
if(func_021157d0(arg2,6,ctx,0,&value)) {func_0211405c(p);return 0;}
if(func_021156ec(arg5,1,ctx,0,(void **)&data)) {func_0211405c(p);return 0;}
func_02114068(p,data+*(u32 *)(data+0x18),0,value);
func_02113cfc(arg0,info[6]);func_02113d3c(arg0,info[7]);func_02113d5c(arg0,arg5);
return 1;
}

