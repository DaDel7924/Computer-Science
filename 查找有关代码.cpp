#include <iostream>
#define MAXSIZE 255
using namespace std;

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode, *LinkeList;

typedef struct{  //定义字符串
    char ch[MAXSIZE];
    int length;
}SString;

//Part 1--顺序查找
int ShunXuSearch(int a[], int n){ //数组型
    int i;
    for(i=1; i<=n; i++)
    return a[i];
}

LNode *ShunXuSearch(LinkeList L, int c){  //单链表型
    int s=0;
    LNode *p=L->next;
    if (c=0)
     return L->next; //函数名加⭐以return具体值
    if (c<1)
     return NULL;
    while (p&&s<c)
    {
        p=p->next;
        s++;
    }
    return p;
}

//Part 2--折半查找*（仅适用于有序顺序表）*
int banSearch(int b[],int left, int mid, int right, int key){
    int mid;
    while(left<right){ //确保线性表长度大于1，小于返回错误值
        mid=(left+right)/2;
        if (b[mid]==key)
        return mid;
        else if (b[mid]>key)
            right=mid-1;
            else
            left=mid+1;
    }
    return 0; //查找失败
}

//Part-3 字符串匹配
int Index(SString A, SString B){ // 设置主串A和模式串B
    int o=1, p=1;  //设置扫描指针并赋值为1
    while(o<=A.length&&p<=B.length){
     if (A.ch[o]==B.ch[p]){//如果两串中字符相同
         o++;p++;
     }
     else{
         o=o-p+2;  //主串指针指到上一次匹配起点的下一个位置
         p=1;  //匹配串回到第一个指针
     }
    }
    if(p>B.length)  //证明匹配成功
    return o-B.length;
    else return 0;
}