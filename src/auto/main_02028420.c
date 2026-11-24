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
    u8 *src = arg1;
    u8 *self = arg0;
    u32 mask = zero;
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
            return func_0202b4d8(2, self);
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
        case 5:
            node = *(u8 **)(*holder + 0x38);
            if (node != NULL) return (s32)node;
            break;
        case 6:
            node = *(u8 **)(*holder + 0x3c);
            if (node != NULL) return (s32)node;
            break;
        case 7:
        case 11: {
            u8 *list = *(u8 **)(*(u8 **)(self + 0x12c) + 0x1c);
            u8 *obj = NULL;
            s32 found = zero;
            u8 *n = NULL;
            if (list == NULL) break;
            n = *(u8 **)(list + 0x18);
            while (n != NULL) {
                obj = *(u8 **)(n + 0);
                if (*(u8 *)(*(u8 **)(obj + 0x118)) == 1 && self != obj) {
                    found = 1;
                    if (cmd == 7) {
                        *(u8 **)(*holder + 0x38) = obj;
                        return (s32)obj;
                    }
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
            s32 found = zero;
            u8 *n = NULL;
            if (list == NULL) break;
            n = *(u8 **)(list + 0x1c);
            while (n != NULL) {
                obj = *(u8 **)(n + 0);
                if (*(u8 *)(*(u8 **)(obj + 0x118)) == 1 && self != obj) {
                    found = 1;
                    if (cmd == 9) {
                        *(u8 **)(*holder + 0x38) = obj;
                        return (s32)obj;
                    }
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
            s32 found = zero;
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
                } else if (found == 1) {
                    break;
                }
                n = *(u8 **)(n + 0x1c);
            }
            if (found == 1 && obj != NULL) {
                *(u8 **)(*holder + 0x3c) = obj;
                return (s32)obj;
            }
            break;
        }
        case 26:
        case 28: {
            u8 *arr[9] = { NULL };
            u8 cnt = zero;
            u32 x;
            u16 idx;
            node = *(u8 **)(data_02160a6c + 0xb8);
            mask |= (1U << v1);
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
            if (cnt == zero) return 0;
            if (cnt == 1) {
                node = arr[0];
                *(u8 **)(*holder + 0x38) = node;
                return (s32)node;
            }
            if (cnt < 2 || cnt > 9) break;
            x = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
            data_0216263c[0] = x;
            idx = (cnt != 0) ? (u16)(((x >> 16) * cnt) >> 16) : (u16)(x >> 16);
            node = arr[idx];
            *(u8 **)(*holder + 0x38) = node;
            return (s32)node;
        }
        case 27:
        case 29: {
            u8 *arr[3] = { NULL };
            u8 cnt = 0;
            s32 is32 = zero;
            u32 x;
            u16 idx;
            if (v1 == 32) {
                is32 = 1;
            } else {
                mask = zero | (1U << v1);
            }
            node = *(u8 **)(data_02160a6c + 0xac);
            while (node != NULL) {
                u8 *info = *(u8 **)(node + 0x118);
                if (*(u32 *)(info + 0x70) != zero) {
                    if (cmd == 27) {
                        if (is32 == 0) {
                            if (*(u32 *)(info + 0x78) & mask) arr[cnt++] = node;
                        } else {
                            if (*(u32 *)(node + 0x80) & 0x20000) arr[cnt++] = node;
                        }
                    } else if (cmd == 29) {
                        if (is32 == 0) {
                            if (!(*(u32 *)(info + 0x78) & mask)) arr[cnt++] = node;
                        } else {
                            if (!(*(u32 *)(node + 0x80) & 0x20000)) arr[cnt++] = node;
                        }
                    }
                }
                node = *(u8 **)(node + 0x16c);
            }
            if (cnt == 0) return 0;
            if (cnt == 1) {
                node = arr[0];
                *(u8 **)(*holder + 0x38) = node;
                return (s32)node;
            }
            if (cnt < 2 || cnt > 3) break;
            x = data_0216263c[1] * data_0216263c[0] + data_0216263c[2];
            data_0216263c[0] = x;
            idx = (cnt != 0) ? (u16)(((x >> 16) * cnt) >> 16) : (u16)(x >> 16);
            node = arr[idx];
            *(u8 **)(*holder + 0x38) = node;
            return (s32)node;
        }
        case 30:
            node = *(u8 **)(data_02160a6c + 0xb8);
            if (node == NULL) break;
            do {
                u8 *info = *(u8 **)(node + 0x118);
                if (*(u32 *)(info + 0x70) != 0) {
                    s32 pct = func_0201fb1c(*(s32 *)(info + 4) * 100, *(s32 *)(info + 8));
                    if (v1 <= pct && pct <= v2) {
                        *(u8 **)(*holder + 0x38) = node;
                        return (s32)node;
                    }
                }
                node = *(u8 **)(node + 0x174);
            } while (node != NULL);
            break;
        case 31:
            node = *(u8 **)(data_02160a6c + 0xac);
            if (node == NULL) break;
            do {
                u8 *info = *(u8 **)(node + 0x118);
                if (*(u32 *)(info + 0x70) != 0) {
                    s32 pct = func_0201fb1c(*(s32 *)(info + 4) * 100, *(s32 *)(info + 8));
                    if (v1 <= pct && pct <= v2) {
                        *(u8 **)(*holder + 0x3c) = node;
                        return (s32)node;
                    }
                }
                node = *(u8 **)(node + 0x16c);
            } while (node != NULL);
            break;
        case 0x20: case 0x22: case 0x24: case 0x26: case 0x28: case 0x2a:
        case 0x2c: case 0x2e: case 0x30: case 0x32: case 0x34: case 0x36:
        case 0x38: case 0x3a: case 0x3c: case 0x3e: {
            u8 *best = NULL;
            s32 lim = zero;
            if (cmd == 0x20) lim = 1000;
            else if (cmd == 0x24) lim = 1000;
            else if (cmd == 0x28) lim = 1000;
            else if (cmd == 0x2c) lim = 1000;
            else if (cmd == 0x30) lim = 1000;
            else if (cmd == 0x34) lim = 1000;
            else if (cmd == 0x38) lim = 100000;
            else if (cmd == 0x3c) lim = 1000;
            node = *(u8 **)(data_02160a6c + 0xb8);
            while (node != NULL) {
                u8 *info = *(u8 **)(node + 0x118);
                if (*(u32 *)(info + 0x70) != zero) {
                    switch (cmd) {
                    case 0x20: if (*(s32 *)(info + 4) <= lim) { lim = *(s32 *)(info + 4); best = node; } break;
                    case 0x22: if (*(s32 *)(info + 4) >= lim) { lim = *(s32 *)(info + 4); best = node; } break;
                    case 0x24: if (*(s16 *)(info + 0xc) <= lim) { lim = *(s16 *)(info + 0xc); best = node; } break;
                    case 0x26: if (*(s16 *)(info + 0xc) >= lim) { lim = *(s16 *)(info + 0xc); best = node; } break;
                    case 0x28: if (*(s16 *)(info + 0x28) <= lim) { lim = *(s16 *)(info + 0x28); best = node; } break;
                    case 0x2a: if (*(s16 *)(info + 0x28) >= lim) { lim = *(s16 *)(info + 0x28); best = node; } break;
                    case 0x2c: if (*(s16 *)(info + 0x2a) <= lim) { lim = *(s16 *)(info + 0x2a); best = node; } break;
                    case 0x2e: if (*(s16 *)(info + 0x2a) >= lim) { lim = *(s16 *)(info + 0x2a); best = node; } break;
                    case 0x30: if (*(s16 *)(info + 0x2c) <= lim) { lim = *(s16 *)(info + 0x2c); best = node; } break;
                    case 0x32: if (*(s16 *)(info + 0x2c) >= lim) { lim = *(s16 *)(info + 0x2c); best = node; } break;
                    case 0x34: if (*(s16 *)(info + 0x2e) <= lim) { lim = *(s16 *)(info + 0x2e); best = node; } break;
                    case 0x36: if (*(s16 *)(info + 0x2e) >= lim) { lim = *(s16 *)(info + 0x2e); best = node; } break;
                    case 0x38: if (*(s32 *)(info + 0x30) <= lim) { lim = *(s32 *)(info + 0x30); best = node; } break;
                    case 0x3a: if (*(s32 *)(info + 0x30) >= lim) { lim = *(s32 *)(info + 0x30); best = node; } break;
                    case 0x3c: if (*(s16 *)(info + 0xba) <= lim) { lim = *(s16 *)(info + 0xba); best = node; } break;
                    case 0x3e: if (*(s16 *)(info + 0xba) >= lim) { lim = *(s16 *)(info + 0xba); best = node; } break;
                    default: break;
                    }
                }
                node = *(u8 **)(node + 0x174);
            }
            if (best == NULL) break;
            *(u8 **)(*holder + 0x38) = best;
            return (s32)best;
        }
        case 0x21: case 0x23: case 0x25: case 0x27: case 0x29: case 0x2b:
        case 0x2d: case 0x2f: case 0x31: case 0x33: case 0x35: case 0x37:
        case 0x39: case 0x3b: case 0x3d: case 0x3f: {
            u8 *best = NULL;
            s32 lim = zero;
            if (cmd == 0x21) lim = 1000;
            else if (cmd == 0x25) lim = 1000;
            else if (cmd == 0x29) lim = 1000;
            else if (cmd == 0x2d) lim = 1000;
            else if (cmd == 0x31) lim = 1000;
            else if (cmd == 0x35) lim = 1000;
            else if (cmd == 0x39) lim = 100000;
            else if (cmd == 0x3d) lim = 1000;
            node = *(u8 **)(data_02160a6c + 0xac);
            while (node != NULL) {
                u8 *info = *(u8 **)(node + 0x118);
                if (*(u32 *)(info + 0x70) != zero) {
                    switch (cmd) {
                    case 0x21: if (*(s32 *)(info + 4) <= lim) { lim = *(s32 *)(info + 4); best = node; } break;
                    case 0x23: if (*(s32 *)(info + 4) >= lim) { lim = *(s32 *)(info + 4); best = node; } break;
                    case 0x25: if (*(s16 *)(info + 0xc) <= lim) { lim = *(s16 *)(info + 0xc); best = node; } break;
                    case 0x27: if (*(s16 *)(info + 0xc) >= lim) { lim = *(s16 *)(info + 0xc); best = node; } break;
                    case 0x29: if (*(s16 *)(info + 0x28) <= lim) { lim = *(s16 *)(info + 0x28); best = node; } break;
                    case 0x2b: if (*(s16 *)(info + 0x28) >= lim) { lim = *(s16 *)(info + 0x28); best = node; } break;
                    case 0x2d: if (*(s16 *)(info + 0x2a) <= lim) { lim = *(s16 *)(info + 0x2a); best = node; } break;
                    case 0x2f: if (*(s16 *)(info + 0x2a) >= lim) { lim = *(s16 *)(info + 0x2a); best = node; } break;
                    case 0x31: if (*(s16 *)(info + 0x2c) <= lim) { lim = *(s16 *)(info + 0x2c); best = node; } break;
                    case 0x33: if (*(s16 *)(info + 0x2c) >= lim) { lim = *(s16 *)(info + 0x2c); best = node; } break;
                    case 0x35: if (*(s16 *)(info + 0x2e) <= lim) { lim = *(s16 *)(info + 0x2e); best = node; } break;
                    case 0x37: if (*(s16 *)(info + 0x2e) >= lim) { lim = *(s16 *)(info + 0x2e); best = node; } break;
                    case 0x39: if (*(s32 *)(info + 0x30) <= lim) { lim = *(s32 *)(info + 0x30); best = node; } break;
                    case 0x3b: if (*(s32 *)(info + 0x30) >= lim) { lim = *(s32 *)(info + 0x30); best = node; } break;
                    case 0x3d: if (*(s16 *)(info + 0xba) <= lim) { lim = *(s16 *)(info + 0xba); best = node; } break;
                    case 0x3f: if (*(s16 *)(info + 0xba) >= lim) { lim = *(s16 *)(info + 0xba); best = node; } break;
                    default: break;
                    }
                }
                node = *(u8 **)(node + 0x16c);
            }
            if (best == NULL) break;
            *(u8 **)(*holder + 0x3c) = best;
            return (s32)best;
        }
        case 0x40: {
            u8 *p = *(u8 **)(self + 0x12c);
            u8 *obj = *(u8 **)(p + 0x14);
            if (obj == NULL) break;
            if (*(u8 *)(*(u8 **)(obj + 0x118)) == 0) {
                *(u8 **)(*holder + 0x3c) = obj;
            } else if (*(u8 *)(*(u8 **)(obj + 0x118)) == 1) {
                *(u8 **)(*holder + 0x38) = obj;
            }
            return (s32)*(u8 **)(p + 0x14);
        }
        case 0x41:
            return (s32)self;
        case 0x42:
            node = *(u8 **)(data_02160a6c + 0xb8);
            if (node == NULL) break;
            do {
                u8 *info = *(u8 **)(node + 0x118);
                if (*(u32 *)(info + 0x70) != 0 && self != node) {
                    s32 pct = func_0201fb1c(*(s32 *)(info + 4) * 100, *(s32 *)(info + 8));
                    if (v1 <= pct && pct <= v2) {
                        return (s32)node;
                    }
                }
                node = *(u8 **)(node + 0x174);
            } while (node != NULL);
            break;
        case 0x43: {
            u8 *best = NULL;
            s32 lim = 999999;
            node = *(u8 **)(data_02160a6c + 0xb8);
            while (node != NULL) {
                u8 *info = *(u8 **)(node + 0x118);
                if (*(u32 *)(info + 0x70) != zero && self != node) {
                    s32 val = *(s32 *)(info + 4);
                    if (lim >= val) { lim = val; best = node; }
                }
                node = *(u8 **)(node + 0x174);
            }
            return (s32)best;
        }
        case 0x44: {
            u8 *best = NULL;
            s32 lim = zero;
            node = *(u8 **)(data_02160a6c + 0xb8);
            while (node != NULL) {
                u8 *info = *(u8 **)(node + 0x118);
                if (*(u32 *)(info + 0x70) != zero && self != node) {
                    s32 val = *(s32 *)(info + 4);
                    if (lim <= val) { lim = val; best = node; }
                }
                node = *(u8 **)(node + 0x174);
            }
            return (s32)best;
        }
        case 0x45: {
            u8 *best = NULL;
            s32 lim = 999;
            node = *(u8 **)(data_02160a6c + 0xac);
            while (node != NULL) {
                u8 *info = *(u8 **)(node + 0x118);
                if (*(u32 *)(info + 0x70) != zero) {
                    s32 val = *(s16 *)(info + 0x5a);
                    if (lim <= val) { lim = val; best = node; }
                }
                node = *(u8 **)(node + 0x16c);
            }
            return (s32)best;
        }
        case 0x46: {
            u8 *best = NULL;
            s32 lim = zero;
            node = *(u8 **)(data_02160a6c + 0xac);
            while (node != NULL) {
                u8 *info = *(u8 **)(node + 0x118);
                if (*(u32 *)(info + 0x70) != zero) {
                    s32 val = *(s16 *)(info + 0x5a);
                    if (lim <= val) { lim = val; best = node; }
                }
                node = *(u8 **)(node + 0x16c);
            }
            return (s32)best;
        }
        }
    }
    return 0;
}
