/* 71 functions from 0x0212D7BC to 0x0212E764 (main), found by ds-decomp. */
#include "common.h"

extern u32 data_021744d8[];
extern u32 data_02174524[0x100];
extern u8 data_02174608[];
extern void func_021384b0(void);
extern void func_021384c0(void);
extern void func_0212ea7c(void);
extern void func_020065c8(u32);
extern void func_02006510(s32);

extern void func_021333b0(void);
extern void func_0212e5a0(void);
extern void func_0212e5ac(void);
extern void func_0212e4b4(void);
extern void func_0212e528(void);
extern void func_0212e204(void *);
extern void func_0212da40(void *);
extern void func_0212dd4c(void *);
extern void func_0212db74(void *);
extern void func_0212dabc(void *, u32, u32, u32, u64);
extern void func_0212db44(s8 *);
extern void func_02013878(void *, s32, u32);
extern s32 func_0212d9f8(void *, void *);
extern void func_0212d7bc(void *, s32, s32, s32, s32);
extern void func_0212dce4(void *);
extern void func_0212dd00(void *);
extern s32 func_0212dc40(void *, s32);

typedef struct UnkStruct_0212dc58 {
    u8 unk00;
    u8 unk01;
    u8 unk02;
    u8 unk03;
    u8 unk04[0x14];
    s32 unk18;
    u8 unk1c[0xc];
    s32 unk28;
    s32 unk2c;
    u8 unk30[8];
    s32 unk38;
    u8 unk3c[0xf];
    u8 unk4b;
    u8 unk4c[4];
    s32 unk50;
} UnkStruct_0212dc58;
extern void func_0212e57c(void);
extern void func_0212e588(void);
extern void func_0212db90(void *);
extern void func_0212db28(void *);
extern void func_0212bfa4(void);
extern void func_020066e0(s32);
extern s32 func_0212dc0c(s8 *);
extern void func_0212dd68(void *);
extern s32 func_0212dcb8(void *);
extern void func_0212dc58(void *);
extern void func_0212de14(void *, s32);
extern void func_0212dde4(void *, u32, u32);
extern s32 data_02173ab8[];
extern s32 data_02156d74[];
extern s32 data_021740d8[];
extern s32 data_021740e4[];
extern u8 data_021740f0[10][0x64];
typedef s32 (*UnkFn_0212d7bc)(void *, s32);
void func_0212d7bc(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *obj = (void *)arg4;
    u8 *p = (u8 *)arg0;
    s32 total;
    func_0212e57c();
    p[1] = 1;
    p[2] = 0;
    *(u32 *)(p + 4) = arg4;
    *(u32 *)(p + 8) = arg1;
    *(u32 *)(p + 0xc) = arg2;
    *(u32 *)(p + 0x10) = arg3;
    *(u32 *)(p + 0x14) = arg3 >> 31;
    *(u32 *)(p + 0x18) = ((arg3 % 0x800) > 0) + (arg3 / 0x800);
    *(u32 *)(p + 0x30) = 0x40;
    *(u32 *)(p + 0x5c) = 0;
    *(u32 *)(p + 0x60) = 0xfffff;
    *(u32 *)(p + 0x34) = ((arg3 % 0x800) > 0) + (arg3 / 0x800);
    if (*(u32 *)(p + 4) != 0) {
        total = ((UnkFn_0212d7bc)((u32 **)obj)[0][9])(obj, 0) + ((UnkFn_0212d7bc)((u32 **)obj)[0][9])(obj, 1);
        *(u32 *)(p + 0x44) = total;
        *(u32 *)(p + 0x1c) = total;
        *(u32 *)(p + 0x20) = total;
    }
    p[0x48] = 0;
    p[0] = 1;
    func_0212e588();
}

void *func_0212d89c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *entry = NULL;
    s32 i;
    for (i = 0; i < data_02156d74[2]; i++) {
        entry = data_021740f0[data_021740d8[4] + i];
        if ((s8)entry[0] == 0) {
            break;
        }
    }
    if (i == data_02156d74[2]) {
        return NULL;
    }
    func_0212d7bc(entry, arg0, arg1, arg2, arg3);
    entry[3] = 1;
    return entry;
}

