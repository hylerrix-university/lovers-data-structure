//date:9月12日
//问题；将顺序表的所有元素逆置要求空间复杂度为1
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>// 为了引入bool类型
#define MaxSize 100// 表长度的最大限制
typedef int ElemType;// 自定义元素类型别名
// 定义顺序表
typedef struct {
     ElemType data[MaxSize];
    int length;
} SeqList;

void InitList (SeqList *L);
void GiveValue (SeqList *L);
void Reverse (SeqList *L);
void ShowList (SeqList *L);

//主函数
int main () {
    SeqList L;
    ElemType e;
    int i;
    InitList(&L);
    GiveValue(&L);//顺序表赋值
    ShowList(&L);
    Reverse(&L);
    printf("逆置后:\n");
    ShowList(&L);
}

//初始化顺序表
void InitList (SeqList *L) {
    L->length = 0;
    return;
}

//给顺序表赋值
void GiveValue (SeqList *L) {
    int value;
    int i = 0;
    while(true) {
        printf("输入顺序表的值:\n");
        scanf("%d", &value);
        if (value == 0) { break; }
        L->data[i++] = value; // 输入的值存在数组中
        L->length++; // 根据输入的值让顺序表的长度自增
    }
}
//逆置顺序表
void Reverse (SeqList *L) {
    ElemType temp;
    int i;
    for(i=0; i<L->length/2; i++)
    {
        temp = L->data[i];
        L->data[i] = L->data[L->length-i-1];
        L->data[L->length-i-1] = temp;
    }
}
//输出顺序表
void ShowList (SeqList *L) {
    int i;
    printf("当前的顺序表为:\n");
    for(i=0; i < L->length; i++)
        printf("%d ", L->data[i]);
    printf("\n");
}
/*
问题:
1-为什么不可以在printf里直接调用函数输出？
2-为什么程序的空间复杂度为1


*/