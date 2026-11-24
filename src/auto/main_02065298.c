/* 12 functions from 0x02065298 to 0x02065E78 (main), found by ds-decomp. */
#include "common.h"
extern s32 func_02092ab0(void *, s32);
extern s32 func_02092994(void *, s32);
extern void func_02109444(void *);
extern void func_021091b4(void);
extern void *func_02022ee0(void);
extern void func_02022f0c(void *, s32, s32, s32);

extern u8 data_021600e0;
extern void **data_021600c8[6];
extern s32 data_02155c3c;
extern void func_02064c18(void *);
extern void func_0210c5dc(void *);
extern void **func_0210c594(s32, s32);
extern void *func_02064be8(void);
extern void func_02064ce4(void *, s32, s32, s32);

s32 func_02065840(s32 arg0, u32 arg1) {
    if (arg0 == 0) {
        switch (arg1) {
        case 2:
        case 5:
        case 6:
        case 7:
            return 1;
        }
    }
    return 0;
}

extern char data_02146690[];
extern void func_02005e80(char *, const char *, ...);
extern void *func_021092d8(char *);
extern s32 func_02092ab0(void *, s32);
extern s32 func_02092994(void *, s32);
extern void func_02109444(void *);
extern void func_021093b0(void *);
u16 func_02065884(u8 *arg0, s32 arg1) {
    char buf[0x40];
    void *r6;
    s32 i;
    s32 ret;
    s32 v;

    func_02005e80(buf, data_02146690);
    r6 = func_021092d8(buf);
    if (func_02092ab0(r6, (s32)arg0) != -1) {
        v = func_02092994(r6, 0);
        if (v != arg1) {
            do {
                func_02109444(r6);
                if (func_02092ab0(r6, (s32)arg0) == -1) {
                    return 0;
                }
                v = func_02092994(r6, 0);
            } while (v != arg1);
        }
        for (i = 0; i < 0x13; i++) {
            ret = func_02092994(r6, 0);
        }
    }
    if (r6 != NULL) {
        func_021093b0(r6);
    }
    return (u16)ret;
}

extern char data_021466ac[];
u16 func_02065958(u8 *arg0, s32 arg1) {
    char buf[0x40];
    void *r6;
    s32 i;
    s32 ret;
    s32 v;

    func_02005e80(buf, data_021466ac);
    r6 = func_021092d8(buf);
    if (func_02092ab0(r6, (s32)arg0) != -1) {
        v = func_02092994(r6, 0);
        if (v != arg1) {
            do {
                func_02109444(r6);
                if (func_02092ab0(r6, (s32)arg0) == -1) {
                    return 0;
                }
                v = func_02092994(r6, 0);
            } while (v != arg1);
        }
        for (i = 0; i < 0x16; i++) {
            ret = (u16)func_02092994(r6, 0);
        }
    }
    if (r6 != NULL) {
        func_021093b0(r6);
    }
    return (u16)ret;
}

extern u64 func_02007904(void);
extern void func_021167ac(void *, s32);
extern void func_021091b4(void);
extern char data_021466c8[];
extern void *func_02065624(u16, s32, void *);
extern void func_021167f0(void *, void *);
extern void func_02064c80(void *);
extern void func_021168f8(void *, void *);
void func_02065a30(void) {
    struct {
        void *head;
        void *tail;
        u16 count;
        u16 pad;
    } list;
    u64 t;
    u8 *r5;
    u8 *node;
    u8 *next;
    u16 i;
    s16 idx;
    void *r6;

    t = func_02007904();
    *(u64 *)((u8 *)data_021600c8 + 0x10) = t;
    *(u64 *)((u8 *)data_021600c8 + 0x8) = t;
    func_021167ac(&list, 0x30);
    data_021600c8[0] = func_0210c594(4, data_02155c3c);
    func_021091b4();
    *data_021600c8[0] = func_02064be8();
    r5 = *data_021600c8[0];
    r6 = func_021092d8(data_021466c8);
    for (i = 1; i < 0x33; i++) {
        node = func_02065624(i, 5, r6);
        if (node != NULL) {
            if (*(s16 *)(node + 0x26) != 0) {
                func_021167f0(&list, node);
            } else {
                func_02064c80(node);
            }
        }
    }
    if (r6 != NULL) {
        func_021093b0(r6);
    }
    idx = 0;
    while (list.count != 0) {
        for (node = list.head; node != NULL; node = next) {
            next = *(u8 **)(node + 0x34);
            if (*(s16 *)(node + 0x26) == idx) {
                func_021168f8(&list, node);
                func_021167f0(r5 + 4, node);
                break;
            }
        }
        idx++;
    }
}

