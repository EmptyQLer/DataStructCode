//
// 页面地址转换：将逻辑地址转换成物理地址
//

/*

#include <stdio.h>
#include <stdlib.h>

#define PageSize 1024  //1k


bool ChangAddress(int vir[],int rea[],int len,int virAddress,int &reaAddress){
    //vir[],rea[]分别记录逻辑页号和实际页号，两者对应位置元素一一对应

    //将逻辑地址分解为 页号+偏移地址的形式
    int pageNum =virAddress/PageSize;
    int pianYiAdd =virAddress - PageSize*pageNum;

    //进行地址转换
    //尝试找到对应页号
    int flag =0;
    for (int i = 0; i < len; ++i) {
        if (pageNum == vir[i])   {
            flag = i;
            break;
        }
    }

    //找到了的话，flag不为0,flag =0即为没找到
    if (flag == 0){
        printf("可能页面越界中断，也可能输入的逻辑地址不合法！\n");
        return false;
    } else{
        reaAddress =rea[flag] *PageSize +pianYiAdd;
        printf("实际地址为：%d\n",reaAddress);
        return true;
    }

}


int main(){
    //举例
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
