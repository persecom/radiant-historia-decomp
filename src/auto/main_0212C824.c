/* 37 functions from 0x0212C824 to 0x0212D7BC (main), found by ds-decomp. */
#include "common.h"
extern char data_02156d20[],data_02156d44[];
typedef struct { u32 head; void *ctx; void *obj; void *objs[2]; s32 pair[2]; s32 pairs[2][2]; s32 a,b,c,d,e,f,g; u32 pad[4]; void (*callback)(void *,s32,s32,s32); void *user; } Unk0212CFC4;
typedef struct { s8 unk00[2]; s8 count; u8 unk03[9]; void *objs[4]; u8 unk1c[0x8c]; s32 unkA8; s32 remaining; } Unk0212D3B4;

extern u8 data_02173df4[20];
extern u8 data_02173e08[720];
extern void func_0212a4a4(void *, u32);

extern s32 func_0212a584(void *);
extern s32 func_0212a58c(void *);
extern s32 func_0212a4b8(void *);
extern void func_0212cbb8(void *);
extern void func_0212a904(void *);
extern void func_0212cfc4(void *);
extern void func_0212a9dc(void);
extern void func_0212d288(void *);
extern void func_0212a9e8(void);
extern void func_0212c824(void *);
static void func_0212d3b4(void *);

extern s32 func_02137d44(void *);
extern s32 func_0212a1d4(void *);
extern char data_02156cdc[];
extern char data_02156cfc[];
extern void func_02137f80(void *, s32, void *, void *);
extern s32 func_0212a180(void *, void *);
extern s32 func_02129bc8(void);
extern void func_0212be08(const char *, ...);
extern void func_0212a0e4(void *);
extern void func_0212a0d0(void *);
extern void func_02013858(void *, void *, s32);
void func_0212c824(void *arg0) {
    u8 *p = (u8 *)arg0;
    u8 *ctx = *(u8 **)(p + 4);
    void *obj = *(void **)(p + 8);
    struct { void *ptr; s32 len; } buf;
    struct { void *ptr; s32 len; } tmp;
    s32 ret;

    (*(void (**)(void *, s32, s32, void *))(*(u8 **)obj + 0x18))(obj, 1, 0xc800, &buf);
    if (buf.len <= 0) {
        (*(void (**)(void *, s32, void *))(*(u8 **)obj + 0x1c))(obj, 1, &buf);
        return;
    }

    if (*(s16 *)(ctx + 0x9a) == 0 && *(s16 *)(ctx + 0x98) != 0xd) {
        func_02137f80(&buf, 0, &tmp, &buf);
        (*(void (**)(void *, s32, void *))(*(u8 **)obj + 0x20))(obj, 0, &tmp);
        if (buf.len < 0x10) {
            (*(void (**)(void *, s32, void *))(*(u8 **)obj + 0x1c))(obj, 1, &buf);
            return;
        }
    }

    if (*(s16 *)(ctx + 0x9a) == 0 && *(s16 *)(ctx + 0x98) != 0xd) {
        ret = func_0212a180(ctx, buf.ptr);
        if (ret == 0 || ret > buf.len) {
            (*(void (**)(void *, s32, void *))(*(u8 **)obj + 0x1c))(obj, 1, &buf);
            return;
        }
        if (ret < 0) {
            (*(void (**)(void *, s32, void *))(*(u8 **)obj + 0x1c))(obj, 1, &buf);
            if (func_02129bc8() == 0) {
                func_0212be08(data_02156cdc, data_02156cfc);
            }
            p[1] = 4;
            return;
        }
    } else {
        ret = 0;
        if (*(s16 *)(ctx + 0x98) == 0xd) {
            func_0212a0e4(ctx);
        } else {
            func_0212a0d0(ctx);
        }
    }

    *(s32 *)(p + 0xa0) = ret;
    if (*(void **)(p + 0x50) != NULL) {
        s32 a = func_0212a1dc(ctx);
        s32 b = func_0212a1ec(ctx);
        s32 c = func_0212a1e4(ctx);
        s32 d = func_0212a228(ctx);
        (*(void (**)(void *, s32, s32, s32, s32))(p + 0x50))(*(void **)(p + 0x54), a, b, c, d);
    }

    if (func_0212a1dc(ctx) == 4) {
        p[3] = 1;
    }

    if (func_0212a1dc(ctx) == 2) {
        s32 len = buf.len;
        if (len >= 0x40) {
            len = 0x40;
        }
        func_02013858(p + 0x60, buf.ptr, len);
    }

    {
        s32 v = func_0212a1dc(ctx);
        if (v == 0xa || v == 0xb || v == 0xc || v == 0x14 || v == 0xf || v == 0xd) {
            (*(void (**)(void *, s32, void *))(*(u8 **)obj + 0x1c))(obj, 1, &buf);
        } else {
            func_02137f80(&buf, ret, &buf, &tmp);
            (*(void (**)(void *, s32, void *))(*(u8 **)obj + 0x20))(obj, 0, &buf);
            (*(void (**)(void *, s32, void *))(*(u8 **)obj + 0x1c))(obj, 1, &tmp);
        }
    }

    p[1] = 2;
}

