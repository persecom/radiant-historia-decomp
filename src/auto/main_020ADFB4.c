/* 23 functions from 0x020ADE8C to 0x020AEDC0 (main), found by ds-decomp. */
#include "common.h"
extern u8 *func_020adda8(void);
extern void func_020a994c(void *);

typedef struct Unk_02150788 {
    u32 field_0;
    u32 field_4;
    u32 field_8;
    u32 field_c;
    u32 field_10;
} Unk_02150788;

extern Unk_02150788 data_02150788[];
extern void func_02008f74(void *, s32, u32);
extern void *func_020ade60(s32);
extern u8 *func_0203be10(s32);
extern s32 func_0203be60(u8 *, s32, s32);
extern void func_020aed5c(s32);
extern void func_020aea1c(void);
extern void func_020ae530(void);
extern void func_0203be4c(void *);
extern void func_021098ac(void *);

void func_020adfb4(void **arg0) {
    s32 i;
    for (i = 0; i < 0x3b; i++) {
        if (arg0[i] != NULL) {
            func_0203be4c(arg0[i]);
            arg0[i] = NULL;
        }
    }
}

void func_020adfe8(u16 arg0, u8 arg1) {
    *(u32 *)0x40004A4 = (arg1 << 24) | 0xC0 | (arg0 << 16);
}

void func_020ae004(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, s16 arg8) {
    s16 buf[10];
    buf[0] = 1;
    buf[1] = arg1;
    buf[2] = arg2;
    buf[3] = arg3;
    buf[4] = arg4;
    buf[5] = arg5;
    buf[6] = arg6;
    buf[7] = arg0;
    buf[8] = arg7;
    buf[9] = arg8;
    func_021098ac(buf);
}

u8 func_020ae05c(u32 arg0, u32 arg1) {
    u32 i;
    u32 pow10 = 1;
    u32 count;
    if (arg0 == 0 && arg1 == 1) {
        return 0;
    }
    count = arg1 - 1;
    for (i = 0; i < count; i++) {
        pow10 *= 10;
    }
    if (arg0 < pow10) {
        return 10;
    }
    for (i = 0; i < count; i++) {
        arg0 /= 10;
    }
    return arg0 % 10;
}

void func_020ae0f0(u32 arg0, s16 arg1, s32 arg2, s16 arg3, s16 arg4, s16 arg5)
{
  int new_var2;
  u8 i;
  int new_var;
  u8 d;
  for (i = 1; i < 10; i++)
  {
    d = func_020ae05c(arg0, i);
 do { if (d == 10) { break; } new_var2 = 1; if (i != new_var2) { arg2 -= arg4; } new_var = arg4 * d; func_020ae004(arg1, new_var, 0, arg4, arg5, arg2, arg3, arg4, arg5); } while (0);
  }

}

void func_020ae35c(u8 *arg0) {
    s32 i, j;
    for (i = 0; i < 8; i++) {
        u8 *node = *(u8 **)(arg0 + i * 4 + 0x13c);
        if (node != NULL) {
            func_020a9544(node);
        }
        *(u32 *)(arg0 + i * 4 + 0x13c) = 0;
    }
    for (j = 0; j < 8; j++) {
        s32 off = j * 0x50;
        func_020a994c(arg0 + 0x170 + off);
        func_020a98a0(arg0 + 0x170 + off);
        {
            u8 *obj = *(u8 **)(arg0 + off + 0x16c);
            if (obj != NULL) {
                if (j == 0 || j == 3 || j == 5) {
                    goto call_it;
                }
                goto call_it;
call_it:
                ((void (*)(u8 *))(*(void **)(obj + 0xc)))(obj);
            }
            *(u32 *)(arg0 + off + 0x16c) = 0;
        }
    }
}

void func_020ae50c(s32 arg0) {
    u8 *base = (u8 *)func_020adda8();
    u8 *obj = *(u8 **)(base + arg0 * 0x50 + 0x16c);
    *(u32 *)(obj + 0x40) = 0;
}

