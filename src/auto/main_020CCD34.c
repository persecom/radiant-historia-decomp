/* 7 functions from 0x020CCD34 to 0x020CDCE8 (main), found by ds-decomp. */
#include "common.h"
typedef struct Table_ccd34 { u16 v[4]; } Table_ccd34;
extern const Table_ccd34 data_02144660, data_02144658;
void func_020c738c(void *, s32, s32);
void func_020ce170(u8, u8, s32);

extern u8 *data_02160238;

void *func_020cda08(u32, u16);
void *func_020cdc8c(u16, u32);
void func_020ccd34(s32 flag) {
Table_ccd34 a=data_02144660,b=data_02144658;
u8 *mgr=data_02160238; u16 i,j,k,jj; s32 end,end2;
if(flag) {
for(i=0;i<3;i++) {
for(j=a.v[i];j<a.v[i]+11;j++) ((u8 *)func_020cda08(2,j))[2]=0;
for(j=b.v[i];j<b.v[i]+5;j++) { u8 *p=func_020cdc8c(j,2); if(p) p[2]=0; }
func_020c738c(*(void **)(data_02160238+0x6f0+i*4),1,1);
}
for(i=0;i<3;i++) *(s32 *)(mgr+0x5b8+i*100)=0;
for(j=a.v[3];j<a.v[3]+11;j++) ((u8 *)func_020cda08(2,j))[2]=1;
for(j=b.v[3];j<b.v[3]+5;j++) { u8 *p=func_020cdc8c(j,2); if(p) p[2]=1; }
*(s32 *)(mgr+0x6e4)=1;
func_020ce170(3,mgr[0x708],1);
} else {
for(i=0;i<3;i++) {
for(jj=a.v[i];jj<a.v[i]+11;jj++) {
((u8 *)func_020cda08(2,jj))[2]=1;
for(k=b.v[i];k<b.v[i]+5;k++) { u8 *p=func_020cdc8c(k,2); if(p) p[2]=1; }
}
*(s32 *)(mgr+0x5b8+i*100)=1;
func_020ce170((u8)i,(u8)i,mgr[0x708]==i);
}
func_020c738c(*(void **)(data_02160238+0x6fc),1,1);
for(j=a.v[3];j<a.v[3]+11;j++) ((u8 *)func_020cda08(2,j))[2]=0;
for(j=b.v[3];j<b.v[3]+5;j++) { u8 *p=func_020cdc8c(j,2); if(p) p[2]=0; }
*(s32 *)(mgr+0x6e4)=0;
}
}

void func_020cd0ac(void) {
}

