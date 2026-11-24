/* 32 functions from 0x02003D58 to 0x02004CD4 (main), found by ds-decomp. */
#include "common.h"
extern u16 data_0215cd60[];

extern void func_02004d70(u32);
extern u32 data_0215cd40[8];

extern u32 func_020034a8(void);
extern u32 func_020034c8(void);

extern s32 data_02145ba4;
extern u32 func_02003474(void);
extern void func_020085ec(s32, void *, u32, u32, s32);
extern void func_02008e38(void *, u32, u32);
void func_02003d58(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_02003474();
    if (data_02145ba4 != -1 && arg2 > 0x30) {
        func_020085ec(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e38(arg0, base + arg1, arg2);
    }
}

void func_02003dc8(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_020034a8();
    if (data_02145ba4 != -1 && arg2 > 0x30) {
        func_020085ec(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e38(arg0, base + arg1, arg2);
    }
}

void func_02003e38(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_020034c8();
    if (data_02145ba4 != -1 && arg2 > 0x30) {
        func_020085ec(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e38(arg0, base + arg1, arg2);
    }
}

extern u32 func_020034a8(void);
extern u32 func_020034c8(void);
extern u32 func_02003518(void);
void func_02003ea8(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_02003518();
    if (data_02145ba4 != -1 && arg2 > 0x30) {
        func_020085ec(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e38(arg0, base + arg1, arg2);
    }
}

extern u32 func_02003558(void);
extern u32 func_020035b0(void);
extern s32 func_020053d0(void);
extern void func_02008840(s32, void *, u32, u32, s32, s32, s32);
extern u32 data_0215cd24[];
extern u32 func_0200547c(void);
extern void func_0200893c(void);
extern void func_02004bdc(u32);
extern u32 func_020054a4(void);
extern void func_02004cd4(u32);
extern void func_02005298(u32);
void func_02003f18(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_02003558();
    if (data_02145ba4 != -1 && arg2 > 0x30) {
        func_020085ec(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e38(arg0, base + arg1, arg2);
    }
}

void func_02003f88(void *arg0, u32 arg1, u32 arg2) {
    u32 base = func_020035b0();
    if (data_02145ba4 != -1 && arg2 > 0x30) {
        func_020085ec(data_02145ba4, arg0, base + arg1, arg2, 1);
    } else {
        func_02008e38(arg0, base + arg1, arg2);
    }
}

void func_02003ff8(void) {
    s32 val = func_020053d0();
    data_0215cd24[5] = val;
    switch (val) {
    case 0x10:
        data_0215cd24[4] = 0x06880000;
        data_0215cd24[3] = 0;
        break;
    case 0x20:
    case 0x60:
        data_0215cd24[4] = 0x06890000;
        data_0215cd24[3] = 0;
        break;
    case 0x40:
        data_0215cd24[4] = 0x06894000;
        data_0215cd24[3] = 0x4000;
        break;
    case 0:
        break;
    }
}

void func_02004084(void *arg0, u32 arg1, u32 arg2) {
    u32 dst = data_0215cd24[4] + arg1 - data_0215cd24[3];
    if (data_02145ba4 != -1) {
        func_02008840(data_02145ba4, arg0, dst, arg2, 0, 0, 1);
    } else {
        func_02008e38(arg0, dst, arg2);
    }
}

void func_020040f8(void) {
    if (data_02145ba4 != -1) {
        func_0200893c();
    }
    func_02004bdc(data_0215cd24[5]);
    data_0215cd24[5] = 0;
    data_0215cd24[4] = 0;
    data_0215cd24[3] = 0;
}

void func_02004138(void) {
    u32 v = func_020053f4();
    data_0215cd24[2] = v;
    if (v == 0) {
        return;
    }
    switch (v) {
        case 0x20:
            data_0215cd24[1] = 0x06890000;
            break;
        case 0x40:
            data_0215cd24[1] = 0x06894000;
            break;
    }
}

void func_02004180(void *arg0, u32 arg1, u32 arg2) {
    u32 dst = data_0215cd24[1] + arg1;
    if (data_02145ba4 != -1) {
        func_02008840(data_02145ba4, arg0, dst, arg2, 0, 0, 1);
    } else {
        func_02008e38(arg0, dst, arg2);
    }
}

void func_020041f0(void) {
    if (data_02145ba4 != -1) {
        func_0200893c();
    }
    func_02004cd4(data_0215cd24[2]);
    data_0215cd24[2] = 0;
    data_0215cd24[1] = 0;
}

void func_0200422c(void) {
    data_0215cd24[0] = func_0200547c();
}

void func_02004244(void *arg0, u32 arg1, u32 arg2) {
    if (data_02145ba4 != -1) {
        func_02008840(data_02145ba4, arg0, arg1 + 0x98000 + 0x6800000, arg2, 0, 0, 1);
    } else {
        func_02008e38(arg0, arg1 + 0x98000 + 0x6800000, arg2);
    }
}

void func_020042ac(void) {
    if (data_02145ba4 != -1) {
        func_0200893c();
    }
    func_02005298(data_0215cd24[0]);
    data_0215cd24[0] = 0;
}

void func_020042e4(void) {
    data_0215cd24[6] = func_020054a4();
}

extern s32 func_02005418(void);
extern void func_02005318(u32);
extern u16 data_0213e4a8[][3];
extern u8 data_0213e4aa[];
extern u8 data_0213e4ac[];
void func_020042fc(void *arg0, u32 arg1, u32 arg2) {
    if (data_02145ba4 != -1) {
        func_02008840(data_02145ba4, arg0, 0x068a0000 + arg1, arg2, 0, 0, 1);
    } else {
        func_02008e38(arg0, 0x068a0000 + arg1, arg2);
    }
}

void func_02004364(void) {
    if (data_02145ba4 != -1) {
        func_0200893c();
    }
    func_02005318(data_0215cd24[6]);
    data_0215cd24[6] = 0;
}

void func_0200439c(void) {
s32 val=func_02005418(), off=val*6;
u32 a=*(volatile u16 *)(data_0213e4a8+off)<<12;
u32 b=*(volatile u16 *)(data_0213e4aa+off)<<12;
u32 c=*(u16 *)(data_0213e4ac+off)<<12;
u32 *dst=data_0215cd40;
((volatile u32 *)dst)[5]=val;
dst[1]=a;
dst[6]=b;
dst[7]=c;
}

void func_020043f8(void *arg0,u32 offset,u32 size) {
 u32 second=data_0215cd40[6];
 u32 dst;
 if(second==0) {
  dst=data_0215cd40[1]+offset;
 } else {
  u32 boundary=data_0215cd40[7];
  if(offset+size<boundary) {
   dst=data_0215cd40[1]+offset;
  } else if(offset>=boundary) {
   dst=second+offset-boundary;
  } else {
   u32 firstSize=boundary-offset;
   u32 first=data_0215cd40[1];
   if(data_02145ba4!=-1 && firstSize>0x30) {
    func_020085ec(data_02145ba4,arg0,first+offset,firstSize,1);
   } else {
    func_02008e38(arg0,first+offset,firstSize);
   }
   if(data_02145ba4!=-1) {
    func_02008840(data_02145ba4,(u8 *)arg0+firstSize,second,size-firstSize,0,0,1);
   } else {
    func_02008e38((u8 *)arg0+firstSize,second,size-firstSize);
   }
   return;
  }
 }
 if(data_02145ba4!=-1) {
  func_02008840(data_02145ba4,arg0,dst,size,0,0,1);
 } else {
  func_02008e38(arg0,dst,size);
 }
}

void func_02004544(void) {
    if (data_02145ba4 != -1) {
        func_0200893c();
    }
    func_02004d70(data_0215cd40[5]);
    data_0215cd40[7] = 0;
    data_0215cd40[6] = 0;
    data_0215cd40[1] = 0;
    data_0215cd40[5] = 0;
}

extern s32 func_0200542c(void);
extern void func_02004d70(u32);
extern u32 data_0215cd40[8];
extern u16 data_0213e498[8];
void func_02004588(void) {
    s32 val = func_0200542c();
    data_0215cd40[3] = val;
    data_0215cd40[2] = (u32)data_0213e498[val >> 4] << 12;
}

void func_020045bc(void *arg0, u32 arg1, u32 arg2) {
    u32 dst = data_0215cd40[2] + arg1;
    if (data_02145ba4 != -1) {
        func_02008840(data_02145ba4, arg0, dst, arg2, 0, 0, 1);
    } else {
        func_02008e38(arg0, dst, arg2);
    }
}

extern void func_02004ee8(u32);
extern void func_02004d70(u32);
extern s32 func_02005440(void);
void func_0200462c(void) {
    if (data_02145ba4 != -1) {
        func_0200893c();
    }
    func_02004ee8(data_0215cd40[3]);
    data_0215cd40[3] = 0;
    data_0215cd40[2] = 0;
}

void func_02004668(void) {
    s32 val = func_02005440();
    data_0215cd40[0] = val;
    switch (val) {
    case 2:
    case 3:
        data_0215cd40[4] = 0x06800000;
        break;
    case 8:
    case 0xc:
        data_0215cd40[4] = 0x06840000;
        break;
    case 1:
        data_0215cd40[4] = 0x067e0000;
        break;
    case 4:
        data_0215cd40[4] = 0x06820000;
        break;
    }
}

void func_020046f8(void *arg0, u32 arg1) {
    u32 dst = data_0215cd40[4];
    if (data_02145ba4 != -1) {
        func_02008840(data_02145ba4, arg0, dst, arg1, 0, 0, 1);
    } else {
        func_02008e38(arg0, dst, arg1);
    }
}

void func_02004764(void *arg0, u32 arg1) {
    u32 dst = data_0215cd40[4];
    if (data_02145ba4 != -1) {
        func_02008840(data_02145ba4, arg0, dst + 0x20000, arg1, 0, 0, 1);
    } else {
        func_02008e38(arg0, dst + 0x20000, arg1);
    }
}

extern void func_02004fc4(u32);
void func_020047d4(void) {
    if (data_02145ba4 != -1) {
        func_0200893c();
    }
    func_02004fc4(data_0215cd40[0]);
    data_0215cd40[0] = 0;
    data_0215cd40[4] = 0;
}

void func_02004810(u32 arg0) {
    if (arg0 & 0x1) {
        *(volatile u8 *)0x04000240 = 0x80;
    }
    if (arg0 & 0x2) {
        *(volatile u8 *)0x04000241 = 0x80;
    }
    if (arg0 & 0x4) {
        *(volatile u8 *)0x04000242 = 0x80;
    }
    if (arg0 & 0x8) {
        *(volatile u8 *)0x04000243 = 0x80;
    }
    if (arg0 & 0x10) {
        *(volatile u8 *)0x04000244 = 0x80;
    }
    if (arg0 & 0x20) {
        *(volatile u8 *)0x04000245 = 0x80;
    }
    if (arg0 & 0x40) {
        *(volatile u8 *)0x04000246 = 0x80;
    }
    if (arg0 & 0x80) {
        *(volatile u8 *)0x04000248 = 0x80;
    }
    if (arg0 & 0x100) {
        *(volatile u8 *)0x04000249 = 0x80;
    }
}

void func_02004aac(s32 arg0) {
 data_0215cd60[0]=(data_0215cd60[0]|data_0215cd60[2])&~arg0;
 data_0215cd60[2]=arg0;
 switch(arg0) {
 case 0: break;
 case 3: *(volatile u8 *)0x04000241=0x8a;
 case 1: *(volatile u8 *)0x04000240=0x82; break;
 case 2: *(volatile u8 *)0x04000241=0x82; break;
 case 0x70: *(volatile u8 *)0x04000246=0x9a;
 case 0x30: *(volatile u8 *)0x04000245=0x92;
 case 0x10: *(volatile u8 *)0x04000244=0x82; break;
 case 0x50: *(volatile u8 *)0x04000246=0x92; *(volatile u8 *)0x04000244=0x82; break;
 case 0x60: *(volatile u8 *)0x04000246=0x8a;
 case 0x20: *(volatile u8 *)0x04000245=0x82; break;
 case 0x40: *(volatile u8 *)0x04000246=0x82; break;
 }
 func_02004810(data_0215cd60[0]);
}

extern u16 data_0215cd60[];
void func_02004bdc(u32 arg0) {
    data_0215cd60[0] = (data_0215cd60[0] | data_0215cd60[7]) & ~arg0;
    data_0215cd60[7] = arg0;
    switch ((s32)arg0) {
    case 0x10:
        *(volatile u32 *)0x04000000 |= 0x40000000;
        *(volatile u8 *)0x04000244 = 0x84;
        break;
    case 0x20:
        *(volatile u32 *)0x04000000 |= 0x40000000;
        *(volatile u8 *)0x04000245 = 0x84;
        break;
    case 0x40:
        *(volatile u32 *)0x04000000 |= 0x40000000;
        *(volatile u8 *)0x04000246 = 0x8c;
        break;
    case 0x60:
        *(volatile u8 *)0x04000246 = 0x8c;
        *(volatile u8 *)0x04000245 = 0x84;
        *(volatile u32 *)0x04000000 |= 0x40000000;
        break;
    case 0:
        *(volatile u32 *)0x04000000 &= ~0x40000000;
        break;
    }
    func_02004810(data_0215cd60[0]);
}

