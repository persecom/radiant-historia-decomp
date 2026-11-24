/* 54 functions from 0x02116350 to 0x02117304 (main), found by ds-decomp. */
#include "common.h"

extern void func_02116ad8();
extern u32 data_0216e21c;
extern u8 data_0216e220[12];
extern void *func_021169cc(void *, const void *);
extern void func_021167ac(void *, u16);
extern u8 data_0216cb1c[12];
extern u8 data_0216e1f8[24];
extern u8 data_0216e210[12];
extern u8 *data_0216cb10[3];
extern s32 data_02155dc4[54];
extern void *func_02116958(void *, void *);
void func_0211645c(u8 *arg0);
void func_021164e0(u8 *arg0);
void func_02116578(u8 *arg0);
void func_021165e0(u8 *arg0);
void func_02116604(void *arg0, void *arg1);
void func_02116674(void *arg0);
void func_02116720(s32 *arg0, s32 arg1, s32 arg2);
s32 func_02116748(s32 *arg0);
extern void func_021167f0(void *, void *);
extern void func_021168f8(void *, void *);
extern s32 func_02008128(void);
extern void func_0200813c(s32);

extern void func_02116a5c(void *, u32, void *, void *, u16);

BOOL func_02116ee0(void* expHeap, void* region)
{
    typedef struct Block {
        u16 signature;
        u16 attribute;
        u32 blockSize;
        struct Block* prev;
        struct Block* next;
    } Block;

    typedef struct Region {
        u8* start;
        u8* end;
    } Region;

    Region* original = (Region*)region;
    Region merged = *original;
    Block* block = *(Block**)expHeap;
    Block* prev = NULL;

    while (block != NULL) {
        if ((u8*)block < original->start) {
            prev = block;
        } else {
            if ((u8*)block == original->end) {
                merged.end = (u8*)(block->blockSize + (u32)(block + 1));
                func_02116b1c(expHeap, block);
            }
            break;
        }

        block = block->next;
    }

    if (prev != NULL) {
        if ((u8*)(prev->blockSize + (u32)(prev + 1)) == original->start) {
            merged.start = (u8*)prev;
            prev = (Block*)func_02116b1c(expHeap, prev);
        }
    }

    if ((u32)(merged.end - merged.start) < 0x10) {
        return 0;
    }

    block = (Block*)func_02116b74(&merged, 0x4652);
    func_02116b44(expHeap, block, prev);

    return 1;
}

void* func_02116fd0(void* start, u32 size, u16 opt)
{
    u32 end = (size + (u32)start) & ~3;
    start = (void*)(((u32)start + 3) & ~3);

    if ((u32)start > end || end - (u32)start < 0x4C) {
        return NULL;
    }

    return func_02116ba0(start, (void*)end, opt);
}

void* func_02117008(void* heap, u32 size, s32 alignment)
{
    extern void* func_02116d7c(void*, u32, s32);
    extern void* func_02116e30(void*, u32, s32);

    if (size == 0) {
        size = 1;
    }

    size = (size + 3) & ~3;

    if (alignment >= 0) {
        return func_02116d7c(heap, size, alignment);
    } else {
        return func_02116e30(heap, size, -alignment);
    }
}

void func_02117038(void* heap, void* mem)
{
    typedef struct Region {
        u8* start;
        u8* end;
    } Region;

    Region region;
    register u32 regionAddr;
    u8* block = (u8*)mem - 0x10;

    regionAddr = (u32)&region;

    func_02116af0((Region*)regionAddr, block);
    func_02116b1c((u8*)heap + 0x2C, block);
    func_02116ee0((u8*)heap + 0x24, (Region*)regionAddr);
}

u16 func_02117078(void *arg0, u16 arg1) {
    u16 old = *(u16 *)((u8 *)arg0 + 0x34);
    *(u16 *)((u8 *)arg0 + 0x34) = arg1;
    return old;
}

u16 func_02117088(void *arg0) {
    return *(u16 *)((u8 *)arg0 + 0x34);
}

u32 func_02117090(u8 *a0) {
    return *(u16 *)(a0 - 0xe) & 0xff;
}
