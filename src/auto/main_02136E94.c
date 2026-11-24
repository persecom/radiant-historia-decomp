/* 38 functions from 0x02136E94 to 0x02137E58 (main), found by ds-decomp. */
#include "common.h"
extern u8 data_0215c090[12], data_0215c09c[28], data_0215c0b8[12], data_0215c0c4[32];

extern u8 data_0215c214[12];
extern u8 data_0215c0e4[12];
extern u8 data_0215c0f0[28];
extern u8 data_0215c10c[12];
extern u8 data_0215c118[32];
extern u8 data_0215c18c[12];
extern u8 data_0215c198[28];
extern u8 data_0215c1b4[12];
extern u8 data_0215c1c0[32];
extern s32 func_021369c0(void *);
extern void func_021369e0(void *, void *);
extern s32 func_02137190(u8 *, s32, s32, s32 *);
extern void func_02136958(void);
extern u8 data_02145b08[64];
extern void *data_0215c1e0;
extern s32 data_02175d3c;
extern u32 data_02175d40[0x18][0x12];
extern u8 data_0215c1e4[48];
extern u8 data_02145af8[16];
extern void func_021372c0(void);
extern void func_02137330(void);
extern void func_021375e0(void *);

typedef struct {
    u8 data[1728];
} Block_02175d40;

extern u8 data_0215c55c[12];
extern u8 data_0215c568[28];
extern u8 data_0215c584[12];
extern u8 data_0215c590[32];
extern u8 data_0215c5b0[12];
extern u8 data_0215c5bc[28];
extern u8 data_0215c5d8[12];
extern u8 data_0215c5e4[32];

extern void func_021378d8(void);
extern void func_021369a8(void);
extern void func_02137470(void *);
extern void func_02013878(void *, s32, u32);
extern u8 data_0215c2c8[12];
extern u8 data_0215c2d4[28];
extern u8 data_0215c2f0[12];
extern u8 data_0215c2fc[32];
extern u8 data_0215c220[12];
extern u8 data_0215c22c[28];
extern u8 data_0215c248[12];
extern u8 data_0215c254[32];
extern u8 data_0215c31c[12];
extern u8 data_0215c328[28];
extern u8 data_0215c344[12];
extern u8 data_0215c350[32];
extern u8 data_0215c370[12];
extern u8 data_0215c37c[28];
extern u8 data_0215c398[12];
extern u8 data_0215c3a4[32];
extern void func_021369b4(void);
extern void func_02136f8c(u32, u32, u32);
void func_02136e94(u8 *arg0, s32 arg1, s32 arg2, u32 *arg3) {
 if(arg0==NULL) {func_021369e0(data_0215c090,data_0215c09c); return;}
 if(*(u32 *)(arg0+4)==0) {func_021369e0(data_0215c0b8,data_0215c0c4); return;}
 if(arg1==0) {arg3[1]=0; arg3[0]=0;}
 else if(arg1==1) {
 s32 count=*(s32 *)(arg0+0xc);
 if(count>=arg2) count=arg2;
 arg3[1]=count;
 arg3[0]=*(u32 *)(arg0+0x14)+*(u32 *)(arg0+0x10);
 *(u32 *)(arg0+0x10)+=count;
 *(u32 *)(arg0+0xc)-=arg3[1];
 } else {
 arg3[1]=0; arg3[0]=0;
 if(*(u32 *)(arg0+0x1c)!=0) ((void (*)(u32,s32))(*(u32 *)(arg0+0x1c)))(*(u32 *)(arg0+0x20),-3);
 }
}

void func_02136f60(u32 arg0, u32 arg1, u32 arg2) {
    func_021369a8();
    func_02136f8c(arg0, arg1, arg2);
    func_021369b4();
}

void func_02136f8c(u32 arg0, u32 arg1, u32 arg2) {
    u8 *p0 = (u8 *)arg0;
    s32 *p2 = (s32 *)arg2;
    if (p0 == NULL) {
        func_021369e0(data_0215c0e4, data_0215c0f0);
        return;
    }
    if (*(u32 *)(p0 + 4) == 0) {
        func_021369e0(data_0215c10c, data_0215c118);
        return;
    }
    if (p2[1] <= 0) {
        return;
    }
    if (p2[0] != 0 && arg1 != 0 && arg1 != 1) {
        p2[1] = 0;
        p2[0] = 0;
        if (*(u32 *)(p0 + 0x1c) != 0) {
            ((void (*)(u32, s32))(*(u32 *)(p0 + 0x1c)))(*(u32 *)(p0 + 0x20), -3);
        }
    }
}

extern void func_02137044(u32, u32, u32);
void func_02137018(u32 arg0, u32 arg1, u32 arg2) {
    func_021369a8();
    func_02137044(arg0, arg1, arg2);
    func_021369b4();
}

