// 问题:尾插法/头插法创建单链表

#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
// 定义结点类型
typedef struct LNode {
    ElemType data;
    struct LNode *next;
} LNode, *LinkList;

// 头插法创建链表
LinkList CreateList1 (LinkList L);
// // 尾插法创建链表
// LinkList CreateList2 (LinkList L);
// 打印链表
void ShowLink (LinkList L);

int main () {
    LinkList L;
    int x;
    L = CreateList1(L);
    ShowLink(L);
}

LinkList CreateList1 (LinkList L) {
    LNode *s;
    int x;
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    scanf("%d", &x);
    while (x != 9999) {
        s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d", &x);
    }
    return L;
}

// LinkList CreateList2 (LinkList L) {
//     int x;//插入的值
//     L = (LinkList)malloc(sizeof(LNode));
//     LNode *s,*r = L;
//     scanf("%d",&x);
//     while(x!=999) {
//         s = (LNode *)malloc(sizeof(LNode));
//         s->data = x;
//         r->next = s;
//         r = s;
//         scanf("%d",&x);
//     }
//     r->next = NULL;
//     return L;
// }

// 输出
void ShowLink (LinkList L) {
    LNode *t = L->next;
    while (t != NULL) {
        printf("%d\n", t->data);
        t = t->next;
    }
}