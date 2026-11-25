/* 15 functions from 0x02177AA0 to 0x02178598 (ov000), found by ds-decomp. */
#include "common.h"

extern s32 func_ov000_021781fc(void *, void *, u32, u32);

typedef struct {
    u32 field_0;
    u32 field_4;
    u32 field_8;
    u8 s[0x100];
} Rc4State;


extern s32 func_02005df8(void);
extern void func_0200f9b0(u32);
extern u32 func_ov000_02177ad0(void *, u32);
extern void func_02010c40(s32, u32, void *, u32, s32, s32, s32);
extern void func_0200fa20(u32);
extern void func_02005e50(u32);
#pragma push
#pragma opt_propagation off
#pragma opt_loop_invariants off
u32 func_ov000_02177b0c(void) {
    u32 buf[0x80];
    u32 hash[7];
    u8 saved_cmd[8];
 u8 *saved;
    u32 lock_id;
    u32 addr = 0x1000;
    s32 i, j;
    u8 *dst;
    u32 res;

    lock_id = (u16)func_02005df8();
    func_0200f9b0(lock_id);

    dst = (u8 *)buf;
    i=0;
 do {
        u32 c1 = 1;
        u32 c5 = 5;
        volatile u8 *io = (volatile u8 *)(c1 << 26);
        u16 exmem = *(volatile u16 *)0x04000204;
        u32 hdr_addr;
        u8 bank;
        u32 ctrl;
        s32 pos;
        u32 cur_addr;


        *(volatile u16 *)0x04000204 &= ~0x800;
        pos = -(s32)(addr & (0x204 - c5));
        bank = *(volatile u8 *)(io + 0x4000);
        hdr_addr = ((((bank & 1) + 5) << 18) - 13) << 5;
        ctrl = (*(volatile u32 *)hdr_addr & ~0x07000000) | 0xa1000000;
        while (*(volatile u32 *)(io + 0x1a4) & 0x80000000) {}
        *(volatile u8 *)(io + 0x1a1) = 0x80;
        saved=saved_cmd;
 j=0;
 do {
            *saved++ = ((volatile u8 *)0x040001a8)[j];
        } while (++j < 8);
        cur_addr = addr + pos;
        while (pos < 0x200) {
 u8 command = 0xb7;
 volatile u8 *cmd=(volatile u8 *)0x04000000;
            cmd[0x1a8] = command;
            cmd[0x1a9] = (u8)(cur_addr >> 24);
            cmd[0x1aa] = (u8)(cur_addr >> 16);
            cmd[0x1ab] = (u8)(cur_addr >> 8);
            cmd[0x1ac] = (u8)cur_addr;
            cmd[0x1ad] = 0;
            cmd[0x1ae] = 0;
            cmd[0x1af] = 0;
            *(volatile u32 *)(io + 0x1a4) = ctrl;
            do {
                if (*(volatile u32 *)(io + 0x1a4) & 0x00800000) {
                    u32 word = *(volatile u32 *)(io + 0x100010);
                    if (pos >= 0 && pos < 0x200) {
                        *(u32 *)(dst + pos) = word;
                    }
                    pos += 4;
                }
            } while (*(volatile u32 *)(io + 0x1a4) & 0x80000000);
            cur_addr += 0x200;
        }
        saved=saved_cmd;
 j=0;
 do {
            ((volatile u8 *)0x040001a8)[j] = *saved++;
        } while (++j < 8);
        *(volatile u16 *)(io + 0x204) = exmem;
        hash[0 + i] = func_ov000_02177ad0(buf, 0x200);
        func_02010c40(-1, addr + 0x7000, buf, 0x200, 0, 0, 0);
        hash[3 + i] = func_ov000_02177ad0(buf, 0x200);
        addr += 0x200;
    } while (++i < 3);

    func_0200fa20(lock_id);
    func_02005e50(lock_id);

    j=0;
 do {
        if (hash[3 + 0] != hash[0 + j]) {
            res = 0xfb;
            goto clear;
        }
    } while (++j < 3);
    if (hash[3 + 0] == hash[3 + 1] && hash[3 + 0] == hash[3 + 2]) {
        res = 0xfb;
    } else {
        res = 0xf1;
    }

clear:
    j=0;
 do {
        buf[j] = j;
    } while (++j < 0x80);
    return res * 0xb3;
}
#pragma push
#pragma opt_propagation off
#pragma opt_loop_invariants off
u32 func_ov000_02177d4c(void) {
    u32 buf[0x80];
    u32 hash[7];
    u8 saved_cmd[8];
    u8 *saved;
    u32 lock_id;
    u32 addr = 0x1000;
    s32 i, j;
    u8 *dst;
    u32 res;

    lock_id = (u16)func_02005df8();
    func_0200f9b0(lock_id);

    dst = (u8 *)buf;
    i = 0;
    do {
        u32 c1 = 1;
        u32 c5 = 5;
        volatile u8 *io = (volatile u8 *)(c1 << 26);
        u16 exmem = *(volatile u16 *)0x04000204;
        u32 mask;
        u32 ctrl;
        s32 pos;
        u32 cur_addr;

        *(volatile u16 *)0x04000204 &= ~0x800;
        mask = 0x204 - c5;
        pos = -(s32)(addr & mask);
        ctrl = (*(volatile u32 *)(((((*(volatile u8 *)(io + 0x4000) & 1) + 5) << 18) - 13) << 5) & ~0x07000000) | 0xa1000000;
        while (*(volatile u32 *)(io + 0x1a4) & 0x80000000) {}
        *(volatile u8 *)(io + 0x1a1) = 0x80;
        saved = saved_cmd;
        j = 0;
        do {
            *saved++ = ((volatile u8 *)0x040001a8)[j];
        } while (++j < 8);
        cur_addr = addr + pos;
        while (pos < 0x200) {
            volatile u8 *cmd = (volatile u8 *)0x04000000;
            cmd[0x1a8] = 0xb7;
            cmd[0x1a9] = (u8)(cur_addr >> 24);
            cmd[0x1aa] = (u8)(cur_addr >> 16);
            cmd[0x1ab] = (u8)(cur_addr >> 8);
            cmd[0x1ac] = (u8)cur_addr;
            cmd[0x1ad] = 0;
            cmd[0x1ae] = 0;
            cmd[0x1af] = 0;
            *(volatile u32 *)(io + 0x1a4) = ctrl;
            do {
                if (*(volatile u32 *)(io + 0x1a4) & 0x00800000) {
                    u32 word = *(volatile u32 *)(io + 0x100010);
                    if (pos >= 0 && pos < 0x200) {
                        *(u32 *)(dst + pos) = word;
                    }
                    pos += 4;
                }
            } while (*(volatile u32 *)(io + 0x1a4) & 0x80000000);
            cur_addr += 0x200;
        }
        saved = saved_cmd;
        j = 0;
        do {
            ((volatile u8 *)0x040001a8)[j] = *saved++;
        } while (++j < 8);
        *(volatile u16 *)(io + 0x204) = exmem;
        hash[0 + i] = func_ov000_02177ad0(buf, 0x200);
        func_02010c40(-1, addr + 0x7000, buf, 0x200, 0, 0, 0);
        hash[3 + i] = func_ov000_02177ad0(buf, 0x200);
        addr += 0x200;
    } while (++i < 3);

    func_0200fa20(lock_id);
    func_02005e50(lock_id);

    j = 0;
    do {
        if (hash[3 + 0] != hash[0 + j]) {
            res = 0xf1;
            goto clear;
        }
    } while (++j < 3);
    if (hash[3 + 0] == hash[3 + 1] && hash[3 + 0] == hash[3 + 2]) {
        res = 0xf1;
    } else {
        res = 0xfb;
    }

clear:
    j = 0;
    do {
        buf[j] = j;
    } while (++j < 0x80);
    return res * 0xbf;
}
#pragma pop
u32 func_ov000_02178004(void) {
    return 0xaa65;
}

