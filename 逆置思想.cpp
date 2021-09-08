#include <iostream>
using namespace std;

//1. 顺序表进行元素逆置
int reverse_SXB(int a[],int left,int right,int h){ //定义数组a，左指针，右指针和需要逆置的元素个数h
    int temp; //定义临时变量
    for (int i=left, k=right; i<left+h && i<k; i++, k--)
    {
        temp=a[i];
        a[i]=a[k];
        a[k]=temp;
    }
}

// 2. 单链表进行逆置
int reverse_DLB(){
    for()
    {
       
    }
}