#include<stdio.h>
//定义结构体类型
struct student {
    char name[20];
    int age;
};
int main() {
    struct student student1 = {"student_name1",20};//定义结构体变量并初始化
    printf("%s %d\n",student1.name,student1.age);//引用结构体变量
    printf("%s %d\n",student1.name,++student1.age);//对结构体变量进行运算
    struct student student2[2] = {{"student_name2",19},{"student_name3,20",23}};//定义结构体数组
    printf("%s %d\n",student2[0].name,student2[1].age);
    return 0;
}