u32 func_ov000_02178010(void) {
    return 0xa99f;
}

#pragma opt_propagation on
void func_ov000_021780e0(Rc4State *state,u8 *key,u32 keylen) {
register u32 v=0x03020100; register u32 inc=0x04040404;
u32 k=0; u32 j=0; s32 i;
u32 *p=(u32*)state->s; u32 *end=(u32*)((u8*)state+0x10c);
*(volatile u32*)&state->field_0=0xaa; state->field_4=0; state->field_8=0;
do { *p++=v; v+=inc; }while(p<end);
i=255; do { u32 x=key[k]; u8 tmp=state->s[i]; u8 tmp2;
j=(tmp+(j+x))&255; k++;
tmp2=state->s[j]; if(k>=keylen)k=0; state->s[j]=tmp; state->s[i]=tmp2;
}while(--i>=0);
}
u32 func_ov000_0217816c(Rc4State *state) {
    u32 i = (state->field_4 + 1 + state->field_0) & 0xff;
    u32 si = state->s[i];
    u32 j = (si + state->field_8 + state->field_0) & 0xff;
    u32 sj = state->s[j];
    state->field_4 = i;
    state->field_8 = j;
    state->s[j] = si;
    state->s[i] = sj;
    return state->s[(si + sj) & 0xff];
}

