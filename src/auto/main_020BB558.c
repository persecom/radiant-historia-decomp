/* 6 functions from 0x020BB558 to 0x020BC394 (main), found by ds-decomp. */
#include "common.h"

void func_020bc2c4(u8 *arg0, u8 arg1) {
    u8 i;
    u8 found = 0;
    if (arg1 <= 100) {
        for (i = 0; i < 30; i++) {
            u8 *p = arg0 + i;
            if (arg1 == p[0x4e]) {
                found = 1;
            }
        }
        if (found) return;
        for (i = 0; i < 30; i++) {
            u8 *p = arg0 + i;
            if (p[0x4e] == 0) {
                p[0x4e] = arg1;
                return;
            }
        }
        return;
    }
    if (arg1 >= 101) {
        for (i = 0; i < 15; i++) {
            u8 *p = arg0 + i;
            if (arg1 == p[0x6c]) {
                found = 1;
            }
        }
        if (found) return;
        for (i = 0; i < 15; i++) {
            u8 *p = arg0 + i;
            if (p[0x6c] == 0) {
                p[0x6c] = arg1;
                return;
            }
        }
    }
}
