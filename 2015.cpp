//
//  删除单链表里 节点数据域绝对值相等的节点（保留第一次出现的节点）
//

/*
#include <stdio.h>
#include <math.h>

typedef int Eelm;
typedef struct Lnode{
    Eelm data;
    struct Lnode *next;

}Lnode ,*LinkList;

void SovleProblem(LinkList &L, Eelm st[]){
    Lnode *p =L ->next, *pre =L;

    while (p ->next != NULL){
        //判断是否第一次出现
        if(st[abs(p->data) == 0])    st[abs(p ->data)] =1;     //是第一次出现——保留。并且标记为已出现
        else {
            //删除节点
            pre ->next =p ->next;
            Lnode *q = p;
            p = p->next;
            free(q);
            q =NULL;

            //退出此次循环
            continue;
        }

        p = p ->next;
        pre =pre ->next;
    }
}

 */