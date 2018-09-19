#include<stdio.h>
#include<stdlib.h>
//定义结构体类型
struct student {
    char name[20];
    int age;
};
int main() {
    struct student student1 = {"student_name1",20};//定义结构体变量并初始化
    //printf("%s %d\n",student1.name,student1.age);//引用结构体变量
    //printf("%s %d\n",student1.name,++student1.age);//对结构体变量进行运算
    struct student student2[2] = {{"student_name2",19},{"student_name3",23}};//定义结构体数组
    //printf("%s %d\n",student2[0].name,student2[1].age);

    struct student * s;//定义结构体指针s
    s = &student1;

    struct student * p;//定义结构体指针p
    p = student2;//等价于p->name或者student2[0].name

    printf("%s %s\n",(*s).name,s->name);//(*s).name等价于s->name或student1->name
    printf("%s\n",p->name);
    p++;//即student2 +1 等价于 student2.name
    printf("%s\n",p->name);

    return 0;
}