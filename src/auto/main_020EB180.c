/* 11 functions from 0x020EB180 to 0x020EC12C (main), found by ds-decomp. */
#include "common.h"
static inline s32 has_02118f24_data(u8 *p) { s32 r = 1; if (!*(void **)(p + 12)) r = 0; return r; }
static inline s32 has_02118f24_handle(u8 *p) { s32 r; if (*(s32 *)(p + 0x38) != -1) r = 1; else r = 0; return r; }
extern s32 data_02162834[3];
void func_02117be0(void *, s32);
void *func_021176b0(void *, u16);
void func_02118eec(void *, s32);
void func_02118e94(void *, s16, s16);
void func_0211a7ec(s32, u32, u32);

extern u8 *data_02160aa4;
extern void (*data_02156154)(void *);
extern s32 data_02155c3c;
void func_0210dba0(void *);
void func_0210dbe8(void *);
void func_0210c5dc(void *);
void func_0211a700(void *);
void *func_0210c594(s32, s32);
void *func_02108844(void);
void *func_0211a810(void);
void func_0211a860(void *);
void func_02108594(void *);
extern s32 func_021086d4();
extern void *func_02117630(u8 *, u32);
extern void func_0211903c(void *, void *, void *, void *, s32, s32, s32, s32, s32, s32);
void func_020ebc94(u8 *, u32, s32);
void func_020eb3dc(void);
u32 func_02124cf8(u32, u32, u32);
void func_0210db70(void *);
void func_0210dbd0(void *);
void func_020eb180(u32 arg0, s32 arg1) {
 u32 mode = arg0;
 u8 *p;
 s32 enabled = arg1;
 u32 zero = 0;
 u8 **state = &data_02160aa4;
 if ((*state) != 0) return;
 (*state) = func_0210c594(0x44, data_02155c3c);
 *(u32 *)((*state) + 0) = 0;
 *(u32 *)((*state) + 4) = 0;
 *(u32 *)((*state) + 8) = 0;
 *(u32 *)((*state) + 12) = 0;
 *(u32 *)((*state) + 16) = 0;
 *(u32 *)((*state) + 20) = 0;
 *(u32 *)((*state) + 0x18) = 1;
 if (mode == 0) {
 *(u32 *)((*state) + 0) = func_02124cf8(0x4000,zero,zero);
 *(u32 *)((*state) + 4) = (u16)*(u32 *)((*state) + 0) * 8;
 }
 if (mode <= 1) {
 *(u32 *)((*state) + 8) = func_02124cf8(0x8000,zero,zero);
 p = (*state);
 *(u32 *)(p + 12) = (u16)*(u32 *)(p + 8) * 8;
 }
 if (mode == 2) {
 *(u32 *)((*state) + 8) = func_02124cf8(0x20000,zero,zero);
 *(u32 *)((*state) + 12) = (u16)*(u32 *)((*state) + 8) * 8;
 *(u32 *)((*state) + 16) = func_02124cf8(0x4000,zero,zero);
 *(u32 *)((*state) + 20) = (u16)*(u32 *)((*state) + 16) * 8;
 }
 if (mode == 3) {
 *(u32 *)((*state) + 8) = func_02124cf8(0x8000,zero,zero);
 *(u32 *)((*state) + 12) = (u16)*(u32 *)((*state) + 8) * 8;
 }
 *(void (**)(void))((*state) + 0x1c) = func_020eb3dc;
 *(u32 *)((*state) + 0x20) = 0x3eb;
 func_0210db70((*state) + 0x1c);
 if (enabled == 1) {
 *(void (**)(void))((*state) + 0x30) = func_020eb3dc;
 *(u32 *)((*state) + 0x34) = 0x3eb;
 func_0210dbd0((*state) + 0x30);
 }
}

void func_020eb344(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        data_02156154(*(void **)data_02160aa4);
    }
    data_02156154(*(void **)(data_02160aa4 + 8));
    data_02156154(*(void **)(data_02160aa4 + 0x10));
    func_0210dba0(data_02160aa4 + 0x1c);
    if (arg1 == 1) {
        func_0210dbe8(data_02160aa4 + 0x30);
    }
    if (data_02160aa4 != NULL) {
        func_0210c5dc(data_02160aa4);
        data_02160aa4 = NULL;
    }
}

void func_020eb3dc(void) {
    void *p = *(void **)(data_02160aa4 + 0x18);
    if (p != NULL) {
        func_0211a700(p);
    }
}

void *func_020eb400(void) {
    u8 *p = (u8 *)func_0210c594(0x28, data_02155c3c);
    *(u32 *)(p + 0x18) = 1;
    *(u16 *)(p + 0x1c) = 1;
    *(u32 *)(p + 0) = 0;
    *(u32 *)(p + 4) = 0;
    *(void **)(p + 8) = func_02108844();
    *(void **)(p + 0x10) = func_0211a810();
    return p;
}

