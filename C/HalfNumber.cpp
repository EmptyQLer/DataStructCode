//
// 找到两个数组合并的中位数（两数组自身有序）
//
/*
#include <stdio.h>

int SearchHalfNumber(int a[], int b[], int L) {
    int i = 0, j = 0, count = 1;
    while (i <= L && j <= L) {
        int res;
        if (a[i] <= b[j]) {
            i++;
            res = a[i];
        } else {
            j++;
            res = b[j];
        }
        count++;
        if (count == L) return res;
    }
    return -1;
}

int main() {
    int L = 10;
    int a[10], b[10];
    for (int i = 0; i < 10; ++i) {
        a[i] = i + 1;
        b[i] = i + 2;
    }
    int res = SearchHalfNumber(a,b,L);
    printf("结果是：%d\n",res);
}
*/
/*
#include <stdio.h>

int FindHalfNumber(int a[], int b[], int L) {
    if (L <= 0) return -1;

    int res = -1;
    int i = 0, j = 0;
    while (i <= L && j <= L) {
        if (a[i] <= b[j]) {
            i++;
            res = a[i];
        } else {
            j++;
            res = b[j];
        }
        if (i+1+j+1 ==L)   return res;
    }
    return -1;
}

int main() {

    int a[10], b[10];
    for (int i = 0; i < 10; ++i) {
        a[i] = i + 1;
        b[i] = i + 2;
    }

    int res = FindHalfNumber(a, b, 10);
    printf("中位数是： %d\n", res);

    return 0;
}

*/






















