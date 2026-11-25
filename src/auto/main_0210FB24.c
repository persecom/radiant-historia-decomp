/* 36 functions from 0x0210F550 to 0x02110518 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 v[10]; } Config_021100e4;
extern const Config_021100e4 data_02144bb8;
extern u8 *func_020c9b24(void *, u16, u8);
extern void func_020c7894(u8 *, u8);
static inline void ApplyConfig_021100e4(void *list, Config_021100e4 *p) {
 u8 *obj; s32 type;
 type=p->v[1];
 obj=func_020c9b24(list,(u16)p->v[0],(u8)type);
 *(s16 *)(obj+0x32)=p->v[2];
 *(s16 *)(obj+0x34)=p->v[3];
 *(s16 *)(obj+0x36)=p->v[4];
 *(s16 *)(obj+0x38)=p->v[5];
 *(s16 *)(obj+0x3e)=p->v[6];
 *(s16 *)(obj+0x40)=p->v[7];
 obj[0x43]+=(u8)p->v[9];
 if(type==5) func_020c7894(obj,(u8)p->v[8]);
}
extern u8 *data_02160204;
typedef struct { u8 bit0:1; u8 rest:7; } Flags_02110000;
extern void (*data_02162a70)(void);
extern s32 (*data_02162a6c)(void);

extern void *data_02162b80;
extern void *data_02155c3c;
extern void func_020c9b64(void *);
extern void func_0210c5dc(void *);
extern void *func_0210c518(u32, void *);
extern void func_02125424(void *, u32);
extern void func_021254a8(u32, u32, u32, u32);
extern void func_020c6d78(void *);
extern void func_020c992c(void);
extern void *func_0210c594(u32, void *);
extern BOOL func_020c7408(void);
extern void func_02110518(void *);
extern void func_02110a28(void *);
extern void func_02110abc(void *);

extern void func_020bdf38(void);
extern void func_020a8440(void);
s32 func_020a47c8(void);

#pragma scheduling off

#pragma scheduling on
int func_02002fb0(s32,s32,s32,s32,s32);
#pragma scheduling off

#pragma scheduling on

void func_0210fb24(void)
{
  s32 zero = 0;
  s32 one = 1;
  func_0210f448();
  func_02004d70(7);
  func_02004ee8(16);
  func_020048a8(0x60);
  func_0200518c(0x180);
  func_02005228(8);
  func_020027d4(one, 4, one);
  func_020030e4(zero);
  *((volatile u32 *) 0x4000000) &= 0xffcfffef;
  *((volatile u32 *) 0x4000000) &= ~0x1f00;
  *((volatile u32 *) 0x4000000) = ((*((volatile u32 *) 0x4000000)) & (~0x1f00)) | 0x100;
  *((volatile u16 *) 0x400000a) = ((*((volatile u16 *) 0x400000a)) & (~3)) | 1;
  *((volatile u16 *) 0x400000e) = ((*((volatile u16 *) 0x400000e)) & (~3)) | 2;
  *((volatile u16 *) 0x400000c) = ((*((volatile u16 *) 0x400000c)) & (~3)) | 3;
  *((volatile u16 *) 0x4000008) = ((*((volatile u16 *) 0x4000008)) & (~3)) | 3;
  *((volatile u16 *) 0x4000060) &= 0xffffcffd;
  *((volatile u16 *) 0x4000060) = ((*((volatile u16 *) 0x4000060)) & (~0x3000)) | 0x10;
  *((volatile u16 *) 0x4000060) = ((*((volatile u16 *) 0x4000060)) & (~0x3000)) | 8;
  func_02002920((void *) 0x4000050, one, 32, zero, zero);
  func_02002fb0(zero, zero, 0x7fff, 0x3f, zero);
  func_0210f410(3, 0x10000);
  *((volatile u32 *) 0x4001000) &= 0xffcfffef;
  func_0200283c(2);
  *((volatile u32 *) 0x4001000) &= ~0x1f00;
  *((volatile u32 *) 0x4001000) = ((*((volatile u32 *) 0x4001000)) & (~0x1f00)) | 0x1100;
  *((volatile u16 *) 0x4001008) &= ~3;
  *((volatile u16 *) 0x400100a) = ((*((volatile u16 *) 0x400100a)) & (~3)) | 1;
  *((volatile u16 *) 0x400100c) = ((*((volatile u16 *) 0x400100c)) & (~3)) | (2 & 0xFFFFFFFFFFFFFFFF);
  *((volatile u16 *) 0x400100e) = ((*((volatile u16 *) 0x400100e)) & (~3)) | 3;
}
#pragma optimization_level 4
void func_0210fcd4(u32 arg0) {
    if (data_02162b80 != NULL) {
        func_0210c5dc(data_02162b80);
        data_02162b80 = NULL;
    }
    data_02162b80 = func_0210c518(arg0 << 4, data_02155c3c);
    func_02125424(data_02162b80, arg0);
}

void func_0210fd24(u32 *arg0, u32 arg1) {
    arg0[0] = arg1;
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0;
}

void func_0210fd38(u32 *arg0, u32 arg1, u32 arg2, u32 arg3) {
    u32 len = arg0[3];
    if (len != 0) {
        u32 off = arg0[2];
        u32 end = off + len;
        if (end == arg2 && arg1 == arg0[1] + len) {
            arg0[3] = len + arg3;
            return;
        }
        func_021254a8(arg0[0], arg0[1], off, len);
    }
    arg0[2] = arg2;
    arg0[1] = arg1;
    arg0[3] = arg3;
}

extern void *func_020c9c10(void *, u32);
extern void func_020c7090(void *);
extern u32 func_020c73b8(void *);
extern void func_020c738c(void *, u32, u32);
extern u8 *func_0210fdc4(u8 *, u32, s32);
typedef struct {
    u32 field_0;
    u32 field_4;
    u8 field_8[0x80];
    u32 field_88;
    u32 field_8c;
    u32 field_90;
} Entry_94;

typedef struct {
    u16 a;
    u16 b;
} Pair_021103c0;

extern void func_020c9940(void *);
extern Entry_94 data_02162b84[];
extern u8 data_02162b88[];
extern u8 data_02162c0c[];
extern u8 data_02162c10[];
extern s32 func_0210feb8(u32, u32, u32, u32, u32);
void func_0210fd94(u32 *arg0) {
    if (arg0[3] != 0) {
        func_021254a8(arg0[0], arg0[1], arg0[2], arg0[3]);
        arg0[1] = 0;
        arg0[2] = 0;
        arg0[3] = 0;
    }
}

u8 *func_0210fdc4(u8 *dst, u32 src, s32 size) {
    u8 *p = dst;
    const s8 *s = (const s8 *)src;
    while (size > 0) {
        *p++ = *s++;
        size--;
    }
    return dst;
}

void func_0210fde8(void) {
    s32 i;
    for (i = 0; i < 0x100; i++) {
        ((Entry_94 *)data_02162b84)[i].field_0 = 0;
        ((Entry_94 *)data_02162b84)[i].field_4 = 0;
    }
}

s32 func_0210fe1c(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    return func_0210feb8(arg0, arg0, arg1, arg2, arg3);
}

void func_0210fe40(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    s32 i;
    for (i = 0; i < 0x100; i++) {
        if (data_02162b84[i].field_0 == 0) {
            data_02162b84[i].field_0 = 1;
            data_02162b84[i].field_4 = arg0;
            data_02162b84[i].field_88 = arg1;
            data_02162b84[i].field_8c = arg2;
            func_0210fdc4(data_02162b84[i].field_8, arg3, 0x80);
            return;
        }
    }
}

#pragma push
#pragma scheduling off
s32 func_0210feb8(u32 a, u32 b, u32 size, u32 path, u32 packed) {
s8 prefix[256], name[256], full[256];
s32 i, j;
s8 *out;
if (!packed) { func_0210fe40(a,b,size,path); return; }
func_02108ffc();
for(i=0;i<256;i++) {
 if (((s8 *)path)[i]) prefix[i]=((s8 *)path)[i];
 else { j=i-1; for(;;) { if(prefix[j-1]=='/') { prefix[j]=0; break; } j--; } }
}
i=0; out=full;
for(;;) {
func_02108ffc();
func_0210fdc4((u8 *)out,(u32)prefix,252);
func_0210fdc4((u8 *)name,b+i,252);
if(name[0]==0) return name[0];
func_0210fdc4((u8 *)&size,b+(i+252),4);
i+=256;
func_020123cc(out,name);
func_0210fe40(a,b+i,size,(u32)out);
size=((s32)size+63)/64*64;
i+=size;
}
}
#pragma pop
void func_021100c4(void);
s32 func_021100c8(void);
void func_02110000(void) {
 func_0210c010(); func_02107b38(); func_020a8404(); func_020a473c();
 func_02021284(); func_021088cc(); func_020e9c90(); func_021071cc(0xd01);
 func_021152a8(); func_021152bc(0x1000); func_020bddc4(); func_02021c48();
 func_020bd690(); *(u32 *)(data_02160204+0x90)=func_020bd38c();
 func_02021ac4();
 if (((Flags_02110000 *)(data_02160204+0x68))->bit0 == 0) func_02021c7c();
 func_020bd574(); func_0207afc8(); func_0210fde8();
 data_02162a70=func_021100c4; data_02162a6c=func_021100c8;
 func_0210959c(0); func_0210959c(1); func_0210959c(2);
}

void func_021100c4(void) {
}

s32 func_021100c8(void) {
    func_020a8440();
    return func_020a47c8();
}

void func_021100d8(void) {
    func_020bdf38();
}

#pragma opt_propagation off
s32 func_021100e4(u8 *arg0) {
    Config_021100e4 cfg;
    Config_021100e4 *p;
    u8 *obj;
    s32 type;
    func_020c6d78(arg0);
    if (*(void **)(arg0 + 0x30) == 0) {
        *(void **)(arg0 + 0x30) = func_0210c594(8, data_02155c3c);
        func_020c992c();
    }
    func_020c9a04(*(void **)(arg0 + 0x30), 1);
    cfg = data_02144bb8;
    p = &cfg;
    type = p->v[1];
    obj = func_020c9b24(*(void **)(arg0 + 0x30), (u16)p->v[0], (u8)type);
    *(s16 *)(obj + 0x32) = p->v[2];
    *(s16 *)(obj + 0x34) = p->v[3];
    *(s16 *)(obj + 0x36) = p->v[4];
    *(s16 *)(obj + 0x38) = p->v[5];
    *(s16 *)(obj + 0x3e) = p->v[6];
    *(s16 *)(obj + 0x40) = p->v[7];
    obj[0x43] += (u8)p->v[9];
    if (type == 5) func_020c7894(obj, (u8)p->v[8]);
    return 0;
}
#pragma opt_propagation on
extern void func_0210c5dc(void *);
extern void func_021101ec(void *);
void func_021101cc(void *arg0) {
    func_021101ec(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_021101ec(void *arg0) {
    if (*(void **)((u8 *)arg0 + 0x30) != NULL) {
        func_020c9940(*(void **)((u8 *)arg0 + 0x30));
        if (*(void **)((u8 *)arg0 + 0x30) != NULL) {
            func_0210c5dc(*(void **)((u8 *)arg0 + 0x30));
            *(void **)((u8 *)arg0 + 0x30) = NULL;
        }
        *(void **)((u8 *)arg0 + 0x30) = NULL;
    }
}

s32 func_02110228(void *arg0) {
    func_020c9b64(*(void **)((u8 *)arg0 + 0x30));
    return 0;
}

s32 func_0211023c(u8 *arg0)
{
    u8 *obj;
    s32 result;
    void *rp = &result;
    obj = (u8 *)func_020c9c10(*(u8 **)(arg0 + 0x30), 0);
    *(s32 *)rp = (*(s32 (**)(u8 *))(obj + 0x18))(obj);
    func_020c738c(arg0, func_020c73b8(obj), 2);
    return *(s32 *)rp;
}

void func_02110288(void *arg0, u32 arg1, u32 arg2) {
    volatile u16 i = 0;
    u8 *obj = func_020c9c10(*(void **)((u8 *)arg0 + 0x30), i);
    ((void (*)(u8 *, u32, u32))(*(void **)(obj + 0x24)))(obj, arg1, arg2);
}

void func_021102bc(u8 *arg0, u32 arg1, u32 arg2) {
    volatile u16 i = 0;
    s16 x;
    s16 y;
    u8 *obj = func_020c9c10(*(void **)(arg0 + 0x30), i);
    x = arg1 + (*(s16 *)(obj + 0x3a) - *(s16 *)(arg0 + 0x38));
    y = arg2 + (*(s16 *)(obj + 0x3c) - *(s16 *)(arg0 + 0x3a));
    ((void (*)(u8 *, s32))(*(void **)(obj + 0x10)))(obj, x);
    ((void (*)(u8 *, s32))(*(void **)(obj + 0x14)))(obj, y);
    *(s16 *)(arg0 + 0x38) = arg1;
    *(s16 *)(arg0 + 0x3a) = arg2;
}

void func_02110340(u8 *arg0, u32 arg1) {
    func_021102bc(arg0, arg1, *(s16 *)(arg0 + 0x3a));
}

void func_02110350(u8 *arg0, u32 arg1) {
    func_021102bc(arg0, *(s16 *)(arg0 + 0x38), arg1);
}

void func_02110364(u8 *arg0, u32 arg1) {
    volatile u16 i = 0;
    u8 *obj = func_020c9c10(*(void **)(arg0 + 0x30), i);
    ((void (*)(u8 *, u32))(*(void **)(obj + 0x1c)))(obj, (u8)(arg1 + (obj[0x43] - arg0[0x3c])));
    arg0[0x3c] = arg1;
}

void func_021103a8(void *arg0) {
    func_020c7090(func_020c9c10(*(void **)((u8 *)arg0 + 0x30), 0));
}

void func_021103c0(u8 *arg0, s32 arg1) {
    u8 *base = *(u8 **)(arg0 + 0x34) + 0x30;
    u8 *obj;
    u8 *entry;
    arg0[0x3d] = arg1;
    u16 *table = (arg1 & 0xff) ? (u16 *)(base + 0x14) : (u16 *)(base + 0xa);
    obj = func_020c9c10(*(void **)(arg0 + 0x30), 0);
    *(u16 *)(obj + 0x30) = table[*(u16 *)(arg0 + 0x3e)];
    entry = base + *(u16 *)(arg0 + 0x3e) * 8;
    *(Pair_021103c0 *)(obj + 0x32) = *(Pair_021103c0 *)(entry + 0x1e);
    *(Pair_021103c0 *)(obj + 0x36) = *(Pair_021103c0 *)(entry + 0x22);
}

u32 func_02110428(u8 *arg0) {
    func_020c6d78(arg0);
    if (*(u32 *)(arg0 + 0x30) == 0) {
        *(u32 *)(arg0 + 0x30) = (u32)func_0210c594(8, data_02155c3c);
        func_020c992c();
    }
    return 0;
}

extern void func_02110484(void *);
void func_02110464(void *arg0) {
    func_02110484(arg0);
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_02110484(void *arg0) {
    if (*(void **)((u8 *)arg0 + 0x30) != NULL) {
        func_020c9940(*(void **)((u8 *)arg0 + 0x30));
        if (*(void **)((u8 *)arg0 + 0x30) != NULL) {
            func_0210c5dc(*(void **)((u8 *)arg0 + 0x30));
            *(void **)((u8 *)arg0 + 0x30) = NULL;
        }
        *(void **)((u8 *)arg0 + 0x30) = NULL;
    }
}

s32 func_021104c0(void *arg0) {
    func_020c9b64(*(void **)((u8 *)arg0 + 0x30));
    return 0;
}

s32 func_021104d4(u8 *arg0) {
    if (func_020c7408() != 0) {
        return 1;
    }
    func_02110518(arg0);
    func_02110a28(arg0);
    if (arg0[0x76] != 0) {
        func_02110abc(arg0);
    }
    return 0;
}

