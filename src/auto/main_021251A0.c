/* 54 functions from 0x021251A0 to 0x02126134 (main), found by ds-decomp. */
#include "common.h"
extern char data_02156390[], data_021563a0[];
s32 func_0212646c(void *);
void func_02126434(void *);
void func_02126480(void);
void func_021382fc(s32, s32, void (*)(void), void *, void *);
void *func_021264a8(void *, u32);
s32 func_02126504(void *);
void func_021265d4(void *, void *);
void func_02125f64(u8 *);
void func_02126c20(void *);
void func_021260ec(void *, void *);
extern char data_0215640c[48];
extern char data_0215643c[60];
extern char data_02156478[56];

extern void (*const data_02144f70[])(u32, u32, u32);
extern void func_02006dc4(u32, u32);
extern s32 func_02125074(void *);
extern u16 func_02125054(void *, u16);
extern u32 data_02173180[5];
typedef struct {
    u32 f0, f4, f8, fc, f10;
} Header_02173180;
extern void func_02125524(s32, s32, s32, s32, s32);
extern void func_0212e610(void);
extern s32 func_02125708(u32 *);
extern s32 func_0212508c(u8 *);
extern u8 data_02173198[];
extern u8 data_02173194;
extern u32 data_021561f4[];
extern void func_02125e68(u32, u32);
extern void **func_02125dc4(void *);
extern s32 func_021269c8(void *);
extern void func_02125e20(void *);
extern void func_02126940(void *, void *);
extern void func_02126970(void *);
extern u8 data_0217319c[];
extern u8 data_02173354[];
extern char data_02156388[];
extern void func_0200baa4(void *);
extern void func_02126998(void *, s32);
extern void func_02015a10(void *, const char *, u32, u32);
extern void func_02008f74(void *, s32, u32);
extern void func_0212e7f0(u32, void *);
extern void func_0212ebd8(void);
extern void func_0212c0b8(void);
extern void func_02126844(void);
extern void func_02126bd0(void);
extern void func_0212e7e4(void *, s32);
extern void func_02134844(s32, s32);
extern u8 data_02156328[];
extern void func_02125e48(void *, void *);
extern void func_02125e64(void);
static inline s32 func_02125e20_check(u8 *p) {
    if (*(u32 *)(p + 0x28) & 0x10) {
        return 1;
    }
    return 0;
}

extern void func_02003ab8(void);
void func_021251a0(void) {
    func_02003ab8();
}

extern void func_02003b98(void);
void func_021251ac(void) {
    func_02003b98();
}

extern void func_020036b8(void);
void func_021251b8(void) {
    func_020036b8();
}

extern void func_020035f8(void);
void func_021251c4(void) {
    func_020035f8();
}

extern void func_02004138(void);
extern void func_02004180(u32, u32, u32);
extern void func_020041f0(void);
void func_021251d0(u32 arg0, u32 arg1, u32 arg2) {
    func_02004138();
    func_02004180(arg0, arg1, arg2);
    func_020041f0();
}

extern void func_02003ff8(void);
extern void func_02004084(u32, u32, u32);
extern void func_020040f8(void);
void func_021251fc(u32 arg0, u32 arg1, u32 arg2) {
    func_02003ff8();
    func_02004084(arg0, arg1, arg2);
    func_020040f8();
}

extern void func_02003770(void);
void func_02125228(void) {
    func_02003770();
}

extern void func_02003830(void);
void func_02125234(void) {
    func_02003830();
}

extern void func_02003ce8(void);
void func_02125240(void) {
    func_02003ce8();
}

extern void func_02003dc8(void);
void func_0212524c(void) {
    func_02003dc8();
}

extern void func_02003ea8(void);
void func_02125258(void) {
    func_02003ea8();
}

extern void func_02003f88(void);
void func_02125264(void) {
    func_02003f88();
}

extern void func_02003968(void);
void func_02125270(void) {
    func_02003968();
}

extern void func_02003a48(void);
void func_0212527c(void) {
    func_02003a48();
}

extern void func_02003b28(void);
void func_02125288(void) {
    func_02003b28();
}

extern void func_02003c08(void);
void func_02125294(void) {
    func_02003c08();
}

void func_021252a0(void) {
    func_02003b28();
}

void func_021252ac(void) {
    func_02003c08();
}

extern void func_02003714(void);
void func_021252b8(void) {
    func_02003714();
}

extern void func_0200365c(void);
void func_021252c4(void) {
    func_0200365c();
}

extern void func_020042e4(void);
extern void func_020042fc(u32, u32, u32);
extern void func_02004364(void);
void func_021252d0(u32 arg0, u32 arg1, u32 arg2) {
    func_020042e4();
    func_020042fc(arg0, arg1, arg2);
    func_02004364();
}

