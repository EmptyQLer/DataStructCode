//
// 2013 年统考 求数组的主元素（某一元素出现的 次数大于数组长度的一半）
//

/*
#include <stdio.h>

int FIndMainElem(int a[],int st[],int L1,int L2){
    //思路：遍历a数组，将元素值作为st的index,出现一次st[index]相应+1；最后遍历st,找到最大值对应的index即为所求
    for (int i = 0; i < L1; ++i) {
        st[a[i]]++;
    }

    int maxElem =st[a[0]];
    for (int i = 0; i < L2; ++i) {
        if(maxElem <= st[i])
            maxElem =i;
    }

    if (maxElem > L1/2){
        return maxElem;
    } else{
        return  -1;
    }
    return  -1;
}

int main(){
    //举例
    int L1 =10,L2 =100;
    int a[] ={6,6,6,1,20,40,50,20,2,4,6,6,6,6,6,6};
    int st[100] ={0};

    int res = FIndMainElem(a,st,L1,L2);
    if (res != -1){
        printf("a数组的主元素是： %d\n",res);
    } else{
        printf("a数组无主元素\n");
    }

    return 0;
}
*/