s32 func_0212caec(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    void *first = *(void **)(arg0 + 0xc);
    s32 i;

    for (i = 0; i < func_0212a1ec(*(void **)(arg0 + 4)); i++) {
        void *obj = *(void **)(arg0 + 0xc + i * 4);
        (*(void (**)(void *, s32, s32, void *))(*(u8 **)obj + 0x18))(obj, 0, 0x4000, arg0 + 0x1c + i * 8);
    }

    *arg1 = (*(s32 *)(arg0 + 0x1c) - func_02137d44(first)) / 2;
    {
        s32 half = *(s32 *)(arg0 + 0x20) / 2;
        s32 v = *(s32 *)(arg0 + 0x38);
        *arg2 = v > half ? half : v;
    }
    if (*(s32 *)(arg0 + 0x3c) >= 0) {
        *arg3 = *(s32 *)(arg0 + 0x3c) - *(s32 *)(arg0 + 0x40);
    } else {
        *arg3 = 0x1fffffff;
    }
    return func_0212a1d4(*(void **)(arg0 + 4));
}

extern s32 func_0212d5e0(void *);
extern s32 func_0212d5d0(void *);
extern s32 func_0212a210(void *);
extern s32 func_0212bcd0(void *,s32,void *);
extern void func_0212a4c0(void *,void *,s32);
extern void func_0212a528(void *);
extern u32 func_0212d70c(void *);
void func_0212cbb8(void *arg) {
u8 *p=arg;
void *ctx=*(void **)(p+4);
void *obj=*(void **)(p+8);
s32 stop=0;
s32 one=1;
s16 header;
s32 tail[2],extra[2];
s32 end;
if(*(s32 *)(p+0x3c)>=0 && *(s32 *)(p+0x40)>=*(s32 *)(p+0x3c) && *(void **)(p+0x48))
(*(void (**)(void *))(p+0x48))(*(void **)(p+0x4c));
if(*(s8 *)(p+3)==1) {
if((*(s32 (**)(void *,s32))(*(u8 **)obj+0x24))(obj,1)==0) {p[1]=3; return;}
}
(*(void (**)(void *,s32,s32,void *))(*(u8 **)obj+0x18))(obj,one,0x7fffffff,p+0x14);
if(func_0212a1dc(ctx)==0 && *(s32 *)(p+0x18)>=4 && (u16)(s16)(((*(s16 **)(p+0x14))[0]>>8&255)|(((*(s16 **)(p+0x14))[0]<<8)&0xff00))==0x8001) {
p[1]=3;
if(func_0212bcd0(*(void **)(p+0x14),*(s32 *)(p+0x18),&header)==0) {
if(header>*(s32 *)(p+0x18)) {
(*(void (**)(void *,s32,void *))(*(u8 **)obj+0x1c))(obj,one,p+0x14); return;
}
func_02137f80(p+0x14,header,p+0x14,tail);
(*(void (**)(void *,s32,void *))(*(u8 **)obj+0x20))(obj,0,p+0x14);
(*(void (**)(void *,s32,void *))(*(u8 **)obj+0x1c))(obj,one,tail);
}
if(*(s32 *)(p+0xa4)==0) return;
while(1) {
s32 i,len;
(*(void (**)(void *,s32,s32,void *))(*(u8 **)obj+0x18))(obj,1,0x7fffffff,p+0x14);
len=*(s32 *)(p+0x18);
if(len==0) return;
for(i=0;i<len;i++) if((*(s8 **)(p+0x14))[i]!=0) break;
func_02137f80(p+0x14,i,p+0x14,tail);
(*(void (**)(void *,s32,void *))(*(u8 **)obj+0x20))(obj,0,p+0x14);
(*(void (**)(void *,s32,void *))(*(u8 **)obj+0x1c))(obj,1,tail);
if(i<len) return;
}
}
end=func_0212d5e0(p);
if(*(s32 *)(p+0x34)>=end) {
if(func_0212a1dc(ctx)!=1 || func_0212d70c(p)!=1) stop=1;
} else if(func_0212a1dc(ctx)==10) {
if(*(s32 *)(p+0x34)>0 && *(s32 *)(p+0x34)+0x240>=end) stop=1;
if(end<=0) stop=1;
}
if(stop) {
p[1]=3;
(*(void (**)(void *,s32,void *))(*(u8 **)obj+0x1c))(obj,1,p+0x14); return;
}
{
s32 buffered=func_0212d5d0(p);
void *other=*(void **)(p+12);
if(buffered > (*(s32 (**)(void *,s32))(*(u8 **)other+0x24))(other,0)/2) {
(*(void (**)(void *,s32,void *))(*(u8 **)obj+0x1c))(obj,1,p+0x14); return;
}
}
if(func_0212d70c(p)!=1 && func_0212a1dc(ctx)==1) {
if(func_0212a210(ctx)==16) {
s32 rate=func_0212a1ec(*(void **)(p+4));
s32 used=*(s32 *)(p+0x34);
if(used+(*(s32 *)(p+0x18)/rate)/2>end) {
func_02137f80(p+0x14,2*(rate*(end-used)),p+0x14,extra);
(*(void (**)(void *,s32,void *))(*(u8 **)obj+0x1c))(obj,1,extra);
}
} else func_0212be08(data_02156d20,data_02156d44);
}
if(func_0212a1dc(ctx)==10) {
(*(void (**)(void *,s32,void *))(*(u8 **)obj+0x1c))(obj,1,p+0x14);
}
func_0212a4c0(ctx,*(void **)(p+0x14),*(s32 *)(p+0x18));
func_0212a528(ctx);
}