extern void func_0200422c(void);
extern void func_02004244(u32, u32, u32);
extern void func_020042ac(void);
void func_021252fc(u32 arg0, u32 arg1, u32 arg2) {
    func_0200422c();
    func_02004244(arg0, arg1, arg2);
    func_020042ac();
}

extern void func_020037d4(void);
void func_02125328(void) {
    func_020037d4();
}

extern void func_02003894(void);
void func_02125334(void) {
    func_02003894();
}

void func_02125340(u32 *arg0) {
    void (*fn)(u32, u32, u32) = data_02144f70[arg0[0]];
    func_02006dc4(arg0[1], arg0[3]);
    fn(arg0[1], arg0[2], arg0[3]);
}

void func_02125374(u8 *arg0) {
    *(u16 *)(arg0 + 0xa) = 0;
    *(u16 *)(arg0 + 8) = 0;
    *(u16 *)(arg0 + 0xc) = 0;
    *(u32 *)(arg0 + 0x10) = 0;
}

s32 func_0212538c(u8 *arg0) {
    if (func_02125074(arg0) != 0) {
        return 0;
    }
    *(u16 *)(arg0 + 0xa) = func_02125054(arg0, *(u16 *)(arg0 + 0xa));
    *(u16 *)(arg0 + 0xc) += 1;
    return 1;
}

u8 *func_021253c8(u8 *arg0) {
    return *(u8 **)(arg0 + 0) + (*(u16 *)(arg0 + 8) << 4);
}

u8 *func_021253d8(u8 *arg0) {
    return *(u8 **)(arg0 + 0) + (*(u16 *)(arg0 + 0xa) << 4);
}

s32 func_021253e8(u8 *arg0) {
    if (func_0212508c(arg0) != 0) {
        return 0;
    }
    *(u16 *)(arg0 + 8) = func_02125054(arg0, *(u16 *)(arg0 + 8));
    *(u16 *)(arg0 + 0xc) -= 1;
    return 1;
}

#pragma opt_schedule off
void func_02125424(u32 arg0, u32 arg1) {
 data_02173180[0]=arg0;
 data_02173180[1]=arg1;
 func_02125374((u8 *)&data_02173180[2]);
}
#pragma opt_schedule reset
void func_02125448(void) {
 u8 *p=func_021253c8((u8 *)data_02173180);
 if(!func_021253e8((u8 *)data_02173180)) return;
 do {
  func_02125340((u32 *)p);
  *(u32 *)((u8 *)data_02173180+0x10)-=*(u32 *)(p+0xc);
  p=func_021253c8((u8 *)data_02173180);
 } while(func_021253e8((u8 *)data_02173180));
}

s32 func_021254a8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *node;
    if (func_02125074((u8 *)data_02173180) != 0) {
        return 0;
    }
    node = func_021253d8((u8 *)data_02173180);
    *(s32 *)(node + 0) = arg0;
    *(s32 *)(node + 4) = arg2;
    *(s32 *)(node + 8) = arg1;
    *(s32 *)(node + 0xc) = arg3;
    func_0212538c((u8 *)data_02173180);
    *(s32 *)((u8 *)data_02173180 + 0x10) += *(s32 *)(node + 0xc);
    return 1;
}

void func_02125510(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02125524(arg0, arg1, arg2, arg3, 0);
}

void func_02125524(s32 arg0, s32 arg1, s32 arg2, s32 arg3, volatile s32 arg4) {
    if (data_02173194 != 0) {
        data_02173194 = data_02173194 + 1;
        return;
    }
    func_02008f74(data_02173198, 0, 0x200);
    if (arg3 == 0) {
        *(u32 *)((u8 *)data_02173198 + 0x1fc) = (u32)func_02125e64;
    } else {
        *(u32 *)((u8 *)data_02173198 + 0x1fc) = (u32)arg3;
    }
    if (arg0 == 0) {
        s32 handler = data_021561f4[3];
        func_02125e68((u32)func_02125e48, handler);
        return;
    }
    func_0212ebd8();
    {u32 first=*(volatile u32 *)arg0, second=*(volatile u32 *)(arg0+4);
*(u32 *)(data_02173198+0x1a8)=first;
*(u32 *)(data_02173198+0x1ac)=second;}
    if (arg4 == 0) {
        func_0212e7f0(1, 0);
        data_02173198[0] = 0;
    } else {
        s32 blk[9];
 s32 (*allocate)(s32)=*(s32 (**)(s32))arg0;
        blk[0] = 0xc;
        blk[1] = 0xe;
        blk[2] = 0x18;
        *(u32 *)((u8 *)data_02173198 + 0x1b0) = allocate(0x1000);
        *(u32 *)((u8 *)data_02173198 + 0x1b4) = (*(s32 (**)(s32))arg0)(0x1000);
        *(u32 *)((u8 *)data_02173198 + 0x1b8) = (*(s32 (**)(s32))arg0)(0x1000);
        blk[3] = *(s32 *)((u8 *)data_02173198 + 0x1b0);
        blk[4] = *(s32 *)((u8 *)data_02173198 + 0x1b4);
        blk[5] = *(s32 *)((u8 *)data_02173198 + 0x1b8);
        blk[6] = 0x1000;
        blk[7] = 0x1000;
        blk[8] = 0x1000;
        func_0212e7f0(2, blk);
        data_02173198[0] = 1;
    }
    func_0212c0b8();
    func_02126844();
    func_02126bd0();
    func_0212e7e4(data_02156328, 0);
    func_02134844(arg2, arg1);
    data_02173198[2] = 2;
    data_02173194 = 1;
}

