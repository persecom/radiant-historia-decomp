/* 17 functions from 0x0202FB50 to 0x02030878 (main), found by ds-decomp. */
#include "common.h"

extern u8 *data_02160204;
extern u32 data_02155c3c;
extern void *func_0210c594(s32, u32);
extern void func_021167ac(void *, s32);
extern void func_020305b0(void *, void *);
extern void func_0210c5dc(void *);
extern void func_021168f8(void *, void *);
extern void func_021167f0(void *, void *);
extern void *func_02030630(u8 *, u16);
extern void *func_0203053c(void);
extern u8 *func_02021f10(s32);
extern u8 *func_0202fa9c(void);
extern void func_0203017c(s32,void *,u16,s32);
void *func_0202ffb0(s32 id) {
 u8 *dst;
 u8 *src;
 s32 zero=0;
 u16 i;
 src=func_02021f10(id);
 if(src) {
 dst=func_0202fa9c();
 dst[0]=0;
 *(u16 *)(dst+0x34)=src[0x43];
 *(s32 *)(dst+4)=*(s16 *)(src+0x10);
 *(s32 *)(dst+8)=(s16)(*(u16 *)(src+0x12)+*(s16 *)(src+0x24));
 *(u16 *)(dst+0xc)=*(u16 *)(src+0x14);
 *(u16 *)(dst+0xe)=*(u16 *)(src+0x16)+*(s16 *)(src+0x26);
*(u16 *)(dst+16)=*(u16 *)(src+24);
*(u16 *)(dst+18)=*(u16 *)(src+26);
*(u16 *)(dst+20)=*(u16 *)(src+28);
*(u16 *)(dst+22)=*(u16 *)(src+30);
*(u16 *)(dst+24)=*(u16 *)(src+32);
*(u16 *)(dst+26)=*(u16 *)(src+34);
*(s8 *)(dst+0x36)=*(s8 *)(src+0x45);
 for(i=0;i<8;i++) *(s8 *)(dst+0x37+i)=*(s8 *)(src+0x46+i);
 func_0203017c(zero,dst,*(u16 *)(src+0x38),zero);
 func_0203017c(zero,dst,*(u16 *)(src+0x3a),zero);
 if(*(u16 *)(src+0x3c)) func_0203017c(zero,dst,*(u16 *)(src+0x3c),zero);
 if(*(u16 *)(src+0x3e)) func_0203017c(0,dst,*(u16 *)(src+0x3e),0);
 if(*(u16 *)(src+0x40)) func_0203017c(0,dst,*(u16 *)(src+0x40),0);
*(s16 *)(dst+40)=*(s16 *)(dst+16)+*(s16 *)(dst+28);
*(s16 *)(dst+42)=*(s16 *)(dst+18)+*(s16 *)(dst+30);
*(s16 *)(dst+44)=*(s16 *)(dst+20)+*(s16 *)(dst+32);
*(s16 *)(dst+46)=*(s16 *)(dst+22)+*(s16 *)(dst+34);
*(s32 *)(dst+0x30)=(s16)(*(s16 *)(dst+0x18)+*(s16 *)(dst+0xa6));
*(s16 *)(dst+0xba)=*(s16 *)(dst+0x1a)+*(s16 *)(dst+0xa8);
*(s32 *)(dst+0x70)=1;
*(u16 *)(dst+0x5a)=*(u16 *)(src+0x34);
*(void **)(dst+0xa0)=func_0203053c();
return dst;
}
return 0;
}

