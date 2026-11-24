/* 38 functions from 0x02136E94 to 0x02137E58 (main), found by ds-decomp. */
#include "common.h"

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

extern void func_021378d8(void);
extern void func_021369a8(void);
extern void func_02137470(void *);
extern void func_021369b4(void);
extern void func_02136f8c(u32, u32, u32);
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
        return 0;
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
    return (s32)p;
}

void func_02137454(void *arg0) {
    func_021369a8();
    func_02137470(arg0);
    func_021369b4();
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

extern void func_021375e0(void *);
void func_021375c4(void *arg0) {
    func_021369a8();
    func_021375e0(arg0);
    func_021369b4();
}

extern s32 func_02137680(void *, void *);
s32 func_02137654(void *arg0, void *arg1) {
    s32 ret;
    func_021369a8();
    ret = func_02137680(arg0, arg1);
    func_021369b4();
    return ret;
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

extern void *func_02137de0(void *);
void *func_02137dbc(void *arg0) {
    void *ret;
    func_021369a8();
    ret = func_02137de0(arg0);
    func_021369b4();
    return ret;
}

extern void *func_02137e58(void *);
void *func_02137e34(void *arg0) {
    void *ret;
    func_021369a8();
    ret = func_02137e58(arg0);
    func_021369b4();
    return ret;
}

