/* 16 functions from 0x0209C2AC to 0x0209D0F0 (main), found by ds-decomp. */
#include "common.h"
typedef struct { s16 data[300]; } Unk258;
extern const Unk258 data_021420ec;
extern int data_0216011c;
void func_020d3c98(int);
void func_02095f68(void *);
void func_020df224(void *,int);
void func_020961f8(void *);
void func_020e25fc(int,int,int);
void func_020a5ce4(void *);
void func_020df38c(int,int);
void func_020e86c0(int);
extern char data_02148940[];
extern char data_02148928[];
extern void func_02005e80(char *, const char *, ...);
extern void *func_021092d8(char *);
extern s32 func_02092994(void *,s32);
extern s32 func_02109444(void *);
extern void func_021093b0(void *);
extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_021167f0(void *, void *);
extern u32 func_0209cb98();
extern void func_020220b0(u16,u16);
extern void func_020de374(void *,void *);
extern void func_020de404(void *);
extern u8 *data_02160110;
extern u8 *data_02160a74;
extern s32 func_020e84c0(s32);
extern void func_020df3f4(s32, s32);
extern s32 func_020e8410(s32, s32, s32);
extern void func_020e8504(s32);
extern void func_020a9544(void *);
extern void func_020e1ec8(void *, s32);
extern void func_020e24bc(void *, s32, s32, s32);
extern void func_0209cbac(void);
u8 **func_02032254(u16);
void func_020a8810(u32, s32);

typedef struct {
    u16 unk[10];
} Unk20;

extern Unk20 data_02142bb4;
extern u8 *data_02160204;
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);
extern u8 *func_0209ac14(void);
extern s32 func_020bd490(s32, u8);
extern u8 *func_02021f10(s32);
extern void func_02022100(void *);
extern void func_0203bc34(u32, void *, u32, u32, u32, u32);
extern void func_020a899c(void *);
extern void func_020a30c4(u32);
extern void func_021098ac(void *);

extern u8 *data_02160120;
extern u32 func_021136b0(void);
extern void func_0209c94c();
typedef struct {
    u8 pad[0x3c];
    u32 flag;
} S_0209c920;

void func_0209c2ac(s32 arg0) {
Unk258 table=data_021420ec;
u8 *base=data_02160120;
void *list;
s16 offset;
u16 i;
if(!base)return;
list=*(void **)(base+0x704);
offset=arg0*56;
for(i=0;i<25;i++){
u16 k=i*12;
u8 *p=func_0210c594(44,data_02155c3c);
*(s16 *)(p+6)=table.data[k];
*(s16 *)(p+8)=table.data[k+1];
*(s16 *)(p+10)=table.data[k+2];
*(s16 *)(p+12)=table.data[k+3];
*(s32 *)(p+16)=table.data[k+4];
*(s32 *)(p+20)=table.data[k+5];
*(s32 *)(p+24)=table.data[k+6];
*(s16 *)(p+28)=table.data[k+7];
*(s16 *)(p+30)=table.data[k+8];
*(s16 *)(p+4)=table.data[k+9];
*(s16 *)(p+0)=table.data[k+10];
*(s16 *)(p+2)=table.data[k+11];
p[32]=31;
switch(*(u16 *)p) {
case 2: break;
case 4:case 7:case 10:case 13:case 16:case 19:case 22:case 25:case 28:case 31:case 34:case 37:case 40:case 43:case 46:case 49:case 52:case 55:case 58:case 61:case 64:case 67:
*(s32 *)(p+20)+=offset;
break;
}
*(u16 *)p+=arg0;
func_021167f0(list,p);
}
}

void func_0209c510(s32 arg0,s32 arg1){
char buf[32];
void *fp;
s32 offset;
u8 i;
func_02005e80(buf,data_02148928,arg1);
fp=func_021092d8(buf);
if(!fp)return;
*(u32 *)(data_02160120+0x64)=0;
*(u32 *)(data_02160120+0x1f0)=0;
*(u32 *)(data_02160120+0x37c)=0;
offset=arg0*99;
for(i=1;i<99;i++){
s32 val;
func_02092994(fp,0);
func_02092994(fp,0);
func_02092994(fp,0);
func_02092994(fp,0);
func_02092994(fp,0);
func_02092994(fp,0);
func_02092994(fp,0);
func_02092994(fp,0);
func_02092994(fp,0);
func_02092994(fp,0);

val=func_02092994(fp,0);
*(s32 *)(data_02160120+offset*4+i*4+0x64)=val+*(s32 *)(data_02160120+offset*4+i*4+0x60);
func_02109444(fp);
}
if(fp)func_021093b0(fp);
}

