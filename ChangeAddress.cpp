//
// ҳ���ַת�������߼���ַת���������ַ
//

/*

#include <stdio.h>
#include <stdlib.h>

#define PageSize 1024  //1k


bool ChangAddress(int vir[],int rea[],int len,int virAddress,int &reaAddress){
    //vir[],rea[]�ֱ��¼�߼�ҳ�ź�ʵ��ҳ�ţ����߶�Ӧλ��Ԫ��һһ��Ӧ

    //���߼���ַ�ֽ�Ϊ ҳ��+ƫ�Ƶ�ַ����ʽ
    int pageNum =virAddress/PageSize;
    int pianYiAdd =virAddress - PageSize*pageNum;

    //���е�ַת��
    //�����ҵ���Ӧҳ��
    int flag =0;
    for (int i = 0; i < len; ++i) {
        if (pageNum == vir[i])   {
            flag = i;
            break;
        }
    }

    //�ҵ��˵Ļ���flag��Ϊ0,flag =0��Ϊû�ҵ�
    if (flag == 0){
        printf("����ҳ��Խ���жϣ�Ҳ����������߼���ַ���Ϸ���\n");
        return false;
    } else{
        reaAddress =rea[flag] *PageSize +pianYiAdd;
        printf("ʵ�ʵ�ַΪ��%d\n",reaAddress);
        return true;
    }

}


int main(){
    //����
    int vir[] ={0,1,2,3,4};
    int rea[] ={1,3,5,7,9};
    int len =5;

    int virAddres =2049;
    int reaAddress =-1;
    ChangAddress(vir,rea,len,virAddres,reaAddress);

    int virAddres2 =6000;
    ChangAddress(vir,rea,len,virAddres2,reaAddress);


}

*/
