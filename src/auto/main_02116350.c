/* 54 functions from 0x02116350 to 0x02117304 (main), found by ds-decomp. */
#include "common.h"

extern void func_02116ad8(void);
extern u8 data_0216cb1c[12];
extern void func_021167f0(void *, void *);
extern s32 func_02008128(void);
extern void func_0200813c(s32);
void func_02116674(void *arg0) {
    s32 irq = func_02008128();
    func_021167f0(data_0216cb1c, arg0);
    func_0200813c(irq);
}

void* func_02116d7c(void* heap, u32 size, s32 alignment)
{
    typedef struct Block {
        u16 signature;
        u16 attribute;
        u32 blockSize;
        struct Block* prev;
        struct Block* next;
    } Block;

    u8* expHeap = (u8*)heap + 0x24;
    const BOOL allocFirst = (u16)(*(u16*)(expHeap + 0x12) & 1) == 0;

    Block* block = NULL;
    Block* found = NULL;
    u32 foundSize = 0xFFFFFFFF;
    void* foundMem = NULL;

    alignment -= 1;

    for (block = *(Block**)expHeap; block != NULL; block = block->next) {
        void* const mem = (void*)(block + 1);
        void* const aligned = (void*)((alignment + (u32)mem) & ~alignment);
        const u32 offset = (u32)aligned - (u32)mem;

        if (block->blockSize >= size + offset && foundSize > block->blockSize) {
            found = block;
            foundSize = block->blockSize;
            foundMem = aligned;

            if (allocFirst || foundSize == size) {
                break;
            }
        }
    }

    if (found == NULL) {
        return NULL;
    }

    return func_02116c10(expHeap, found, foundMem, size, 0);
}

void *func_02116e30(void *heap, u32 size, s32 alignment)
{
  typedef struct Block
  {
    u16 signature;
    u16 attribute;
    u32 blockSize;
    struct Block *prev;
    struct Block *next;
  } Block;
  u8 *expHeap = ((u8 *) heap) + 0x24;
  const BOOL allocFirst = ((u16) ((*((u16 *) (expHeap + 0x12))) & 1)) == 0;
  Block *block = *((Block **) (expHeap + 4));
  Block *found = NULL;
  u32 foundSize = 0xFFFFFFFF;
  void *foundMem = NULL;
  if (block != NULL)
  {
    alignment -= 1;
    alignment = ~alignment;
    do
    {
      int blockSize = block->blockSize;
      void * const mem = (void *) (block + 1);
      void * const aligned = (void *) (((blockSize + ((u32) mem)) - size) & alignment);
      const s32 offset = (s32) (((u32) aligned) - ((u32) mem));
      if ((offset >= 0) && (foundSize > blockSize))
      {
        found = block;
        foundSize = blockSize;
        foundMem = aligned;
        if (allocFirst || (foundSize == size))
        {
          break;
        }
      }
      block = block->prev;
    }
    while (block != NULL);
  }
  if (found == NULL)
  {
    return NULL;
  }
  return func_02116c10(expHeap, found, foundMem, size, 1);
}

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

void* func_0211709c(void* heap, void* end, u16 opt)
{
    void* result;
    u32 limit;
    u32 start;

    func_02116a5c(heap, 0x46524D48, (u8*)heap + 0x30, end, opt);

    limit = *(u32*)((u8*)heap + 0x1C);
    start = *(u32*)((u8*)heap + 0x18);

    result = heap;

    *(u32*)((u8*)heap + 0x24) = start;
    *(u32*)((u8*)heap + 0x28) = limit;
    *(void**)((u8*)heap + 0x2C) = NULL;

    return result;
}

void* func_021170e4(void* heap, u32 size, s32 alignment)
{
    u8* frame = (u8*)heap;
    u32 head = *(u32*)(frame + 0x0);
    u32 aligned;
    u32 newHead;
    u32 flags;
    u32 clearSize;

    alignment -= 1;

    aligned = ~alignment & (alignment + head);
    newHead = size + aligned;

    if (newHead > *(u32*)(frame + 0x4)) {
        return NULL;
    }

    flags = *(u32*)(frame - 0x4);
    clearSize = newHead - head;

    if ((u8)flags & 1) {
        func_02008e24(0, (void*)head, clearSize);
    }

    *(u32*)(frame + 0x0) = newHead;

    return (void*)aligned;
}

void* func_02117140(void* heap, u32 size, s32 alignment)
{
    u8* frame = (u8*)heap;
    u32 tail = *(u32*)(frame + 0x4);
    u32 aligned;
    u32 flags;
    u32 clearSize;

    alignment -= 1;

    aligned = ~alignment & (tail - size);

    if (aligned < *(u32*)(frame + 0x0)) {
        return NULL;
    }

    flags = *(u32*)(frame - 0x4);
    clearSize = tail - aligned;

    if ((u8)flags & 1) {
        func_02008e24(0, (void*)aligned, clearSize);
    }

    *(u32*)(frame + 0x4) = aligned;

    return (void*)aligned;
}

void func_02117198(void* heap)
{
    u8* start = *(u8**)((u8*)heap + 0x18);

    *(u8**)((u8*)heap + 0x24) = start;
    *(void**)((u8*)heap + 0x2C) = NULL;
}

void func_02117210(void) {
    func_02116ad8();
}
