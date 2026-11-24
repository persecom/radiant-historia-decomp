/* 38 functions from 0x021088CC to 0x021098AC (main), found by ds-decomp. */
#include "common.h"
extern u32 data_02155c3c;
void *func_0210c518(u32, u32);
u8 *func_02109b14(u32, s32 *);

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

typedef struct {
    u32 unk00;
    u32 unk04;
    u32 unk08;
    u32 unk0c;
} Unk02162544;

extern Unk021624F8 *data_021624f8;
extern u32 data_02162504[];
extern u32 data_02162870;
typedef struct {
    u8 *buf;
    s32 size;
    u8 *cur;
} Unk02109444;

extern u8 data_02162544[];
extern u8 data_02162510[];
extern s32 data_02162884;
extern s32 data_02162814;
extern s32 data_02162878;

void func_02008f74(void *, s32, s32);
extern void func_0210c35c(s32 *, s32, s32, s32);
extern void func_0210d9e4(u8 *);
s32 func_02109f84(void *);
s32 func_0210c398(void *);
void func_0210da14(void *);
void func_0210dc88(void);

void func_02125b78(u32);
void func_02125d00();
void func_02125bd4(u32, s32);
void func_0210950c(u32);
extern s32 func_021090f4(u32, s32);
void func_02108ffc(void);
s32 func_02109264(u32);
extern u32 data_02155b50[3];
extern u32 func_021092d8(u32);
s32 func_02125a5c(u32);
u64 func_02007904(void);
void func_021256b4(void);
void func_02125c38(u32);
void func_021089e8(u32, s32, u32);
extern void func_0210c5dc(u32);
extern s32 func_0201f884(s32);
extern s32 func_020201f4(s32, s32);
extern s32 func_02020604(s32, s32);

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

void func_02108f58(u32 arg0) {
    u16 i;
    u16 j;
    if (arg0 >= 2) {
        return;
    }
    for (i = 0; i < 100; i++) {
        func_02108d34(arg0, func_02020604(0x3f800000, func_020201f4(0x3dcccccd, func_0201f884(i / 10))));
        func_02108ffc();
    }
    for (j = 0; j < 5; j++) {
        func_02108c24(arg0, j);
        func_02108ffc();
    }
}

static void func_02108ffc(void) {
    Unk021624F8 *p = data_021624f8;
    if (p == NULL) {
        return;
    }
    if (!(p->unk_18[0] & 1) && !(p->unk_18[1] & 1)) {
        return;
    }
    *(u64 *)((u8 *)&data_021624f8 + 4) = func_02007904();
    func_021256b4();
}

void func_02109040(void) {
    u32 i = 0;
    Unk021624F8 *p;
    if (func_021090f4(i, 1) == 3) {
        p = data_021624f8;
        if (p->unk_18[i] & 2) {
            func_021089e8(i, p->unk_1a[i], 3);
        }
    }
    i = 1;
    if (func_021090f4(i, 1) == 3) {
        p = data_021624f8;
        if (p->unk_18[i] & 2) {
            func_021089e8(i, p->unk_1a[i], 3);
        }
    }
    p = data_021624f8;
    if (!(p->unk_18[0] & 1) && !(p->unk_18[1] & 1)) {
        return;
    }
    *(u64 *)((u8 *)&data_021624f8 + 4) = func_02007904();
    func_021256b4();
}

void func_021091b0(void) {
}

void func_021091b4(void) {
    if (data_021624f8 == NULL) {
        return;
    }
    if ((data_021624f8->unk_18[0] & 1) == 0 && (data_021624f8->unk_18[1] & 1) == 0) {
        return;
    }
    if (data_02162870 != 1) {
        return;
    }
    *(u64 *)((u8 *)&data_021624f8 + 4) = func_02007904();
    func_021256b4();
}

extern void func_02125c38(u32);
extern void func_021089e8(u32, s32, u32);
s32 func_0210920c(u32 arg0) {
    return arg0 >= 2 ? -1 : data_021624f8->unk_1a[arg0];
}

s32 func_0210922c(u32 arg0) {
    if (arg0 >= 2) {
        return 1;
    }
    return *(f32 *)&data_021624f8->unk_24[arg0] < 1.0f;
}

s32 func_02109264(u32 arg0) {
    u32 *ptr = NULL;
    if (arg0 >= 2 || (data_021624f8->unk_18[arg0] & 8)) {
        return 0;
    }
    if (arg0 == 0) {
        ptr = &data_021624f8->unk_08;
    } else if (arg0 == 1) {
        ptr = &data_021624f8->unk_0c;
    }
    func_02125994(*ptr);
    data_021624f8->unk_18[arg0] |= 8;
    return 1;
}

void func_021093b0(u32 arg0) {
    if (func_021095d0(arg0) != 0) {
        return;
    }
    if (*(u32 *)arg0 != 0) {
        func_0210c5dc(*(u32 *)arg0);
        *(u32 *)arg0 = 0;
    }
    if (arg0 != 0) {
        func_0210c5dc(arg0);
    }
}

s32 func_021093f0(u8 *arg0) {
    u8 *start = *(u8 **)arg0;
    u8 *end = start + *(u32 *)(arg0 + 4);
    u8 *ptr = *(u8 **)(arg0 + 8);
    if (ptr == end) {
        return 0;
    }
    if (ptr[1] == '\n') {
        return 0;
    }
    while (*ptr++ != 0) {
    }
    if (ptr >= end) {
        ptr = end;
    }
    if (*ptr == '\n') {
        ptr--;
    }
    *(u8 **)(arg0 + 8) = ptr;
    return 1;
}