void func_021256b4(void) {
    if (data_02173194 != 0) {
        func_0212e610();
    }
}

void func_021256d4(u32 arg0, u32 arg1, u32 arg2) {
    u32 args[5];
    args[0] = arg0;
    args[1] = 0;
    args[2] = arg1;
    args[3] = arg2;
    args[4] = 1;
    func_02125708(args);
}

extern char data_0215633c[];
extern char data_0215635c[];
extern u32 func_02126900(void *);
extern void *func_02126868(void *, void *, u32);
extern void func_02126a28(void *, s32);
extern void func_02126a58(void *, s32);
extern void func_02126a88(void *, s32);
extern void func_02126ab8(void *, s32);
extern void func_02126ae8(void *, s32);
extern void func_02126b18(void *);
extern s32 func_02126ba0(void *);
extern void *func_02126b68(void *, s32);
extern void func_021357dc(void *, s32);
extern void func_0200b888(void *);
#pragma opt_propagation off
s32 func_02125708(u32 *__restrict arg0) {
    struct Alloc {
        void *(*alloc)(u32);
        void (*free)(void *);
    };
    struct Arg {
        struct Alloc *f0;
        void *f4;
        u32 f8;
        u32 fc;
        u32 f10;
    } *__restrict a = (void *)arg0;
    struct Obj {
        void *f0;
        void *f4;
        u32 f8;
        struct Obj *fc;
        struct Alloc alloc;
        u32 f18;
        u32 f1c;
    };
    s32 zero = 0;
    struct Obj *__restrict obj;
    s32 val;
    struct {
        u32 f0;
        u32 f4;
        u32 f8;
        u32 fc;
        u32 f10;
        u8 f14;
        u8 pad[3];
        u32 f18;
        u32 f1c;
        u32 f20;
        u32 f24;
    } buf;
    u32 size;
    s32 i;

    if (data_02173194 == 0) {
        func_02125e68(data_021561f4[8], data_021561f4[1]);
        return zero;
    }
    if (a->f0 == NULL && a->f4 == NULL) {
        func_02125e68(data_021561f4[8], data_021561f4[3]);
        return zero;
    }
    if (a->f0 != NULL && (a->f0->alloc == NULL || a->f0->free == NULL)) {
        func_02125e68(data_021561f4[8], data_021561f4[3]);
        return 0;
    }
    if (a->f8 == 0 || a->f8 > 2) {
        func_02125e68(data_021561f4[8], (u32)data_0215633c);
        return 0;
    }
    obj = (void *)func_02125dc4((void *)zero);
    if (obj == NULL) {
        return zero;
    }
    val = ((s8)data_02173198[2] + 1) * 0x1ff6;
    func_02008f74(&buf, zero, sizeof(buf));
    buf.f0 = 1;
    buf.f4 = a->f8;
    buf.f8 = val;
    buf.fc = zero;
    buf.f10 = 1;
    buf.f14 = 1;
    buf.f18 = a->fc;
    buf.f20 = a->f10;
    buf.f1c = zero;
    size = func_02126900(&buf);
    if (a->f0 != NULL) {
        obj->f4 = a->f0->alloc(size);
    } else {
        obj->f4 = a->f4;
    }
    obj->f0 = func_02126868(&buf, obj->f4, size);
    if (obj->f0 == NULL) {
        func_02125e68(data_021561f4[8], (u32)data_0215635c);
        return 0;
    }
    func_02126a28(obj->f0, 0x10);
    func_02126a58(obj->f0, zero);
    func_02126a88(obj->f0, zero);
    func_02126ab8(obj->f0, zero);
    func_02126ae8(obj->f0, zero);
    if (a->f10 != 0) {
        func_02126b18(obj->f0);
    }
    obj->f18 = a->f10;
    if (a->f0 != NULL) {
        obj->alloc = *a->f0;
    } else {
        obj->alloc.alloc = (void *(*)(u32))zero;
        obj->alloc.free = (void (*)(void *))zero;
    }
    obj->fc = obj;
    for (i = 0; i < func_02126ba0(obj->f0); i++) {
        func_021357dc(func_02126b68(obj->f0, i), 1);
    }
    func_0200b888(&obj->f1c);
    data_02173198[1]++;
    return (s32)&obj->f8;
}
#pragma opt_propagation on
extern u8 data_02156378[];
extern void func_02126b40(void *);
extern void func_021268c8(void *);
void func_02125994(void *arg0) {
    void **p;
    if (!data_02173194) {
        func_02125e68(data_021561f4[9], data_021561f4[1]);
        return;
    }
    if (arg0 == NULL) {
        func_02125e68(data_021561f4[9], data_021561f4[5]);
        return;
    }
    p = func_02125dc4(arg0);
    if (p == NULL) {
        func_02125e68(data_021561f4[9], (u32)data_02156378);
        return;
    }
    if (p[6] != NULL) {
        func_02126b40(p[0]);
    }
    func_021268c8(p[0]);
    p[0] = NULL;
    if (p[5] != NULL) {
        ((void (*)(void *))p[5])(p[1]);
    }
    func_02125e20(p);
    data_02173198[1]--;
}

