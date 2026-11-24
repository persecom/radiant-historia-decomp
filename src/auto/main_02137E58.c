/* 53 functions from 0x02137E58 to 0x02138E00 (main), found by ds-decomp. */
#include "common.h"

extern void func_021390fc(void *);
extern void func_02138338(u32, u32, u32, u32, u32);
extern u8 data_0215c74c[];
extern u8 data_0215c770[];
extern u8 data_0215c798[];
extern u8 data_0215c7d0[];
extern void func_0213807c(void);
extern void func_0213808c(void);
extern void func_02126c20(void *);
extern u8 data_0215c9ec[52];
extern u32 data_0217667c[8];
extern u32 data_02176654[2];
extern u32 data_02176674[2];
extern u32 data_0217665c[2];
extern u32 data_02176664[2];
extern u32 data_0217669c[8];
extern u8 data_02145b48[64];
extern u32 data_0215c658;
extern u32 data_0217666c[2];
extern void func_02138280(u32, u32);
extern void func_02132c08(void *, s32, void *, s32);
extern u32 data_02176644[16];
extern u8 data_021766bc[256];
extern char data_0215c65c[];
extern void func_02013878(void *, s32, u32);
extern void func_02132c68(void *, u32, const char *, char *);
extern void func_021380bc(const char *, ...);
extern u8 data_0215c6a4[40];
extern u8 data_021767bc[576];
extern u8 data_0215c6cc[8];
extern u8 data_0215c6d4[48];
extern u8 data_0215c704[32];
extern u8 data_0215c724[40];
extern u8 data_021767c0[572];
extern u8 data_021767c4[568];
extern void func_02137fc8(s32);
extern void func_02136958(void);
extern void func_02137ec4(void);
extern void func_02137f34(void);
extern void func_0213841c(s32);
extern void func_02137250(void *, void *);
extern u8 data_0215c604[12];
extern u8 data_0215c610[28];
extern u8 data_0215c62c[12];
extern u8 data_0215c638[32];
extern s32 data_02176400;
extern u32 data_02176404[144];
extern void *memset(void *, int, unsigned long);
void *func_02137e58(void *arg0) {
    if (arg0 == NULL) {
        func_02137250(data_0215c604, data_0215c610);
        return NULL;
    }
    if (*(void **)((u8 *)arg0 + 4) == NULL) {
        func_02137250(data_0215c62c, data_0215c638);
        return NULL;
    }
    return *(void **)((u8 *)arg0 + 0x24);
}

void func_02137eac(void) {
    func_02136958();
    func_021369a8();
    func_02137ec4();
    func_021369b4();
}

void func_02137ec4(void) {
    if (data_02176400 == 0) {
        memset(data_02176404, 0, sizeof(data_02176404));
    }
    data_02176400++;
}

void func_02137f1c(void) {
    func_021369a8();
    func_02137f34();
    func_021369b4();
    func_02136980();
}

void func_02137f34(void) {
    data_02176400--;
    if (data_02176400 == 0) {
        memset(data_02176404, 0, sizeof(data_02176404));
    }
}

void func_02137f80(s32 *arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 ptr = *(volatile s32 *)arg0;
    s32 len = *(volatile s32 *)(arg0 + 1);
    s32 rem;
    *(volatile s32 *)arg2 = ptr;
    *(volatile s32 *)(arg2 + 1) = len;
    arg3[1] = len;
    if (arg2[1] > arg1) {
        arg2[1] = arg1;
    }
    rem = arg3[1] - arg2[1];
    arg3[1] = rem;
    arg3[0] = (rem == 0) ? 0 : (arg2[0] + arg2[1]);
}

void func_02137fc8(s32 arg0) {
    if (data_02176644[0xc] != 0) {
        ((void (*)(u32))data_02176644[0xc])(data_02176644[0xd]);
    }
    if (data_02176644[3] == 0) {
        data_02176644[1] = (u32)arg0;
    }
    data_02176644[3]++;
}

void func_0213800c(s32 arg0) {
    if (data_02176644[6] == 0) {
        return;
    }
    data_02176644[3]--;
    if (data_02176644[3] == 0) {
        if (data_02176644[1] != (u32)arg0) {
            func_021380bc(data_0215c65c, data_02176644[1], arg0);
        }
        data_02176644[1] = 0;
        ((void (*)(u32, u32))data_02176644[6])(data_02176644[7], data_02176644[6]);
    }
}

void func_0213807c(void) {
    func_02137fc8(1);
}

extern void func_0213800c(s32);
void func_0213808c(void) {
    func_0213800c(1);
}

void func_0213809c(void) {
    func_02137fc8(3);
}

void func_021380ac(void) {
    func_0213800c(3);
}

void func_02138130(void *arg0) {
    if (arg0 == NULL) {
        ((void (*)(u32, void *))data_02176644[10])(data_02176644[11], NULL);
        return;
    }
    {
        u8 *buf = data_021766bc;
        func_02132c08(buf, 0x100, arg0, 0xff);
        if (data_02176644[10] != 0) {
            ((void (*)(u32, void *))data_02176644[10])(data_02176644[11], buf);
        }
    }
}

extern s32 func_021381cc(u8 *, s32, s32, s32 *);
s32 func_02138190(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 ret;
    func_0213807c();
    ret = func_021381cc(arg0, arg1, arg2, arg3);
    func_0213808c();
    return ret;
}

