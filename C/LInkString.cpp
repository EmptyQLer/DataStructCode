//
// 链串：串的链式存储
//

#include <stdio.h>
#include <stdlib.h>


//类型声明
typedef struct Lnode {
    //这里以一个节点存储一个字符举例
    char data;
    struct Lnode *next;

} Lnode, *LinkString;


//生成串
void LinkStriAssign(LinkString &S, char cstr[]) {
    //首先给S内存空间
    S = (Lnode *) malloc(sizeof(Lnode));
    S->next = NULL;

    //采用头尾插法，生成串
    Lnode *r, *p = S;
    int i = 0;
    while (cstr[i] != '\0') {
        r = (Lnode *) malloc(sizeof(Lnode));         //该单链表没有头结点
        r->data = cstr[i];
        r->next = NULL;

        p->next = r;
        p = r;
        i++;
    }
}


//销毁链串
void Destroy(LinkString &S) {       //采用前驱指针和指针同行
    //遍历时，释放一个个节点
    Lnode *p = S->next;
    Lnode *pre;
    while (pre != NULL) {
        free(p);
        pre = p;
        p = p->next;
    }
    //就剩一个节点了
    pre = NULL;
    free(pre);
    p = NULL;
}


//串的复制（将一个链串cstr的字符复制给一个空串S）
void LinkStrCopy(LinkString &S, LinkString cstr) {
    //先开辟内存空间
    S = (Lnode *) malloc(sizeof(Lnode));
    S->next = NULL;

    Lnode *r1 = S, *r2 = cstr;
    Lnode *p;
    while (r2 != NULL) {
        //尾插法建立链串，同时cstr将对应位置的节点数据域数据复制给S节点的数据域
        p = (Lnode *) malloc(sizeof(Lnode));
        p->data = r2->data;
        p->next = NULL;

        r1->next = p;
        r1 = p;

        r2 = r2->next;
    }
}


//判断两串是否相等
bool IsEqualLinkString(LinkString S , LinkString cstr){
    //相等条件：串长度相等，且对应位置字符相同
    //遍历两链串，对应位置的节点数据域进行比较，而且应该同时到达表尾
    Lnode *r1 =S,*r2 =cstr;
    while (r1 !=NULL && r2 !=NULL){
        if (r1->data != r2->data)   return false;

        r1 =r1->next;
        r2 =r2->next;
    }
    //遍历完了：     有可能同时到表尾         也有可能其中一个链串到表位，另一个还未到表尾
    if (r1->next == r2->next ==NULL)    return true;
    else    return false;
}


//求串长：省略


//连接两串，省略

//取子串
bool SubLinkStr(LinkString S,LinkString &resStr,int i ,int j){      //从第i个位置开始，取出长度为j的子串
    //判断入参是否合法  i不小于1，且i+j应该不大于串的长度（这个暂时判断不了，因为该串以单链表形式存储无法直接获取表长，下面最后才判断）
    if (i<1)    return false;

    resStr =(Lnode *) malloc(sizeof(Lnode));
    resStr =NULL;

    Lnode *r1 =S,*r2 =resStr;

    //找到第i个位置对应节点
    int count =0;
    while (true){
        if (count == i-1) break;
        r1 =r1 ->next;
        count ++;
    }

    //从该节点开始到i+j个节点复制给resStr
    Lnode *p1 =r1,*p2;
    int count2 =0;
    while (p1 !=NULL){
        if(count == j-1) break;

        //尾插法
        p2 = (Lnode *) malloc(sizeof(Lnode));
        p2->next =NULL;
        p2->data =p1->data;

        r2->next =p2;
        r2 =p2;

        p1 =p1->next;
        count ++;
    }
    //遍历或取到j个节点后：有以下情况 i+j >S的长度，这显然不符要求，直接返回false;   i+j<=S的长度，符合要求返回true；
    if (count ==j -1)   return true;
    else    return false;

}





