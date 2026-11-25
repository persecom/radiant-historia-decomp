/* 6 functions from 0x02035C3C to 0x02036514 (main), found by ds-decomp. */
#include "common.h"
extern u8 *data_02160a6c;

extern u8 *func_020ddc08(s32);
void func_02036298(s32 arg0, u8 arg1, s32 arg2);
void func_020362c0(s32 arg0, u8 arg1, u16 arg2, s32 arg3);
void func_020362e8(s32 arg0, s32 arg1);
void func_02035c3c(u8 *p, s32 mode) {
    switch (mode) {
    case 0:
        if (*(u16 *)(p + 0x8e) < 0x320) return;
        *(s32 *)(p + 0x64) = 200;
        switch (*(u16 *)(p + 0x8e)) {
        case 0x321:
            func_02036298(0x322, 10, 0x104);
            func_02036298(0x323, 10, 0x12c);
            break;
        case 0x32b:
            func_02036298(0x32d, 10, 0x104);
            break;
        case 0x335:
            func_02036298(0x337, 10, 0x104);
            break;
        case 0x33f:
            func_02036298(0x340, 10, 0x104);
            func_02036298(0x341, 10, 0x12c);
            break;
        case 0x349:
            func_02036298(0x34b, 10, 0x104);
            break;
        case 0x353: {
            s32 id = 0x354;
            *(s32 *)(p + 0x64) = 100;
            func_02036298(id, 100, 0);
            func_02036298(id + 1, 100, 0);
            break;
        }
        case 0x35d:
            func_02036298(0x35f, 10, 0x104);
            break;
        }
        break;
    case 1:
        if (*(u16 *)(p + 0x8e) < 0x320) return;
        *(s32 *)(p + 0x64) = 100;
        *(u16 *)(p + 0x190) = 0;
        switch (*(u16 *)(p + 0x8e)) {
        case 0x321:
            func_02036298(0x322, 0, 0x104);
            func_02036298(0x323, 0, 0x140);
            break;
        case 0x32b:
            func_02036298(0x32d, 0, 0x12c);
            break;
        case 0x335:
            func_02036298(0x337, 0, 0x12c);
            break;
        case 0x33f:
            func_02036298(0x340, 0, 200);
            func_02036298(0x341, 0, 0x12c);
            break;
        case 0x349:
            func_02036298(0x34b, 0, 200);
            break;
        case 0x353: {
            s32 id = 0x354;
            *(s32 *)(p + 0x64) = 200;
            func_02036298(id, 100, 0);
            func_02036298(id + 1, 100, 0);
            func_020362e8(id - 1, 0);
            func_020362e8(id, 0);
            func_020362e8(id + 1, 0);
            break;
        }
        case 0x35d:
            func_02036298(0x35f, 0, 0x12c);
            break;
        }
        break;
    case 2:
        if (*(u16 *)(p + 0x8e) < 0x320) return;
        p[0x192] = 100;
        *(u16 *)(p + 0x190) = 0x97;
        *(s32 *)(p + 0x64) = 0;
        switch (*(u16 *)(p + 0x8e)) {
        case 0x321:
            func_020362c0(0x322, 100, 0xbe, 0);
            func_020362c0(0x323, 100, 0xfa, 0);
            break;
        case 0x32b:
            func_020362c0(0x32d, 100, 0x12c, 0);
            break;
        case 0x335:
            func_020362c0(0x337, 100, 0x12c, 0);
            break;
        case 0x33f:
            func_020362c0(0x340, 100, 0xbe, 0);
            func_020362c0(0x341, 100, 0xfa, 0);
            break;
        case 0x349:
            func_020362c0(0x34b, 100, 200, 0);
            break;
        case 0x353: {
            s32 id = 0x354;
            func_020362e8(id - 1, 1);
            func_020362e8(id, 1);
            func_020362e8(id + 1, 1);
            func_020362c0(id - 1, 100, 200, 0);
            func_020362c0(id, 100, 200, 0);
            func_020362c0(id + 1, 100, 200, 0);
            break;
        }
        case 0x35d:
            func_020362c0(0x35f, 100, 0x12c, 0);
            break;
        }
        break;
    case 3:
        if (*(u16 *)(p + 0x8e) < 0x320) return;
        switch (*(u16 *)(p + 0x8e)) {
        case 0x321:
            p[0x192] = 100;
            *(s32 *)(p + 0x64) = 0;
            *(u16 *)(p + 0x190) = 0xd3;
            func_02036298(0x322, 0xe6, 0);
            func_02036298(0x323, 0x18, 0);
            break;
        case 0x32b:
            p[0x192] = 100;
            *(s32 *)(p + 0x64) = 0;
            *(u16 *)(p + 0x190) = 0xd3;
            func_02036298(0x32d, 0x18, 0);
            break;
        case 0x335:
            p[0x192] = 100;
            *(s32 *)(p + 0x64) = 0;
            *(u16 *)(p + 0x190) = 0xd3;
            func_02036298(0x337, 0x18, 0);
            break;
        case 0x33f:
            p[0x192] = 100;
            *(s32 *)(p + 0x64) = 0;
            *(u16 *)(p + 0x190) = 0xd3;
            func_02036298(0x340, 0xe6, 0);
            func_02036298(0x341, 0x18, 0);
            break;
        case 0x349:
            p[0x192] = 100;
            *(s32 *)(p + 0x64) = 0;
            *(u16 *)(p + 0x190) = 0xd3;
            func_02036298(0x34b, 0x18, 0);
            break;
        case 0x353: {
            s32 id = 0x354;
            *(s32 *)(p + 0x64) = 100;
            func_02036298(id, 100, 0);
            func_02036298(id + 1, 100, 0);
            break;
        }
        case 0x35d:
            p[0x192] = 100;
            *(s32 *)(p + 0x64) = 0;
            *(u16 *)(p + 0x190) = 0xd3;
            func_02036298(0x35f, 0x18, 0);
            break;
        }
        break;
    }
}