s32 func_02109444(Unk02109444 *arg0) {
    u8 *cur = arg0->cur;
    if (cur == arg0->buf + arg0->size) {
        return 0;
    }
    while (cur < arg0->buf + arg0->size) {
        u32 c = *cur++;
        if (c == '\n') {
            break;
        }
        if ((c >= 0x81 && c <= 0x9f) || (c >= 0xe0 && c <= 0xfc)) {
            cur++;
        }
    }
    arg0->cur = cur;
    return 1;
}

s32 func_021094a4(Unk02109444 *arg0, char *arg1) {
    char *cur = (char *)arg0->buf;
    char *end = cur + arg0->size;
    s32 line = 1;
    while (cur < end) {
        if (cur == arg1) {
            break;
        }
        if (*cur == '\n') {
            line++;
        }
        if ((*cur >= 0x81 && *cur <= 0x9f) || (*cur >= 0xe0 && *cur <= 0xfc)) {
            cur++;
        }
        cur++;
    }
    if (cur == end) {
        line = -1;
    }
    return line;
}

u32 func_0210957c(s32 arg0) {
    func_0210950c(data_02162504[arg0]);
    return data_02162504[arg0];
}

extern void func_0210c5dc(u32);
void func_0210959c(u32 arg0) {
    if (data_02162504[arg0] == 0) {
        data_02162504[arg0] = func_021092d8(data_02155b50[arg0]);
    }
}

s32 func_021095d0(u32 arg0) {
    s32 i;
    for (i = 0; i < 3; i++) {
        if (arg0 == data_02162504[i]) {
            return 1;
        }
    }
    return 0;
}

void func_02109600(void) {
    s32 active = 0;
    s32 i;
    for (i = 0; i < 2; i++) {
        u8 *p = data_02162544 + i * 0x10;
        if (func_0210c398(p) != 0) {
            s32 val = *(s32 *)p >> 12;
            if (i == 0) {
                data_02162814 = val;
            } else {
                data_02162884 = val;
            }
            func_02108ffc();
            active = 1;
        }
    }
    if (active == 0) {
        func_0210da14(data_02162510);
        *(volatile s32 *)data_02162510 = 0;
    }
}

void func_0210968c(u32 arg0, s32 arg1, u32 arg2) {
    s32 sz = arg1;
    s32 i;
    if (sz > 0x10) {
        sz = 0x10;
    } else if (sz < -0x10) {
        sz = -0x10;
    }
    for (i = 0; i < 2; i++) {
        if (arg0 & (1 << i)) {
            func_0210c35c((s32 *)(data_02162544 + i * 0x10), *(s32 *)(data_02162544 + i * 0x10), sz << 12, arg2);
            if (arg2 != 0) {
                if (*(s32 *)data_02162510 == 0) {
                    *(u32 *)data_02162510 = (u32)func_02109600;
                    *(u32 *)((u8 *)data_02162510 + 4) = 0x15f90;
                    func_0210d9e4(&data_02162814);
                }
            } else {
                if (i == 0) {
                    *(s32 *)data_02162510 = sz;
                } else {
                    data_02162884 = sz;
                }
            }
        }
    }
}

s32 func_02109754(u32 arg0) {
    s32 i;
    for (i = 0; i < 2; i++) {
        if ((arg0 & (1 << i)) && *(s32 *)(data_02162544 + i * 0x10 + 0xc) > 0) {
            return 1;
        }
    }
    return 0;
}

void func_02109790(u32 arg0) {
    if (data_02162878 == 0) {
        while (func_02109754(arg0) != 0) {
            func_0210dc88();
        }
    } else {
        while (func_02109754(arg0) != 0) {
            func_02109600();
        }
    }
}

void func_021097f4(void) {
    func_02008f74(data_02162544, 0, 0x20);
    func_02008f74(data_02162510, 0, 0x14);
}

void func_02109828(void) {
    *(u32 *)(data_02162510 + 0x34) = 0x8000;
    *(u32 *)(data_02162510 + 0x44) = 0x8000;
}

void func_02109840(void) {
    s32 i;
    for (i = 0; i < 2; i++) {
        *(s32 *)(data_02162544 + i * 0x10 + 0xc) = 0;
    }
    func_0210da14(data_02162510);
    *(volatile s32 *)data_02162510 = 0;
}

void func_02109884(u32 arg0, u32 arg1) {
    if (arg0 & 1) {
        *(u32 *)(data_02162510 + 0x34) = arg1 << 0xc;
    }
    if (arg0 & 2) {
        *(u32 *)(data_02162510 + 0x44) = arg1 << 0xc;
    }
}
s32 func_021090f4(u32 arg0, s32 arg1) {
    u32 *ptr = NULL;
    if (arg0 == 0) {
        ptr = &data_021624f8->unk_08;
    } else if (arg0 == 1) {
        ptr = &data_021624f8->unk_0c;
    }
    if (arg0 >= 2 || ptr == NULL) {
        return -1;
    }
    if (data_021624f8->unk_18[arg0] & 8) {
        return 0;
    }
    switch (func_02125a5c(*ptr)) {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            if (arg1 == 0) {
                return 0;
            }
            return 3;
        default:
            return -1;
    }
}
void func_0210950c(u32 arg0) {
    Unk02109444 *s = (Unk02109444 *)arg0;
    u8 *p = s->buf;
    s->cur = p;
    if (func_02109f84(p) != 0) {
        return;
    }
    while (*p != 0) {
        if (*p == ',' || *p == '\r') {
            *p = 0;
        } else if ((*p >= 0x81 && *p <= 0x9f) || (*p >= 0xe0 && *p <= 0xfc)) {
            p++;
        }
        p++;
    }
}
