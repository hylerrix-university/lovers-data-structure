#include<stdio.h>
#include<string.h>
//定义结构体类型student作为结点元素
struct student {
    char name[20];
    int age;
    struct student * next;//next指针变量:用于存放下一个结点的地址
};
int main() {
    struct student a,b,*head;//定义结构体成员变量作为链表的结点
    //初始化结构体成员变量
    strcpy(a.name,"name1");//st.name="123"为非法
    a.age = 20;
    strcpy(b.name,"name2");
    b.age = 21;

    //将初始化后的结构体成员变量连成链表

    head = &a;//结点a的起始地址赋值给头指针head
    a.next = &b;//结点b的起始地址赋值给a结点的next成员
    b.next = NULL;
    //输出链表
    struct student *p;
    p = head;
    while(p != NULL) {
        printf("%s,%d\n",p->name,p->age);
        p = p->next;
    }

    return 0;
}