//来自《啊哈算法》@尾插法
#include <stdio.h>
#include <stdlib.h>//里面已经包含了#include <malloc>

struct node {
    struct node *next;
    int data;
};

int main () {
    struct node *head,*p,*q,*t;
    int i,n,x;
    printf("输入要插入的元素的个数:\n");
    scanf("%d",&n);
    head = NULL;//头指针初始化
    printf("输入链表元素的值:\n");
    for(i=1; i<=n; i++) {
        scanf("%d",&x);//输入构成链表的元素
        p = (struct node *)malloc(sizeof(struct node));
        p->data = x;//将输入的数据存储到当前结点的data域中
        p->next = NULL;//当前结点的下一个结点为空
        if(head == NULL)
            head = p;//若这是第一个创建的结点,则头指针指向这个结点
        else
            q->next = p;//若不是第一个创建的结点，则将上一个结点的后继指针指向当前结点
        q = p;
    }
    t = head;
    while(t != NULL) {
        printf("%d ",t->data);
        t = t->next;
    }
    printf("\n");
    free(p);//p所指向的内存给释放掉
    return 0;
}