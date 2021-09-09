#include <iostream>
using namespace std;

//1. 顺序表进行元素逆置
int reverse_SXB(int a[],int left,int right,int h){ //定义数组a，左指针，右指针和需要逆置的元素个数h
    int temp; //定义临时变量
    for (int i=left, k=right; i<k; ++i, --k)
    {
        temp=a[i];
        a[i]=a[k];
        a[k]=temp;
    }
}

// 2. 单链表进行逆置
typedef struct LNode{ //定义单链表
    int data;
    struct LNode *next;
}LNode, *LinkList;

LinkList reverse_DLB(LinkList L){ 
    LNode *d, *p, *q; //定义临时工作结点，本结点，下一个结点
     while(p->next!=q){
         p->next=d;
         p->next=d->next;
         d->next=q->next;
         q->next=d;
     }
    return L; //逆置完成后传出新链表L
}