s32 func_0212a1dc(void *);
s32 func_0212a228(void *);
u32 func_0212d70c(void *);
void func_02137f80(void *, s32, void *, void *);
void func_0212cfc4(void *arg) {
u8 *p=arg;
Unk0212CFC4 *self=arg;
void *ctx=*(void **)(p+4);
void *obj=*(void **)(p+8);
s32 limit=func_0212a228(ctx);
s32 a=func_0212a584(ctx);
s32 b=func_0212a58c(ctx);
s32 x[2], y[2];
s32 i;
if(func_0212a1dc(ctx)!=1 || func_0212d70c(p)!=1) {
s32 rem=limit-*(s32 *)(p+0x34);
b=b<rem?b:rem;
}
func_02137f80(p+0x14,a,x,y);
(*(void (**)(void *,s32,void *))(*(u8 **)obj+0x20))(obj,0,x);
(*(void (**)(void *,s32,void *))(*(u8 **)obj+0x1c))(obj,1,y);
for(i=0;i<func_0212a1ec(*(void **)(p+4));i++){
s32 one=1;
func_02137f80(p+0x1c+i*8,b*2,x,y);
if(self->callback) self->callback(*(void **)(p+0x5c),i,x[0],x[1]);
obj=self->objs[i];
(*(void (**)(void *,s32,void *))(*(u8 **)obj+0x20))(obj,one,x);
obj=self->objs[i];
(*(void (**)(void *,s32,void *))(*(u8 **)obj+0x1c))(obj,0,y);
}
*(s32 *)(p+0x2c)+=b;
*(s32 *)(p+0x30)+=a;
*(s32 *)(p+0x34)+=b;
*(s32 *)(p+0x40)+=b;
*(s32 *)(p+0x44)+=a;
func_0212a558(ctx);
}

void func_0212d168(u8 *arg0) {
    void *p = *(void **)(arg0 + 4);
    s32 a = func_0212a584(p);
    s32 b = func_0212a58c(p);
    *(s32 *)(arg0 + 0x2c) += b;
    *(s32 *)(arg0 + 0x30) += a;
    *(s32 *)(arg0 + 0x34) += b;
}

void func_0212d1b0(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 4);
    s16 val;
    if (func_0212a4b8(p) == 0) {
        func_0212cbb8(arg0);
    }
    func_0212a904(p);
    if (func_0212a4b8(p) == 3) {
        func_0212cfc4(arg0);
    }
    val = *(s16 *)(p + 0x98);
    if (val == 0xa || val == 0x14 || val == 0xb || val == 0xc || val == 0xf) {
        func_0212d168(arg0);
    }
}

