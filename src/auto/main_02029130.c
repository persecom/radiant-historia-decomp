/* 3 functions from 0x02029130 to 0x02029790 (main), found by ds-decomp. */
#include "common.h"

extern const char *func_020929f4(u8 *, s32);
extern s32 func_02092994(u8 *, s32);
extern s32 func_02026e9c(s32, const char *, char *);
extern char data_0214616c[];
extern s16 func_02026f38(char *);
extern u8 *func_0202e548(u32);
extern char data_02146168[];
extern u32 data_0216263c[3];
typedef struct {u32 seed, multiplier, increment;} RandomState_020295f0;
static inline u16 RandomRange_020295f0(u16 max) {
 RandomState_020295f0 *state=(RandomState_020295f0 *)data_0216263c;
 u32 value;
 state->seed=state->seed*state->multiplier+state->increment;
 value=state->seed>>16;
 if(max) value = (value * max) >> 16;
 return value;
}
s32 func_02029130(u8 *arg0, u8 *arg1) {
    s32 zero = 0;
    const char *s = func_020929f4(arg1, zero);
    if (func_02026e9c(2, s, data_02146168) != zero) {
        s16 cmd = func_02026f38((char *)s);
        s16 v1, v2;
        func_02092994(arg1, zero);
        v1 = (s16)func_02092994(arg1, zero);
        v2 = (s16)func_02092994(arg1, zero);
        switch (cmd) {
        case 1:
            return (v1 - 1) + (v2 - 1) * 3;
        case 2: {
            s16 arr[3];
            s16 i, cnt = 0, k;
            u8 *info;
            u32 x;
            s16 base = v1 - 1;
            for (i = 0; i < 3; i++) arr[i] = zero;
            for (i = 0; i < 3; i++) {
                k = i + base * 3;
                info = func_0202e548(i & 0xff);
                if (info[0x1c] == zero) {
                    if (k == 0) return k;
                    arr[cnt++] = k;
                }
            }
            if (cnt == 0) return -1;
            if (cnt == 1) return arr[0];
            x = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
            data_0216263c[0] = x;
            i = (x >> 16) * 100;
            i = i >> 16;
            if (cnt == 2) {
                if (i < 50) return arr[0];
                return arr[1];
            }
            if (cnt == 3) {
                if (i < 30) return arr[0];
                if (i < 60) return arr[1];
                return arr[2];
            }
            return -1;
        }
        case 3:
            return *(s8 *)(*(u8 **)(arg0 + 0x128) + 0x54);
        case 4: {
            s16 arr[9];
            s16 i, cnt = 0;
            u8 *info;
            u32 x;
            for (i = 0; i < 9; i++) arr[i] = zero;
            for (i = 0; i < 9; i++) {
                info = func_0202e548(i & 0xff);
                if (info[0x1c] == zero && *(u32 *)(info + 0x10) != zero) {
                    arr[cnt++] = i;
                }
            }
            if (cnt == 0) return -1;
            if (cnt == 1) return arr[0];
            x = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
            data_0216263c[0] = x;
            i = ((x >> 16) * cnt) >> 15;
            if (cnt == 2 && i < 50) return arr[0];
            if (cnt == 2) return arr[1];
            if (cnt >= 3) {
                if (i < 30) return arr[0];
                if (i < 60) return arr[1];
                return arr[2];
            }
            return -1;
        }
        case 5: {
            s16 arr[9];
            s16 i, cnt = 0, idx;
            u8 *info;
            u32 x;
            for (i = 0; i < 9; i++) arr[i] = zero;
            for (i = 0; i < 9; i++) {
                info = func_0202e548(i & 0xff);
                if (info[0x1c] == zero && *(u32 *)(info + 0x10) != zero) {
                    arr[cnt++] = i;
                }
            }
            if (cnt == 0) return -1;
            if (cnt == 1) return arr[0] / 3 + v2 - 1;
            x = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
            data_0216263c[0] = x;
            idx = ((x >> 16) * cnt) >> 15;
            return arr[idx] / 3 + v2 - 1;
        }
        default:
            break;
        }
    }
    return -1;
}

s32 func_020295f0(u8 *arg0, u8 *arg1) {
 s32 zero=0;
 s16 a=func_02092994(arg1,zero);
 s16 w1=func_02092994(arg1,zero);
 s16 b=func_02092994(arg1,zero);
 s16 w2=func_02092994(arg1,zero);
 s16 c=func_02092994(arg1,zero);
 s16 w3=func_02092994(arg1,zero);
 s16 sum=w1+w2+w3;
 s16 roll;
 if(sum>0) {
 u16 limit=sum;
 u32 value=data_0216263c[0]*data_0216263c[1]+data_0216263c[2];
 data_0216263c[0]=value;
 value >>= 16;
 if(limit) value=(value*limit)>>16;
 roll=(u16)value+1;
 if(roll>0 && roll<=w1) return a;
 if(w1<roll && roll<=w1+w2) return b;
 if(w1+w2<roll && roll<=w1+w2+w3) return c;
 }
 return -1;
}

s32 func_02029704(u8 *arg0, u8 *arg1) {
    s32 zero = 0;
    u8 *p;
    s16 idx;
    const char *s;
    p = *(u8 **)(arg0 + 0x12c);
    s = func_020929f4(arg1, zero);
    if (func_02026e9c(3, s, data_0214616c) == 0) {
        return 1;
    }
    func_02092994(arg1, zero);
    idx = (s16)func_02092994(arg1, zero);
    func_02092994(arg1, zero);
    *(u8 *)(p + 0x22) |= (1 << (idx - 1)) & 0xff;
    return zero;
}
