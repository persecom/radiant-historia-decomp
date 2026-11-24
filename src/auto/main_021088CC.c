/* 38 functions from 0x021088CC to 0x021098AC (main), found by ds-decomp. */
#include "common.h"

typedef struct {
    u8 unk_00[0x08];
    u32 unk_08;
    u32 unk_0c;
    u8 unk_10[0x08];
    u8 unk_18[2];
    s8 unk_1a[2];
    u8 unk_1c[0x08];
    u32 unk_24[2];
} Unk021624F8;

extern Unk021624F8 *data_021624f8;
extern u32 data_02162504[];
extern u32 data_02162870;
extern u8 data_02162510[];

void func_02125b78(u32);
void func_02125d00();
void func_02125bd4(u32, s32);
void func_0210950c(u32);
s32 func_021090f4(u32, s32);
void func_02108ffc(void);
void func_02109264(u32);
s32 func_02125a5c(u32);
u64 func_02007904(void);
void func_021256b4(void);
void func_02125c38(u32);
void func_021089e8(u32, s32, u32);

void func_02108b54(u32 arg0) {
    u32 *ptr = NULL;
    if (arg0 == 0) {
        ptr = &data_021624f8->unk_08;
    } else if (arg0 == 1) {
        ptr = &data_021624f8->unk_0c;
    }
    if (arg0 >= 2) {
        return;
    }
    if (ptr == NULL) {
        return;
    }
    if (data_021624f8->unk_18[arg0] & 8) {
        return;
    }
    func_02125b78(*ptr);
}

void func_02108bb8(u32 arg0, u32 arg1, u32 arg2) {
    u32 *ptr = NULL;
    if (arg0 == 0) {
        ptr = &data_021624f8->unk_08;
    } else if (arg0 == 1) {
        ptr = &data_021624f8->unk_0c;
    }
    if (arg0 >= 2) {
        return;
    }
    if (ptr == NULL) {
        return;
    }
    if (data_021624f8->unk_18[arg0] & 8) {
        return;
    }
    func_02125d00(*ptr, arg1, arg2);
    func_02125b78(*ptr);
}

void func_02108c24(u32 arg0, s32 arg1) {
    u32 *ptr = NULL;
    if (arg0 == 0) {
        ptr = &data_021624f8->unk_08;
    } else if (arg0 == 1) {
        ptr = &data_021624f8->unk_0c;
    }
    if (arg0 >= 2) {
        return;
    }
    if (ptr == NULL) {
        return;
    }
    if (data_021624f8->unk_18[arg0] & 8) {
        return;
    }
    if (arg1 == 0) {
        func_02125bd4(*ptr, 1);
        data_021624f8->unk_18[arg0] |= 4;
    } else {
        func_02125bd4(*ptr, 0);
        data_021624f8->unk_18[arg0] &= 0xfb;
    }
}

void func_02108cc8(u32 arg0) {
    u32 *ptr = NULL;
    if (arg0 == 0) {
        ptr = &data_021624f8->unk_08;
    } else if (arg0 == 1) {
        ptr = &data_021624f8->unk_0c;
    }
    if (arg0 >= 2) {
        return;
    }
    if (ptr == NULL) {
        return;
    }
    if (data_021624f8->unk_18[arg0] & 8) {
        return;
    }
    if (!(data_021624f8->unk_18[arg0] & 4)) {
        return;
    }
    func_02108c24(arg0, 1);
}

void func_02108d34(u32 arg0, u32 arg1) {
    u32 *ptr = NULL;
    if (arg0 == 0) {
        ptr = &data_021624f8->unk_08;
    } else if (arg0 == 1) {
        ptr = &data_021624f8->unk_0c;
    }
    if (arg0 >= 2) {
        return;
    }
    if (ptr == NULL) {
        return;
    }
    if (data_021624f8->unk_18[arg0] & 8) {
        return;
    }
    data_021624f8->unk_24[arg0] = arg1;
    func_02125c38(*ptr);
}

void func_02108da0(u32 arg0, u32 arg1) {
    s32 v;
    if (arg0 >= 2) {
        return;
    }
    if (data_021624f8 == NULL) {
        return;
    }
    v = data_021624f8->unk_1a[arg0];
    if (arg1 == (u32)v || arg1 == 0xff) {
        func_02108c24(arg0, 1);
        return;
    }
    if (arg1 == (u32)v) {
        return;
    }
    while (1) {
        if (func_021090f4(arg0, 0) == 2) {
            func_02108b54(arg0);
        } else if (func_021090f4(arg0, 0) == 0) {
            func_02109264(arg0);
            break;
        }
        func_02108ffc();
    }
    func_021089e8(arg0, (s8)arg1, 3);
}

void func_02108e54(u32 arg0) {
    if (arg0 >= 2) {
        return;
    }
    while (1) {
        if (func_021090f4(arg0, 0) == 2) {
            func_02108b54(arg0);
            return;
        }
        if (func_021090f4(arg0, 0) == 0) {
            return;
        }
        func_02108ffc();
    }
}

void func_02108ea4(u32 arg0, u32 arg1) {
    if (arg0 >= 2) {
        return;
    }
    func_02108bb8(arg0, 0, arg1);
    data_021624f8->unk_1a[arg0] = -1;
    data_021624f8->unk_24[arg0] = 0;
}

void func_02108eec(u32 arg0, u32 arg1) {
    if (arg0 >= 2) {
        return;
    }
    func_02108bb8(arg0, 0, arg1);
    while (1) {
        if (func_021090f4(arg0, 0) == 0) {
            break;
        }
        func_02108ffc();
    }
    data_021624f8->unk_1a[arg0] = -1;
    data_021624f8->unk_24[arg0] = 0;
    func_02109264(arg0);
}

void func_021091b0(void) {
}

extern void func_02125c38(u32);
extern void func_021089e8(u32, s32, u32);
s32 func_0210920c(u32 arg0) {
    return arg0 >= 2 ? -1 : data_021624f8->unk_1a[arg0];
}

u32 func_0210957c(s32 arg0) {
    func_0210950c(data_02162504[arg0]);
    return data_02162504[arg0];
}

void func_02109828(void) {
    *(u32 *)(data_02162510 + 0x34) = 0x8000;
    *(u32 *)(data_02162510 + 0x44) = 0x8000;
}