extern u8 *data_02160204;
extern u8 *func_02116984(void *, s32);
extern void func_021099f8(void *);
extern void func_020a3bbc(u8);
extern void func_020a49a4(u8, s16, s16, s16, s16, s16, s16, s16, s16);
extern void func_021098ac(void *);
extern void func_0209250c(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_020cda64(int, int, int, int, u8, void *, u8, int, int);
extern void func_020a8810(void *, s32);
extern void func_020cdce8(u32, s16, s16, s16, s8, u16, u8, u8);
void func_020cd0b0(void) {
    s16 buf2[10];
    if (data_02160204[0x14c] >= 1) {
        u8 *node = func_02116984(data_02160238 + 0x74c, 1);
        if (node[2] != 0 && node[0x26] != 0) {
            *(volatile u32 *)0x40004a4 = (node[0x26] << 16) | 0xc0;
            if (node[0x27] != 0) {
                *(volatile u32 *)0x4000480 = *(u16 *)(node + 0x28);
            }
            if (node[0x2b] != 0) {
                s16 buf1[7];
                buf1[0] = 0;
                buf1[1] = *(s16 *)(node + 0xc);
                buf1[2] = *(s16 *)(node + 0xe);
                buf1[3] = *(s16 *)(node + 0x24) - 1;
                buf1[4] = *(s16 *)(node + 0x10);
                buf1[5] = *(s16 *)(node + 0x12);
                buf1[6] = *(u16 *)(node + 0x28);
                *(volatile u32 *)0x40004a8 = 0x60030000;
                func_021099f8(buf1);
            }
            func_020a3bbc(node[3]);
            if (node[0x2a] == 1) {
                func_020a49a4(
                    (u8)*(s16 *)(node + 0x24),
                    *(s16 *)(node + 4),
                    *(s16 *)(node + 6),
                    *(s16 *)(node + 8),
                    *(s16 *)(node + 0xa),
                    (s16)(*(s16 *)(node + 0xc) + (*(s32 *)(node + 0x14) >> 12)),
                    (s16)(*(s16 *)(node + 0xe) + (*(s32 *)(node + 0x18) >> 12)),
                    (s16)(*(s16 *)(node + 0x10) + (*(s32 *)(node + 0x1c) >> 12)),
                    (s16)(*(s16 *)(node + 0x12) + (*(s32 *)(node + 0x20) >> 12))
                );
            } else {
                buf2[0] = 1;
                buf2[1] = *(s16 *)(node + 4);
                buf2[2] = *(s16 *)(node + 6);
                buf2[3] = *(s16 *)(node + 8);
                buf2[4] = *(s16 *)(node + 0xa);
                buf2[5] = *(s16 *)(node + 0xc) + (*(s32 *)(node + 0x14) >> 12);
                buf2[6] = *(s16 *)(node + 0xe) + (*(s32 *)(node + 0x18) >> 12);
                buf2[7] = *(s16 *)(node + 0x24);
                buf2[8] = *(s16 *)(node + 0x10) + (*(s32 *)(node + 0x1c) >> 12);
                buf2[9] = *(s16 *)(node + 0x12) + (*(s32 *)(node + 0x20) >> 12);
                func_021098ac(buf2);
            }
        }
        func_0209250c(0x26, 1, 0x20, 0x30, 0xc2, 0x38, 8, 0x10, 2, 2, 2, 2, 0x66);
        if (data_02160204[0x14c] & 1) {
            func_020cda64(0, 0x28000, 0x38000, 0x67, 0, (void *)0xe, 0, 0, 0);
            *(s32 *)(*(u8 **)(data_02160238 + 0x60) + 0x40) = 1;
            func_020a8810(*(void **)(data_02160238 + 0x60), 0x16);

            func_020cda64(1, 0x63000, 0x38000, 0x67, 0, (void *)0xf, 0, 0, 0);
            *(s32 *)(*(u8 **)(data_02160238 + 0xb0) + 0x40) = 1;
            func_020a8810(*(void **)(data_02160238 + 0xb0), 0x16);

            func_020cda64(2, 0x28000, 0x46000, 0x67, 0, (void *)0x11, 0, 0, 0);
            *(s32 *)(*(u8 **)(data_02160238 + 0x100) + 0x40) = 1;
            func_020a8810(*(void **)(data_02160238 + 0x100), 0x16);

            func_020cda64(3, 0x28000, 0x54000, 0x67, 0, (void *)0x12, 0, 0, 0);
            *(s32 *)(*(u8 **)(data_02160238 + 0x150) + 0x40) = 1;
            func_020a8810(*(void **)(data_02160238 + 0x150), 0x16);
        } else if (data_02160204[0x14c] & 0x10) {
            func_020cda64(0, 0x28000, 0x38000, 0x67, 0, (void *)0xe, 0, 0, 0);
            *(s32 *)(*(u8 **)(data_02160238 + 0x60) + 0x40) = 1;
            func_020a8810(*(void **)(data_02160238 + 0x60), 0x16);

            func_020cda64(1, 0x63000, 0x38000, 0x67, 0, (void *)0x10, 0, 0, 0);
            *(s32 *)(*(u8 **)(data_02160238 + 0xb0) + 0x40) = 1;
            func_020a8810(*(void **)(data_02160238 + 0xb0), 0x16);

            func_020cda64(2, 0x28000, 0x46000, 0x67, 0, (void *)0x11, 0, 0, 0);
            *(s32 *)(*(u8 **)(data_02160238 + 0x100) + 0x40) = 1;
            func_020a8810(*(void **)(data_02160238 + 0x100), 0x16);

            func_020cda64(3, 0x28000, 0x54000, 0x67, 0, (void *)0x12, 0, 0, 0);
            *(s32 *)(*(u8 **)(data_02160238 + 0x150) + 0x40) = 1;
            func_020a8810(*(void **)(data_02160238 + 0x150), 0x16);
        } else if (data_02160204[0x14c] & 2) {
            func_020cda64(3, 0x28000, 0x38000, 0x67, 0, (void *)0x13, 0, 0, 0);
            *(s32 *)(*(u8 **)(data_02160238 + 0x150) + 0x40) = 1;
            func_020a8810(*(void **)(data_02160238 + 0x150), 0x16);

            func_020cda64(0, 0x28000, 0x46000, 0x67, 0, (void *)0x14, 0, 0, 0);
            *(s32 *)(*(u8 **)(data_02160238 + 0x60) + 0x40) = 1;
            func_020a8810(*(void **)(data_02160238 + 0x60), 0x16);

            func_020cda64(1, 0x74000, 0x46000, 0x67, 0, (void *)0x15, 0, 0, 0);
            *(s32 *)(*(u8 **)(data_02160238 + 0xb0) + 0x40) = 1;
            func_020a8810(*(void **)(data_02160238 + 0xb0), 0x16);

            func_020cda64(2, 0x28000, 0x54000, 0x67, 0, (void *)0x16, 0, 0, 0);
            *(s32 *)(*(u8 **)(data_02160238 + 0x100) + 0x40) = 1;
            func_020a8810(*(void **)(data_02160238 + 0x100), 0x16);
        } else if (data_02160204[0x14c] & 4) {
            func_020cda64(3, 0x28000, 0x38000, 0x67, 0, (void *)0x13, 0, 0, 0);
            *(s32 *)(*(u8 **)(data_02160238 + 0x150) + 0x40) = 1;
            func_020a8810(*(void **)(data_02160238 + 0x150), 0x16);

            func_020cda64(0, 0x28000, 0x46000, 0x67, 0, (void *)0x17, 0, 0, 0);
            *(s32 *)(*(u8 **)(data_02160238 + 0x60) + 0x40) = 1;
            func_020a8810(*(void **)(data_02160238 + 0x60), 0x16);

            func_020cda64(1, 0x69000, 0x46000, 0x67, 0, (void *)0x18, 0, 0, 0);
            *(s32 *)(*(u8 **)(data_02160238 + 0xb0) + 0x40) = 1;
            func_020a8810(*(void **)(data_02160238 + 0xb0), 0x16);
        }
    } else {
        u8 i;
        u8 *node = *(u8 **)(data_02160238 + 0x74c);
        while (node != NULL) {
            if (node[2] != 0 && node[0x26] != 0) {
                *(volatile u32 *)0x40004a4 = (node[0x26] << 16) | 0xc0;
                if (node[0x27] != 0) {
                    *(volatile u32 *)0x4000480 = *(u16 *)(node + 0x28);
                }
                if (node[0x2b] != 0) {
                    s16 buf1[7];
                    buf1[0] = 0;
                    buf1[1] = *(s16 *)(node + 0xc);
                    buf1[2] = *(s16 *)(node + 0xe);
                    buf1[3] = *(s16 *)(node + 0x24) - 1;
                    buf1[4] = *(s16 *)(node + 0x10);
                    buf1[5] = *(s16 *)(node + 0x12);
                    buf1[6] = *(u16 *)(node + 0x28);
                    *(volatile u32 *)0x40004a8 = 0x60030000;
                    func_021099f8(buf1);
                }
                func_020a3bbc(node[3]);
                if (node[0x2a] == 1) {
                    func_020a49a4(
                        (u8)*(s16 *)(node + 0x24),
                        *(s16 *)(node + 4),
                        *(s16 *)(node + 6),
                        *(s16 *)(node + 8),
                        *(s16 *)(node + 0xa),
                        (s16)(*(s16 *)(node + 0xc) + (*(s32 *)(node + 0x14) >> 12)),
                        (s16)(*(s16 *)(node + 0xe) + (*(s32 *)(node + 0x18) >> 12)),
                        (s16)(*(s16 *)(node + 0x10) + (*(s32 *)(node + 0x1c) >> 12)),
                        (s16)(*(s16 *)(node + 0x12) + (*(s32 *)(node + 0x20) >> 12))
                    );
                } else {
                    buf2[0] = 1;
                    buf2[1] = *(s16 *)(node + 4);
                    buf2[2] = *(s16 *)(node + 6);
                    buf2[3] = *(s16 *)(node + 8);
                    buf2[4] = *(s16 *)(node + 0xa);
                    buf2[5] = *(s16 *)(node + 0xc) + (*(s32 *)(node + 0x14) >> 12);
                    buf2[6] = *(s16 *)(node + 0xe) + (*(s32 *)(node + 0x18) >> 12);
                    buf2[7] = *(s16 *)(node + 0x24);
                    buf2[8] = *(s16 *)(node + 0x10) + (*(s32 *)(node + 0x1c) >> 12);
                    buf2[9] = *(s16 *)(node + 0x12) + (*(s32 *)(node + 0x20) >> 12);
                    func_021098ac(buf2);
                }
            }
            node = *(u8 **)(node + 0x30);
        }
        for (i = 0; i < 4; i++) {
            u8 *p = *(u8 **)(data_02160238 + 0x6f0 + i * 4);
            ((void (*)(u8 *))(*(void **)(p + 8)))(p);
        }
        node = *(u8 **)(data_02160238 + 0x764);
        while (node != NULL) {
            if (node[2] != 0 && node[3] != 0) {
                *(volatile u32 *)0x40004a4 = (node[3] << 16) | 0xc0;
                func_020cdce8(
                    *(u32 *)(node + 4),
                    (s16)(*(s16 *)(node + 8) + (*(s32 *)(node + 0x10) >> 12)),
                    (s16)(*(s16 *)(node + 0xa) + (*(s32 *)(node + 0x14) >> 12)),
                    (s16)(*(s16 *)(node + 0xc) + (*(s32 *)(node + 0x18) >> 12)),
                    *(s8 *)(node + 0xe),
                    *(u16 *)(node + 0x1c),
                    node[0x1e],
                    node[0x1f]
                );
            }
            node = *(u8 **)(node + 0x24);
        }
    }
}

void *func_020cda08(u32 mode, u16 arg1) {
    u8 *node;
    if (mode == 1) {
        node = *(u8 **)(data_02160238 + 0x740);
    } else if (mode == 2) {
        node = *(u8 **)(data_02160238 + 0x74c);
    } else {
        return NULL;
    }
    while (node != NULL) {
        if (*(u16 *)node == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x30);
    }
    return NULL;
}

extern void func_020a994c(void *);
extern void func_020a98ac(void *);
extern void func_020a98f4(void *);
extern void func_0203bc34(void *, void *, void *, int, int, int);
extern void func_020a9610(void *, void *, void *, void *, int, int);
void func_020cda64(int index, int x, int y, int z, u8 slot, void *arg, u8 mode, int a, int b) {
u32 off = index * 0x50;
func_020a994c(data_02160238 + 0x64 + off);
if (!arg) return;
*(int *)(*(u8 **)(data_02160238 + off + 0x60) + 0x4c) = (z + 101) << 12;
*(int *)(*(u8 **)(data_02160238 + off + 0x60) + 0x44) = x;
*(int *)(*(u8 **)(data_02160238 + off + 0x60) + 0x48) = y;
switch(mode) {
case 2: func_0203bc34(*(void **)(data_02160238+0x40+slot*4), *(void **)(data_02160238+off+0x60),arg,a,b,2); break;
case 1: func_0203bc34(*(void **)(data_02160238+0x40+slot*4), *(void **)(data_02160238+off+0x60),arg,a,b,1); break;
default:
func_020a9610(data_02160238+0x98+off,*(void **)(data_02160238+0x40+slot*4),arg,*(void **)(data_02160238+off+0x60),0,0);
func_020a98ac(data_02160238+0x64+off);
func_020a98f4(data_02160238+0x64+off);
}
}

extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_021167f0(void *, void *);
u8 *func_020cdbc4(u16 arg0, u32 arg1, u16 arg2, u16 arg3, s16 arg4, s8 arg5, u16 arg6, u8 arg7, u8 mode) {
    u8 *node = func_0210c594(0x28, data_02155c3c);
    node[2] = 1;
    *(u16 *)(node + 0) = arg0;
    *(u32 *)(node + 4) = arg1;
    *(u16 *)(node + 8) = arg2;
    *(u16 *)(node + 0xa) = arg3;
    *(s16 *)(node + 0xc) = arg4;
    node[0xe] = arg5;
    *(u16 *)(node + 0x1c) = arg6;
    node[0x1e] = arg7;
    *(u32 *)(node + 0x10) = 0;
    *(u32 *)(node + 0x14) = 0;
    *(u32 *)(node + 0x18) = 0;
    node[3] = 0x1f;
    if (mode == 1) {
        func_021167f0((u8 *)data_02160238 + 0x758, node);
    } else if (mode == 2) {
        func_021167f0((u8 *)data_02160238 + 0x764, node);
    }
    return node;
}

void *func_020cdc8c(u16 arg0, u32 mode) {
    u8 *node = NULL;
    switch (mode) {
    case 1:
        node = *(u8 **)(data_02160238 + 0x758);
        break;
    case 2:
        node = *(u8 **)(data_02160238 + 0x764);
        break;
    }
    while (node != NULL) {
        if (*(u16 *)node == arg0) {
            return node;
        }
        node = *(u8 **)(node + 0x24);
    }
    return NULL;
}