void *func_0212d938(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *e = NULL;
    s32 i;
    for (i = 0; i < data_02156d74[0]; i++) {
        e = data_021740f0[data_02156d74[1] + i];
        if ((s8)e[0] == 0) {
            break;
        }
    }
    if (i == data_02156d74[0]) {
        return NULL;
    }
    func_0212d7bc(e, arg0, arg1, arg2, arg3);
    e[3] = 0;
    return e;
}

s32 func_0212d9cc(void *arg0, void *arg1) {
    s32 ret;
    func_0212e5a0();
    ret = func_0212d9f8(arg0, arg1);
    func_0212e5ac();
    return ret;
}

s32 func_0212d9f8(void *arg0, void *arg1) {
    if ((s32)arg1 < 0x100) {
        return (s32)func_0212d89c(0, 0, 0, (s32)arg0);
    }
    return (s32)func_0212d938(0, 0, 0, (s32)arg0);
}

void func_0212da24(void *arg0) {
    func_0212e5a0();
    func_0212da40(arg0);
    func_0212e5ac();
}

void func_0212da40(void *arg0) {
    if (arg0 == NULL) {
        return;
    }
    func_0212dd4c(arg0);
    func_0212db74(arg0);
    *(u8 *)arg0 = 0;
    func_02013878(arg0, 0, 0x64);
}

void func_0212da70(void *arg0, u32 arg1, u32 arg2, u32 arg3, u64 arg4) {
    func_0212e5a0();
    func_0212dabc(arg0, arg1, arg2, arg3, arg4);
    func_0212e5ac();
}

void func_0212dabc(void *arg0, u32 arg1, u32 arg2, u32 arg3, u64 arg4) {
    func_0212e57c();
    *(u32 *)((u8 *)arg0 + 0xc) = arg3;
    *(u64 *)((u8 *)arg0 + 0x10) = arg4;
    *(u32 *)((u8 *)arg0 + 0x18) = (u32)(((s64)arg4 + 0x7ff) / 0x800);
    *(u32 *)((u8 *)arg0 + 0x54) = arg1;
    *(u32 *)((u8 *)arg0 + 0x58) = arg2;
    *(u8 *)((u8 *)arg0 + 0x49) = 1;
    func_0212e588();
}

void func_0212db28(void *arg0) {
    func_0212e5a0();
    func_0212db44(arg0);
    func_0212e5ac();
}

void func_0212db44(s8 *arg0) {
    func_0212dce4(arg0);
    func_0212e57c();
    if (arg0[0x4d] == 1) {
        arg0[0x4a] = 1;
    }
    arg0[0x49] = 0;
    func_0212e588();
}

void func_0212db74(void *arg0) {
    func_0212e5a0();
    func_0212db90(arg0);
    func_0212e5ac();
}

void func_0212db90(void *arg0) {
    s8 *r6 = (s8 *)arg0;
    func_0212dd4c(r6);
    func_0212db28(r6);
    for (;;) {
        if (r6[0x4d] == 0 && r6[0x4a] == 0) {
            break;
        }
        func_0212bfa4();
        if (data_02173ab8[0] != 0) {
            func_020066e0(1);
        }
    }
}

s32 func_0212dbe8(s8 *arg0) {
    s32 ret;
    func_0212e5a0();
    ret = func_0212dc0c(arg0);
    func_0212e5ac();
    return ret;
}

s32 func_0212dc0c(s8 *arg0) {
    return arg0[1];
}

s32 func_0212dc14(void *arg0, void *arg1) {
    s32 ret;
    func_0212e5a0();
    ret = func_0212dc40(arg0, (s32)arg1);
    func_0212e5ac();
    return ret;
}

s32 func_0212dc40(void *arg0, s32 arg1) {
    s32 max = *(s32 *)((u8 *)arg0 + 0x18);
    *(s32 *)((u8 *)arg0 + 0x5c) = arg1;
    if (arg1 > max) {
        *(s32 *)((u8 *)arg0 + 0x5c) = max;
    }
    return *(s32 *)((u8 *)arg0 + 0x5c);
}

