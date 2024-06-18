//
// 队列的链式存储：链队列 ，是有头指针和尾指针的单链表
//

/*
#include <stdio.h>
#include <stdlib.h>

#define  MaxSize 50

//链队列的类型描述
typedef int ELem;
typedef struct Lnode{       //链队列节点
    //数据
    ELem data;
    //后继指针
    struct Lnode *next;

}Lnode;

typedef struct {
    //队首队尾指针
    Lnode *front ,*rear;

}LinkQueue;


//初始化（带头结点）
void InitLinkQueue(LinkQueue &Q){
    //只需新建一个头节点，将队首队尾指针指向该头节点即可
    Lnode *head =(Lnode*)malloc(sizeof(Lnode));
    Q.front =Q.rear =head;
    Q.front ->next =NULL;
}


//判空
bool IsEmptyLinkQueue(LinkQueue Q){
    //因为带头节点，队首队尾指针指向同一节点时为空
    return Q.front == Q.rear;
}


//入队
bool EnLinkQueue(LinkQueue &Q,ELem e){
    //无需判断满队列，因为链队列不存在这个问题

    //采用尾插法，新建一个节点记录入队元素值，之后将队尾指针的后继指向该节点，更新队尾指针的位置
    Lnode *S =(Lnode*)malloc(sizeof(Lnode));
    S->data =e;
    S->next =NULL;

    Q.rear ->next =S;
    Q.rear =S;

    return true;
}


//出队
bool DeLinkQueue(LinkQueue &Q, ELem &e){
    //判空
    if (IsEmptyLinkQueue(Q))    return false;

    //新建节点指向队首指针后继节点，队首指针后继指向队首指针后继节点的后继（要出队的节点的后继节点），释放出队节点的内存空间
    //注意：如果链队列仅一个节点时出队，出队后应该将队尾指针重新指向头节点
    Lnode *P =Q.front ->next ;
    e= P->data;

    Q.front ->next =P ->next;
    if ( P==Q.rear)    Q.rear =Q.front;

    free(P);
    P =NULL;

    return true;
}


//创建链队列
void CreateLinkQueue(LinkQueue &Q){
    int n =0;
    printf("给出需要多少队列元素个数：\n");
    scanf("%d",&n);

    int e =0;
    for (int i = 0; i < n; i++) {
        printf("输入第 %d 个元素值\n",i+1);
        scanf("%d",&e);
        EnLinkQueue(Q,e);
    }

    printf("队列创建完成！**************************\n");
}


//打印队列元素
void PrintQueue(LinkQueue Q){
    //判空
    if (IsEmptyLinkQueue(Q)) return;

    //遍历链队列，输出元素值
    Lnode *P =Q.front ->next;                           //新建节点用于遍历  指向链队列第一个有意义的节点
    while (P != NULL){
        printf("%d\t",P->data);
        P =P ->next;
    }
    printf("\n");
}


//读取队列队首元素
bool GetQueueElem(LinkQueue Q, ELem &e){
    //判空
    if (IsEmptyLinkQueue(Q))    return false;

    //记录队首指针后继节点的数据值即可
    e =Q.front ->next ->data;
    return true;

}

int main(){
    //举例
    LinkQueue Q;

    //初始化
    InitLinkQueue(Q);

    //创建队列
    CreateLinkQueue(Q);

    //打印队列元素
    PrintQueue(Q);

    //读取队头元素值
    int e =0;
    if (GetQueueElem(Q,e)) printf("队头元素为： %d\n",e);
    else printf("当前队列为空，先加入元素再尝试\n");


    //入队
    printf("*********************入队实操************************\n");
    char flag ='a';
    do {
        printf("给出入队元素值\n");
        int ex =0;
        scanf("%d",&ex);
        if(EnLinkQueue(Q,ex)) printf("%d,入队完成\n",ex);
        else {
            break;
        }

        //打印当前队内元素
        printf("当前队内元素：\t");
        PrintQueue(Q);

        while (getchar()!='\n');
        printf("继续入队，Y or N:\n");
        scanf("%c",&flag);
    } while (flag == 'Y' || flag =='y');

    //出队
    printf("*********************出队实操************************\n");
    char flag2 ='a';
    do {
        int ex2 = 0;
        if(DeLinkQueue(Q, ex2)) printf("%d 出队\n", ex2);
        else{
            break;
        }

        //打印当前队内元素
        printf("当前队内元素：\t");
        PrintQueue(Q);

        while (getchar()!='\n');
        printf("继续入队，Y or N:\n");
        scanf("%c",&flag2);
    } while (flag2 == 'Y' || flag2 =='y');


    return 0;
}



*/