void func_020ae530(void) {
    u8 *base = (u8 *)func_020adda8();
    s32 i;
    for (i = 0; i < 8; i++) {
        u8 *obj = *(u8 **)(base + i * 0x50 + 0x16c);
        *(u32 *)(obj + 0x40) = 0;
    }
}

void func_020ae6e8(u8 *arg0) {
 s32 i;
 if (*(void **)(arg0+0x15c) != NULL) {func_020a9544(*(void **)(arg0+0x15c)); *(u32 *)(arg0+0x15c)=0;}
 if (*(void **)(arg0+0x164) != NULL) {func_020a9544(*(void **)(arg0+0x164)); *(u32 *)(arg0+0x164)=0;}
 if (*(void **)(arg0+0x160) != NULL) {func_020a9544(*(void **)(arg0+0x160)); *(u32 *)(arg0+0x160)=0;}
 if (*(void **)(arg0+0x168) != NULL) {func_020a9544(*(void **)(arg0+0x168)); *(u32 *)(arg0+0x168)=0;}
for (i=0;i<5;i++) {s32 off=i*0x50; u8 *obi; func_020a994c(arg0+0x3f0+off);func_020a98a0(arg0+0x3f0+off);obi=*(u8 **)(arg0+off+0x3ec);if(obi!=NULL){((void (*)(u8 *))(*(void **)(obi+0xc)))(obi);*(u8 **)(arg0+i*0x50+0x3ec)=NULL;}}
for (i=0;i<2;i++) {s32 off=i*0x50; u8 *obi; func_020a994c(arg0+0x580+off);func_020a98a0(arg0+0x580+off);obi=*(u8 **)(arg0+off+0x57c);if(obi!=NULL){((void (*)(u8 *))(*(void **)(obi+0xc)))(obi);*(u8 **)(arg0+i*0x50+0x57c)=NULL;}}
}

s32 func_020ae9cc(u32 arg0, s32 arg1) {
    u8 *base = func_020adda8();
    u8 *p;
    if (arg1 == 0) {
        if (arg0 >= 5) {
            return 0;
        }
    } else if (arg0 >= 5) {
        return 0;
    }
    p = *(u8 **)(base + arg0 * 0x50 + 0x3ec);
    *(u32 *)(p + 0x40) = 0;
    return 1;
}

void func_020aea1c(void) {
    u8 *base = func_020adda8();
    s32 i;
    for (i = 0; i < 5; i++) {
        u8 *p = *(u8 **)(base + i * 0x50 + 0x3ec);
        if (p != NULL) {
            *(u32 *)(p + 0x40) = 0;
        }
    }
}

void func_020aea50(void) {
    u8 *base = func_020adda8();
    s32 i;
    for (i = 0; i < 5; i++) {
        u8 *p = *(u8 **)(base + i * 0x50 + 0x3ec);
        if (p != NULL) {
            *(u32 *)(p + 0x40) = 1;
        }
    }
}

extern u8 *func_020adda8(void);
extern void func_020a994c(void *);
void func_020aea84(void) {
    u8 *base = func_020adda8();
    s32 i;
    for (i = 0; i < 5; i++) {
        func_020a994c(base + 0x3f0 + i * 0x50);
    }
}

void func_020aed5c(s32 arg0) {
    u8 *ptr = func_020adda8();
    if (arg0 == 0) {
        u8 *sub = *(u8 **)(ptr + 0x57c);
        if (sub != NULL) {
            *(u32 *)(sub + 0x40) = 0;
        }
    } else if (arg0 == 1) {
        u8 *sub = *(u8 **)(ptr + 0x5cc);
        if (sub != NULL) {
            *(u32 *)(sub + 0x40) = 0;
        }
    }
}

void func_020aeda0(void) {
    func_020aed5c(0);
    func_020aed5c(1);
    func_020aea1c();
    func_020ae530();
}

