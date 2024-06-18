//
// 二叉树链式存储，以单链表为例
//

/*
#include <stdio.h>
#include <stdlib.h>
#define  MaxSize 50

//类型描述
typedef int elem;
typedef struct BiTNode{
    //节点数据
    elem data;
    //左右子树
    BiTNode *lchild,*rchild;

}BiTNode,*BiTree;


//顺序栈的类型定义
typedef  BiTree Elem;
typedef struct SqStack{
    //数组存储其元素值
    Elem data[50];
    //栈顶指针
    int top;

}SqStack;



//二叉树术判空树
bool IsEmptyBiTree(BiTree T){
    //一个二叉树无任何节点即为空树
    return T->data == 0;
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



//二叉树实现前序，中序，后序遍历
//前序遍历（递归策略）
void PreOrder(BiTree T){
    //前序遍历，先访问根节点，接着递归遍历左子树，最后递归遍历右子树。中序，后序类似，只不过访问根节点的次序有所不同
    //首先对二叉树进行空树判断
    if(IsEmptyBiTree(T)) return;

    //依次递归
    printf("%d\t", T->data);
    PreOrder(T->lchild);
    PreOrder(T->rchild);
}

//中序遍历（递归策略）
void InOrder(BiTree T){
    //首先对二叉树进行空树判断
    if(IsEmptyBiTree(T)) return;

    //依次递归
    InOrder(T->lchild);
    printf("%d\t", T->data);
    InOrder(T->rchild);
}

//后序遍历（递归策略）
void PostOrder(BiTree T){
    //首先对二叉树进行空树判断
    if(IsEmptyBiTree(T)) return;

    //依次递归
    PostOrder(T->lchild);
    PostOrder(T->rchild);
    printf("%d\t", T->data);
}


//下面是非递归方法实现二叉树 的前中后序遍历
//非递归实现有些难度，可能是目前我写的最为复杂的算法（逻辑复杂）。他是借助顺序栈为工具实现的

//中序遍历（借助栈工具）
void InOrder2(BiTree T, SqStack &S){
    //先初始化栈
    InitStack(S);
    BiTNode *p =T;      //遍历指针

    //1.沿着根的左孩子，依次入栈，直到左孩子为空，说明已经找到可以输出的结点、
    //2.栈顶元素出栈并访问：若其右孩子为空，继续执行2
    //3.若其右孩子不为空，将右子树转执行1
    while (p !=NULL || !IsEempty(S)) {       //不是空树 或者 不是空栈
        if (p !=NULL) {
            Push(S, p);                //当前结点入栈
            p = p->lchild;                   //一路左下,直到最左下的叶子结点
        } else {
            Pop(S, p);                 //当前结点出栈
            printf("%d\t", p->data);  //打印结点元素值
            p = p->rchild;                   //更新指针指向其右子树
        }
    }
}

//中序遍历（借助栈工具）
void PreOrder2(BiTree T ,SqStack &S){
    //解决思路和中序遍历类似，只不过在入栈前，访问节点数据。其他无变化
    InitStack(S);
    BiTNode *p =T;

    while (p !=NULL || !IsEempty(S)){
        if (p !=NULL){
            printf("%d\t",p->data);
            Push(S,p);
            p =p->lchild;
        } else{
            Pop(S,p);
            p =p->rchild;
        }
    }

}



*/







