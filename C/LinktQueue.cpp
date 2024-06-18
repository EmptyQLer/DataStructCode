//
// ���е���ʽ�洢�������� ������ͷָ���βָ��ĵ�����
//

/*
#include <stdio.h>
#include <stdlib.h>

#define  MaxSize 50

//�����е���������
typedef int ELem;
typedef struct Lnode{       //�����нڵ�
    //����
    ELem data;
    //���ָ��
    struct Lnode *next;

}Lnode;

typedef struct {
    //���׶�βָ��
    Lnode *front ,*rear;

}LinkQueue;


//��ʼ������ͷ��㣩
void InitLinkQueue(LinkQueue &Q){
    //ֻ���½�һ��ͷ�ڵ㣬�����׶�βָ��ָ���ͷ�ڵ㼴��
    Lnode *head =(Lnode*)malloc(sizeof(Lnode));
    Q.front =Q.rear =head;
    Q.front ->next =NULL;
}


//�п�
bool IsEmptyLinkQueue(LinkQueue Q){
    //��Ϊ��ͷ�ڵ㣬���׶�βָ��ָ��ͬһ�ڵ�ʱΪ��
    return Q.front == Q.rear;
}


//���
bool EnLinkQueue(LinkQueue &Q,ELem e){
    //�����ж������У���Ϊ�����в������������

    //����β�巨���½�һ���ڵ��¼���Ԫ��ֵ��֮�󽫶�βָ��ĺ��ָ��ýڵ㣬���¶�βָ���λ��
    Lnode *S =(Lnode*)malloc(sizeof(Lnode));
    S->data =e;
    S->next =NULL;

    Q.rear ->next =S;
    Q.rear =S;

    return true;
}


//����
bool DeLinkQueue(LinkQueue &Q, ELem &e){
    //�п�
    if (IsEmptyLinkQueue(Q))    return false;

    //�½��ڵ�ָ�����ָ���̽ڵ㣬����ָ����ָ�����ָ���̽ڵ�ĺ�̣�Ҫ���ӵĽڵ�ĺ�̽ڵ㣩���ͷų��ӽڵ���ڴ�ռ�
    //ע�⣺��������н�һ���ڵ�ʱ���ӣ����Ӻ�Ӧ�ý���βָ������ָ��ͷ�ڵ�
    Lnode *P =Q.front ->next ;
    e= P->data;

    Q.front ->next =P ->next;
    if ( P==Q.rear)    Q.rear =Q.front;

    free(P);
    P =NULL;

    return true;
}


//����������
void CreateLinkQueue(LinkQueue &Q){
    int n =0;
    printf("������Ҫ���ٶ���Ԫ�ظ�����\n");
    scanf("%d",&n);

    int e =0;
    for (int i = 0; i < n; i++) {
        printf("����� %d ��Ԫ��ֵ\n",i+1);
        scanf("%d",&e);
        EnLinkQueue(Q,e);
    }

    printf("���д�����ɣ�**************************\n");
}


//��ӡ����Ԫ��
void PrintQueue(LinkQueue Q){
    //�п�
    if (IsEmptyLinkQueue(Q)) return;

    //���������У����Ԫ��ֵ
    Lnode *P =Q.front ->next;                           //�½��ڵ����ڱ���  ָ�������е�һ��������Ľڵ�
    while (P != NULL){
        printf("%d\t",P->data);
        P =P ->next;
    }
    printf("\n");
}


//��ȡ���ж���Ԫ��
bool GetQueueElem(LinkQueue Q, ELem &e){
    //�п�
    if (IsEmptyLinkQueue(Q))    return false;

    //��¼����ָ���̽ڵ������ֵ����
    e =Q.front ->next ->data;
    return true;

}

int main(){
    //����
    LinkQueue Q;

    //��ʼ��
    InitLinkQueue(Q);

    //��������
    CreateLinkQueue(Q);

    //��ӡ����Ԫ��
    PrintQueue(Q);

    //��ȡ��ͷԪ��ֵ
    int e =0;
    if (GetQueueElem(Q,e)) printf("��ͷԪ��Ϊ�� %d\n",e);
    else printf("��ǰ����Ϊ�գ��ȼ���Ԫ���ٳ���\n");


    //���
    printf("*********************���ʵ��************************\n");
    char flag ='a';
    do {
        printf("�������Ԫ��ֵ\n");
        int ex =0;
        scanf("%d",&ex);
        if(EnLinkQueue(Q,ex)) printf("%d,������\n",ex);
        else {
            break;
        }

        //��ӡ��ǰ����Ԫ��
        printf("��ǰ����Ԫ�أ�\t");
        PrintQueue(Q);

        while (getchar()!='\n');
        printf("������ӣ�Y or N:\n");
        scanf("%c",&flag);
    } while (flag == 'Y' || flag =='y');

    //����
    printf("*********************����ʵ��************************\n");
    char flag2 ='a';
    do {
        int ex2 = 0;
        if(DeLinkQueue(Q, ex2)) printf("%d ����\n", ex2);
        else{
            break;
        }

        //��ӡ��ǰ����Ԫ��
        printf("��ǰ����Ԫ�أ�\t");
        PrintQueue(Q);

        while (getchar()!='\n');
        printf("������ӣ�Y or N:\n");
        scanf("%c",&flag2);
    } while (flag2 == 'Y' || flag2 =='y');


    return 0;
}



*/