void func_0212d21c(u8 *arg0) {
    s8 type;
    if (*(s32 *)(arg0 + 0xa8) > 0) {
        func_0212a9dc();
        func_0212d288(arg0);
        func_0212a9e8();
    }
    type = *(s8 *)(arg0 + 1);
    if (type == 2) {
        func_0212d1b0(arg0);
    } else if (type == 1) {
        func_0212c824(arg0);
    }
    if (*(s32 *)(arg0 + 0xac) > 0) {
        func_0212a9dc();
        func_0212d3b4(arg0);
        func_0212a9e8();
    }
}

extern void func_02013878(void *, s32, s32);
void func_0212d288(void *arg0) {
    Unk0212D3B4 *p = (Unk0212D3B4 *)arg0;
    s32 buf[2];
    s32 n = p->unkA8 * 2;
    s32 i;
    s32 half;
    s32 count;

    for (i = 0; i < p->count; i++) {
        void *obj = p->objs[i];
        (*(void (**)(void *, s32, s32, void *))(*(u8 **)obj + 0x18))(obj, 0, 0x7fffffff, buf);
        n = n < buf[1] ? n : buf[1];
        obj = p->objs[i];
        (*(void (**)(void *, s32, void *))(*(u8 **)obj + 0x1c))(obj, 0, buf);
    }

    half = n / 2;
    count = half * 2;
    if (count <= 0) {
        return;
    }

    for (i = 0; i < p->count; i++) {
        s32 zero = 0;
        void *obj = p->objs[i];
        (*(void (**)(void *, s32, s32, void *))(*(u8 **)obj + 0x18))(obj, zero, count, buf);
        func_02013878((void *)buf[0], zero, count);
        obj = p->objs[i];
        (*(void (**)(void *, s32, void *))(*(u8 **)obj + 0x20))(obj, 1, buf);
    }

    p->unkA8 -= half;
}

static void func_0212d3b4(void *arg) {
Unk0212D3B4 *arg0=arg;
s32 buf[2];
s32 n=arg0->remaining*2;
s32 i;
s32 half;
s32 count;
for(i=0;i<arg0->count;i++) {
void *obj=arg0->objs[i];
(*(void (**)(void *,s32,s32,void *))(*(u8 **)obj+0x18))(obj,1,0x7fffffff,buf);
n = n < buf[1] ? n : buf[1];
obj=arg0->objs[i];
(*(void (**)(void *,s32,void *))(*(u8 **)obj+0x1c))(obj,1,buf);
}
half=n/2;
count=half*2;
if(count<=0) return;
for(i=0;i<arg0->count;i++) {
void *obj=arg0->objs[i];
(*(void (**)(void *,s32,s32,void *))(*(u8 **)obj+0x18))(obj,1,count,buf);
obj=arg0->objs[i];
(*(void (**)(void *,s32,void *))(*(u8 **)obj+0x20))(obj,0,buf);
}
arg0->remaining-=half;
}

void func_0212d4d0(void) {
    s32 i;
    if (*(void (**)(void *))(data_02173df4 + 0xc) != NULL) {
        (*(void (**)(void *))(data_02173df4 + 0xc))(*(void **)(data_02173df4 + 0x8));
    }
    for (i = 0; i < 4; i++) {
        if ((s8)data_02173e08[i * 0xb4] == 1) {
            func_0212d21c(&data_02173e08[i * 0xb4]);
        }
    }
    if (*(void (**)(void *))(data_02173df4 + 0x4) != NULL) {
        (*(void (**)(void *))(data_02173df4 + 0x4))(*(void **)(data_02173df4 + 0x0));
    }
}

u32 func_0212d540(u8 *arg0) {
    return *(u32 *)(arg0 + 0x30);
}

u32 func_0212d548(void *arg0) {
    return *(u32 *)((u8 *)arg0 + 0x2c);
}

void func_0212d550(u8 *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0x34) = arg1;
}

void func_0212d558(void *arg0, u32 arg1) {
    *(u32 *)((u8 *)arg0 + 0xa4) = arg1;
    func_0212a4a4(*(void **)((u8 *)arg0 + 4), arg1);
}

void func_0212d56c(void *arg0, u32 arg1, u32 arg2) {
    *(u32 *)((u8 *)arg0 + 0x48) = arg1;
    *(u32 *)((u8 *)arg0 + 0x4c) = arg2;
}

void func_0212d578(void *arg0, u32 arg1) {
    *(u32 *)((u8 *)arg0 + 0x3c) = arg1;
}

