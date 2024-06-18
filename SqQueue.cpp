//
//队列的顺序存储
//


#include <stdio.h>

#define MaxSize 50;

//顺序队列的类型描述
typedef int Elem;
typedef struct SqQueue{
    //数组存储元素值
    Elem data[50];
    //队首队尾指针
    int front ,rear;

}SqQueue;


//入队
bool EnSqQueue(SqQueue &Q,Elem e){
    //判断是否满队
    if(Q.rear = MaxSize -1) return false;

    //入队,队尾指针当前位置对应数组赋值，然后队尾指针+1
    Q.data[Q.rear++] = e;
    return true;

}


//判段顺序队列是否为空
bool IsEmptySqQueue(SqQueue Q){
    //队首队尾指针同一个位置即为空
    if (Q.rear == Q.front)      return true;
    else    return false;

}


//初始化队列
void InitSqQueue(SqQueue &Q){
    Q.front = 0;
    Q.rear  = 0;

}


//出队
bool DeSqQueue(SqQueue &Q, Elem &e){
    //判断队空
    if (IsEmptySqQueue(Q))  return false;

    //队非空，入队
    e =Q.data[Q.front++];
}