void func_02065b80(void) {
    if (data_021600c8[0] != NULL) {
        func_02064c18(*data_021600c8[0]);
        if (data_021600c8[0] != NULL) {
            func_0210c5dc(data_021600c8[0]);
            data_021600c8[0] = NULL;
        }
    }
}

void func_02065bbc(void) {
    data_021600c8[1] = func_0210c594(4, data_02155c3c);
    *data_021600c8[1] = func_02064be8();
    func_02064ce4(*data_021600c8[1], 0x63, 0x63, -1);
}

void func_02065c08(void) {
    if (data_021600c8[1] != NULL) {
        func_02064c18(*data_021600c8[1]);
        if (data_021600c8[1] != NULL) {
            func_0210c5dc(data_021600c8[1]);
            data_021600c8[1] = NULL;
        }
    }
}

s32 func_02065c44(void *arg0) {
    if (arg0 == NULL) {
        return -1;
    }
    switch (*(u8 *)((u8 *)arg0 + 7)) {
    case 8:
        return -1;
    case 1:
    case 2:
    case 3:
    case 4:
        return 1;
    case 5:
    case 6:
    case 9:
    case 11:
        return 0;
    case 7:
        return 2;
    default:
        return -1;
    }
}

void func_02065cb8(u8 arg0) {
    data_021600e0 = arg0;
}

extern u32 data_02162868, data_0216bf84, data_02162870;
extern u8 *data_02160204;
extern void func_0210968c(s32,s32,s32);
extern void func_02109790(s32);
extern void func_02108e54(s32);
extern void func_020212ec(void);
extern void func_02065e78(void);
extern void func_02109264(s32);
extern void func_021089e8(s32,s32,s32);
extern void func_0210dc88(void);
extern void func_020a5f14(void *,u16);
extern void func_02108f58(s32,s32);
extern void func_0206643c(void);
u8 func_02065cc8(void) {


s32 three=3;
s32 one=1;

data_02162868=one;
data_0216bf84=0;
func_0210968c(three,-16,one);
func_02109790(three);
func_02108e54(one);

if((&data_021600e0)[1]==0) func_02108e54(0);
if((&data_021600e0)[1]) data_02162870=1;
else { func_020212ec(); }
func_02065e78();
{ u32 flag=*(volatile u8 *)(&data_021600e0+1); *(volatile u32 *)&data_02162870=0;
if(!flag) { func_02109264(0);func_021089e8(0,12,3); }}
(&data_021600e0)[1]=0;
func_0210968c(3,0,30);
func_02109790(3);
for(;;) {
u8 *p=*(u8 **)((&data_021600e0)+4);
if(!*(u32 *)(p+48) && !*(u32 *)(p+52)) {func_0210dc88();continue;}
if(*(u32 *)(p+52)) {
**(u32 **)p=0;
p=*(u8 **)((&data_021600e0)+4);
func_020a5f14(p+0x124,*(u16 *)(p+0xd4));
*(u32 *)(*(u8 **)((&data_021600e0)+4)+52)=0;
}
if(*(u32 *)(*(u8 **)((&data_021600e0)+4)+48)) break;
}
func_0210968c(3,-16,30);
func_02109790(3);
if((&data_021600e0)[0]!=11) {
data_02162870=0;
data_02160204[0x137]|=1;
func_02108f58(0,1);
} else if((&data_021600e0)[0]==11) (&data_021600e0)[1]=1;
func_0206643c();func_0210dc88();
*(volatile u32 *)&data_02162868=0;*(volatile u32 *)&data_0216bf84=0;
return *(volatile u8 *)(&data_021600e0);
}