extern char data_0214624c[];
extern char data_02146264[];
extern char data_02146278[];
extern void *func_021092d8(void *);
extern s32 func_020f685c(void *, s32);
extern s32 func_02109444(void *);
extern void func_021093b0(void *);
extern void func_021093f0(void *);
void func_0203017c(s32 arg0, void *arg1, u16 arg2, s32 arg3) {
    u8 *r4;
    void *csv;
    u8 *r6;
    u16 i;

    csv = NULL;
    r4 = NULL;
    r6 = NULL;

    if (arg2 == 0) {
        return;
    }

    if (arg0 == 0) {
        r6 = (u8 *)arg1;
    } else {
        r4 = (u8 *)arg1;
    }

    if (arg2 >= 0x12d && arg2 <= 0x1a9) {
        csv = func_021092d8(data_0214624c);
    } else if (arg2 >= 0x208 && arg2 <= 0x26c) {
        csv = func_021092d8(data_02146264);
    } else if (arg2 >= 0x2bd && arg2 <= 0x31e) {
        csv = func_021092d8(data_02146278);
    }

    if (csv == NULL) {
        return;
    }

    while (1) {
        if (arg2 == func_020f685c(csv, 0)) {
            break;
        }
        if (func_02109444(csv) == 0) {
            func_021093b0(csv);
            return;
        }
    }

    func_021093f0(csv);
    func_021093f0(csv);
    func_021093f0(csv);
    func_021093f0(csv);
    func_021093f0(csv);

    if (arg0 == 0) {
        func_021093f0(csv);
        func_021093f0(csv);
        *(s16 *)(r6 + 0x1c) += (s16)func_020f685c(csv, 0);
        *(s16 *)(r6 + 0x1e) += (s16)func_020f685c(csv, 0);
        *(s16 *)(r6 + 0x20) += (s16)func_020f685c(csv, 0);
        *(s16 *)(r6 + 0x22) += (s16)func_020f685c(csv, 0);
        *(s16 *)(r6 + 0xa6) += (s16)func_020f685c(csv, 0);
        *(s16 *)(r6 + 0xa8) += (s16)func_020f685c(csv, 0);
        for (i = 0; i < 8; i++) {
            *(s16 *)(r6 + i * 2 + 0xaa) += (s16)func_020f685c(csv, 0);
        }
        *(s16 *)(r6 + 0x24) = 0;
    } else {
        *(s16 *)(r4 + 0x24) += (s16)func_020f685c(csv, 0);
        *(s16 *)(r4 + 0x26) += (s16)func_020f685c(csv, 0);
        *(s16 *)(r4 + 0x28) += (s16)func_020f685c(csv, 0);
        *(s16 *)(r4 + 0x2c) += (s16)func_020f685c(csv, 0);
        *(s16 *)(r4 + 0x2a) += (s16)func_020f685c(csv, 0);
        *(s16 *)(r4 + 0x2e) += (s16)func_020f685c(csv, 0);
        *(s16 *)(r4 + 0x30) += (s16)func_020f685c(csv, 0);
        *(s16 *)(r4 + 0x32) += (s16)func_020f685c(csv, 0);
    }

    if (csv != NULL) {
        func_021093b0(csv);
    }
}

void func_02030468(u8 *arg0, u32 arg1) {
    if (arg0 == NULL) {
        return;
    }
    switch (arg1) {
        case 1:
            if (data_02160204[0x11c] != 0) {
                *(s16 *)(arg0 + 0x5a) += 3;
            }
            break;
        case 0:
            if (data_02160204[0x11c] != 0) {
                *(s16 *)(arg0 + 0x5a) += 2;
            }
            break;
        case 2:
            if (data_02160204[0x11c] != 0) {
                *(s16 *)(arg0 + 0x5a) += 1;
            }
            break;
        case 5:
            if (data_02160204[0x11c] != 0) {
                *(s16 *)(arg0 + 0x5a) += 1;
            }
            break;
    }
    if (*(s16 *)(arg0 + 0x5a) > 100) {
        *(s16 *)(arg0 + 0x5a) = 100;
    }
    if (arg1 == 6) {
        *(s16 *)(arg0 + 0x5a) -= 100;
        if (*(s16 *)(arg0 + 0x5a) < 0) {
            *(s16 *)(arg0 + 0x5a) = 0;
        }
    }
}

s32 func_02030528(u8 *arg0, u32 arg1) {
    return (*(u32 *)(arg0 + 0x78) & arg1) ? 1 : 0;
}

void *func_0203053c(void) {
    u8 *ptr = (u8 *)func_0210c594(0x14, data_02155c3c);
    func_021167ac(ptr + 8, 4);
    ptr[4] = 0;
    return ptr;
}

