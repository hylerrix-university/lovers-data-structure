//问题:尾插法/头插法创建单链表

#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
//定义结点类型
typedef struct Node {
    ElemType data;
    struct Node* next;
} Node, *LinkList;

LinkList CreatList1(void);
void PrintList();

//主函数
int main() {
    int i,n,a;
    LinkList head = NULL;
    printf("输入需要插入的元素总个数\n");
    scanf("%d",&n);
    head = CreatList1();
    PrintList(head);
    return 0;
}
//尾插法建立单链表
LinkList CreatList1(void) {
   //定义头指针并初始化
   LinkList *head,*p,*q,*t;
   int i,n,a;
   head = NULL;
   //循环读入n个数
   for(i=1; i<=n; i++) {
        scanf("%d",&a);//输入具体元素
        //动态申请一个空间，用来存放一个结点，并用临时指针p指向中国结点
        p = (struct LinkList *)malloc(sizeof(LinkList));
        p->data = a;//将数据存储到当前结点的data域中
        p->next = NULL;//设置当前结点的下一个结点为空
        if(head == NULL) 
            head = p;//如果这是第一个创建的结点，则将头指针指向这个结点
        else
            q->next = p; //如果不是第一个，则将上一个结点的后继指针指向当前结点
            q = p; //指针q也指向当前结点
   }

}


//打印单链表的值

void PrintList(LinkList head) {
    LinkList t;
    t = head;
    while(t != NULL) {
        printf("%d",t->data);
    } 
    putchar('\n');
}

/*问题

1-如何释放动态申请的空间(free命令)




*/
