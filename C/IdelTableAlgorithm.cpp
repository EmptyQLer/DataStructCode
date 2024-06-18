
/*
#include <stdio.h>
#include <stdlib.h>

#define MAX_MEMORY_SIZE 1024 // 假设最大内存大小为1024字节
#define BLOCK_SIZE 32 // 假设内存块大小为32字节

typedef struct {
    int start; // 内存块起始地址
    int size; // 内存块大小
} Block;

Block freeList[MAX_MEMORY_SIZE / BLOCK_SIZE]; // 空闲表
int freeListSize = 0; // 空闲表大小

void initFreeList() {
    for (int i = 0; i < MAX_MEMORY_SIZE / BLOCK_SIZE; i++) {
        freeList[i].start = i * BLOCK_SIZE;
        freeList[i].size = BLOCK_SIZE;
        freeListSize++;
    }
}

void* allocateMemory(int size) {
    if (size > MAX_MEMORY_SIZE) {
        return NULL;
    }

    for (int i = 0; i < freeListSize; i++) {
        if (freeList[i].size >= size) {
            void* allocatedMemory = (void*)(freeList[i].start);
            freeList[i].start += size;
            freeList[i].size -= size;
            return allocatedMemory;
        }
    }

    return NULL;
}

void releaseMemory(void* ptr, int size) {
    int index = (int)ptr / BLOCK_SIZE;
    freeList[index].start -= size;
    freeList[index].size += size;
}

int main() {
    initFreeList();

    void* memory1 = allocateMemory(64);
    void* memory2 = allocateMemory(128);
    void* memory3 = allocateMemory(256);

    releaseMemory(memory2, 128);
    releaseMemory(memory3, 256);

    return 0;
}

 */

/*
#include <stdio.h>
#include <stdlib.h>

// 假设我们有几种固定的块大小
#define BLOCK_SIZES 10
size_t groupSizes[BLOCK_SIZES] = {8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096};

// 每种大小的块对应的空闲链表头
typedef struct FreeBlock {
    void* address;
    struct FreeBlock* next;
} FreeBlock;
FreeBlock* freeLists[BLOCK_SIZES] = {NULL};  // 初始化所有链表为空

// 分配内存
void* myMalloc(size_t size) {
    int index = 0;
    while(index < BLOCK_SIZES && groupSizes[index] < size) {
        ++index;
    }
    if(index == BLOCK_SIZES) {
        printf("No suitable block size for allocation of %zu bytes.\n", size);
        return NULL;
    }

    FreeBlock* block = freeLists[index];
    if(block) {
        freeLists[index] = block->next;
        return block->address;
    } else {
        printf("Out of memory for block size %zu.\n", groupSizes[index]);
        return NULL;
    }
}

// 释放内存
void myFree(void* p) {
    if(p == NULL) return;

    // 确定块的大小并加入对应大小的链表
    for(int i = 0; i < BLOCK_SIZES; ++i) {
        if(groupSizes[i] == ((char*)p - (char*)NULL) % groupSizes[i]) {  // 简单判断，实际情况可能需要更精确的方法
            FreeBlock* block = (FreeBlock*)p;
            block->next = freeLists[i];
            freeLists[i] = block;
            return;
        }
    }

    printf("Error: Attempt to free memory not from managed groups.\n");
}

int main() {
    // 示例分配与释放操作
    void* block1 = myMalloc(32);
    if(block1) printf("Allocated block1 at %p\n", block1);

    void* block2 = myMalloc(128);
    if(block2) printf("Allocated block2 at %p\n", block2);

    myFree(block1);
    printf("block1 freed.\n");

    void* block3 = myMalloc(32);  // 应该能重新获得之前释放的块
    if(block3) printf("Allocated block3 at %p\n", block3);

    return 0;
}

*/