void func_0212d580(void *arg0, u32 arg1) {
    *(u32 *)((u8 *)arg0 + 0x40) = arg1;
}

void func_0212d588(void *arg0, u32 arg1) {
    *(u32 *)((u8 *)arg0 + 0x44) = arg1;
}

extern s32 func_0212a1dc(void *);
extern s32 func_0212a584(void *);
extern s32 func_0212a58c(void *);
extern s32 func_0212a4b8(void *);
extern void func_0212cbb8(void *);
extern void func_0212a904(void *);
extern void func_0212cfc4(void *);
extern void func_0212a9dc(void);
extern void func_0212d288(void *);
extern void func_0212a9e8(void);
extern void func_0212c824(void *);
static void func_0212d3b4(void *);
void func_0212d590(void *arg0) {
    func_0212a1dc(*(void **)((u8 *)arg0 + 4));
}

extern u8 data_02173df4[20];
extern u8 data_02173e08[720];
extern void func_0212a4a4(void *, u32);
extern s32 func_0212a1e4(void *);
void func_0212d5a0(void *arg0) {
    func_0212a1e4(*(void **)((u8 *)arg0 + 4));
}

extern s32 func_0212a1ec(void *);
void func_0212d5b0(void *arg0) {
    func_0212a1ec(*(void **)((u8 *)arg0 + 4));
}

extern void func_0212a218(void *);
extern s32 func_0212a220(void *);
extern s32 func_0212a228(void *);
void func_0212d5c0(void *arg0) {
    func_0212a218(*(void **)((u8 *)arg0 + 4));
}

s32 func_0212d5d0(void *arg0) {
    return func_0212a220(*(void **)((u8 *)arg0 + 4));
}

s32 func_0212d5e0(void *arg0) {
    return func_0212a228(*(void **)((u8 *)arg0 + 4));
}

extern void func_0212a230(void *);
extern void func_0212a238(void *);
extern s32 func_0212a240(void *);
extern void func_0212a250(void *);
void func_0212d5f0(void *arg0) {
    func_0212a230(*(void **)((u8 *)arg0 + 4));
}

void func_0212d600(void *arg0) {
    func_0212a238(*(void **)((u8 *)arg0 + 4));
}

s32 func_0212d610(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    return func_0212a240(*(void **)((u8 *)arg0 + 4));
}

void func_0212d62c(void *arg0) {
    func_0212a250(*(void **)((u8 *)arg0 + 4));
}

extern void func_0212a258(void *);
extern s32 func_0212a260(void *);
extern s32 func_0212a268(void *);
extern s32 func_0212a270(void *, s32);
void func_0212d63c(void *arg0) {
    func_0212a258(*(void **)((u8 *)arg0 + 4));
}

s32 func_0212d64c(void *arg0) {
    if (func_0212a260(*(void **)((u8 *)arg0 + 4)) > 0) {
        if ((u8)(s8)(*(s8 *)((u8 *)arg0 + 1) - 2) <= 1) {
            return func_0212a268(*(void **)((u8 *)arg0 + 4));
        }
    }
    return 0;
}

s32 func_0212d694(void *arg0, s32 arg1) {
    if (func_0212a260(*(void **)((u8 *)arg0 + 4)) > 0) {
        if ((u8)(s8)(*(s8 *)((u8 *)arg0 + 1) - 2) <= 1) {
            return func_0212a270(*(void **)((u8 *)arg0 + 4), arg1);
        }
    }
    return -0x80;
}

void *func_0212d6e4(void *arg0) {
    return (u8 *)arg0 + 0x60;
}

extern void func_0212a27c(void *);
extern void func_0212a2ac(void *);
extern s32 data_021740d8[];
extern u32 data_021740f0[250];
void func_0212d6ec(void *arg0) {
    func_0212a27c(*(void **)((u8 *)arg0 + 4));
}

void func_0212d6fc(void *arg0) {
    func_0212a2ac(*(void **)((u8 *)arg0 + 4));
}

u32 func_0212d70c(void *arg0) {
    return *(u32 *)((u8 *)arg0 + 0xb0);
}

s32 func_0212d714(void) {
    data_021740d8[5]++;
    if (data_021740d8[5] == 1) {
        s32 i;
        for (i = 0; i < 1000; i++) {
            data_021740f0[i] = 0;
        }
    }
    return 1;
}

extern void *memset(void *, int, unsigned long);
void func_0212d76c(void) {
    if (--data_021740d8[5] != 0) {
        return;
    }
    memset(data_021740f0, 0, sizeof(data_021740f0));
}