void func_0212dc58(void *arg0) {
    UnkStruct_0212dc58 *p = arg0;
    s32 zero = 0;
    if (p->unk18 == 0) {
        p->unk01 = 3;
        p->unk38 = zero;
        p->unk50 = zero;
    } else {
        p->unk01 = 2;
        p->unk38 = zero;
        p->unk50 = zero;
    }
    p->unk02 = 0;
    p->unk28 = 0;
    p->unk2c = 0;
    p->unk4b = 1;
}

s32 func_0212dc94(void *arg0) {
    s32 ret;
    func_0212e5a0();
    ret = func_0212dcb8(arg0);
    func_0212e5ac();
    return ret;
}

s32 func_0212dcb8(void *arg0) {
    func_0212e57c();
    func_0212dc58(arg0);
    *(u32 *)((u8 *)arg0 + 0x60) = 0xfffff;
    func_0212e588();
    return 1;
}

void func_0212dce4(void *arg0) {
    func_0212e5a0();
    func_0212dd00(arg0);
    func_0212e5ac();
}

void func_0212dd00(void *arg0) {
    s8 *r4 = (s8 *)arg0;
    func_0212e57c();
    if (r4[1] == 2 && r4[2] == 1) {
        r4[0x4c] = 1;
        if (r4[0x4b] == 1) {
            r4[0x4b] = 0;
        }
    } else {
        r4[1] = 1;
    }
    func_0212e588();
}

void func_0212dd4c(void *arg0) {
    func_0212e5a0();
    func_0212dd68(arg0);
    func_0212e5ac();
}

void func_0212dd68(void *arg0) {
    s8 *r6 = (s8 *)arg0;
    func_0212dce4(r6);
    for (;;) {
        if (r6[1] == 1 && *(u32 *)(r6 + 0x28) == 0) {
            break;
        }
        func_0212bfa4();
        if (data_02173ab8[0] != 0) {
            func_020066e0(1);
        }
    }
}

void func_0212ddb8(void *arg0, u32 arg1, u32 arg2) {
    func_0212e5a0();
    func_0212dde4(arg0, arg1, arg2);
    func_0212e5ac();
}

void func_0212dde4(void *arg0, u32 arg1, u32 arg2) {
    *(u32 *)((u8 *)arg0 + 0x3c) = arg1;
    *(u32 *)((u8 *)arg0 + 0x40) = arg2;
}

void func_0212ddf0(void *arg0, void *arg1) {
    func_0212e5a0();
    func_0212de14(arg0, arg1);
    func_0212e5ac();
}

void func_0212de14(void *arg0, s32 arg1) {
    s32 v = arg1;
    if (v < 0) {
        v = *(s32 *)((u8 *)arg0 + 0x18);
    }
    *(s32 *)((u8 *)arg0 + 0x34) = v;
}

void func_0212de24(void) {
    data_021740d8[0]++;
}

