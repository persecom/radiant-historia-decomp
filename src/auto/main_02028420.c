/* 1 function from 0x02028420 to 0x02029130 (main), found by ds-decomp. */
#include "common.h"

extern const char *func_020929f4(u8 *, s32);
extern s32 func_02092994(u8 *, s32);
extern s32 func_02026e9c(s32, const char *, char *);
extern s16 func_02026f38(char *);
extern s32 func_0202b4d8(s32, u8 *);
extern u8 *data_02160a6c;
extern u8 *data_0216007c;
extern u32 data_0216263c[3];
extern char data_02146164[];
extern s32 func_0201fb1c(s32, s32);
s32 func_02028420(u8 *arg0, u8 *arg1) {
    s32 zero = 0;
    s32 zero2 = 0;
    u8 *src = arg1;
    u8 *self = arg0;
    s32 two = 2;
    const char *s;
    s16 cmd, v1, v2;
    u8 *node;
    s = func_020929f4(src, zero);
    if (func_02026e9c(2, s, data_02146164) != zero) {
        u8 **holder = (u8 **)((u8 *)&data_0216007c + 4);
        cmd = func_02026f38((char *)s);
        func_02092994(src, zero);
        v1 = (s16)func_02092994(src, zero);
        v2 = (s16)func_02092994(src, zero);
        switch (cmd) {
        case 1:
            return func_0202b4d8(two, self);
        case 2:
            return func_0202b4d8(1, self);
        case 3:
            node = *(u8 **)(data_02160a6c + 0xb8);
            if (node == NULL) break;
            do {
                if (*(u32 *)(*(u8 **)(node + 0x118) + 0x70) != 0 &&
                    *(u16 *)(node + 0x8c) == v1) {
                    *(u8 **)(*holder + 0x38) = node;
                    return (s32)node;
                }
                node = *(u8 **)(node + 0x174);
            } while (node != NULL);
            break;
        case 4:
            node = *(u8 **)(*holder + 0x38);
            if (node != NULL) return (s32)node;
            break;
        case 5:
            node = *(u8 **)(data_02160a6c + 0xac);
            if (node == NULL) break;
            do {
                if (*(u32 *)(*(u8 **)(node + 0x118) + 0x70) != 0 &&
                    *(u16 *)(node + 0x8c) == v1) {
                    *(u8 **)(*holder + 0x3c) = node;
                    return (s32)node;
                }
                node = *(u8 **)(node + 0x16c);
            } while (node != NULL);
            break;
        case 6:
            node = *(u8 **)(*holder + 0x3c);
            if (node != NULL) return (s32)node;
            break;
        case 7:
        case 11: {
            u8 *list = *(u8 **)(*(u8 **)(self + 0x12c) + 0x1c);
            u8 *obj = NULL;
            s32 found = zero2;
            u8 *n = NULL;
            if (list == NULL) break;
            n = *(u8 **)(list + 0x18);
            while (n != NULL) {
                obj = *(u8 **)(n + 0);
                if (*(u8 *)(*(u8 **)(obj + 0x118)) == 1 && obj != self) {
                    if (cmd == 7) {
                        *(u8 **)(*holder + 0x38) = obj;
                        return (s32)obj;
                    }
                    found = 1;
                }
                n = *(u8 **)(n + 0x18);
            }
            if (found == 1 && obj != NULL) {
                *(u8 **)(*holder + 0x38) = obj;
                return (s32)obj;
            }
            break;
        }
        case 9:
        case 13: {
            u8 *list = *(u8 **)(*(u8 **)(self + 0x12c) + 0x1c);
            u8 *obj = NULL;
            s32 found = zero2;
            u8 *n = NULL;
            if (list == NULL) break;
            n = *(u8 **)(list + 0x1c);
            while (n != NULL) {
                obj = *(u8 **)(n + 0);
                if (*(u8 *)(*(u8 **)(obj + 0x118)) == 1 && obj != self) {
                    if (cmd == 9) {
                        *(u8 **)(*holder + 0x38) = obj;
                        return (s32)obj;
                    }
                    found = 1;
                }
                n = *(u8 **)(n + 0x1c);
            }
            if (found == 1 && obj != NULL) {
                *(u8 **)(*holder + 0x38) = obj;
                return (s32)obj;
            }
            break;
        }
        case 21:
        case 23: {
            u8 *list = *(u8 **)(*(u8 **)(self + 0x12c) + 0x1c);
            u8 *obj = NULL;
            s32 found = zero2;
            u8 *n = NULL;
            if (list == NULL) break;
            n = *(u8 **)(list + 0x1c);
            while (n != NULL) {
                obj = *(u8 **)(n + 0);
                if (*(u8 *)(*(u8 **)(obj + 0x118)) == 0) {
                    found = 1;
                    if (cmd == 21) {
                        *(u8 **)(*holder + 0x3c) = obj;
                        return (s32)obj;
                    }
                }
                n = *(u8 **)(n + 0x1c);
                if (n == NULL && found == 1 && obj != NULL) {
                    *(u8 **)(*holder + 0x3c) = obj;
                    return (s32)obj;
                }
            }
            break;
        }
        case 26:
        case 28: {
            u8 *arr[9];
            u8 cnt = zero2;
            u32 mask;
            u32 x;
            u8 i;
            for (i = zero2; i < 9; i++) arr[i] = NULL;
            x = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
            data_0216263c[0] = x;
            mask = 1U << v1;
            node = *(u8 **)(data_02160a6c + 0xb8);
            while (node != NULL) {
                u8 *info = *(u8 **)(node + 0x118);
                if (*(u32 *)(info + 0x70) != zero) {
                    if (cmd == 26) {
                        if (*(u32 *)(info + 0x78) & mask) arr[cnt++] = node;
                    } else if (cmd == 28) {
                        if (!(*(u32 *)(info + 0x78) & mask)) arr[cnt++] = node;
                    }
                }
                node = *(u8 **)(node + 0x174);
            }
            if (cnt == zero) break;
            if (cnt == 1) {
                *(u8 **)(*holder + 0x38) = arr[0];
                return (s32)arr[0];
            }
            if (cnt < 2 || cnt > 9) break;
            i = ((x >> 16) * cnt) >> 16;
            node = arr[i];
            *(u8 **)(*holder + 0x38) = node;
            return (s32)node;
        }
        case 27:
        case 29: {
            u8 *arr[3];
            u8 cnt = zero2;
            u32 mask;
            u32 x;
            u8 i;
            for (i = zero2; i < 3; i++) arr[i] = NULL;
            x = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
            data_0216263c[0] = x;
            mask = 1U << v1;
            node = *(u8 **)(data_02160a6c + 0xac);
            while (node != NULL) {
                u8 *info = *(u8 **)(node + 0x118);
                if (*(u32 *)(info + 0x70) != zero) {
                    if (cmd == 27) {
                        if (!(*(u32 *)(info + 0x80) & 0x20000)) arr[cnt++] = node;
                    } else if (cmd == 29) {
                        if (*(u32 *)(info + 0x80) & 0x20000) arr[cnt++] = node;
                    }
                }
                node = *(u8 **)(node + 0x16c);
            }
            if (cnt == zero) break;
            if (cnt == 1) {
                *(u8 **)(*holder + 0x38) = arr[0];
                return (s32)arr[0];
            }
            if (cnt < 2 || cnt > 3) break;
            i = ((x >> 16) * cnt) >> 16;
            node = arr[i];
            *(u8 **)(*holder + 0x38) = node;
            return (s32)node;
        }
        case 0x20: case 0x22: case 0x24: case 0x26: case 0x28: case 0x2a:
        case 0x2c: case 0x2e: case 0x30: case 0x32: case 0x34: case 0x36:
        case 0x38: case 0x3a: case 0x3c: {
            u8 *best = NULL;
            s32 lim = zero;
            s32 k;
            if (cmd == 0x20) lim = 1000;
            else if (cmd == 0x24) lim = 1000;
            else if (cmd == 0x28) lim = 1000;
            else if (cmd == 0x2c) lim = 1000;
            else if (cmd == 0x30) lim = 1000;
            else if (cmd == 0x34) lim = 1000;
            else if (cmd == 0x38) lim = 100000;
            else if (cmd == 0x3c) lim = 1000;
            node = *(u8 **)(data_02160a6c + 0xb8);
            if (node == NULL) break;
            k = cmd - 0x20;
            do {
                u8 *info = *(u8 **)(node + 0x118);
                if (*(u32 *)(info + 0x70) != zero) {
                    s32 val = zero;
                    switch (k) {
                    case 0: case 1: val = *(s32 *)(info + 4); break;
                    case 4: case 5: val = *(s16 *)(info + 0xc); break;
                    case 8: case 9: val = *(s16 *)(info + 0x28); break;
                    case 12: case 13: val = *(s16 *)(info + 0x2a); break;
                    case 16: case 17: val = *(s16 *)(info + 0x2c); break;
                    case 20: case 21: val = *(s16 *)(info + 0x2e); break;
                    case 24: case 25: val = *(s32 *)(info + 0x30); break;
                    case 28: case 29: val = *(s16 *)(info + 0xba); break;
                    default: break;
                    }
                    if ((k & 3) == 0) {
                        if (val <= lim) { lim = val; best = node; }
                    } else if ((k & 3) == 1) {
                        if (val >= lim) { lim = val; best = node; }
                    }
                }
                node = *(u8 **)(node + 0x174);
            } while (node != NULL);
            if (best == NULL) break;
            *(u8 **)(*holder + 0x38) = best;
            return (s32)best;
        }
        case 0x21: case 0x23: case 0x25: case 0x27: case 0x29: case 0x2b:
        case 0x2d: case 0x2f: case 0x31: case 0x33: case 0x35: case 0x37:
        case 0x39: case 0x3b: case 0x3d: {
            u8 *best = NULL;
            s32 lim = zero;
            s32 k;
            if (cmd == 0x21) lim = 1000;
            else if (cmd == 0x25) lim = 1000;
            else if (cmd == 0x29) lim = 1000;
            else if (cmd == 0x2d) lim = 1000;
            else if (cmd == 0x31) lim = 1000;
            else if (cmd == 0x35) lim = 1000;
            else if (cmd == 0x39) lim = 100000;
            else if (cmd == 0x3d) lim = 1000;
            node = *(u8 **)(data_02160a6c + 0xac);
            if (node == NULL) break;
            k = cmd - 0x21;
            do {
                u8 *info = *(u8 **)(node + 0x118);
                if (*(u32 *)(info + 0x70) != zero) {
                    s32 val = zero;
                    switch (k) {
                    case 0: case 1: val = *(s32 *)(info + 4); break;
                    case 4: case 5: val = *(s16 *)(info + 0xc); break;
                    case 8: case 9: val = *(s16 *)(info + 0x28); break;
                    case 12: case 13: val = *(s16 *)(info + 0x2a); break;
                    case 16: case 17: val = *(s16 *)(info + 0x2c); break;
                    case 20: case 21: val = *(s16 *)(info + 0x2e); break;
                    case 24: case 25: val = *(s32 *)(info + 0x30); break;
                    case 28: case 29: val = *(s16 *)(info + 0xba); break;
                    default: break;
                    }
                    if ((k & 3) == 0) {
                        if (val <= lim) { lim = val; best = node; }
                    } else if ((k & 3) == 1) {
                        if (val >= lim) { lim = val; best = node; }
                    }
                }
                node = *(u8 **)(node + 0x16c);
            } while (node != NULL);
            if (best == NULL) break;
            *(u8 **)(*holder + 0x3c) = best;
            return (s32)best;
        }
        case 0x40: {
            u8 *obj = *(u8 **)(*(u8 **)(self + 0x12c) + 0x14);
            u8 type;
            if (obj == NULL) break;
            type = *(u8 *)(*(u8 **)(obj + 0x118));
            if (type == 0) {
                *(u8 **)(*holder + 0x3c) = obj;
                return (s32)self;
            }
            if (type == 1) *(u8 **)(*holder + 0x38) = obj;
            return (s32)obj;
        }
        case 0x41:
            return (s32)self;
        case 0x42: {
            u8 *best = NULL;
            s32 lim = 999999;
            node = *(u8 **)(data_02160a6c + 0xb8);
            if (node == NULL) break;
            do {
                u8 *info = *(u8 **)(node + 0x118);
                if (*(u32 *)(info + 0x70) != zero && node != self) {
                    s32 val = *(s32 *)(info + 4);
                    if (val <= lim) { lim = val; best = node; }
                }
                node = *(u8 **)(node + 0x174);
            } while (node != NULL);
            return (s32)best;
        }
        case 0x43: {
            u8 *best = NULL;
            s32 lim = zero;
            node = *(u8 **)(data_02160a6c + 0xb8);
            if (node == NULL) break;
            do {
                u8 *info = *(u8 **)(node + 0x118);
                if (*(u32 *)(info + 0x70) != zero && node != self) {
                    s32 val = *(s32 *)(info + 4);
                    if (val >= lim) { lim = val; best = node; }
                }
                node = *(u8 **)(node + 0x174);
            } while (node != NULL);
            return (s32)best;
        }
        case 0x44: {
            u8 *best = NULL;
            s32 lim = 999999;
            node = *(u8 **)(data_02160a6c + 0xac);
            if (node == NULL) break;
            do {
                u8 *info = *(u8 **)(node + 0x118);
                if (*(u32 *)(info + 0x70) != zero) {
                    s32 val = *(s16 *)(info + 0x5a);
                    if (val <= lim) { lim = val; best = node; }
                }
                node = *(u8 **)(node + 0x16c);
            } while (node != NULL);
            return (s32)best;
        }
        case 0x45: {
            u8 *best = NULL;
            s32 lim = zero;
            node = *(u8 **)(data_02160a6c + 0xac);
            if (node == NULL) break;
            do {
                u8 *info = *(u8 **)(node + 0x118);
                if (*(u32 *)(info + 0x70) != zero) {
                    s32 val = *(s16 *)(info + 0x5a);
                    if (val >= lim) { lim = val; best = node; }
                }
                node = *(u8 **)(node + 0x16c);
            } while (node != NULL);
            return (s32)best;
        }
        case 0x46:
            break;
        }
    }
    return 0;
}
