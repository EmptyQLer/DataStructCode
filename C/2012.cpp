//
// 寻找两单词的相同后缀的起始位置 单词用单链表顺序存储
//

/*
#include <stdio.h>

typedef char elem;
typedef struct Lnode {
    elem data;
    Lnode *next;
} Lnode, *LinkList;


void Search(LinkList L1, LinkList L2) {
    //求两链表长度
    Lnode *p = L1, *q = L2;
    int len1 = 1, len2 = 1;
    while (p->next != NULL) {
        p = p->next;
        len1++;
    }

    while (q->next != NULL) {
        q = q->next;
        len2++;
    }

    //接着从公共位置开始遍历两链表 ，并同时进行数据值比较
    if (len1 > len2) {
        int count = 0;
        while (p->next != NULL && p->data != q->data) {
            p = p->next;
            count++;

            if (count >= len1 - len2) {
                q = q->next;
            }
        }
    } else {
        int count = 0;
        while (p->next != NULL && p->data == q->data) {
            q = q->next;
            count++;

            if (count >= len1 - len2) {
                p = p->next;
            }
        }
    }
    printf("%p\n", p);
}

 */