extern void func_02133300(void *,s32,s32);
extern void func_02137f80(void *,s32,void *,void *);
extern s32 func_0213363c(void *);
extern s32 func_02133358(void *,s32,void *);
void func_0212de3c(void *arg0) {
s8 *p=arg0;
void *obj=*(void **)(p+4);
s32 zero=0;
s32 status=func_021333e8(*(void **)(p+8));
s32 b[2],c[2],a[2];
s32 n,total;
func_0212e57c();
if(p[2]==1) {
if(status==1) {
p[2]=zero;func_0212e588();
n=*(s32 *)(p+0x24);
func_02137f80(p+0x28,n<<11,b,c);
((void (*)(void *,s32,void *))(*(u32 **)obj)[8])(obj,1,b);
((void (*)(void *,s32,void *))(*(u32 **)obj)[7])(obj,zero,c);
*(s32 *)(p+0x38)+=n<<11;
*(s32 *)(p+0x28)=zero;*(s32 *)(p+0x2c)=zero;
*(s32 *)(p+0x5c)+=*(s32 *)(p+0x24);
total=*(s32 *)(p+0x18);
if(*(s32 *)(p+0x5c)==*(s32 *)(p+0x34)) {
void (*cb)(void *)=*(void (**)(void *))(p+0x3c);
if(cb) cb(*(void **)(p+0x40));
}
if(*(s32 *)(p+0x5c)>=total) p[1]=3;
else if(*(u32 *)(p+0x60)<=(*(u32 *)(p+0x38)>>11) && *(u32 *)(p+0x60)<0xfffff) p[1]=3;
*(s32 *)(p+0x50)=0;
} else if(status==3) {
p[2]=zero;func_0212e588();
((void (*)(void *,s32,void *))(*(u32 **)obj)[7])(obj,zero,p+0x28);
*(s32 *)(p+0x28)=zero;*(s32 *)(p+0x2c)=zero;
if(func_0213363c(*(void **)(p+8))==0) p[1]=4;
else if(data_021740d8[1]>=0 && *(s32 *)(p+0x50)>=data_021740d8[1]) p[1]=4;
else if(*(s32 *)(p+0x50)<0x7fffffff) ++*(s32 *)(p+0x50);
} else func_0212e588();
} else func_0212e588();
zero=0;
if(p[1]==4)return;
func_0212e57c();
if(p[2]==0) {
p[2]=1;*(s32 *)(p+0x28)=zero;*(s32 *)(p+0x2c)=zero;
func_0212e588();
if(p[0x48]==1 || p[0x4c]==1) {p[2]=zero;return;}
if(*(s32 *)(p+0x18)==0) {p[2]=zero;*(s32 *)(p+0x24)=zero;p[1]=3;return;}
if(!obj || !*(void **)obj) {p[2]=zero;func_0212de24();return;}
n=((s32 (*)(void *,s32))(*(u32 **)obj)[9])(obj,zero);
if(*(s32 *)(p+0x44)-n>=*(s32 *)(p+0x20)) {p[2]=zero;return;}
((void (*)(void *,s32,s32,void *))(*(u32 **)obj)[6])(obj,zero,*(s32 *)(p+0x1c),a);
n=a[1]/0x800;
if(*(s32 *)(p+0x34)-*(s32 *)(p+0x5c)<=n) n=*(s32 *)(p+0x34)-*(s32 *)(p+0x5c);
if(n>=*(s32 *)(p+0x18)-*(s32 *)(p+0x5c)) n=*(s32 *)(p+0x18)-*(s32 *)(p+0x5c);
if(n>=*(s32 *)(p+0x30)) n=*(s32 *)(p+0x30);
func_02133300(*(void **)(p+8),*(s32 *)(p+0xc)+*(s32 *)(p+0x5c),0);
if(*(s32 *)(p+0x60)!=0xfffff) {
s32 remain=*(s32 *)(p+0x60)-*(s32 *)(p+0x38)/0x800;
if(n>=remain)n=remain;
}
*(s32 *)(p+0x24)=func_02133358(*(void **)(p+8),n,(void *)a[0]);
*(s32 *)(p+0x28)=a[0];*(s32 *)(p+0x2c)=a[1];
if(*(s32 *)(p+0x24)>0)return;
((void (*)(void *,s32,void *))(*(u32 **)obj)[7])(obj,zero,p+0x28);
*(s32 *)(p+0x28)=zero;*(s32 *)(p+0x2c)=zero;p[2]=zero;
if(func_021333e8(*(void **)(p+8))!=3)return;
if(func_0213363c(*(void **)(p+8))==0) {p[1]=4;return;}
if(data_021740d8[1]>=0 && *(s32 *)(p+0x50)>=data_021740d8[1]) {p[1]=4;return;}
if(*(s32 *)(p+0x50)<0x7fffffff) ++*(s32 *)(p+0x50);
} else func_0212e588();
}

