//
// 顺序栈 ：一种特殊的线性表，特殊之处：限定线性表的一端进行插入，删除操作
//

/*

#include <stdio.h>

#define MaxSize 50;

//顺序栈的类型定义
typedef  int Elem;
typedef struct SqStack{
    //数组存储其元素值
    Elem data[50];
    //栈顶指针
    int top;

}SqStack;


//读取栈顶元素
bool GetStack(SqStack &S, Elem e){      //记录栈顶元素值,对栈本身不做改变
    //判断是否为空战
    if (S.top == -1)    return false;

    e = S.data[S.top];
    return true;

}


//出栈操作
bool Pop(SqStack &S ,Elem e){
    //先判断是否为空战
    if(S.top  == -1)    return false;

    //非空，出栈：记录栈顶元素值m,栈顶指针-1
    e =S.data[S.top];
    S.top --;
    return true;
}


//进栈操作
bool Push(SqStack &S, Elem e){
    //先判断是否为满栈
    if(S.top == MaxSize -1)     return false;

    //不是满战， 可以进栈。操作如下： 栈顶指针+1，将指定元素值赋值给数组即可
    S.top ++;
    S.data[S.top] =e;
    return true;
}


//判断栈是否为空
bool IsEempty(SqStack S){
    if(S.top == -1)    return true;
    else    return false;
}

//初始化顺序栈
void InitStack(SqStack &S){
    S.top = -1;

}

*/