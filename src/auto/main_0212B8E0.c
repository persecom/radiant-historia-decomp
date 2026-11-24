/* 40 functions from 0x0212B8E0 to 0x0212C824 (main), found by ds-decomp. */
#include "common.h"

extern u8 data_021739ac[256];
extern u32 data_02173984[2];
extern u8 data_02156b60[8];
extern u8 data_02156b68[8];
extern s8 data_0217398c[32];
extern u8 data_02156b70[4];
extern u32 data_02173aac[5];
extern u8 data_02156c28[48];
extern u8 data_02156c58[28];
extern u8 data_02156c74[48];
extern void func_02013878(void *, s32, u32);
extern void func_021380bc(void *);
extern void func_02132c08(void *, s32, void *, s32);
extern void func_02132c2c(void *, s32, void *, s32);
extern s32 func_02016da4(void *);

extern void func_0212a9f4(void);
extern void func_0212a9f8(void);
extern void func_0212c3d4(void *, void *);
extern void func_0212c3ec(u8 *, void *, s32, s32);
extern u8 data_02156ca4[52];
extern u32 data_02173de4[4];
extern u32 data_02156cd8[4];
extern void func_02132bf8(void *, s32, void *);
extern void func_0212e5fc(u32);
extern void func_0212e60c(u32, s32);
extern void func_0212e600(void);
extern s32 func_0212c54c(u32);
extern s32 func_0212c520(void);
extern void func_021384f0(void);
extern void func_02138500(void);
extern void func_02138510(void);
extern void func_0212c464(void);
extern void func_0212bfb8(void);
extern void func_0212a9dc(void);
extern void func_0212a9e8(void);
extern void func_02129d80(u8 *);
extern void func_021299c0(void *, u32);
extern void func_0212e514(void);
extern void func_0212e4a0(void);
extern void func_0212e5d0(void);
extern void func_0212e534(void);
extern void func_021281b0(void);
extern void func_02128030(void *, u32);
extern void func_0212e608(u32, s32);
extern void func_0212e5f8(u32);
extern void func_02128880(void *, s32);
s32 func_0212bcd0(s16 *arg0, s32 arg1, s16 *arg2) {
    u16 v0;
    s16 swapped;
    s16 v1;

    if (arg1 < 0x10) {
        return -1;
    }
    v0 = (u16)arg0[0];
    swapped = ((v0 >> 8) & 0xff) | ((v0 << 8) & 0xff00);
    if ((u16)swapped != 0x8001) {
        return -2;
    }
    v1 = arg0[1];
    *arg2 = ((v1 >> 8) & 0xff) | ((v1 << 8) & 0xff00);
    *arg2 += 4;
    return 0;
}

void func_0212bd48(void) {
    func_02013878(data_021739ac, 0, 0x100);
    data_02173984[0] = 0;
    data_02173984[1] = 0;
}

void func_0212bd78(void) {
    func_02013878(data_021739ac, 0, 0x100);
    data_02173984[0] = 0;
    data_02173984[1] = 0;
}

void func_0212bda8(void *arg0) {
    if (arg0 == NULL) {
        func_021380bc(data_02156b60);
        return;
    }
    func_02132c08(data_021739ac, 0x100, arg0, 0xff);
    if (data_02173984[0] != 0) {
        ((void (*)(u32, void *))data_02173984[0])(data_02173984[1], data_021739ac);
    }
    func_021380bc(data_021739ac);
}

void func_0212be08(void *arg0, void *arg1) {
    if (arg0 == NULL || arg1 == NULL) {
        func_021380bc(data_02156b68);
        return;
    }
    func_02132c08(data_021739ac, 0x100, arg0, 0xff);
    func_02132c2c(data_021739ac, 0x100, arg1, 0xff);
    if (data_02173984[0] != 0) {
        ((void (*)(u32, void *))data_02173984[0])(data_02173984[1], data_021739ac);
    }
    func_021380bc(data_021739ac);
}

void func_0212be8c(s32 arg0, s8 *arg1, s32 arg2) {
    s32 i;
    s32 len;

    for (i = 0; i < 0x20; i++) {
        arg1[i] = arg0 % 10;
        arg0 /= 10;
        if (arg0 == 0) {
            arg1[i] = 0;
            break;
        }
    }
    len = func_02016da4(data_0217398c);
    if (len >= arg2 - 1) {
        len = arg2 - 1;
    }
    for (i = 0; i < len; i++) {
        arg1[i] = data_0217398c[len - 1 - i];
    }
    arg1[i] = 0;
}

void func_0212bf38(s32 arg0, s32 arg1, s8 *arg2, s32 arg3) {
    func_0212be8c(arg0, arg2, arg3);
    func_02132c2c(arg2, arg3, data_02156b70, arg3 - func_02016da4(arg2) - 1);
    func_0212be8c(arg1, arg2 + func_02016da4(arg2), 4 - func_02016da4(arg2));
}

void func_0212bfa4(void) {
    func_0212a9f4();
    func_0212bfb8();
    func_0212a9f8();
}