s32 func_02125a5c(void *arg0) {
    s32 ret;
    if (!data_02173194) {
        func_02125e68(data_021561f4[11], data_021561f4[1]);
        return 0;
    }
    if (arg0 == NULL) {
        func_02125e68(data_021561f4[11], data_021561f4[5]);
        return 0;
    }
    ret = func_021269c8(*func_02125dc4(arg0));
    if (ret == 0) {
        return 0;
    }
    if (ret == 1) {
        return 1;
    }
    if (ret == 2) {
        return 2;
    }
    if (ret == 3) {
        return 3;
    }
    return 0;
}

void func_02125af0(void *arg0, void *arg1) {
    void **p;
    if (!data_02173194) {
        func_02125e68(data_021561f4[10], data_021561f4[1]);
        return;
    }
    if (arg0 == NULL) {
        func_02125e68(data_021561f4[10], data_021561f4[5]);
        return;
    }
    if (arg1 == NULL) {
        func_02125e68(data_021561f4[10], data_021561f4[4]);
        return;
    }
    p = func_02125dc4(arg0);
    func_02125e20(p);
    func_02126940(*p, arg1);
}

void func_02125b78(void *arg0) {
    if (!data_02173194) {
        func_02125e68(data_021561f4[2], data_021561f4[1]);
        return;
    }
    if (arg0 == NULL) {
        func_02125e68(data_021561f4[2], data_021561f4[5]);
        return;
    }
    func_02126970(*func_02125dc4(arg0));
}

void func_02125bd4(void *arg0, s32 arg1) {
    if (!data_02173194) {
        func_02125e68(data_021561f4[6], data_021561f4[1]);
        return;
    }
    if (arg0 == NULL) {
        func_02125e68(data_021561f4[6], data_021561f4[5]);
        return;
    }
    func_02126998(*func_02125dc4(arg0), arg1);
}

double func_0201e6b4(double);
void func_021269f8(void *, s32);
void func_02125c38(void *arg0, float arg1) {
void **p;
s32 value;
if (!data_02173194) {func_02125e68(data_021561f4[7],data_021561f4[1]); return;}
if (!arg0) {func_02125e68(data_021561f4[7],data_021561f4[5]); return;}
p=func_02125dc4(arg0);
if(arg1 < 0.01f) value=-960;
else if(arg1 >= 1.0f) value=0;
else value=(s32)(10.0f * (20.0f * (float)func_0201e6b4((double)arg1)));
func_021269f8(*p,value);
}

s32 func_0201f8cc(u32);
s32 func_020203d4(s32,s32);
s32 func_02020888(s32,s32);
s32 func_0201ff0c(s32);
void func_02125d00(void *arg0, u32 arg1, u32 arg2) {
void **p;
s32 value;
if(data_02173194==0) {func_02125e68(data_021561f4[0],data_021561f4[1]); return;}
if(arg0==NULL) {func_02125e68(data_021561f4[0],data_021561f4[5]); return;}
p=func_02125dc4(arg0);
value=func_0201ff0c(func_02020888(func_020203d4(0x4184cccd,func_0201f8cc(arg2)),0x4185999a));
func_02126a28(*p,value);
value=func_0201ff0c(func_02020888(func_020203d4(0x4184cccd,func_0201f8cc(arg1)),0x4185999a));
func_02126a58(*p,value);
}

