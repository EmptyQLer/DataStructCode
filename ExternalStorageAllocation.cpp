//
// 实现外存分配的三种方式：链接，引索，连续分配
//

/*
#include <stdio.h>
#include <stdlib.h>

//连续分配
//为每一个文件分配一组相邻的的磁盘块

#define BlockSize 10
typedef struct {
    int data[BlockSize];
};

bool is_allocated[BlockSize] = {false}; // 跟踪哪些块已分配

// 分配一个块
bool allocate(int &BlockIndex) {
    for (int i = 0; i < BlockSize; ++i) {
        if (!is_allocated[i]) {
            is_allocated[i] = true;
            BlockIndex =i;
            return true;
        }
    }
    return false; // 没有可用块
}

// 释放一个块
void deallocate(int BlockIndex) {
    if (BlockIndex >= 0 && BlockIndex < BlockSize) {
        is_allocated[BlockIndex] = false;
    }
}





//链接分配
//如果文件 存储在不连续的磁盘块中，将这些磁盘块用链表链接起来
typedef struct DisKBlockNode{
    int data;
    DisKBlockNode* next;
}DisKBlockNode,*DisKBlock;



//链表初始化
void Initial(DisKBlock DBL){
    DisKBlockNode* head =(DisKBlockNode*) malloc(sizeof (DisKBlockNode));
    DBL =head;
    DBL ->next =NULL;
}

void allocate(DisKBlock DBL,int e){
    DisKBlockNode* p =(DisKBlockNode*) malloc(sizeof (DisKBlockNode));
    p->data =e;
    p->next =NULL;

    //尾差法
    DBL->next =p;
    DBL =p;

}


//引索分配
//为每个文件建立一张引索表，引索表的每一个表项 记录文件信息在外存中的位置
#define MaxIndexNum 5 // 索引表的最大条目数
typedef int BlockIndex; // 磁盘块索引类型

BlockIndex indexTable[MaxIndexNum]; // 索引表


 */