void func_0209c64c(s32 arg0,s32 arg1){
char buf[32];
void *fp;
s32 offset;
u8 i;
func_02005e80(buf,data_02148940,arg1);
fp=func_021092d8(buf);
if(!fp)return;
offset=arg0*99;
*(u32 *)(data_02160120+0x508)=0;
for(i=1;i<99;i++){
s32 val;
func_02092994(fp,0);
func_02092994(fp,0);
func_02092994(fp,0);
func_02092994(fp,0);
func_02092994(fp,0);
func_02092994(fp,0);
func_02092994(fp,0);
func_02092994(fp,0);
func_02092994(fp,0);
func_02092994(fp,0);

val=func_02092994(fp,0);
*(s32 *)(data_02160120+offset*4+i*4+0x64)=val+*(s32 *)(data_02160120+offset*4+i*4+0x60);
func_02109444(fp);
}
if(fp)func_021093b0(fp);
}

void func_0209c778(void) {
u8 *base=data_02160120;
u8 *list=*(u8 **)(data_02160204+0x10c);
u8 *node;
u16 i;
if(!list)return;
node=*(u8 **)list;
i=0;
while(node){
if(node){
u8 *n=func_0210c594(16,data_02155c3c);
*(u16 *)n=i;
*(u16 *)(n+2)=*(u16 *)(node+8);
*(u16 *)(n+4)=*(u16 *)(node+10);
n[6]=node[12];
++*(u16 *)(base+0x714);
func_021167f0(base+0x708,n);
i++;
}
node=*(u8 **)(node+4);
}
node=*(u8 **)list;
while(node){
u8 *next=*(u8 **)(node+4);
if(!func_0209cb98(*(u16 *)(node+8))){
func_020220b0(*(u16 *)(node+8),*(u16 *)(node+10));
func_020de374(list,node);
}
node=next;
}
func_020de404(list);
*(u32 *)(data_02160204+0x10c)=0;
}

void *func_0209c888(u32 arg0, u32 arg1) {
    u8 *node = *(u8 **)(data_02160120 + 0x708);
    if (node != NULL) {
        do {
            if (arg0 == 0 && *(u16 *)(node + 2) == arg1) return node;
            if (arg0 == 1 && *(u16 *)(node + 0) == arg1) return node;
            node = *(u8 **)(node + 0xc);
        } while (node != NULL);
    }
    return NULL;
}

void *func_0209c8dc(u32 arg0) {
    u8 *node = *(u8 **)(data_02160120 + 0x708);
    u8 i = 0;
    if (node != NULL) {
        do {
            if (i == arg0) return node;
            node = *(u8 **)(node + 0xc);
            i++;
        } while (node != NULL);
    }
    return NULL;
}

unsigned int func_0209c920(u8 *arg0)
{
  u8 *new_var;
  new_var = arg0 + 0x3c;
  if ((*((u32 *) new_var)) == 0)
  {
    return;
  }
  do
  {
    if (1)
    {
    }
    func_0209c94c(arg0);
  }
  while ((*((u32 *) new_var)) != 0);
}

void func_0209c94c(u8 *arg0, void *arg1) {
    func_021168f8(arg0 + 0x3c, arg1);
    if (arg1 != NULL) {
        func_0210c5dc(arg1);
    }
}

void func_0209c970(void) {
    u8 *r9 = func_0209ac14();
    while (r9 != NULL) {
        u8 *r10;
        if (func_020bd490(2, *r9) != 0) {
            r10 = func_02021f10(func_020bd490(1, *r9) - 1);
        } else {
            r10 = func_02021f10(func_020bd490(3, *r9));
        }
        if (r10 != NULL) {
            *(u32 *)(r10 + 4) = *(u32 *)(r9 + 4);
            *(u32 *)(r10 + 8) = 0;
            if (func_020bd490(4, *r9) == 0) {
                r10[0x44] = 1;
            } else {
                r10[0x44] = 0;
            }
        }
        r9 = *(u8 **)(r9 + 0x38);
    }
    func_02022100(*(void **)(data_02160204 + 0x108));
}