extern char data_02156d80[];
extern char data_02156dac[];
extern void func_02133258(void *);
extern void *func_02132fa4(void *, s32, s32);
extern void func_0212be08(const char *, ...);
extern s32 func_02133500(void *);
extern s32 func_02133440(void *);
extern void func_02133300(void *, s32, s32);
extern s32 func_021332a8(void *);
extern s32 func_021333e8(void *);
extern void func_0212de3c(void *);
void func_0212e204(void *arg0) {
    s8 *p = (s8 *)arg0;
    s32 flag;

    if (p[2] != 0) {
        goto end;
    }

    if (p[0x4c] == 1) {
        p[0x4c] = 0;
        if (p[0x4b] == 0) {
            p[1] = 1;
        }
    }

    if (p[0x4a] == 1) {
        void *fp = *(void **)(p + 8);
        if (fp != NULL) {
            *(void **)(p + 8) = NULL;
            func_02133258(fp);
        }
        func_0212e57c();
        p[0x4a] = 0;
        p[0x4d] = 0;
        func_0212e588();
    }

    func_0212e57c();
    flag = 0;
    if (p[0x49] == 1) {
        if (p[0x49] == 1 && p[0x4a] == 1) {
            return;
        }
        if (p[0x4d] == 0) {
            flag = 1;
            p[0x4d] = 1;
            func_0212e588();
            if (*(void **)(p + 8) == NULL) {
                void *fp = func_02132fa4(*(void **)(p + 0x54), *(s32 *)(p + 0x58), 0);
                *(void **)(p + 8) = fp;
                if (fp == NULL) {
                    func_0212be08(data_02156d80, *(void **)(p + 0x54));
                    p[1] = 4;
                    p[0x4d] = 0;
                    p[0x49] = 0;
                    return;
                }
            }
        }
        if (p[0x4d] == 1) {
            s64 size;
            s32 sectors;
            if (flag == 0) {
                func_0212e588();
            }
            if (p[0x49] == 1 && p[0x4a] == 1) {
                return;
            }
            if (*(s32 *)(p + 0x58) == 0) {
                size = func_02133500(*(void **)(p + 8));
                if (size < 0) {
                    size = func_02133440(*(void **)(p + 0x54));
                }
                sectors = (size + 0x7ff) / 0x800;
            } else {
                func_02133300(*(void **)(p + 8), 0, 2);
                sectors = func_021332a8(*(void **)(p + 8));
                size = (s32)(sectors << 11);
                func_02133300(*(void **)(p + 8), 0, 0);
            }
            if (*(s64 *)(p + 0x10) == 0x7ffff800) {
                *(s64 *)(p + 0x10) = size;
                *(s32 *)(p + 0x18) = sectors;
            }
            if (*(s32 *)(p + 0xc) > sectors) {
                *(s32 *)(p + 0xc) = sectors;
            }
            if (*(s32 *)(p + 0x18) + *(s32 *)(p + 0xc) > sectors) {
                s32 rem = sectors - *(s32 *)(p + 0xc);
                *(s32 *)(p + 0x18) = rem;
                *(s64 *)(p + 0x10) = (s64)rem << 11;
            }
            func_0212dc14(p, NULL);
            p[0x49] = 0;
            if (func_021333e8(*(void **)(p + 8)) == 3) {
                void *fp;
                func_0212be08(data_02156dac, *(void **)(p + 0x54));
                fp = *(void **)(p + 8);
                if (fp != NULL) {
                    *(void **)(p + 8) = NULL;
                    func_02133258(fp);
                }
                p[1] = 4;
                p[0x4d] = 0;
                p[0x49] = 0;
                return;
            }
        }
    } else {
        func_0212e588();
    }

    if (p[0x4b] == 1) {
        p[0x4b] = 0;
    }

end:
    if (p[1] == 2 && p[0x4d] == 1 && p[0x49] == 0) {
        func_0212de3c(p);
    }
}

void func_0212e4a0(void) {
    func_0212e5a0();
    func_0212e4b4();
    func_0212e5ac();
}

void func_0212e4b4(void) {
    s32 i;
    if (func_0212e594(data_021740e4) == 0) {
        return;
    }
    for (i = 0; i < 10; i++) {
        if ((s8)data_021740f0[i][0] == 1) {
            func_0212e204(&data_021740f0[i][0]);
        }
    }
    data_021740d8[3] = 0;
}

