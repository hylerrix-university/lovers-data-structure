//问题:查找单链表的第i个元素
//定义链表
typedef strcuct Node {
    ElemType data;
    strcut Node* next;
} Node;
typedef struct Node* LinkList;

//查找元素
Status GetElem(LinkList L,int i,ElemType *e) {
    int j = 1;
    LinkList p;
    p = L->next;
    while(p && j<i) {
        p = p->next;
        ++j;
    }
    if(!p || j>i) {
        return Error;
    }
    *e = p->data;
    return OK;
}