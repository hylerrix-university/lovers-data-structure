//问题:头插法创建单链表

#include<stdio.h>
#include<stdlib.h>
typedef ElemType;
//定义结点类型
typedef struct Node {
    ElemType data;
    struct Node* next;
} Node, *LinkList;
void CreatList1(LinkList *L);
//主函数
void main() {
    int x;//插入的元素
    
}
//建立单链表
void CreatList1(LinkList *L) {
    Node *s;
    int x;
    L = (LinkList)malloc(sizeof(Node));//创建头结点
    L->next = NULL; //初始化链表为空链
    printf("输入结点的值:\n");
    scanf("&d",&x);
    while(x != 0) {//输入0表示输入结束
        s = (Node*)malloc(sizeof(Node));//创建新结点
        s->data = x;
        L->next = s;
        scanf("%d",&x);
    }
    return L;
}


//打印单链表的值