void func_02030574(u8 *arg0) {
    void *ptr;
    while ((ptr = *(void **)(arg0 + 8)) != NULL) {
        func_020305b0(arg0, ptr);
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

void func_020305b0(void *arg0, void *arg1) {
    u8 *p = (u8 *)arg0;
    if (arg1 == NULL) {
        return;
    }
    p[4]--;
    func_021168f8(p + 8, arg1);
    if (arg1 != NULL) {
        func_0210c5dc(arg1);
    }
}

void func_020305e4(u8 *arg0, u16 arg1) {
    u16 *node;
    if (func_02030630(arg0, arg1) != NULL) {
        return;
    }
    node = (u16 *)func_0210c594(0xc, data_02155c3c);
    *node = arg1;
    func_021167f0(arg0 + 8, node);
    arg0[4]++;
}

extern void func_021168f8(void *, void *);
extern void func_021167f0(void *, void *);
extern void *func_02030630(u8 *, u16);
void *func_02030630(u8 *arg0, u16 arg1) {
    u8 *node = *(u8 **)(arg0 + 8);
    if (node != NULL) {
        do {
            if (*(u16 *)node == arg1) {
                return node;
            }
            node = *(u8 **)(node + 8);
        } while (node != NULL);
    }
    return NULL;
}

void *func_0203065c(u8 *arg0, u16 arg1) {
    u16 *node = (u16 *)func_0210c594(0x10, data_02155c3c);
    *node = arg1;
    func_021167f0(arg0 + 0xc0, node);
    return node;
}

extern u8 *data_02160244;
extern void func_0202e874(void *);
void *func_02030698(u8 *arg0, u16 arg1) {
    u8 *node = *(u8 **)(arg0 + 0xc0);
    if (node != NULL) {
        do {
            if (*(u16 *)node == arg1) {
                return node;
            }
            node = *(u8 **)(node + 0xc);
        } while (node != NULL);
    }
    return NULL;
}

void func_020306c4(u8 *arg0, u16 arg1) {
    void *node = func_02030698(arg0, arg1);
    if (node == NULL) {
        return;
    }
    func_021168f8(arg0 + 0xc0, node);
    if (node != NULL) {
        func_0210c5dc(node);
    }
}

void func_020306f8(u8 *arg0, u16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    u8 *node = (u8 *)func_02030698(arg0, arg1);
    if (node != NULL) {
        *(s16 *)(node + 2) = arg2;
        *(s16 *)(node + 4) = arg3;
        *(s16 *)(node + 6) = arg4;
        return;
    }
    node = (u8 *)func_0203065c(arg0, arg1);
    *(s16 *)(node + 2) = arg2;
    *(s16 *)(node + 4) = arg3;
    *(s16 *)(node + 6) = arg4;
}

void func_02030748(s32 arg0) {
    u16 i;
    if (arg0 == 0) {
        for (i = 0; i < 9; i++) {
            u8 *p = *(u8 **)(data_02160244 + i * 4 + 8);
            if ((p[0x1c] & 1) && !(p[0x1c] & 2)) {
                *(s16 *)(p + 0x1e) -= 1;
                if (*(s16 *)(p + 0x1e) < 0) {
                    func_0202e874(p);
                }
            }
        }
    } else if (arg0 == 1) {
        for (i = 0; i < 9; i++) {
            u8 *p = *(u8 **)(data_02160244 + i * 4 + 8);
            u8 *q = *(u8 **)(p + 0x20);
            if (q != NULL) {
                u8 *r = *(u8 **)(q + 0x118);
                if (*(u32 *)(r + 0x70) == 0) {
                    func_0202e874(p);
                }
            }
        }
    }
}

s32 func_02030808(u32 arg0) {
    if (arg0 <= 8) {
        u8 *p = *(u8 **)(data_02160244 + arg0 * 4 + 8);
        if ((p[0x1c] & 1) && !(p[0x1c] & 4)) {
            return 1;
        }
    }
    return 0;
}

s32 func_02030844(u32 arg0) {
    if (arg0 <= 8) {
        u8 *p = *(u8 **)(data_02160244 + arg0 * 4 + 8);
        if (p[0x1c] & 1) {
            return 1;
        }
    }
    return 0;
}