void func_0212e514(void) {
    func_0212e5a0();
    func_0212e528();
    func_0212e5ac();
}

void func_0212e528(void) {
    func_021333b0();
}

void func_0212e534(void) {
}

extern s32 func_0212e56c(s32, s32, s32);
s32 func_0212e538(s32 arg0, s32 arg1, s32 arg2) {
    s32 ret;
    func_0212e5a0();
    ret = func_0212e56c(arg0, arg1, arg2);
    func_0212e5ac();
    return ret;
}

s32 func_0212e56c(s32 arg0, s32 arg1, s32 arg2) {
    *(s32 *)((u8 *)arg0 + 0x20) = arg1;
    *(s32 *)((u8 *)arg0 + 0x1c) = arg2;
    return 1;
}

extern void func_0212a9dc(void);
void func_0212e57c(void) {
    func_0212a9dc();
}

extern void func_0212a9e8(void);
void func_0212e588(void) {
    func_0212a9e8();
}

extern void func_02138658(void);
s32 func_0212e594() {
    func_02138658();
}

extern void func_0212a9f4(void);
void func_0212e5a0(void) {
    func_0212a9f4();
}

extern void func_0212a9f8(void);
void func_0212e5ac(void) {
    func_0212a9f8();
}

void func_0212e5b8(void) {
}

void func_0212e5bc(void) {
}

void func_0212e5c0(void) {
}

void func_0212e5c4(void) {
}

void func_0212e5c8(void) {
}

void func_0212e5cc(void) {
}

void func_0212e5d0(void) {
}

s32 func_0212e5d4(void) {
    return 0;
}

void func_0212e5dc(void) {
}

void func_0212e5e0(void) {
}

void func_0212e5e4(void) {
}

void func_0212e5e8(void) {
}

void func_0212e5ec(void) {
}

void func_0212e5f0(void) {
}

void func_0212e5f4(void) {
}

void func_0212e5f8(void) {
}

void func_0212e5fc(void) {
}

void func_0212e600(void) {
}

void func_0212e604(void) {
}

void func_0212e608(void) {
}

void func_0212e60c(void) {
}

extern void func_0212c4c8(void);
void func_0212e610(void) {
    func_0212c4c8();
}

extern void func_0213807c(void);
void func_0212e61c(void) {
    func_0213807c();
}

extern void func_0213808c(void);
void func_0212e628(void) {
    func_0213808c();
}

void func_0212e634(void) {
    if (data_021744d8[1] == 0) {
        u16 ime = *(volatile u16 *)0x04000208;
        *(volatile u16 *)0x04000208 = 0;
        data_021744d8[2] = ime;
    }
    data_021744d8[1]++;
}

void func_0212e670(void) {
    if (--data_021744d8[1] == 0) {
        u32 saved = ((volatile u32 *)data_021744d8)[2];
        (void)*(volatile u16 *)0x04000208;
        *(volatile u16 *)0x04000208 = saved;
    }
}

void func_0212e69c(void) {
 while (data_02174524[2] == 1) {
 if(data_02174524[5] == 1) func_020065c8(data_02174524[0x264/4]);
 else func_020065c8((u32)data_02174608);
 func_021384b0(); func_021384c0();
 data_02174524[0x268/4]++;
 func_02006510(0);
 }
 func_0212ea7c();
}

extern u32 data_02174524[0x100];
extern u32 data_021744d8[];
extern u8 data_02174608[];
extern void func_021384b0(void);
extern void func_021384c0(void);
extern void func_0212ea7c(void);
extern void func_020065c8(u32);
extern void func_021384e0(void);
extern void func_02006510(s32);
void func_0212e70c(void) {
    while (data_02174524[4] == 1) {
        func_020065c8(data_02174524[0x264 / 4]);
        func_021384e0();
        data_02174524[0x26c / 4]++;
        func_02006510(0);
    }
    data_02174524[5] = 1;
}

