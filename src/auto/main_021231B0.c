/* 20 functions from 0x021231B0 to 0x021241A4 (main), found by ds-decomp. */
#include "common.h"

extern void func_02002058(s32, s32);
extern s32 func_02001ff4(void);
extern void func_021205ec(s32, void *, s32);
extern void (*data_021560f0[8])(s32 *, u8 *);
void func_021231b0(u32 *arg0, u8 *arg1, u32 arg2) {
    u8 *ptr = *(u8 **)(arg1 + 8);
    s32 frame = *(s32 *)(arg1 + 0);
    s32 limit = *(u16 *)(ptr + 4) << 12;
    u32 bit;
    if (frame >= limit) {
        frame = limit - 1;
    } else if (frame < 0) {
        frame = 0;
    }
    bit = (frame >> 12) * *(u16 *)(ptr + 6) + arg2;
    *arg0 = *(u32 *)(ptr + 0xc + (bit >> 5) * 4) & (1 << (bit & 0x1f));
}

void func_02123204(u8 *arg0) {
    u32 flags = *(u32 *)arg0;
    if (!(flags & 4)) {
        if (!(flags & 2)) {
            func_021205ec(0x19, arg0 + 0x28, 0xc);
        } else {
            func_021205ec(0x1c, arg0 + 0x4c, 3);
        }
    } else if (!(flags & 2)) {
        func_021205ec(0x1a, arg0 + 0x28, 9);
    }
    if (!(*(u32 *)arg0 & 1)) {
        func_021205ec(0x1b, arg0 + 4, 3);
    }
}

void func_02123278(u32 *arg0, u32 *arg1, s32 arg2, u32 arg3) {
    if (arg3 & 4) {
        arg0[0] |= 1;
    } else {
        u32 x = arg1[0];
        u32 y = arg1[1];
        u32 z = arg1[2];
        arg0[1] = x;
        arg0[2] = y;
        arg0[3] = z;
    }
    arg0[0] |= 0x18;
}

void func_021232b4(u8 *arg0) {
    u32 flags = *(u32 *)arg0;
    s32 sendTrans = 0;
    if (!(flags & 4)) {
        sendTrans = 1;
    }
    if ((flags & 0x20) && !(flags & 8)) {
        if (sendTrans) {
            func_021205ec(0x1c, arg0 + 0x4c, 3);
            sendTrans = 0;
        }
        func_021205ec(0x1b, arg0 + 0x10, 3);
    }
    if (!(*(u32 *)arg0 & 2)) {
        if (sendTrans) {
            func_021205ec(0x19, arg0 + 0x28, 0xc);
        } else {
            func_021205ec(0x1a, arg0 + 0x28, 9);
        }
    } else if (sendTrans) {
        func_021205ec(0x1c, arg0 + 0x4c, 3);
    }
    if (!(*(u32 *)arg0 & 1)) {
        func_021205ec(0x1b, arg0 + 4, 3);
    }
}

void func_02123684(s32 *arg0, u8 *arg1) {
    s32 scaleS = *(s32 *)(arg1 + 0x18);
    s32 scaleT = *(s32 *)(arg1 + 0x1c);
    s32 transS = *(s32 *)(arg1 + 0x24);
    s32 transT = *(s32 *)(arg1 + 0x28);
    u16 origW = *(u16 *)(arg1 + 0x2c);
    u16 origH = *(u16 *)(arg1 + 0x2e);
    s32 ts = (s32)(((s64)scaleS * transS) >> 8);
    s32 tt = (s32)(((s64)scaleT * transT) >> 8);
    arg0[0] = scaleS;
    arg0[5] = scaleT;
    arg0[1] = 0;
    arg0[12] = origW * -ts;
    arg0[13] = origH * tt + ((origH * (0x2000 - (scaleT << 1))) << 3);
    arg0[4] = 0;
}

void func_021236f8(s32 *arg0, u8 *arg1) {
    s32 s = -(s32)(*(s32 *)(arg1 + 0x24) * *(u16 *)(arg1 + 0x2c));
    s32 t = *(s32 *)(arg1 + 0x28) * *(u16 *)(arg1 + 0x2e);
    arg0[0] = 0x1000;
    arg0[5] = 0x1000;
    arg0[1] = 0;
    arg0[12] = s << 4;
    arg0[13] = t << 4;
    arg0[4] = 0;
}