s32 func_ov000_021781c4(u32 *p) {
    u32 v = 0x03020100;
    u32 *end = (u32 *)((u8 *)p + 0x100);
    u32 mask = 0xffffffff;
    do {
        *p++ = v ^ mask;
        v += 0x04040404;
    } while (p < end);
    return 0;
}

s32 func_ov000_021774e4(u32);
s32 func_ov000_021781fc(void *arg0, void *arg1, u32 arg2, u32 size) {
    u8 table[256];
    Rc4State *state = arg0;
    u8 *src = arg1, *dst = (u8 *)arg2;
    unsigned long i;
    u8 *q;
    if (size & 3) return -1;
    func_ov000_021781c4((u32 *)table);
    for (i = 0; i < size; i += 4) {
        s32 kind;
        u8 *p = src + i;
        kind = func_ov000_021774e4(*(u32 *)p);
        switch (kind) {
        case 1:
        case 2: {
            u32 v;
            u32 low;
            u32 high;
            *(u32 *)(dst + i) = *(u32 *)p;
            v = *(u32 *)(dst + i);
            low = v & 0xffffff;
            high = v & 0xff000000;
            low += 0x402;
            high ^= 0x1000000;
            state->field_0 += high >> 24;
            *(u32 *)(dst + i) = high | (low & 0xffffff);
            break;
        }
        case 3:
            *(u32 *)p ^= 0x1000000;
        default:
            state->field_0 = p[0] ^ func_ov000_0217816c(state);
            q = dst + i;
            q[0] = state->field_0;
            state->field_0 = p[1] ^ func_ov000_0217816c(state);
            q[1] = state->field_0;
            q[2] = table[p[2]];
            q[3] = p[3];
            state->field_0 = state->field_0 * q[2] - q[3];
        }
    }
    return 0;
}

extern s32 func_ov000_021774e4(u32);

#pragma scheduling on
s32 func_ov000_02178314(void *arg0,void *arg1,u32 arg2,u32 arg3){
 u8 table[256];u32 i;
 Rc4State *state=(Rc4State *)arg0;
 u8 *in=(u8 *)arg1,*out=(u8 *)arg2;
 if(arg3&3)return -1;
 func_ov000_021781c4((u32 *)table);
 for(i=0;i<arg3;i+=4){
 u32 *src=(u32 *)(in+i);
 u32 word=*(u32 *)src;
 switch(func_ov000_021774e4(word)){
 case 1:case 3:
 state->field_0+=word>>24;
 *(u32 *)(out+i)=((word&0xff000000)^0x01000000)|(((word&0xffffff)-0x402)&0xffffff);
 break;
 case 2:{
 u8 b0=((u8 *)src)[0];u32 k0=func_ov000_0217816c(state);
 state->field_0=b0;out[i]=b0^k0;
 {u8 b1=((u8 *)src)[1];u32 k1=func_ov000_0217816c(state);state->field_0=b1;out[i+1]=b1^k1;}
 state->field_0=state->field_0*((u8 *)src)[2]-((u8 *)src)[3];
 out[i+2]=table[((u8 *)src)[2]];out[i+3]=((u8 *)src)[3];
 *(u32 *)src^=0x01000000;
 }break;
 default:{
 u8 b0=((u8 *)src)[0];u32 k0=func_ov000_0217816c(state);
 state->field_0=b0;out[i]=b0^k0;
 {u8 b1=((u8 *)src)[1];u32 k1=func_ov000_0217816c(state);state->field_0=b1;out[i+1]=b1^k1;}
 state->field_0=state->field_0*((u8 *)src)[2]-((u8 *)src)[3];
 out[i+2]=table[((u8 *)src)[2]];out[i+3]=((u8 *)src)[3];
 }break;
 }
 }
 return 0;
}
s32 func_ov000_0217849c(u8 *arg0, u8 *arg1, u32 arg2, u32 arg3) {
    Rc4State state;
    func_ov000_021780e0(&state, arg0, 0x10);
    return (func_ov000_021781fc(&state, arg1, arg2, arg3) == -1) ? -1 : 0;
}

extern s32 func_ov000_02178314(void *, void *, u32, u32);
s32 func_ov000_021784f4(u8 *arg0, u8 *arg1, u32 arg2, u32 arg3) {
    Rc4State state;
    func_ov000_021780e0(&state, arg0, 0x10);
    return (func_ov000_02178314(&state, arg1, arg2, arg3) == -1) ? -1 : 0;
}

