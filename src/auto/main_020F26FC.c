/* 2 functions from 0x020F26FC to 0x020F36B0 (main), found by ds-decomp. */
#include "common.h"
typedef struct {void *model,*modelData,*animation,*animationData,*pack,*texture;} Resource_020f2a5c;
typedef struct {u8 flags,pad;u16 index;} Frame_020f2a5c;

extern char data_02151df8[];
extern char data_02151e18[];
extern u32 data_02160c14[3];
extern char data_02151e38[];
extern char data_02151e54[];
extern char data_02151e74[];
extern char data_02151e98[];
extern char data_02151eb4[];
extern char data_02151ed4[];
extern void *data_02155c3c;

extern char data_02151ef8[],data_02151f18[],data_02151f38[],data_02151f48[],data_02151f58[];
extern char data_02151f68[],data_02151f6c[],data_02151f74[],data_02151f7c[],data_02151fa4[];
extern u8 *data_02160a6c;
extern void func_021167f0(void *,void *);
extern void *func_0210a7b4(void);
extern s32 func_0210a7e4(void *,char *,s32);
extern void func_0210c5dc(void *);
extern u8 *func_0210835c(void);
extern void *func_0210abb8(void *,char *,void *);
extern void *func_0210ac2c(void *,char *,void *);
extern s32 func_02109f84(void *);
extern void func_020f36b0(u8 *,s32,s32);
extern void *func_02117630(void *,s32);
extern void func_02119000(void *,void *,void *);
extern void func_02108680(void *,s32,s32);
extern void *func_020eaa24(void *,void *);
#pragma optimization_level 0
extern void func_02005e80(char *, const char *, ...);
extern void *func_021092d8(char *);
extern s32 func_02092ab0(void *, u16);
extern u32 func_0210cd20(void *, s32);
extern s32 func_02108620(void *, char *, char *, char *, s32);
extern void func_021093b0(void *);
extern u8 *func_02109f3c(void *);
extern s32 func_020020bc(u16, s32);
extern s32 func_02002080(u16, s32);
extern u8 *func_0210c594(u32, void *);
extern s32 func_021086d4(void *, u16);
#pragma opt_propagation off
s32 func_020f26fc(Resource_020f2a5c *arg0, u16 arg1, u8 arg2) {
    char buf0[64];
    char buf1[60];
    char buf2[50];
    char buf3[50];
    s32 line;
    Frame_020f2a5c *mem;
    struct { u16 count; u16 n; } sizes;
    void *csv = 0;
    Frame_020f2a5c *cur;
    Resource_020f2a5c *r7;
    s32 idx;
    s32 i;
    s32 j;

    switch (arg2) {
    case 0:
        func_02005e80(buf0, data_02151df8);
        break;
    case 1:
        func_02005e80(buf0, data_02151e18);
        break;
    }

    data_02160c14[0] = 0;
    data_02160c14[1] = 0;
    data_02160c14[2] = 0;

    csv = func_021092d8(buf0);
    if (csv == 0) {
        (void)csv;
    }

    line = func_02092ab0(csv, arg1);
    if (line != -1) {
        data_02160c14[0] = func_0210cd20(csv, 0);
        data_02160c14[1] = func_0210cd20(csv, 0);
        data_02160c14[2] = func_0210cd20(csv, 0);
    }

    if (data_02160c14[0] != 0 && data_02160c14[1] != 0 && data_02160c14[2] != 0) {
        switch (arg2) {
        case 0:
            func_02005e80(buf1, data_02151e38, data_02160c14[0]);
            func_02005e80(buf2, data_02151e54, data_02160c14[1]);
            func_02005e80(buf3, data_02151e74, data_02160c14[2]);
            break;
        case 1:
            func_02005e80(buf1, data_02151e98, data_02160c14[0]);
            func_02005e80(buf2, data_02151eb4, data_02160c14[1]);
            func_02005e80(buf3, data_02151ed4, data_02160c14[2]);
            break;
        }
        if (func_02108620(arg0->model, buf1, buf2, buf3, 0) == 0) {
            return 0;
        }
    }

    if (csv != 0) {
        func_021093b0(csv);
        csv = 0;
    }

    r7 = (Resource_020f2a5c *)func_02109f3c(*(void **)(*(u8 **)((u8 *)arg0->model + 0x58) + 8));
    if (r7->pack == 0) {
        sizes.n = *(u16 *)(*(u8 **)(*(u8 **)((u8 *)arg0->model + 0x58) + 0xc));
        sizes.count = (func_020020bc(sizes.n, 2) ? 1 : 0) + func_02002080(sizes.n, 2);
        mem = (Frame_020f2a5c *)func_0210c594(sizes.count * 4, data_02155c3c);
        cur = mem;
        for (i = 0; i < sizes.count; i++, cur++) {
            idx = i * 2;
            cur->index = idx;
            cur->flags = 0;
            for (j = 0; j < 2; idx++, j++) {
                if (sizes.n <= idx) {
                    break;
                }
                if ((func_021086d4(arg0->model, idx) == 0) == 0) {
                    cur->flags |= (u8)(1 << j);
                }
            }
        }
        r7->pack = mem;
    }

    arg0->pack = r7->pack;
    return 1;
}
#pragma opt_propagation on
