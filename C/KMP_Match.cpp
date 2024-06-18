//
// KMP算法实现串的匹配
//

#include <stdio.h>
#include <stdlib.h>

#define Maxsize 50


//类型声明
typedef struct SqStriing {
    char data[Maxsize];
    int length;
} SqString;


//设计KMP算法前，先写一下暴力的匹配算法
int Index(SqString S, SqString cstr) {        //也可以是 BF()
    //直接就是双指针遍历S 和 cstr
    int i = 0, j = 0;
    while (i < S.length && j < cstr.length) {
        if (S.data[i] == cstr.data[j]) {
            i++;
            j++;
        } else {     //回到一定位置重新匹配（画图容易明白）
            i = i - j + 1;
            j = 0;
        }
    }
    //遍历完了，可能找到，也可能没找到
    if (j >= cstr.length) return i - cstr.length;        //成功匹配，返回模式串在主串中的起始引索
    else return -1;               //没找到

}

//但我觉得上面暴力算法写的有些奇怪，这是我的另一个思路
int BF(SqString S, SqString cstr) {
    //直接就是双变量的循环
    int i = 0, j = 0;
    for (i = 0, j = 0; i < S.length && j < cstr.length; i++, j++) {
        if (S.data != cstr.data){
            i = i-j;
            j =-1;
        }
    }
    if (j =S.length-1)  return i-j;      //匹配成功,返回S对应引索

    return -1;          //其他情况都是匹配失败

}




//下面是KMP算法
int KMP_Algorithm(SqString S, SqString cstr){
    


}

















