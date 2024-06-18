//
// 单链表：链式存储的线性表
//

/*
#include <stdio.h>
#include <stdlib.h>


typedef struct LNode {
    int data;
    struct LNode *next;

} LNode, *LinkList;


//销毁单链表
void DestroyList(LinkList &L) {
    //采用前驱指针和指针同行策略
    LNode *pre = L;
    LNode *p = L;

    while (p != NULL) {
        free(pre);
        pre = p;
        p = p->next;
    }
    //还剩一个节点
    p = NULL;
    free(pre);
    pre = NULL;
}


//打印链表节点的值
void PrintList(LinkList &L) {
    LNode *P = L;

    int i = 2;
    P = P->next;
    while (P->next != NULL) {
        printf("节点： %d 的值为： %d\n", i, P->data);
        i++;
        P = P->next;
    }

}


//尾插法建立单链表
LinkList List_TailInsert(LinkList &L, int Length) {
    int i = 0;
    LNode *S;
    L = (LNode *) malloc(sizeof(LNode));
    L->next = NULL;

    while (i < Length) {
        S = (LNode *) malloc(sizeof(LNode));
        S->data = i + 1;

        L->next = S;
        L = S;

        i++;
    }
    L->next = NULL;
    return L;
}


//头插法建立单链表
LinkList List_HeadInsert(LinkList &L, int Length) {
    int i = 1;
    LNode *S;
    L = (LNode *) malloc(sizeof(LNode));
    L->next = NULL;

    while (i < Length) {
        S = (LNode *) malloc(sizeof(LNode));
        S->data = i;
        S->next = L->next;
        L->next = S;

        i++;
    }
    return L;
}


//删除节点
bool ListDelete(LinkList &L, int i, int &e) {
    LNode *P = L;
    int j = 0;

    while (P->next != NULL && j < i - 1) {
        P = P->next;
    }

    if (P = NULL) return false;

    LNode *S = (LNode *) malloc(sizeof(LNode));
    S = P->next;
    e = S->data;

    P->next = S->next;

    free(S);
    S->next = NULL;

    return true;
}


//插入节点
bool ListInsert(LinkList &L, int i, int e) {
    LNode *P = L;
    int j = 0;

    while (P->next != NULL && j < i - 1) {
        P = P->next;
    }

    if (P = NULL) return false;

    LNode *S = (LNode *) malloc(sizeof(LNode));
    S->data = e;
    S->next = P->next;
    P->next = S;

    return true;
}


//按值查找
LNode *LocateElem(LinkList &L, int e) {
    LNode *P = L;
    int i = 0;
    while (P->next != NULL && P->data != e) {
        P = P->next;
    }
    return P;
}


//按序号查找，返回该节点的指针
LNode *GetELem(LinkList &L, int i) {
    LNode *P = L;
    int j = 0;
    while (P->next != NULL && j < i) {
        P = P->next;
        j++;
    }
    return P;
}


//求表长
int Length(LinkList &L) {
    int length = 0;
    LNode *P = L;
    while (P->next != NULL) {
        length++;
    }
    return length;

}


bool InitList(LinkList &L) {    //带头结点的单链表
    L = (LNode *) malloc(sizeof(LNode));
    L->next = NULL;
    return true;
}

bool InitList2(LinkList &L) {    //不带头结点的单链表
    L = (LNode *) malloc(sizeof(LNode));
    L = NULL;
    return true;
}


int main() {


    LinkList L;

    //初始化单链表
    bool flag = InitList(L);
    if (flag) {
        printf("链表L初始化成功\n");
    }


    //头插法建立链表L
    int Length = 20;
    LinkList L2 = List_HeadInsert(L2, Length);

    //打印出来看看效果
    PrintList(L2);


    return 0;
}

*/