s32 func_02137154(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 ret;
    func_021369a8();
    ret = func_02137190(arg0, arg1, arg2, arg3);
    func_021369b4();
    return ret;
}

s32 func_02137190(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 val;
    if (arg0 == NULL) {
        func_021369e0(data_0215c18c, data_0215c198);
        return 0;
    }
    if (*(u32 *)(arg0 + 4) == 0) {
        func_021369e0(data_0215c1b4, data_0215c1c0);
        return 0;
    }
    if (arg1 == 0) {
        val = 0;
    } else if (arg1 == 1) {
        val = *(s32 *)(arg0 + 0xc);
        if (val >= arg2) {
            val = arg2;
        }
    } else {
        val = 0;
        if (*(u32 *)(arg0 + 0x1c) != 0) {
            ((void (*)(u32, s32))(*(u32 *)(arg0 + 0x1c)))(*(u32 *)(arg0 + 0x20), -3);
        }
    }
    *arg3 = val;
    return val == arg2;
}

s32 func_0213723c(void) {
    return func_021369c0(data_0215c214);
}

extern void func_02132bf8(void *, s32, void *);
extern void func_02132c1c(void *, s32, void *);
void func_02137250(void *arg0, void *arg1) {
    u8 buf[0x40];
    func_02132bf8(buf, 0x40, arg0);
    func_02132c1c(buf, 0x40, arg1);
    func_021369c0(buf);
}

void func_02137294(void) {
    data_0215c1e0 = data_02145b08;
    func_02136958();
    func_021369a8();
    func_021372c0();
    func_021369b4();
}

void func_021372c0(void) {
    if (data_02175d3c == 0) {
        memset(data_02175d40, 0, sizeof(data_02175d40));
    }
    data_02175d3c++;
}

void func_02137318(void) {
    func_021369a8();
    func_02137330();
    func_021369b4();
    func_02136980();
}

void func_02137330(void) {
    data_02175d3c--;
    if (data_02175d3c == 0) {
        memset(data_02175d40, 0, sizeof(data_02175d40));
    }
}

extern s32 func_021373b0(s32, s32, s32);
s32 func_0213737c(s32 arg0, s32 arg1, s32 arg2) {
    s32 ret;
    func_021369a8();
    ret = func_021373b0(arg0, arg1, arg2);
    func_021369b4();
    return ret;
}

s32 func_021373b0(s32 arg0, s32 arg1, s32 arg2) {
    s32 i;
    u32 *p;
    for (i = 0; i < 0x18; i++) {
        if (data_02175d40[i][1] == 0) {
            break;
        }
    }
    if (i == 0x18) {
        p = NULL;
        goto done;
    }
    p = (u32 *)data_02175d40[i];
    p[1] = 1;
    p[0] = (u32)data_0215c1e4;
    p[7] = (u32)arg0;
    p[8] = (u32)arg1;
    p[9] = (u32)arg2;
    p[2] = (u32)data_02145af8;
    p[14] = (u32)func_0213723c;
    p[15] = (u32)p;
    p[16] = 0;
    p[17] = 0;
    func_021375e0(p);
done:
    return (s32)p;
}

void func_02137454(void *arg0) {
    func_021369a8();
    func_02137470(arg0);
    func_021369b4();
}

void func_02137470(void *arg0) {
    if (arg0 == NULL) {
        func_02137250(data_0215c220, data_0215c22c);
        return;
    }
    if (*(void **)((u8 *)arg0 + 4) == NULL) {
        func_02137250(data_0215c248, data_0215c254);
        return;
    }
    func_02013878(arg0, 0, 0x48);
    *(void **)((u8 *)arg0 + 4) = NULL;
}

extern void *func_021374f4(void *);
void *func_021374d0(void *arg0) {
    void *ret;
    func_021369a8();
    ret = func_021374f4(arg0);
    func_021369b4();
    return ret;
}

extern u8 data_0215c274[];
extern u8 data_0215c280[];
extern u8 data_0215c29c[];
extern u8 data_0215c2a8[];
void *func_021374f4(void *arg0) {
    if (arg0 == NULL) {
        func_02137250(data_0215c274, data_0215c280);
        return NULL;
    }
    if (*(void **)((u8 *)arg0 + 4) == NULL) {
        func_02137250(data_0215c29c, data_0215c2a8);
        return NULL;
    }
    return *(void **)((u8 *)arg0 + 8);
}

extern void func_02137574(u32, u32, u32);
void func_02137548(u32 arg0, u32 arg1, u32 arg2) {
    func_021369a8();
    func_02137574(arg0, arg1, arg2);
    func_021369b4();
}

