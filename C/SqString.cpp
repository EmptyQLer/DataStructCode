//
// 字符串的顺序存储：顺序串
//

/*
#include <stdio.h>
#include <stdlib.h>

#define Maxsize 50


//类型声明
typedef struct SqStriing {
    char data[Maxsize];
    int length;
} SqStriing;


//判空串
bool IsEmptySqString(SqStriing S) {
    //只需判断串里字符是不是 结束标志即可（一个空串里没有任何字符，当然也不存在首个字符）
    return S.data[0] == '\0';

}


//串赋值（串）
void SqStrAssign(SqStriing &S, SqStriing cstr) {
    //遍历时赋值即可
    for (int i = 0; i < S.length; ++i) {
        S.data[i] = cstr.data[i];
    }

}


//串复制
bool SqStrCopy(SqStriing &S, SqStriing cstr) {
    //检查两串长度是否相等
    if (S.length != cstr.length)    return false;

    //遍历时赋值即可
    for (int i = 0; i < S.length; ++i) {
        S.data[i] = cstr.data[i];
    }
    return true;
}


//判两串是否相等
bool IsEqualStr(SqStriing S,SqStriing cstr){
    //相等条件：长度相等，且对应位置字符相同
    if (S.length != cstr.length)    return false;

    for (int i = 0; i < S.length; ++i) {
        if (S.data[i] != cstr.data[i])  return false;
    }
    return true;
}


//连接两串
void ContactStr(SqStriing &S, SqStriing cstr){
    //将cstr加在S之后即可
    for (int i = 0; i < cstr.length; ++i) {
        S.data[S.length+i] =cstr.data[i];
    }
    S.length +=cstr.length;

}


//求子串
bool SubStr(SqStriing S,SqStriing &resStr,int i,int j){
    //是这样的：主串S,resStr是接收求得的子串，i是起始位置，j是子串长
    //判S空串
    if (IsEmptySqString(S)) return false;

    //判断入参是否合法
    if (i<1 ||i+j>S.length) return false;

    int k =0,count =0;
    while (count == j){
        resStr.data[k] =S.data[i-1];
        count++;
    }

    return true;

}



//子串插入
bool InsertStr(SqStriing &S,SqStriing cstr,int i){      //第i个位置之前插入
    //判断i的合法性
    if (i<1 || i>S.length)  return false;

    //S对应第i个位置开始插入子串，注意S长度更新
    //腾出空用于插入子串
    for (int j =0,k =S.length-1; j < cstr.length; ++j,k--) {
        S.data[k+cstr.length] =S.data[k];
    }

    //腾出的空给子串用于赋值
    for (int j = 0,k =i-1; j < cstr.length; ++j,i++) {
        S.data[k] ==cstr.data[j];
    }

    return true;
}



//子串删除，子串替代，打印主串就不再写了（太简单）



*/






