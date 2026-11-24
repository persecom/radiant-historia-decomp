/* 7 functions from 0x0202CD5C to 0x0202DD04 (main), found by ds-decomp. */
#include "common.h"

extern s8 func_0202c658(void *);
extern s32 func_0202c820(u8);
extern s32 func_0202c898(u8, s32, void *);
extern s32 func_02030808(u8);
extern s32 func_0202c850(u8);
extern void func_0202c328(void *, u8);
s32 func_0202cd5c(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *p54 = *(u8 **)(*(u8 **)(arg0 + 0x128) + 0x54);
    s32 origPos = func_0202c658(arg0);
    s8 pos = origPos;
    u32 input = *(u32 *)(arg1 + 8);
    u32 dir = 0;
    s16 count;

    if (input & 0x4) {
        dir |= 0x2;
    } else if (input & 0x8) {
        dir |= 0x1;
    } else if (input & 0x10) {
        dir |= 0x4;
    } else if (input & 0x20) {
        dir |= 0x8;
    } else if (input & 0x40) {
        switch (origPos) {
            case 0: dir |= 0x6; break;
            case 1: dir |= 0x2; break;
            case 2: dir |= 0xa; break;
            case 3: dir |= 0x4; break;
            case 4: break;
            case 5: dir |= 0x8; break;
            case 6: dir |= 0x5; break;
            case 7: dir |= 0x1; break;
            case 8: dir |= 0x9; break;
        }
    }
    if (input & 0x80) {
        dir |= 0x80;
    }
    if (dir == 0) {
        return 0;
    }

    count = 1;
    do {
        s8 prevPos = pos;
        count--;
        switch ((s8)p54[1]) {
            case 0:
                if (dir & 0x2) {
                    if (pos <= 5) pos += 3;
                }
                if (dir & 0x1) {
                    if (pos >= 3) pos -= 3;
                }
                if (dir & 0x4) {
                    if (pos % 3 <= 1) pos += 1;
                }
                if (dir & 0x8) {
                    if (pos % 3 >= 1) pos -= 1;
                }
                break;
            case 1:
                if (dir & 0x2) {
                    if (pos <= 4) pos += 3;
                }
                if (dir & 0x1) {
                    if (pos >= 3) pos -= 3;
                }
                if (dir & 0x4) {
                    if (pos % 3 == 0) pos += 1;
                }
                if (dir & 0x8) {
                    if (pos % 3 == 1) pos -= 1;
                }
                break;
            case 2:
                if (dir & 0x2) {
                    if (pos <= 5) pos += 3;
                }
                if (dir & 0x1) {
                    if (pos >= 6) pos -= 3;
                }
                if (dir & 0x4) {
                    if (pos % 3 <= 1) pos += 1;
                }
                if (dir & 0x8) {
                    if (pos % 3 >= 1) pos -= 1;
                }
                break;
            case 3:
                if (dir & 0x2) {
                    if (pos <= 4) pos += 3;
                }
                if (dir & 0x1) {
                    if (pos >= 6) pos -= 3;
                }
                if (dir & 0x4) {
                    if (pos % 3 == 0) pos += 1;
                }
                if (dir & 0x8) {
                    if (pos % 3 == 1) pos -= 1;
                }
                break;
            case 4:
                break;
        }
        if (*(u32 *)(arg1 + 8) & 0x40) {
            pos = 4;
        }
        if (prevPos == pos) {
            break;
        }
        if (dir & 0x80) {
            if (func_0202c898((u8)pos, arg2, arg0) != 0) {
                break;
            }
        } else {
            if (func_0202c820((u8)pos) != 0) {
                break;
            }
        }
        if (func_02030808((u8)pos) != 0) {
            break;
        }
        if (func_0202c850((u8)pos) != 0) {
            break;
        }
        {
            u8 found = 0;
            switch ((s8)p54[1]) {
                case 1:
                    if (dir & 0x80) {
                        if (func_0202c898((u8)(pos + 1), arg2, arg0) != 0) found++;
                    } else {
                        if (func_0202c820((u8)(pos + 1)) != 0) found++;
                    }
                    if (func_02030808((u8)(pos + 1)) != 0) found++;
                    break;
                case 2:
                    if (dir & 0x80) {
                        if (func_0202c898((u8)(pos - 3), arg2, arg0) != 0) found++;
                    } else {
                        if (func_0202c820((u8)(pos - 3)) != 0) found++;
                    }
                    if (func_02030808((u8)(pos - 3)) != 0) found++;
                    break;
                case 3:
                    if (dir & 0x80) {
                        if (func_0202c898((u8)(pos + 1), arg2, arg0) != 0) found++;
                    } else {
                        if (func_0202c820((u8)(pos + 1)) != 0) found++;
                    }
                    if (func_02030808((u8)(pos + 1)) != 0) found++;
                    if (dir & 0x80) {
                        if (func_0202c898((u8)(pos - 3), arg2, arg0) != 0) found++;
                    } else {
                        if (func_0202c820((u8)(pos - 3)) != 0) found++;
                    }
                    if (func_02030808((u8)(pos - 3)) != 0) found++;
                    if (dir & 0x80) {
                        if (func_0202c898((u8)(pos - 2), arg2, arg0) != 0) found++;
                    } else {
                        if (func_0202c820((u8)(pos - 2)) != 0) found++;
                    }
                    if (func_02030808((u8)(pos - 2)) != 0) found++;
                    break;
            }
            if (found != 0) {
                break;
            }
        }
    } while (count >= 0);

    if (dir & 0x2) {
        if (origPos != pos) {
            func_0202c328(arg0, (u8)pos);
            return 1;
        }
    } else if (dir & 0x1) {
        func_0202c328(arg0, (u8)pos);
        return 1;
    } else if (dir & 0x4) {
        if (origPos != pos) {
            func_0202c328(arg0, (u8)pos);
            return 1;
        }
    } else if (dir & 0x8) {
        if (origPos != pos) {
            func_0202c328(arg0, (u8)pos);
            return 1;
        }
    }
    return 0;
}
