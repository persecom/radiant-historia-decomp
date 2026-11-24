/* 15 functions from 0x0207698C to 0x02077688 (main), found by ds-decomp. */
#include "common.h"
extern u16 data_021626a8;
s32 func_02076914(s32);
void func_0210d27c(s32);
void func_020775e8(void);
void func_020cea64(s32);
void func_020a994c(void *);
void func_020a98ac(void *);
void func_020a98f4(void *);
void func_02077440(u8 *, s32, s32, s32, u32, u16);
extern u8 data_02148460[12];
extern u32 func_020a94b8(void *);
extern void *func_020a8604(s32, s32);
extern void func_020a8810(void *, s32);
extern void func_020a9830(void *, void *, s32, s32, s32, s32);
extern u8 data_02148444[28];
extern void *data_02155c3c;
extern void *func_021092d8(void *);
extern void *func_0210c594(s32, void *);
extern char *func_0210cd20(void *, s32);

typedef struct Unk14 {
    u16 unk[7];
} Unk14;

extern const Unk14 data_02140c40;

extern void *func_020764e4(void);
extern void func_02076868(void);
extern void func_0207763c(void);
extern void func_0207698c(void);
extern void func_021098ac(void *);
extern s32 func_02076df4(s8, s32, s32, s32);

typedef struct FontGlyph {
    s32 ch;
    s32 u;
    s32 v;
    s32 w;
} FontGlyph;

extern s32 data_0214828c[];
extern s32 data_021482b4[];
extern s32 data_0214831c[];
extern FontGlyph data_02148384[];
extern void func_02076380(void *);
extern void func_021099f8(void *);
extern void func_020a9610(void *, u32, u16, void *, u32, u32);
void func_02076d6c(void) {
    u8 *ptr = func_020764e4();
    switch (*(u8 *)(ptr + 0x54)) {
    case 0:
        func_02076868();
        break;
    case 1:
        *(s32 *)(ptr + 0xa0) += 1;
        if (*(s32 *)(ptr + 0xa0) >= 0x1e) {
            func_0207763c();
            *(u8 *)(ptr + 0x54) = 2;
        }
        break;
    case 2:
        func_0207698c();
        break;
    case 3:
        break;
    }
}

void func_02076dcc(void) {
    *(volatile u32 *)0x0400001c = 0;
    *(volatile u32 *)0x04000000 = (*(volatile u32 *)0x04000000 & ~0x1f00) | 0x1f00;
}

s32 func_02076df4(s8 c, s32 x, s32 y, s32 color) {
    u16 buf[10];
    s32 u;
    s32 v;
    s32 w;

    if (c >= 'A' && c <= 'Z') {
        s32 idx = c - 'A';
        u = (idx % 9) * 13;
        v = (idx / 9) * 13;
        w = data_021482b4[idx];
    } else if (c >= 'a' && c <= 'z') {
        s32 idx = c - 'a';
        u = (idx % 9) * 13;
        v = (idx / 9) * 13 + 39;
        w = data_0214831c[idx];
    } else if (c >= '0' && c <= '9') {
        s32 idx = c - '0';
        u = (idx % 9) * 13;
        v = (idx / 9) * 13 + 78;
        w = data_0214828c[idx];
    } else if (c == ' ') {
        return 5;
    } else {
        s32 i = 0;
        while (1) {
            if (data_02148384[i].ch == -1) {
                return 8;
            }
            if (c == data_02148384[i].ch) {
                u = data_02148384[i].u;
                v = data_02148384[i].v;
                w = data_02148384[i].w;
                break;
            }
            i++;
        }
    }

    if (color == 0) {
        *(volatile u32 *)0x04000480 = 0x7fff;
    } else {
        *(volatile u32 *)0x04000480 = 0x4b7f;
    }
    buf[0] = 1;
    buf[1] = u;
    buf[2] = v;
    buf[3] = 13;
    buf[4] = 13;
    buf[5] = x;
    buf[6] = y;
    buf[7] = 0x66;
    buf[8] = 13;
    buf[9] = 13;
    func_021098ac(buf);
    return w;
}

