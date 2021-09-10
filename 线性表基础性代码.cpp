#include <iostream>
using namespace std;

//Part 1--定义单链表
typedef struct LNode{
    int data;
    struct LNode *next;
}LNode, *LinkList;

//Part 2--初始化单链表
bool InitList(LinkList &L) {
    L = (LNode *) malloc(sizeof(LNode));   //分配一个头结点
    if (L==NULL)
        return false;
    L->next = NULL;
    return true;
}

//输出链表相关的所有信息(带头结点)
void PrintList(LinkList L){
    LNode *p = L->next; //让指针先指向头节点
    int len = 0;        //设置计数器为0
    printf("L：头结点 —> ");
    while (p!=NULL){
        len++;          //单链表统计长度+1
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n链表长度 = %d\n", len);
}