void func_0212bfb8(void) {
    func_0212a9dc();
    if (data_02173aac[3] != 0) {
        func_0212a9e8();
        return;
    }
    data_02173aac[3] = 1;
    func_0212a9e8();
    if (data_02173aac[2] != 0) {
        ((void (*)(u32))data_02173aac[2])(data_02173aac[1]);
    }
    data_02173aac[3] = 3;
    func_0212e514();
    data_02173aac[3] = 4;
    func_0212e4a0();
    data_02173aac[3] = 5;
    func_0212e5d0();
    data_02173aac[3] = 6;
    func_0212e4a0();
    data_02173aac[3] = 7;
    func_0212e514();
    data_02173aac[3] = 9;
    func_0212e534();
    data_02173aac[3] = 0;
    if (data_02173aac[0] != 0) {
        ((void (*)(u32))data_02173aac[0])(data_02173aac[4]);
    }
}

void func_0212c068(void *arg0, void *arg1) {
    func_0212bda8(arg1);
}

void func_0212c078(void *arg0, void *arg1) {
    func_0212bda8(arg1);
}

s32 func_0212c088(void) {
    func_0212c464();
    return 0;
}

extern void func_021285b0(void);
s32 func_0212c098(void) {
    func_021285b0();
    return 0;
}

extern void func_0212bfa4(void);
s32 func_0212c0a8(void) {
    func_0212bfa4();
    return 0;
}

void func_0212c2d8(u8 *arg0, void *arg1, u32 arg2, u32 arg3) {
    u32 x = *(u32 *)(arg0 + 0x94);
    if (arg0 == NULL) {
        func_0212bda8(data_02156c28);
        return;
    }
    if (func_0212e604(x, arg1, 0, arg2, arg3) < 0) {
        func_0212be08(data_02156c58, arg1);
    }
}

void func_0212c338(u8 *arg0) {
    u32 x = *(u32 *)(arg0 + 0x94);
    void *obj;
    if (arg0 == NULL) {
        func_0212bda8(data_02156c74);
        return;
    }
    func_021281b0();
    func_0212a9dc();
    *(u8 *)(arg0 + 2) = 4;
    func_02128030(arg0, *(u32 *)(arg0 + 0x10));
    obj = *(void **)(arg0 + 0x14);
    ((void (*)(void *))(*(u32 **)obj)[5])(obj);
    func_0212e608(x, *(s16 *)(arg0 + 0x3e) << 11);
    func_0212a9e8();
    func_0212e5f8(x);
    func_02128880(arg0, 1);
}

void func_0212c3b0(void *arg0, void *arg1) {
    func_0212a9f4();
    ((void (*)(void *, void *))func_0212c3d4)(arg0, arg1);
    func_0212a9f8();
}

void func_0212c3d4(void *arg0, void *arg1) {
    func_0212c3ec((u8 *)arg0, arg1, 0, 0xfffff);
}

void func_0212c3ec(u8 *arg0, void *arg1, s32 arg2, s32 arg3) {
    u32 lock;
    if (arg0 == NULL || arg1 == NULL) {
        func_0212bda8(data_02156ca4);
        return;
    }
    func_02132bf8(*(void **)(arg0 + 0xac), 0x100, arg1);
    *(void **)(arg0 + 0xb0) = *(void **)(arg0 + 0xac);
    lock = *(u32 *)(arg0 + 0x94);
    func_0212e5fc(lock);
    func_0212c2d8(arg0, *(void **)(arg0 + 0xb0), arg2, arg3);
    func_0212e60c(lock, 1);
    func_0212c338(arg0);
}

extern void func_0212c478(void);
void func_0212c464(void) {
    func_0212a9f4();
    func_0212c478();
    func_0212a9f8();
}

void func_0212c478(void) {
    if (data_02173de4[2] != 0) {
        ((void (*)(u32))data_02173de4[2])(data_02173de4[1]);
    }
    func_0212e600();
    if (data_02173de4[0] != 0) {
        ((void (*)(u32))data_02173de4[0])(data_02173de4[3]);
    }
}

extern u32 data_02156cd8[4];
void func_0212c4b8(u32 arg0) {
    data_02156cd8[0] = arg0;
}

s32 func_0212c4c8(void) {
    switch (func_0212c54c(data_02156cd8[0])) {
    case -1:
    case 0:
        break;
    case 1:
        func_0212c520();
        break;
    case 2:
        func_021384f0();
        break;
    case 3:
        func_02138500();
        func_02138510();
        break;
    }
    return 0;
}

extern void func_021384a0(void);
extern void func_021384b0(void);
extern void func_021384c0(void);
extern void func_021384d0(void);
extern void func_021384e0(void);
s32 func_0212c520(void) {
    func_021384a0();
    func_021384b0();
    func_021384c0();
    func_021384d0();
    func_021384f0();
    func_02138500();
    func_02138510();
    func_021384e0();
    return 0;
}

s32 func_0212c7b0(s8 *arg0) {
    return arg0[1];
}

extern void func_0212999c(void *, u32);
void func_0212c7b8(void *arg0, u32 arg1) {
    *(u32 *)((u8 *)arg0 + 8) = arg1;
    func_0212999c(*(void **)((u8 *)arg0 + 4), arg1);
}

extern void func_02129a2c(void *);
void func_0212c7e0(void *arg0) {
    func_02129a2c(*(void **)((u8 *)arg0 + 4));
}

