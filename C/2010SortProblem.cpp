//
// 2013 408统考题
//

/*
#include <stdio.h>

#define MAXNUM =150

void MoveElem(int a[], int st[], int n, int p) {
    //数组各元素循环右左移 p 位
    for (int i = 0; i < p; ++i) {       // a的前 p个元素复制给 st
        st[i] = a[i];
    }

    for (int i = p; i < n; ++i) {       // a的后 n-p个元素依次向前移动 p个位置
        a[i - p] = a[i];
    }


    for (int i = 0; i < p; ++i) {     //a 的后p个元素由 st补充
        a[i+n-p] = st[i];
    }

    //这一步还可以这么写
    for (int i = 0,j =n-p; i < p; ++i,++j) {
        a[j] =st [i];
    }
}

int main() {
    int a[100];
    for (int i = 0; i < 100; ++i) {
        a[i] = i + 1;
    }

    int st[100];
    MoveElem(a, st, 100, 20);

    for (int i = 0; i < 100; ++i) {
        printf("%d , 第%d个位置\n",a[i], i+1);
    }

    return 0;
}
*/