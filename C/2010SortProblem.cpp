//
// 2013 408ͳ����
//

/*
#include <stdio.h>

#define MAXNUM =150

void MoveElem(int a[], int st[], int n, int p) {
    //�����Ԫ��ѭ�������� p λ
    for (int i = 0; i < p; ++i) {       // a��ǰ p��Ԫ�ظ��Ƹ� st
        st[i] = a[i];
    }

    for (int i = p; i < n; ++i) {       // a�ĺ� n-p��Ԫ��������ǰ�ƶ� p��λ��
        a[i - p] = a[i];
    }


    for (int i = 0; i < p; ++i) {     //a �ĺ�p��Ԫ���� st����
        a[i+n-p] = st[i];
    }

    //��һ����������ôд
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
        printf("%d , ��%d��λ��\n",a[i], i+1);
    }

    return 0;
}
*/