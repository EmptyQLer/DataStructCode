//
// 2013 ��ͳ�� ���������Ԫ�أ�ĳһԪ�س��ֵ� �����������鳤�ȵ�һ�룩
//

/*
#include <stdio.h>

int FIndMainElem(int a[],int st[],int L1,int L2){
    //˼·������a���飬��Ԫ��ֵ��Ϊst��index,����һ��st[index]��Ӧ+1��������st,�ҵ����ֵ��Ӧ��index��Ϊ����
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
    //����
    int L1 =10,L2 =100;
    int a[] ={6,6,6,1,20,40,50,20,2,4,6,6,6,6,6,6};
    int st[100] ={0};

    int res = FIndMainElem(a,st,L1,L2);
    if (res != -1){
        printf("a�������Ԫ���ǣ� %d\n",res);
    } else{
        printf("a��������Ԫ��\n");
    }

    return 0;
}
*/