void func_02036298(s32 arg0, u8 arg1, s32 arg2) {
    u8 *p = func_020ddc08(arg0);
    p[0x192] = arg1;
    *(s32 *)(p + 0x64) = arg2;
    *(u16 *)(p + 0x190) = 0;
}

void func_020362c0(s32 arg0, u8 arg1, u16 arg2, s32 arg3) {
    u8 *p = func_020ddc08(arg0);
    p[0x192] = arg1;
    *(u16 *)(p + 0x190) = arg2;
    *(s32 *)(p + 0x64) = arg3;
}

void func_020362e8(s32 arg0, s32 arg1) {
    u8 *p = func_020ddc08(arg0);
    *(s32 *)(p + 0xf8) = arg1;
}

void func_020362fc(s32 arg0, s32 arg1) {
    u8 *p = func_020ddc08(arg0);
    if (arg1 != 0) {
        *(u32 *)(p + 0x80) |= 2;
        p[0xa1] |= 0x08;
        p[0xa1] |= 0x20;
        return;
    }
    *(u32 *)(p + 0x80) &= ~2;
    p[0xa1] &= 0xf7;
    p[0xa1] &= 0xdf;
}

void func_02036348(s32 arg) {
u8 *node;
u8 *found=NULL;
node=*(u8 **)(data_02160a6c+0xb8);
while(node) {
switch(*(u16 *)(node+0x8e)) {
case 0x321: case 0x32b: case 0x335: case 0x33f: case 0x349: case 0x35d:
found=node; break;
}
node=*(u8 **)(node+0x174);
}
if(!found) return;
switch(*(u16 *)(found+0x8e)) {
case 0x321:
func_020362fc(0x321,arg); func_020362fc(0x322,arg); func_020362fc(0x323,arg); break;
case 0x32b:
func_020362fc(0x32b,arg); func_020362fc(0x32d,arg); break;
case 0x335:
func_020362fc(0x335,arg); func_020362fc(0x337,arg); break;
case 0x33f:
func_020362fc(0x33f,arg); func_020362fc(0x340,arg); func_020362fc(0x341,arg); break;
case 0x349:
func_020362fc(0x349,arg); func_020362fc(0x34b,arg); break;
case 0x35d:
func_020362fc(0x35d,arg); func_020362fc(0x35f,arg); break;
}
}

