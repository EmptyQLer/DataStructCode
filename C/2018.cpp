//
// 2018ͳ���� �ҵ�������δ���ֵ���С������
//

/*
#include <stdio.h>

int FindElem(int a[], int st[], int L1, int L2) {
    //˼·����������a,����Ԫ��ֵ��Ϊst��index(indexӦ�ô��� 0)������ֵ��λ1������st,�ҵ�����0�Ķ�ӦԪ��ֵΪ1����Сindex ��Ϊ����
    for (int i = 0; i < L1; ++i) {
        if (a[i] >= 0)  st[a[i]] = 1;
    }

    for (int i = 1; i < L2; ++i) {
        if (st[i] == 0) return i;
    }

    return -1;
}

int main() {
    //����
    int L1 = 100, L2 = 1000;
    int a[100] = {0, 2, 20, 40, 10};
    int st[1000] = {0};

    int res = FindElem(a, st, L1, L2);
    if (res != -1) {
        printf("a����δ���ֵ���С�������ǣ�%d\n", res);
    } else {
        printf("a�������޴�\n");
    }

    return 0;
}

*/