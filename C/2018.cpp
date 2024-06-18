//
// 2018统考题 找到数组里未出现的最小正整数
//

/*
#include <stdio.h>

int FindElem(int a[], int st[], int L1, int L2) {
    //思路：遍历数组a,将其元素值作为st的index(index应该大于 0)，将其值复位1；遍历st,找到大于0的对应元素值为1的最小index 即为所求
    for (int i = 0; i < L1; ++i) {
        if (a[i] >= 0)  st[a[i]] = 1;
    }

    for (int i = 1; i < L2; ++i) {
        if (st[i] == 0) return i;
    }

    return -1;
}

int main() {
    //举例
    int L1 = 100, L2 = 1000;
    int a[100] = {0, 2, 20, 40, 10};
    int st[1000] = {0};

    int res = FindElem(a, st, L1, L2);
    if (res != -1) {
        printf("a数组未出现的最小正整数是：%d\n", res);
    } else {
        printf("a数组无限大\n");
    }

    return 0;
}

*/