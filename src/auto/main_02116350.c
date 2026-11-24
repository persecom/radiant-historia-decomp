/* 54 functions from 0x02116350 to 0x02117304 (main), found by ds-decomp. */
#include "common.h"

extern void func_02116ad8(void);
extern u8 data_0216cb1c[12];
extern u8 data_0216e1f8[24];
extern u8 *data_0216cb10[3];
void func_021164e0(u8 *arg0);
extern void func_021167f0(void *, void *);
extern s32 func_02008128(void);
extern void func_0200813c(s32);
void func_0211645c(u8 *arg0) {
    typedef struct {
        u8 pad[0x118];
        s32 b0 : 1;
        s32 b1 : 1;
        s32 b2 : 1;
        s32 b3 : 1;
        u8 pad2[0x38];
        void **unk154;
    } SndStrmPlayer;
    SndStrmPlayer *p = (SndStrmPlayer *)arg0;
    if (p->unk154 != NULL) {
        *p->unk154 = NULL;
        p->unk154 = NULL;
    }
    p->b0 = 0;
    p->b2 = 0;
    p->b1 = 0;
}

void func_02116488(u8 *arg0, s32 arg1) {
    typedef struct {
        u8 pad[0x118];
        s32 b0 : 1;
        s32 b1 : 1;
        s32 b2 : 1;
        s32 b3 : 1;
    } SndStrmPlayer;
    SndStrmPlayer *p = (SndStrmPlayer *)arg0;
    if (!p->b1) {
        func_021164e0(arg0);
        return;
    }
    if (arg1 == 0) {
        func_021164e0(arg0);
        return;
    }
    func_02116720(arg0 + 0xf0, 0, arg1);
    *(s32 *)(arg0 + 0x158) = 0;
    p->b3 = 1;
}

void func_021164e0(u8 *arg0) {
    typedef struct {
        u8 pad[0x118];
        s32 b0 : 1;
        s32 b1 : 1;
        s32 b2 : 1;
        s32 b3 : 1;
    } SndStrmPlayer;
    SndStrmPlayer *p = (SndStrmPlayer *)arg0;
    func_02006afc(data_0216e1f8);
    if (data_0216cb10[1] != NULL) {
        func_02006afc(data_0216cb10[1] + 0x10c8);
    }
    if (p->b1) {
        func_0211470c(arg0);
    }
    if (p->b0) {
        ((void (*)(u8 *))(*(void **)(arg0 + 0x178)))(arg0);
    }
    func_02116578(arg0);
    func_02006b4c(data_0216e1f8);
    if (data_0216cb10[1] != NULL) {
        func_02006b4c(data_0216cb10[1] + 0x10c8);
    }
}

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

void *func_0211709c(void *heap, void *end, u16 opt)
{
  u8 *new_var2;
  void **new_var3;
  u8 *start;
  u8 *new_var;
  start = heap;
  new_var = (0, (u8 *) start);
  new_var = new_var + 0x30;
  func_02116a5c(heap, 0x46524D48, new_var, end, opt);
  heap = (u8 *) heap;
  if (heap)
  {
  }
  start = *((u8 **) (heap + 0x18));
  new_var3 = (void **) (heap + 0x2C);
  new_var2 = (u8 *) heap;
  *((u8 **) (new_var2 + 0x28)) = (heap = *((u8 **) (((u8 *) heap) + 0x1C)));
  *((u8 **) (((u8 *) heap) + 0x24)) = start;
  *new_var3 = NULL;
  return heap;
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

void func_021171ac(void* heap)
{
    u8* state = *(u8**)((u8*)heap + 0x2C);

    while (state != NULL) {
        *(u8**)(state + 0x8) = *(u8**)((u8*)heap + 0x1C);
        state = *(u8**)(state + 0xC);
    }

    *(u8**)((u8*)heap + 0x28) = *(u8**)((u8*)heap + 0x1C);
}

void* func_021171d8(void* start, u32 size, u16 opt)
{
    u32 end = (size + (u32)start) & ~3;
    start = (void*)(((u32)start + 3) & ~3);

    if ((u32)start > end || end - (u32)start < 0x30) {
        return NULL;
    }

    return func_0211709c(start, (void*)end, opt);
}

void func_02117210(void) {
    func_02116ad8();
}

void* func_0211721c(void* heap, u32 size, s32 alignment)
{
    if (size == 0) {
        size = 1;
    }

    size = (size + 3) & ~3;

    if (alignment >= 0) {
        return func_021170e4((u8*)heap + 0x24, size, alignment);
    } else {
        return func_02117140((u8*)heap + 0x24, size, -alignment);
    }
}

void func_02117250(void* heap, u32 mode)
{
    if (mode & 1) {
        func_02117198(heap);
    }

    if (mode & 2) {
        func_021171ac(heap);
    }
}

u32 func_0211727c(void *heap, s32 alignment)
{
  u32 head;
  u32 tail;
  u32 aligned;
  alignment = func_02013630(alignment);
  alignment -= 1;
  if (alignment)
  {
  }
  head = *((u32 *) (((u8 *) heap) + 0x24));
  aligned = (~alignment) & (alignment + head);
  tail = *((u32 *) (((u8 *) heap) + 0x28));
  if (aligned > tail)
  {
    return 0;
  }
  return tail - ((~alignment) & (alignment + head));
}

BOOL func_021172b4(void* heap, u32 tag)
{
    typedef struct State {
        u32 tag;
        u8* head;
        u8* tail;
        struct State* next;
    } State;

    u8* head = *(u8**)((u8*)heap + 0x24);
    State* state;

    state = (State*)func_021170e4((u8*)heap + 0x24, 0x10, 4);

    if (state == NULL) {
        return 0;
    }

    state->tag = tag;
    state->head = head;
    state->tail = *(u8**)((u8*)heap + 0x28);
    state->next = *(State**)((u8*)heap + 0x2C);

    *(State**)((u8*)heap + 0x2C) = state;

    return 1;
}

