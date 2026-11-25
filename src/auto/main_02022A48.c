/* 9 functions from 0x02022A48 to 0x0202318C (main), found by ds-decomp. */
#include "common.h"

extern void *data_02155c3c;
extern void *func_0210c594(s32, void *);
extern void func_021167ac(void *, s32);
extern void func_021167f0(void *, void *);
extern void func_021168f8(void *, void *);
extern void func_0210c5dc(void *);

int func_02030630(void *,int);
void func_020305b0(void *,int);
void *func_020ddb90(u16);
void func_020d2f44(void);
void func_020c3020(void *);
void func_020226ec(u8 *,u32);
void func_02022a48(u8 *p,u32 flag) {
u16 i;
u32 flags;
u16 *a0=*(u16 **)(*(u8 **)(p+0x118)+0xa0);
u16 idx;void *res;
int extra=0;
switch(flag){
case 1u:if(a0[1]==83){a0[0]=0;a0[1]=0;}func_020305b0(a0,func_02030630(a0,83));flag=3002;break;
case 2u:if(a0[1]==84){a0[0]=0;a0[1]=0;}func_020305b0(a0,func_02030630(a0,84));flag=3003;break;
case 4u:if(a0[1]==85){a0[0]=0;a0[1]=0;}func_020305b0(a0,func_02030630(a0,85));flag=3004;break;
case 8u:if(a0[1]==86){a0[0]=0;a0[1]=0;}func_020305b0(a0,func_02030630(a0,86));flag=3005;break;
case 16u:if(a0[1]==87){a0[0]=0;a0[1]=0;}func_020305b0(a0,func_02030630(a0,87));flag=3006;break;
case 32u:if(a0[1]==88){a0[0]=0;a0[1]=0;}func_020305b0(a0,func_02030630(a0,88));flag=3007;extra=1;break;
case 128u:case 512u:case 2048u:case 8192u:case 32768u:case 131072u:case 524288u:case 1048576u:case 2097152u:case 8388608u:case 16777216u:case 33554432u:case 536870912u:case 1073741824u:case 2147483648u:if(a0[1]==89){a0[0]=0;a0[1]=0;}func_020305b0(a0,func_02030630(a0,89));flag=3009;break;
case 64u:case 256u:case 1024u:case 4096u:case 16384u:case 65536u:case 262144u:case 4194304u:if(a0[1]==90){a0[0]=0;a0[1]=0;}func_020305b0(a0,func_02030630(a0,90));flag=3010;break;
case 67108864u:if(a0[1]==91){a0[0]=0;a0[1]=0;}func_020305b0(a0,func_02030630(a0,91));flag=3011;break;
case 134217728u:if(a0[1]==92){a0[0]=0;a0[1]=0;}func_020305b0(a0,func_02030630(a0,92));flag=3012;break;
case 268435456u:if(a0[1]==93){a0[0]=0;a0[1]=0;}func_020305b0(a0,func_02030630(a0,93));flag=3013;break;
}
{
int done=0;
if(flag){
u8 type=**(u8 **)(p+0x118);
if(type==0)idx=*(u16 *)(p+0x90)+0x190;
else if(type==1)idx=*(u16 *)(p+0x90)+0x135;
res=func_020ddb90(idx);
if(res){func_020d2f44();func_020c3020(res);done=1;}
}
if(done||extra){flags=*(u32 *)(*(u8 **)(p+0x118)+0x78);i=0;for(;i<32;i++){if(flags&(1<<i)){func_020226ec(p,1<<i);return;}}}
}
}

void *func_02022ee0(void) {
    void *ptr = func_0210c594(0xc, data_02155c3c);
    func_021167ac(ptr, 0x18);
    return ptr;
}

void func_02022f0c(void *arg0, u16 arg1, u16 arg2, u8 arg3) {
    u8 *ptr = func_0210c594(0x20, data_02155c3c);
    *(u16 *)(ptr + 0x0) = arg1;
    *(u16 *)(ptr + 0x2) = arg2;
    *(u8 *)(ptr + 0xe) = arg3;
    *(u16 *)(ptr + 0x6) = 0;
    *(u16 *)(ptr + 0x8) = 0;
    *(u16 *)(ptr + 0xa) = 0;
    func_021167f0(arg0, ptr);
}

void func_02022f60(void **arg0) {
    void *ptr;
    while ((ptr = *arg0) != NULL) {
        func_021168f8(arg0, ptr);
        if (ptr != NULL) {
            func_0210c5dc(ptr);
        }
    }
    if (arg0 != NULL) {
        func_0210c5dc(arg0);
    }
}

extern char data_02145ff0[];
extern void func_02005e80(char *, const char *);
extern void *func_021092d8(char *);
extern s32 func_02092ab0(void *, u16);
extern s32 func_02092994(void *, s32);
extern void func_021093b0(void *);
s32 func_02022fb0(u8 *arg0) {
    char buf[0x20];
    void *r6;
    u16 r10 = *(u16 *)(arg0 + 0);
    u16 r7 = *(u16 *)(arg0 + 2);
    s32 r9;
    u16 r8;

    func_02005e80(buf, data_02145ff0);
    r6 = func_021092d8(buf);
    r9 = 1;
    do {
        r8 = 0;
        if (func_02092ab0(r6, r10) != -1) {
            r8 = (u16)func_02092994(r6, 0);
            if (r7 == r8) {
                r9 = 0;
            }
        } else {
            r9 = 0;
        }
    } while (r9 != 0);

    if (r8 != 0) {
        *(u16 *)(arg0 + 6) = (u16)func_02092994(r6, 0);
        *(u16 *)(arg0 + 8) = (u16)func_02092994(r6, 0);
        *(u16 *)(arg0 + 10) = (u16)func_02092994(r6, 0);
        *(u16 *)(arg0 + 0x10) = (u16)func_02092994(r6, 0);
        *(s32 *)(arg0 + 0x14) = func_02092994(r6, 0);
        if (r6 != NULL) {
            func_021093b0(r6);
        }
        return 1;
    }
    if (r6 != NULL) {
        func_021093b0(r6);
    }
    return 0;
}

extern void func_0202318c(u32, u8 *, u32, u32);
u8 *func_020230c8(u8 **arg0, u16 arg1) {
    u8 *node;
    if (arg0 == NULL) {
        return NULL;
    }
    node = *arg0;
    while (node != NULL) {
        if (*(u16 *)node == arg1) {
            return node;
        }
        node = *(u8 **)(node + 0x1c);
    }
    return NULL;
}

void *func_02023100(void **arg0) {
    return *arg0;
}

u8 *func_02023108(u8 **arg0) {
    u8 i;
    for (i = 0; i < 3; i++) {
        u8 *res = func_020230c8(arg0, (u16)(i + 0xd3));
        if (res != NULL) {
            return res;
        }
    }
    return NULL;
}

void func_02023148(u8 **arg0, u32 arg1, u32 arg2, u32 arg3) {
    u8 *node;
    if (arg0 != NULL) {
        node = *arg0;
        while (node != NULL) {
            func_0202318c(arg3, node, arg1, arg2);
            node = *(u8 **)(node + 0x1c);
        }
    }
}