void func_0209ca18(u8 *arg0, u32 arg1, u32 arg2, s16 arg3, s16 arg4, s16 arg5) {
    s32 x, y, z;
    (*(void (**)(u8 *))(arg0 + 4))(arg0);
    func_0203bc34(arg1, arg0, arg2, 0, 0, 0);
    func_020a899c(arg0);
    x = arg3 << 12;
    y = arg4 << 12;
    z = arg5 << 12;
    *(s32 *)(arg0 + 0x44) = x;
    *(s32 *)(arg0 + 0x48) = y;
    *(s32 *)(arg0 + 0x4c) = z;
}

void func_0209ca84(u32 arg0, u16 arg1, u16 arg2, u16 arg3) {
    Unk20 buf = data_02142bb4;
    *(volatile u32 *)0x040004a4 = 0x001f0080;
    func_020a30c4(arg0);
    buf.unk[1] = 0;
    buf.unk[2] = 0;
    buf.unk[3] = 0x10;
    buf.unk[4] = 0x10;
    buf.unk[8] = 0x10;
    buf.unk[9] = 0x10;
    buf.unk[5] = arg1;
    buf.unk[6] = arg2;
    buf.unk[7] = arg3;
    func_021098ac(&buf);
}

u32 func_0209cb14(s32 cmd, u32 mask) {
 u8 *base = data_02160120;
 if (cmd == 0) { *(u16 *)(base+0x738)=0; }
 else if(cmd == 1) { *(u16 *)(base+0x738) |= (u16)mask; }
 else if(cmd == 2) { *(u16 *)(base+0x738) &= (u16)~mask; }
 else if(cmd == 3) { if (*(u16 *)(base+0x738)&mask) return 1; }
 return 0;
}

u32 func_0209cb98(void) {
    u32 v = func_021136b0();
    if ((v & 2) == 0) return 0;
    return v;
}

void func_0209cbac(void) {
 u8 *p=*(u8 **)(data_02160a74+0x94);
 u8 **a=func_02032254((u16)(*(s16 *)(data_02160110+0xb6)-1));
 u8 **b=func_02032254((u16)(*(s16 *)(data_02160110+0xde)+1));
 data_02160a74[0x1c3]=0;
 if(data_02160a74[0x1cd]==0) {
 if(**(u8 **)(*b+0x118)==0) {
 data_02160a74[0x1c3]=1;func_020a8810(*(u32 *)(p+4),0x17);
 } else func_020a8810(*(u32 *)(p+4),0x14);
 } else if(data_02160a74[0x1cd]==1) {
 u8 *prev=*a;
 u8 *next=*b;
 if(**(u8 **)(next+0x118)==1 || prev==next) {
 data_02160a74[0x1c3]=1;func_020a8810(*(u32 *)(p+4),0x17);
 } else func_020a8810(*(u32 *)(p+4),0x14);
 }
}

