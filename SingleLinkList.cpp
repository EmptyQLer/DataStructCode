//
// ��������ʽ�洢�����Ա�
//

/*
#include <stdio.h>
#include <stdlib.h>


typedef struct LNode {
    int data;
    struct LNode *next;

} LNode, *LinkList;


//���ٵ�����
void DestroyList(LinkList &L) {
    //����ǰ��ָ���ָ��ͬ�в���
    LNode *pre = L;
    LNode *p = L;

    while (p != NULL) {
        free(pre);
        pre = p;
        p = p->next;
    }
    //��ʣһ���ڵ�
    p = NULL;
    free(pre);
    pre = NULL;
}


//��ӡ����ڵ��ֵ
void PrintList(LinkList &L) {
    LNode *P = L;

    int i = 2;
    P = P->next;
    while (P->next != NULL) {
        printf("�ڵ㣺 %d ��ֵΪ�� %d\n", i, P->data);
        i++;
        P = P->next;
    }

}


//β�巨����������
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


//ͷ�巨����������
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


//ɾ���ڵ�
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


//����ڵ�
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


//��ֵ����
LNode *LocateElem(LinkList &L, int e) {
    LNode *P = L;
    int i = 0;
    while (P->next != NULL && P->data != e) {
        P = P->next;
    }
    return P;
}


//����Ų��ң����ظýڵ��ָ��
LNode *GetELem(LinkList &L, int i) {
    LNode *P = L;
    int j = 0;
    while (P->next != NULL && j < i) {
        P = P->next;
        j++;
    }
    return P;
}


//���
int Length(LinkList &L) {
    int length = 0;
    LNode *P = L;
    while (P->next != NULL) {
        length++;
    }
    return length;

}


bool InitList(LinkList &L) {    //��ͷ���ĵ�����
    L = (LNode *) malloc(sizeof(LNode));
    L->next = NULL;
    return true;
}

bool InitList2(LinkList &L) {    //����ͷ���ĵ�����
    L = (LNode *) malloc(sizeof(LNode));
    L = NULL;
    return true;
}


int main() {


    LinkList L;

    //��ʼ��������
    bool flag = InitList(L);
    if (flag) {
        printf("����L��ʼ���ɹ�\n");
    }


    //ͷ�巨��������L
    int Length = 20;
    LinkList L2 = List_HeadInsert(L2, Length);

    //��ӡ��������Ч��
    PrintList(L2);


    return 0;
}

*/