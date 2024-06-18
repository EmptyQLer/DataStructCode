//
// 输出 单链表倒数第k个节点对应数据值
//

/*
#include <stdio.h>

typedef int elem;
typedef struct Lnode {
    elem data;
    Lnode *next;
} Lnode, *LinkList;

int SovleProbelm(LinkList L,int k){

    if(k<1) return 0;

    //双指针遍历
    Lnode *p =L, *q =L;

    int count =0;
    while (q->next ==NULL ){
        q = q->next;
        count ++;
        if (count >= k){
            p = p ->next;
        }
    }

    if (count <k)   return 0;
    else    printf("该节点数据域为： %d\n",p ->data);
    return 1;

}

int main(){
    //举例
    LinkList L;


    return  0;
}
*/