s32 func_021381cc(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 i;
    u8 *base;
    if ((u32)arg0 >= 8) {
        func_02138130(data_0215c6a4);
        return -1;
    }
    base = data_021767bc + (u32)arg0 * 0x48;
    for (i = 0; i < 6; i++) {
        u32 *entry = (u32 *)(base + i * 0xc);
        if (entry[0] == 0) {
            entry[0] = (u32)arg1;
            entry[1] = (u32)arg2;
            if (arg3 != NULL) {
                entry[2] = (u32)arg3;
            } else {
                entry[2] = (u32)data_0215c6cc;
            }
            break;
        }
    }
    if (i == 6) {
        func_02138130(data_0215c6d4);
        return -1;
    }
    return i;
}

void func_0213825c(void *arg0, void *arg1) {
    func_0213807c();
    ((void (*)(void *, void *))func_02138280)(arg0, arg1);
    func_0213808c();
}

void func_02138280(u32 arg0, u32 arg1) {
    if (arg1 >= 6) {
        func_02138130(data_0215c704);
        return;
    }
    if (arg0 >= 8) {
        func_02138130(data_0215c724);
        return;
    }
    *(u32 *)(data_021767bc + arg0 * 0x48 + arg1 * 0xc) = 0;
    *(u32 *)(data_021767c0 + arg0 * 0x48 + arg1 * 0xc) = 0;
    *(u32 *)(data_021767c4 + arg0 * 0x48 + arg1 * 0xc) = 0;
}

void func_021382fc(u32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    func_0213807c();
    func_02138338(arg0, arg1, arg2, arg3, arg4);
    func_0213808c();
}

void func_02138338(u32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    u8 *entry;
    if (arg1 >= 6) {
        func_02138130(data_0215c74c);
        return;
    }
    if (arg0 >= 8) {
        func_02138130(data_0215c770);
        return;
    }
    entry = data_021767bc + arg0 * 0x48 + arg1 * 0xc;
    if (*(u32 *)entry != 0) {
        func_02138130(data_0215c798);
    }
    *(u32 *)entry = arg2;
    *(u32 *)(entry + 4) = arg3;
    if (arg4 != 0) {
        *(u32 *)(entry + 8) = arg4;
    } else {
        *(u32 *)(entry + 8) = (u32)data_0215c7d0;
    }
}

extern void func_02138338(u32, u32, u32, u32, u32);
extern void func_02138130(void *);
extern u8 data_0215c74c[];
extern u8 data_0215c770[];
extern u8 data_0215c798[];
extern u8 data_0215c7d0[];
void func_021383cc(u32 arg0, u32 arg1) {
    func_0213807c();
    data_02176644[0x28 / 4] = arg0;
    data_02176644[0x2c / 4] = arg1;
    func_0213808c();
}

void func_021383f4(u32 arg0, u32 arg1) {
    data_02176644[0xc] = arg0;
    data_02176644[0xd] = arg1;
}

void func_02138408(u32 arg0, u32 arg1) {
    data_02176644[6] = arg0;
    data_02176644[7] = arg1;
}

void func_021384a0(void) {
    func_0213841c(0);
}

extern void func_0213841c(s32);
void func_021384b0(void) {
    func_0213841c(1);
}

void func_021384c0(void) {
    func_0213841c(2);
}

void func_021384d0(void) {
    func_0213841c(3);
}

void func_021384e0(void) {
    func_0213841c(4);
}

void func_021384f0(void) {
    func_0213841c(5);
}

void func_02138500(void) {
    func_0213841c(6);
}

void func_02138510(void) {
    func_0213841c(7);
}

void func_02138520(void) {
    s32 i;
    memset(data_0217667c, 0, 0x20);
    data_02176654[0] = 0;
    data_02176654[1] = 0;
    data_02176674[0] = 0;
    data_02176674[1] = 0;
    data_0217665c[0] = 0;
    data_0217665c[1] = 0;
    data_02176664[0] = 0;
    data_02176664[1] = 0;
    for (i = 0; i < 6; i++) {
        data_0217669c[i] = 0;
    }
    data_02176644[2] = 0;
    memset(data_021767bc, 0, 0x240);
}

void func_021385d4(void) {
    data_0215c658 = (u32)data_02145b48;
    if (data_02176644[0] == 0) {
        func_02138520();
    }
    data_02176644[0]++;
}

void func_02138618(void) {
    data_02176644[0]--;
    if (data_02176644[0] == 0) {
        func_02138520();
        data_0217666c[0] = 0;
        data_0217666c[1] = 0;
    }
}

void func_021386f0(void *arg0) {
    if (arg0 != NULL) {
        func_021390fc(arg0);
    }
}

u32 func_02138ae8(u8 *arg0) {
    return *(u32 *)(arg0 + 0x58);
}

s32 func_02138c1c(u8 *arg0) {
    if (*(u32 *)(arg0 + 0x58) == 0) {
        func_02126c20(data_0215c9ec);
        return 4;
    }
    {
        void *obj = *(void **)(arg0 + 0x8);
        return ((s32 (*)(void *))(*(u32 **)obj)[10])(obj);
    }
}

s8 func_02138d60(u8 *arg0) {
    return *(s8 *)(arg0 + 0x94);
}

void func_02138dd8(u8 *arg0, u32 arg1) {
    *(u32 *)(arg0 + 0xb0) = arg1;
}

void func_02138de0(u8 *arg0, u32 arg1) {
    *(u32 *)(arg0 + 0xb4) = arg1;
}

void func_02138de8(u8 *arg0, u32 arg1) {
    *(u32 *)(arg0 + 0xb8) = arg1;
}

void func_02138df0(u8 *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0xbc) = arg1;
}

void func_02138df8(u8 *arg0, u32 arg1) {
    *(u32 *)(arg0 + 0xc0) = arg1;
}

