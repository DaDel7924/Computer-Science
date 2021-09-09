#include <iostream>
using namespace std;

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode, *LinkList;

//Part 1--用一次遍历找到倒数第k个元素
LinkList finddaoKnode(LinkList head,int k){
    //核心代码-start
    LNode *p=head, *q=head;
    int count=0;  //设定辅助计数器
    bool go = false;      //定义go为假，目的为了让q先走k步后让p再走
    while(q->next!=NULL){
        q = q->next;        //q往后走一步
        count++;            //计数+1
        if (count==k)
            go = true; // q先走k步，k步后p指针开始运行
        if(go)
            p = p->next;
    }
    //核心代码-end
    if(p==head)
        printf("这个链表长度小于%d，并不存在倒数第k个结点\n", k);
    else
        printf("倒数第%d个结点的值为：%d\n", k, p->data);
    return p;   //返回p所指向的结点
}

//Part 2--一次遍历寻找到n/2位置上的结点
LNode * findMidNode(LinkList head){
    LNode *p=head, *q=head;
    while(q->next!=NULL){
        q = q->next;        
        if (q->next!=NULL)
            q = q->next;    //q先向后走两步
        p=p->next;   //p往后走一步
    }
    if(p==head)
        printf("Something went wrong. Please try again");
    else
        printf("中间结点的值为：%d\n", p->data); //q结点得到NULL值跳出循环后，p为中间结点
    return p;
}

//附：一次遍历寻找到n/z位置上的结点(形似Part 1)
LNode * findonezthNode(LinkList head, int z){
    LNode *p=head, *q=head;
    int count2=0;
    while(q->next!=NULL){
        q = q->next;
        count2++; //q先向后走z步
        if(count2==z)
         p=p->next;  //p往后走一步
         count2=0;  //同时计数器置0
    }
    if(p==head)
        printf("Something went wrong. Please try again");
    else
        printf("结点的值为：%d\n", p->data);
    return p;
}