void func_02076fdc(s32 arg0, s32 arg1) {
    u16 buf[10];
    *(volatile u32 *)0x04000480 = 0x4b7f;
    buf[0] = 1;
    buf[1] = 0;
    buf[2] = 0x68;
    buf[3] = 0x5d;
    buf[4] = 0xb;
    buf[5] = arg0;
    buf[6] = arg1;
    buf[7] = 0x66;
    buf[8] = 0x5d;
    buf[9] = 0xb;
    func_021098ac(buf);
    buf[1] = 0;
    buf[2] = 0x75;
    buf[3] = 0x7c;
    buf[4] = 0xb;
    buf[5] = arg0 + 0x5d;
    buf[6] = arg1;
    buf[7] = 0x66;
    buf[8] = 0x7c;
    buf[9] = 0xb;
    func_021098ac(buf);
}

s32 func_0207708c(void *arg0, s32 arg1, s32 arg2) {
    s32 x;
    s32 y = arg2 + *(s32 *)arg0 - arg1;
    s32 i;
    if (y <= -13 || y >= 192) {
        return *(s32 *)arg0;
    }
    x = 10;
    if (*(s32 *)((u8 *)arg0 + 0x24) == 2) {
        func_02076fdc(x, y);
        return *(s32 *)arg0;
    }
    for (i = 0; i < 32; i++) {
        s8 c = ((s8 *)arg0 + 4)[i];
        if (c == 0) {
            break;
        }
        x += func_02076df4(c, x, y, *(s32 *)((u8 *)arg0 + 0x24));
    }
    return *(s32 *)arg0;
}

void func_02077110(s32 arg0) {
    s32 y;
    s32 i;
    u8 *ptr = func_020764e4();
    func_02076380(*(void **)(ptr + 0x58));
    y = 0;
    *(volatile u32 *)0x040004a4 = 0x1f00c0;
    for (i = 0; i < *(s32 *)(ptr + 0x74); i++) {
        y += func_0207708c(*(u8 **)(ptr + 0x78) + i * 0x28, arg0, y);
    }
}

void func_02077180(s32 arg0, s32 arg1) {
    u8 *ptr = func_020764e4();
    u16 buf[10];
    s32 alpha;
    u32 val;

    if (arg1 < 0x3e) {
        alpha = arg1 / 2;
    } else if (arg1 >= 0x10e) {
        return;
    } else if (arg1 > 0xef) {
        alpha = 0x10e - arg1;
    } else {
        alpha = 0x1f;
    }
    if (alpha == 0) {
        return;
    }
    if (arg0 != 0) {
        func_02076380(*(void **)(ptr + 0x64));
    } else {
        func_02076380(*(void **)(ptr + 0x5c));
    }
    val = 0x10000c0 | (alpha << 16);
    *(volatile u32 *)0x040004a4 = val;
    buf[0] = 1;
    buf[1] = 0;
    buf[2] = 0;
    buf[3] = 0x100;
    buf[4] = 0x80;
    buf[5] = 0;
    buf[6] = 0;
    buf[7] = 0x65;
    buf[8] = 0x100;
    buf[9] = 0x80;
    func_021098ac(buf);

    if (arg0 != 0) {
        func_02076380(*(void **)(ptr + 0x68));
    } else {
        func_02076380(*(void **)(ptr + 0x60));
    }
    *(volatile u32 *)0x040004a4 = val;
    buf[0] = 1;
    buf[1] = 0;
    buf[2] = 0;
    buf[3] = 0x100;
    buf[4] = 0x40;
    buf[5] = 0;
    buf[6] = 0x80;
    buf[7] = 0x65;
    buf[8] = 0x100;
    buf[9] = 0x40;
    func_021098ac(buf);
}

void func_020772b8(void) {
    Unk14 buf = data_02140c40;
    *(volatile u32 *)0x040004a4 = 0x1f00c0;
    func_021099f8(&buf);
}

