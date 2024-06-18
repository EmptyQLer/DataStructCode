//
// Created by Administrator on 2024/6/18.
// 线索二叉树：它是一般二叉树的变形。一般二叉树的定义中，总是有 n+1(n为节点个数) 个空指针。我们利用这些空指针作为线索；具体地说: 当进行遍历遇到空的左右指针时
// 将其分别指向 当前结点的前驱和后继结点（这里前驱和后续 是在不同的遍历中去定义的）这样的修改使得在遍历时，可以通过线索访问下一个节点，无需通过栈或递归跟踪遍历路径
// 减小了额外的空间开销；另外，由于线索的存在，可以快速地访问前驱和后续结点，提高遍历效率。
// 下面是具体实现过程
//

/*
#include <stdio.h>
#include <stdlib.h>


//类型描述
// 节点左孩子指针指向空（无左孩子）则 lrag =1,且 lchild 指向 当前结点的前驱结点。
// 节点右孩子指针指向空（无右孩子）则 lrag =1,且 rchild 指向 当前结点的后继结点。
typedef int Elem;
typedef struct ThreadBiNode {
    //数据
    Elem data;
    //左右孩子指针
    struct ThreadBiNode *lchild, *rchild;
    //线索
    int ltag, rtag;
} ThreadBiNode, *ThreadBiTree;


//创建结点
ThreadBiNode *NewThreadBiNode(Elem e) {
    //开辟内存空间
    ThreadBiNode *newNode = (ThreadBiNode *) malloc(sizeof(ThreadBiNode));
    //初始化
    newNode->data = e;
    newNode->lchild = newNode->rchild = NULL;
    newNode->ltag = newNode->rtag = 0;

    return newNode;
}



//创建 中序线索化 二叉树（二叉树线索化）
// 传参： 线索二叉树 和  前驱结点
void InOrderThread(ThreadBiTree &T , ThreadBiNode* &pre){
    if (T == NULL) return;      //空树返回

    //中序线索二叉树（二叉树线索化）
    InOrderThread(T->lchild ,pre);

    //左子树为空，建立左线索
    if (T->lchild ==NULL){
        T->lchild =pre;     // lchild 指向前驱结点
        T->ltag  = 1;       // 更新左线索
    }

    //若 前驱结点非空且右子树为空 ，建立又线索
    if (pre !=NULL && T->rchild ==NULL){
        pre->rchild = T;    // lchild 指向后续结点
        T->rtag =1;         // 更新右线索
    }

    pre =T;                 //更新结点
    InOrderThread(T->rchild,pre);   //中序递归
}



//实现中序线索化遍历
void ThreadInOrder(ThreadBiTree T){
    ThreadBiNode* p =T;

    //寻找最左下节点作为遍历起点
    while (p->lchild != NULL  && p->ltag == 0){
        p =p->lchild;
    }

    while (p !=NULL){
        //访问
        printf("%d\t",p->data);

        //若右子树是线索，则沿线索遍历
        if (p->rtag == 1){
            p =p->rchild;
        } else{             //否则 找到右子树的最左下结点进行遍历
            p =p->rchild;
            while (p->lchild != NULL  && p->ltag == 0){
                p =p->lchild;
            }
        }

    }
}



int main() {
    //举例
    ThreadBiTree root = NewThreadBiNode(1);
    root->lchild = NewThreadBiNode(2);
    root->rchild = NewThreadBiNode(3);
    root->lchild->lchild = NewThreadBiNode(4);
    root->lchild->rchild = NewThreadBiNode(5);
    root->rchild->lchild = NewThreadBiNode(6);
    root->rchild->rchild = NewThreadBiNode(7);

    //创建 前驱结点和 线索化二叉树
    ThreadBiNode *pre =NULL;
    InOrderThread(root,pre);

    //中序线索化遍历
    printf("遍历结果：\n");
    ThreadInOrder(root);
}

 */




#include <stdio.h>
#include <stdlib.h>


//中序遍历线索化
typedef int Elem;
typedef struct ThreadBiNode {
    //数据
    Elem data;
    //左右孩子指针
    struct ThreadBiNode *lchild, *rchild;
    //左右线索
    int ltag, rtag;
} ThreadBiNode, *ThreadBiTree;

void InOrderThread(ThreadBiTree &T,ThreadBiNode* &pre){         //T为当前结点（这里是术，但后续遍历看做当前结点） ，pre是T的前驱结点
    //如何线索化：当前结点无左孩子 则将左孩子指针指向当前结点的前驱结点，并更新左线索值(创建左线索)         当前结点无右孩子 则将右孩子指针指向当前结点的后继结点，并更新右线索值（创建右线索）
    if (T) return;    //空树，直接返回

    InOrderThread(T->lchild,pre);

    //创建左线索
    if (T->lchild){     //无左孩子
        T->lchild =pre;
        T->ltag =1;
    }

    //创建右线索
    if (!pre && pre->rchild){       //pre不空，且pre无有孩子
        pre->rchild =T;
        pre->rtag =1;
    }

    //更新pre（前驱结点）
    pre =T;

    //中序递归
    InOrderThread(T->rchild,pre);
}


//整体过程，上面有最后一个结点没有实现线索化，下面是完整线索化
void InorderThreadAll(ThreadBiTree &T){
    ThreadBiNode* pre =NULL;        //创建前驱结点
    if (!T){
        InOrderThread(T,pre);   //线索化二叉树
        //最后一个结点线索化
        pre->rchild =NULL;
        pre->rtag =1;
    }
}