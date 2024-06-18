//
//循环队列：特殊的顺序存储的队列，特殊之处：队首，队尾是可以沿着某一顺序循环移动的。 引入循环队列的目的：解决“假溢出” 问题：
//

/*
#include <stdio.h>

#define MaxSize 50

//循环队列类型描述
typedef int Elem;
typedef struct SqCirQueue {
    //数组存储元素值
    Elem data[50];
    //队首队尾指针
    int front, rear;

} SqCirQueue;



//判断是否为满队列
bool IsFullSqCirQueue(SqCirQueue Q) {
    //队首指针后一个位置是队尾指针的位置即为满队
    return (Q.rear + 1) % MaxSize == Q.front + 1;
}


//判断是否为空循环队列
bool IsEmptySqCirQueue(SqCirQueue Q) {
    //队首队尾指针同一位置即为空
    if (Q.front == Q.rear) return true;
    else return false;

}


//初始化队列
void InitSqQueue(SqCirQueue &Q) {
    Q.front = 0;
    Q.rear = 0;
}

//入队
bool EnSqCirQueue(SqCirQueue &Q,Elem e){
    //判断是否满队
    if (IsFullSqCirQueue(Q))    return false;

    //队尾指针当前位置对应数组赋值，然后队尾指针+1，但超过MaxSize-1 就回到0
    e =Q.data[Q.rear] ;
    Q.rear =(Q.rear +1)%MaxSize;
    return true;
}


//出队
//入队
bool DeSqCirQueue(SqCirQueue &Q,Elem &e){
    //判断是否空队
    if (IsEmptySqCirQueue(Q))    return false;

    //先出去，然后队首指针+1，但超过MaxSize-1 就回到0
    Q.data[Q.front] =e;
    Q.rear =(Q.front +1)%MaxSize;
    return true;
}

*/


