void func_0209cca0(u8 arg0) {
    s32 zero;
    u8 *menu;
    u8 *t;
    u8 *sub;
    s32 mode;
    s32 r;

    zero = 0;
    menu = *(u8 **)(data_02160a74 + 0x94);
    *(u8 *)(data_02160a74 + 0x1cd) = arg0;
    *(u16 *)(data_02160110 + 0xde) = 0;
    t = *(u8 **)(data_02160a74 + 0xa0);
    *(u32 *)(data_02160110 + 0xe4) = *(u32 *)t;
    sub = *(u8 **)t;
    mode = func_020e84c0(0);
    func_020df3f4(mode, 1);
    if (*(u8 *)(data_02160a74 + 0x1cd) == 0) {
        *(u8 *)(data_02160110 + 0xdc) |= 8;
    } else if (*(u8 *)(data_02160a74 + 0x1cd) == 1) {
        *(u8 *)(data_02160110 + 0xdc) |= 0x40;
        *(u32 *)(data_02160110 + 0x100) = *(u32 *)sub;
    }
    {
        *(u32 *)(data_02160a74 + 0x58) |= 0x200000;
        *(u16 *)(data_02160110 + 0xec) = 0;
        *(u8 *)(data_02160a74 + 0x1c3) = 0;
        func_020a9544(*(void **)*(void ***)(data_02160a74 + 0x80));
        func_020e1ec8(*(void **)(data_02160a74 + 0x80), 0xb);
        if (func_020e8410(0, 3, 0)) {
            if (data_02160a74[0x1cd]==0) {
                *(u32 *)(data_02160a74+0x58)|=0x4000;
                func_020e8504(8);
            } else if (data_02160a74[0x1cd]==1) {
                *(u32 *)(data_02160a74+0x58)|=0x4000;
                func_020e8504(9);
            }
        } else {
            *(u32 *)(data_02160a74+0x58) &= ~0x4000;
            func_020e8504(0);
        }
    }
after_mode:
    if (*(s16 *)(data_02160110 + 0xde) < *(s16 *)(data_02160110 + 0xe2)) {
        *(s16 *)(data_02160110 + 0xde) = *(s16 *)(data_02160110 + 0xe2);
    }
    *(u32 *)(data_02160a74 + 0x58) &= ~0x100;
    *(u32 *)(data_02160a74 + 0x58) &= ~1;
    *(u16 *)(data_02160a74 + 0x1b8) &= 0xffbf;
    func_020a5ce4(menu);
    func_020a9544(*(void **)menu);
    func_020e1ec8(menu, 0xe);
    func_020a8810(*(void **)(menu + 4), 0x14);
    if (*(u8 *)(data_02160a74 + 0x1cd) == 0) {
        ((void (*)(void *, s32, s32, s32, s32))func_020e24bc)(menu, 0x2a, 0x42, 0xd, 0);
    } else if (*(u8 *)(data_02160a74 + 0x1cd) == 1) {
        ((void (*)(void *, s32, s32, s32, s32))func_020e24bc)(menu, 0x2a, 0x42, 0xe, 0);
    }
    menu=*(u8 **)(data_02160a74+0xc0);
    func_020a8810(*(void **)(*(u8 **)(data_02160a74 + 0x7c) + 4), 0x13);
    ((void (*)(void *, s32, s32, s32, s32))func_020e24bc)(*(void **)(data_02160a74 + 0x7c), 0, 0, *(u16 *)(menu + 0x20), 0);
    *(u16 *)(data_02160a74 + 0x140) = 4;
    *(u16 *)(data_02160a74 + 0x142) = 0x18;
    *(u32 *)(*(void **)(*(u8 **)(data_02160a74 + 0x7c) + 4) + 0x44) = (*(s16 *)(data_02160a74 + 0x140) + 0x15) << 12;
    *(u32 *)(*(void **)(*(u8 **)(data_02160a74 + 0x7c) + 4) + 0x48) = (*(s16 *)(data_02160a74 + 0x142) + 1) << 12;
    *(u32 *)(data_02160a74 + 0x58) |= 0x80000;
    func_0209cbac();
    func_020e86c0(0x12);
}

void func_0209cf68(void) {
void *saved=*(void **)(data_02160a74+0x94);
*(u32 *)(data_02160a74+0x58)&=~0x80000;
*(u32 *)(data_02160a74+0x58)&=~0x80;
*(u32 *)(data_02160a74+0x58)&=~0x100;
*(u32 *)(data_02160a74+0x58)&=~0x10;
func_020d3c98(0);
data_02160110[0xdc]|=0x20;
if(data_02160a74[0x1cd]==0) {
u8 *p=**(u8 ***)(data_02160a74+0xa0);
u8 *q=*(u8 **)(*(u8 **)p+0x118);
*(s16 *)(q+0x5a)+=100;
func_02095f68(*(void **)(p+0x14));
} else if(data_02160a74[0x1cd]==1) {
u8 *p=**(u8 ***)(data_02160a74+0xa0);
func_020df224(*(void **)p,*(int *)(data_02160a74+0xc0));
func_02095f68(*(void **)(p+0x14));
func_020961f8(p);
}
*(u32 *)(data_02160a74+0x58)&=~0x200000;
*(u32 *)(data_02160a74+0x58)&=~0x4000;
func_020e25fc(8,0,0);
*(u32 *)(data_02160a74+0x58)&=~0x100;
func_020a5ce4(*(void **)(data_02160a74+0x7c));
func_020a5ce4(saved);
func_020df38c(2,1);
if(data_0216011c==0) *(u16 *)(data_02160a74+0x1b8)|=0x40;
data_02160a74[0x1cd]=0;
*(u32 *)(data_02160a74+0x58)|=0x2000;
func_020e86c0(3);
}