void func_02123824(s32 *arg0, u8 *arg1) {
    s32 w = *(u16 *)(arg1 + 0x2c) << 12;
    s32 h = *(u16 *)(arg1 + 0x2e) << 12;
    s32 val;

    func_02002058(h, w);
    val = *(s16 *)(arg1 + 0x22);
    arg0[0] = val;
    arg0[5] = val;
    arg0[1] = (-*(s16 *)(arg1 + 0x20) * func_02001ff4()) >> 12;
    func_02002058(w, h);
    {
        s32 w2 = *(u16 *)(arg1 + 0x2c);
        s32 h2 = *(u16 *)(arg1 + 0x2e);
        s32 s1 = *(s16 *)(arg1 + 0x20);
        s32 s2 = *(s16 *)(arg1 + 0x22);
        s32 sum = s1 + s2;
        s32 diff = s1 - s2;
        s32 neg = (s32)((u32)0 - (u32)sum);
        arg0[12] = (w2 * (neg + 0x1000)) << 3;
        arg0[13] = (h2 * (diff + 0x1000)) << 3;
    }
    arg0[4] = (*(s16 *)(arg1 + 0x20) * func_02001ff4()) >> 12;
}

void func_021238d0(s32 *arg0, u8 *arg1) {
    s32 scaleS = *(s32 *)(arg1 + 0x18);
    s32 scaleT = *(s32 *)(arg1 + 0x1c);
    u16 origH = *(u16 *)(arg1 + 0x2e);
    arg0[0] = scaleS;
    arg0[1] = 0;
    arg0[4] = 0;
    arg0[5] = scaleT;
    arg0[12] = 0;
    arg0[13] = (origH * (0x2000 - (scaleT << 1))) << 3;
}

void func_02123910(s32 *arg0) {
    arg0[0] = 0x1000;
    arg0[1] = 0;
    arg0[4] = 0;
    arg0[5] = 0x1000;
    arg0[12] = 0;
    arg0[13] = 0;
}

void func_02123934(u8 *arg0) {
    s32 data[19];
    s32 scale;
    void (*fn)(s32 *, u8 *) = data_021560f0[*(u32 *)arg0 & 7];

    if (*(u32 *)arg0 & 8) {
        data[0] = 0x101610;
    } else {
        data[0] = 0x101810;
    }
    data[1] = 3;
    data[18] = 2;
    data[16] = 0;
    data[13] = 0;
    data[12] = 0;
    data[11] = 0;
    data[10] = 0;
    data[9] = 0;
    data[8] = 0;
    data[5] = 0;
    data[4] = 0;
    data[17] = 0x1000;

    fn(&data[2], arg0);

    scale = *(s32 *)(arg0 + 0x30);
    if (scale != 0x1000) {
        data[2] = (s32)(((s64)scale * data[2]) >> 12);
        data[3] = (s32)(((s64)scale * data[3]) >> 12);
        data[14] = (s32)(((s64)scale * data[14]) >> 12);
    }
    scale = *(s32 *)(arg0 + 0x34);
    if (scale != 0x1000) {
        data[6] = (s32)(((s64)scale * data[6]) >> 12);
        data[7] = (s32)(((s64)scale * data[7]) >> 12);
        data[15] = (s32)(((s64)scale * data[15]) >> 12);
    }
    func_021205ec(data[0], (s32 *)((u8 *)data + 4), 0x12);
}

extern void func_02002058(s32, s32);
extern s32 func_02001ff4(void);
void func_02124130(s32 *arg0, u8 *arg1) {
    s32 h = *(u16 *)(arg1 + 0x2e);
    s32 w = *(u16 *)(arg1 + 0x2c);
    s32 y = *(s32 *)(arg1 + 0x28);
    s32 x = *(s32 *)(arg1 + 0x24);
    s32 t1 = (y * h) + ((-h) << 11);
    s32 a = *(s32 *)(arg1 + 0x18);
    s32 b = *(s32 *)(arg1 + 0x1c);
    s32 v1 = (s32)(((s64)b * t1) >> 8) + (h << 15);
    s32 t2 = ((-w) << 11) - (x * w);
    s32 v2 = (s32)(((s64)a * t2) >> 8) + (w << 15);

    arg0[0] = a;
    arg0[5] = b;
    arg0[1] = 0;
    arg0[12] = v2;
    arg0[13] = v1;
    arg0[4] = 0;
}