void func_02137574(u32 arg0, u32 arg1, u32 arg2) {
    if (arg0 == 0) {
        func_02137250(data_0215c2c8, data_0215c2d4);
        return;
    }
    if (*(void **)(arg0 + 4) == NULL) {
        func_02137250(data_0215c2f0, data_0215c2fc);
        return;
    }
    *(u32 *)(arg0 + 0x38) = arg1;
    *(u32 *)(arg0 + 0x3c) = arg2;
}

extern void func_021375e0(void *);
void func_021375c4(void *arg0) {
    func_021369a8();
    func_021375e0(arg0);
    func_021369b4();
}

void func_021375e0(void *arg0)
{
  u32 v;
  if (arg0 == NULL)
  {
    func_02137250(data_0215c31c, data_0215c328);
    return;
  }
  if ((*((void **) (((u8 *) arg0) + 4))) == NULL)
  {
    func_02137250(data_0215c344, data_0215c350);
    return;
  }
  ;
  *((u32 *) (((u8 *) arg0) + 0xc)) = 0;
  *((u32 *) (((u8 *) arg0) + 0x10)) = *((u32 *) (((u8 *) arg0) + 0x20));
  *((u32 *) (((u8 *) arg0) + 0x14)) = 0;
  *((u32 *) (((u8 *) arg0) + 0x18)) = 0;
  *((u32 *) (((u8 *) arg0) + 0x28)) = 0;
  *((u32 *) (((u8 *) arg0) + 0x2c)) = 0;
  *((u32 *) (((u8 *) arg0) + 0x30)) = 0;
  *((u32 *) (((u8 *) arg0) + 0x34)) = 0;
}

extern s32 func_02137680(void *, void *);
s32 func_02137654(void *arg0, void *arg1) {
    s32 ret;
    func_021369a8();
    ret = func_02137680(arg0, arg1);
    func_021369b4();
    return ret;
}

s32 func_02137680(void *arg0, void *arg1) {
    s32 mode = (s32)arg1;
    if (arg0 == NULL) {
        func_02137250(data_0215c370, data_0215c37c);
        return 0;
    }
    if (*(u32 *)((u8 *)arg0 + 4) == 0) {
        func_02137250(data_0215c398, data_0215c3a4);
        return 0;
    }
    if (mode == 1) return *(s32 *)((u8 *)arg0 + 0xc);
    if (mode == 0) return *(s32 *)((u8 *)arg0 + 0x10);
    if (*(void **)((u8 *)arg0 + 0x38) != NULL) {
        ((void (*)(s32, s32))(*(u32 *)((u8 *)arg0 + 0x38)))(*(u32 *)((u8 *)arg0 + 0x3c), -3);
    }
    return 0;
}

extern void func_02137708();
extern void func_0213773c(void *, void *, s32, s32);
void func_02137708(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    func_021369a8();
    func_0213773c(arg0, arg1, arg2, arg3);
    func_021369b4();
}

void func_021378cc(void) {
    func_021378d8();
}

extern void func_02137a84(u32, u32, u32);
void func_02137a58(u32 arg0, u32 arg1, u32 arg2) {
    func_021369a8();
    func_02137a84(arg0, arg1, arg2);
    func_021369b4();
}

extern s32 func_02137c68(u8 *, s32, s32, s32 *);
s32 func_02137c2c(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 ret;
    func_021369a8();
    ret = func_02137c68(arg0, arg1, arg2, arg3);
    func_021369b4();
    return ret;
}

extern void *func_02137d68(void *);
void *func_02137d44(void *arg0) {
    void *ret;
    func_021369a8();
    ret = func_02137d68(arg0);
    func_021369b4();
    return ret;
}

void *func_02137d68(void *arg0) {
    if (arg0 == NULL) {
        func_02137250(data_0215c55c, data_0215c568);
        return NULL;
    }
    if (*(void **)((u8 *)arg0 + 4) == NULL) {
        func_02137250(data_0215c584, data_0215c590);
        return NULL;
    }
    return *(void **)((u8 *)arg0 + 0x1c);
}

extern void *func_02137de0(void *);
void *func_02137dbc(void *arg0) {
    void *ret;
    func_021369a8();
    ret = func_02137de0(arg0);
    func_021369b4();
    return ret;
}

void *func_02137de0(void *arg0) {
    if (arg0 == NULL) {
        func_02137250(data_0215c5b0, data_0215c5bc);
        return NULL;
    }
    if (*(void **)((u8 *)arg0 + 4) == NULL) {
        func_02137250(data_0215c5d8, data_0215c5e4);
        return NULL;
    }
    return *(void **)((u8 *)arg0 + 0x20);
}

extern void *func_02137e58(void *);
void *func_02137e34(void *arg0) {
    void *ret;
    func_021369a8();
    ret = func_02137e58(arg0);
    func_021369b4();
    return ret;
}