void func_02077314(void) {
 s32 zero=0;
 u8 *ptr=func_020764e4();
 void *file=func_021092d8(data_02148444);
 s32 count=zero;
 s32 i;
 func_02109444(file);
 do {
 if(func_0210cdfc(file,zero)==-1) break;
 if(!func_02109444(file)) break;
 count++;
 } while(1);
 func_0210950c(file);
 func_02109444(file);
 *(s32 *)(ptr+0x74)=count;
 *(void **)(ptr+0x78)=func_0210c594(count*40,data_02155c3c);
 for(i=0;i<count;i++) {
 u8 *entry=*(u8 **)(ptr+0x78)+i*40;
 s32 value=func_0210cdfc(file,zero);
 if(value==-1) break;
 if(value>10) value=value*78/100;
 *(s32 *)entry=value;
 func_02015a10(entry+4,func_0210cd20(file,zero));
 *(s32 *)(entry+0x24)=func_0210cdfc(file,zero);
 if(!func_02109444(file)) break;
 }
 func_021093b0(file);
}

void func_02077440(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, u32 arg4, u16 arg5) {
    if (arg5 == 0) {
        return;
    }
    *(s32 *)(*(u8 **)arg0 + 0x4c) = (arg3 + 0x65) << 12;
    *(s32 *)(*(u8 **)arg0 + 0x44) = arg1 << 12;
    *(s32 *)(*(u8 **)arg0 + 0x48) = arg2 << 12;
    func_020a9610(arg0 + 0x38, arg4, arg5, *(void **)arg0, 0, 0);
}

void func_020774a4(void) {
 u8 *ptr = func_020764e4();
 *(u32 *)(ptr+0x1a8)=func_020a94b8(data_02148460);
 *(void **)(ptr+0xb8)=func_020a8604(5,2);
 func_020a8810(*(void **)(ptr+0xb8),19);
 func_020a9830(ptr+0xbc,ptr+0xf0,240,16,0,0);
 func_02077440(ptr+0xb8,146,134,102,*(u32 *)(ptr+0x1a8),101);
 *(void **)(ptr+0x108)=func_020a8604(5,2);
 func_020a8810(*(void **)(ptr+0x108),20);
 func_020a9830(ptr+0x10c,ptr+0x140,240,16,0,0);
 func_02077440(ptr+0x108,146,154,102,*(u32 *)(ptr+0x1a8),102);
 *(void **)(ptr+0x158)=func_020a8604(5,2);
 func_020a8810(*(void **)(ptr+0x158),22);
 func_020a9830(ptr+0x15c,ptr+0x190,240,16,0,0);
 func_02077440(ptr+0x158,16,44,102,*(u32 *)(ptr+0x1a8),12);
}

extern void func_020a994c(void *);
extern void func_020a98a0(void *);
extern void func_020a9544(void *);
void func_020775e8(void) {
    s32 i;
    s32 offset;
    void *obj;
    void (*fn)(void *);
    u8 *ptr = func_020764e4();

    for (i = 0; i < 3; i++) {
        offset = i * 0x50;
        func_020a994c(ptr + 0xbc + offset);
        func_020a98a0(ptr + 0xbc + offset);
        obj = *(void **)(ptr + offset + 0xb8);
        fn = *(void (**)(void *))((u8 *)obj + 0xc);
        fn(obj);
    }
    func_020a9544(*(void **)(ptr + 0x1a8));
}

extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
extern void func_02076380(void *);
extern void func_021099f8(void *);
extern void func_020a9610(void *, u32, u16, void *, u32, u32);
void func_0207763c(void) {
    u8 *ptr = func_020764e4();
    func_020a98ac(ptr + 0xbc);
    func_020a98f4(ptr + 0xbc);
    func_020a98ac(ptr + 0x10c);
    func_020a98f4(ptr + 0x10c);
    func_020a98ac(ptr + 0x15c);
    func_020a98f4(ptr + 0x15c);
    *(u32 *)(ptr + 0xa4) = 0;
}

void func_02077684(void) {
}