void func_020ebc24(u8 *arg0) {
    if (*(void **)arg0 != NULL) {
        func_0210c5dc(*(void **)arg0);
        *(void **)arg0 = NULL;
    }
    *(u32 *)(arg0 + 4) = 0;
    if ((*(u16 *)(arg0 + 0x14) & 1) && *(void **)(arg0 + 0xc) != NULL) {
        func_0210c5dc(*(void **)(arg0 + 0xc));
        *(void **)(arg0 + 0xc) = NULL;
    }
    *(void **)(arg0 + 0xc) = NULL;
    func_0211a860(*(void **)(arg0 + 0x10));
    func_02108594(*(void **)(arg0 + 8));
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020ebc94(u8 *arg0, u32 arg1, s32 arg2) {
    u8 *p4 = *(u8 **)(arg0 + 4);
    u8 *p58 = *(u8 **)(*(u8 **)(arg0 + 8) + 0x58);
    void *res = func_02117630(*(u8 **)(p58 + 0xc), arg1);

    func_0211903c(*(u8 **)(arg0 + 8), res, *(void **)(p58 + 4), *(void **)(arg0 + 0x10),
                  *(s32 *)(arg0 + 0x24), -1, -1, 0,
                  *(s32 *)(p4 + 0x14), *(s32 *)(p4 + 0x10));
}

s32 func_020ebcfc(u8 *arg0, u32 arg1, s32 arg2) {
    u8 *r0 = *(u8 **)(arg0 + 8);
    u8 *p58 = *(u8 **)(r0 + 0x58);
    u32 count = *(u16 *)(*(u8 **)(p58 + 0xc));
    s32 res;
    if (count <= arg1) {
        return 0;
    }
    res = (func_021086d4(r0) == 0) ? 1 : 0;
    if (res != 0) {
        return 0;
    }
    func_020ebc94(arg0, arg1, arg2);
    return 1;
}

s32 func_020ebd5c(u8 *arg0, s32 arg1) {
    u8 *r3 = *(u8 **)(arg0 + 0xc);
    if (r3 != NULL) {
        if (*(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)(arg0 + 8) + 0x58) + 0xc)) <= arg1 * 2) {
            return 0;
        }
        switch (r3[arg1 * 4]) {
        case 0:
            return 0;
        case 1:
            return func_020ebcfc(arg0, *(u16 *)(r3 + arg1 * 4 + 2), 1);
        case 3:
            return func_020ebcfc(arg0, *(u16 *)(r3 + arg1 * 4 + 2), 1);
        }
    }
    return 0;
}

void func_020ebddc(u8 *obj,s32 update) {
s32 one=1,zero=0,changed;
u8 *p=*(u8 **)(obj+8);
s32 delta;
if(!update)return;
delta=*(s32 *)(p+96)<<data_02162834[0];
changed=zero;
*(s32 *)(obj+32)=changed;
if(*(s32 *)(p+12)) {
s32 step=(s32)(((long long)*(s32 *)(p+20)*delta+0x800)>>12);
if(step<0)step=-step;
*(s32 *)(p+16)+=step;
while(*(s32 *)(p+12) && *(s32 *)(p+16)>=(*(u16 *)(*(u8 **)p+4)<<12)){
u8 *seq;u8 *cur;s32 end; s32 mode;
*(s32 *)(p+16)-=*(u16 *)(*(u8 **)p+4)<<12;
changed=one;
*(u8 **)p=(u8 *)(*(u32 *)p+8);
cur=(u8 *)*(volatile u32 *)p;
if((*(s32 *)(p+20)>0)^*(u32 *)(p+8)){
seq=*(u8 **)(p+28);
if(cur>=*(u8 **)(seq+12)+*(u16 *)seq*8)end=one;else end=zero;
}else{
seq=*(u8 **)(p+28);
if(cur<=*(u8 **)(seq+12)+*(u16 *)(seq+2)*8-8)end=one;else end=zero;
}
if(obj)*(s32 *)(obj+32)=end;
if(end){
mode=*(s32 *)(p+24);
if(!mode)mode=*(s32 *)(*(u8 **)(p+28)+8);
if(mode==2||mode==4){
seq=*(u8 **)(p+28);
*(u8 **)p=*(u8 **)(seq+12)+*(u16 *)(seq+2)*8;
*(s32 *)(p+16)=zero;
func_02117be0(p,zero);
}else *(s32 *)(p+12)=zero;
seq=*(u8 **)(p+28);cur=*(u8 **)p;
if(cur>*(u8 **)(seq+12)+*(u16 *)seq*8-8)*(u8 **)p=*(u8 **)(seq+12)+*(u16 *)seq*8-8;
else if(cur<*(u8 **)(seq+12))*(u8 **)p=*(u8 **)(seq+12);
}
}
}
if(changed && *(u16 *)(*(u8 **)p+4)){
u8 *frame=**(u8 ***)p;
u8 *bank=*(u8 **)(p+52);
u8 flag;
s32 valid;
*(void **)(p+48)=func_021176b0(bank,*(u16 *)frame);
flag=*(u32 *)(*(u8 **)(p+28)+4)&255;
func_02118eec(p+60,1);
if(flag)func_02118e94(p+60,*(s16 *)(frame+4),*(s16 *)(frame+6));
valid=has_02118f24_data(bank);
if(valid){
valid=has_02118f24_handle(p);
if(valid){
u32 *entry=(u32 *)(*(u8 **)(*(u8 **)(bank+12)+4)+*(u16 *)frame*8);
func_0211a7ec(*(s32 *)(p+56),entry[0],entry[1]);
}
}
}
}

s32 func_020020bc(s32,s32);
s32 func_02002080(s32,s32);
void *func_020ec00c(u8 *obj) {
 u8 *base;
 s32 i;
 s32 count;
 u16 total=**(u16 **)(*(u8 **)(*(u8 **)(obj+8)+0x58)+12);
 s32 extra=func_020020bc(total,2)!=0;
 count=func_02002080(total,2);
 count=(u16)(count+extra);
 base=func_0210c594(count*4,data_02155c3c);
 u8 *p=base;
 for(i=0;i<count;i++,p+=4) {
  s32 bit=0;
  u16 index=i*2;
  *(u16 *)(p+2)=index;
  p[0]=0;
  for(;bit<2;index++,bit++) {
   if(total<=index) break;
   {
    s32 missing=func_021086d4(*(void **)(obj+8),index)==0;
    if(!missing) p[0]|=(u8)(1<<bit);
   }
  }
 }
 return base;
}