void **func_02125dc4(void *arg0) {
    void **ret = NULL;
    if (arg0 == NULL) {
        s32 i;
        for (i = 0; i < 4; i++) {
            if (*(u32 *)(data_02173198 + i * 0x68 + 4) == 0) {
                ret = (void **)(data_0217319c + i * 0x68);
                break;
            }
        }
    } else {
        ret = *(void ***)((u8 *)arg0 + 4);
    }
    return ret;
}

#pragma opt_propagation off
void func_02125e20(void *arg0) {
    u8 *p = (u8 *)arg0;
    s32 flag = (*(u32 *)(p + 0x28) & 0x10) != 0;
    if (flag != 0) {
        func_0200baa4(p + 0x1c);
    }
}
#pragma opt_propagation on
void func_02125e48(void *arg0, void *arg1) {
    (*(void (**)(void *))((u8 *)data_02173198 + 0x1fc))(arg1);
}

void func_02125e64(void) {
}

void func_02125e68(u32 arg0, u32 arg1) {
    func_02015a10(data_02173354, data_02156388, arg0, arg1);
    (*(void (**)(void *))((u8 *)data_02173198 + 0x1fc))(data_02173354);
}

s32 func_02125ea4(u8 *p) {
 if(func_0212646c(p)==0 && *(s32 *)(p+0x78)==0) {
  func_02126434(p);
  *(s32 *)(p+0x78)=1;
  func_0212c0b8();
  func_021382fc(2,4,func_02126480,p,data_02156390);
  *(void **)(p+0x10)=func_021264a8(p+0x14,0x60);
  if(func_02126504(*(void **)(p+0x10))==0) {
   func_02126c20(data_021563a0);
   func_02125f64(p);
   return 0;
  }
  func_021265d4(*(void **)(p+0x10),p);
  *(s32 *)(p+0x78)=0;
 }
 ++*(s32 *)(p+0x74);
 return 1;
}

extern char data_021563d4[];
void func_02126584(void *);
void func_021264f0(void *);
void func_0213825c(s32,s32);
void func_0212c200(void);
void func_02125f64(u8 *p) {
 s32 i;
 if (*(s32 *)(p+0x78)==0) --*(s32 *)(p+0x74);
 if (*(s32 *)(p+0x74)<0) {func_02126c20(data_021563d4); return;}
 if (*(s32 *)(p+0x74)==0 || *(s32 *)(p+0x78)==1) {
  for(i=0;i<4;i++) func_021260ec(p,((void **)p)[i]);
  if(*(void **)(p+0x10)) {
   func_02126584(*(void **)(p+0x10));
   func_021264f0(*(void **)(p+0x10));
   *(void **)(p+0x10)=NULL;
  }
  func_0213825c(2,4);
  func_0213825c(5,*(s32 *)(p+0x7c));
  func_0212c200();
  *(s32 *)(p+0x78)=0;
 }
}

void *func_021386a8(void *, u32);
s32 func_0212646c(void *);
s32 func_02138704(void *, void *, void *, u32);
void func_02126c20(void *);
void func_021260ec(void *, void *);
void *func_02126010(void **arg0, void *arg1, u8 *arg2, u32 arg3) {
s32 i;
void *p=NULL;
if(func_0212646c(arg0)==0){
func_02126c20(data_0215640c);
return p;
}
for(i=0;i<4;i++){
if(arg0[i]==NULL){
p=arg0[i]=func_021386a8(arg2,arg3);
arg2+=0xe4;
arg3-=0xe4;
break;
}
}
if(i==4){
func_02126c20(data_0215643c);
func_021260ec(arg0,p);
return NULL;
}
if(func_02138704(p,arg1,arg2,arg3)==0){
func_02126c20(data_02156478);
func_021260ec(arg0,p);
return NULL;
}
return p;
}

extern void func_02138a60(void *);
extern void func_021386f0(void *);
void func_021260ec(void *arg0, void *arg1) {
    void **arr = (void **)arg0;
    s32 i;
    if (arg1 == NULL) {
        return;
    }
    func_02138a60(arg1);
    for (i = 0; i < 4; i++) {
        if (arr[i] == arg1) {
            func_021386f0(arr[i]);
            arr[i] = NULL;
            return;
        }
    }
}

