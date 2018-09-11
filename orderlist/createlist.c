// 创建一个顺序表，初始化，赋值以及打印输出
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MaxSize 100 // 表长度的初始定义

typedef int ElemType; // 自定义元素类型别名

// 定义顺序表
typedef struct {
    ElemType data[MaxSize];
    int length;
} SeqList;

void InitList (SeqList *L);
void GiveValue (SeqList *L);
void ShowList (SeqList *L);

int main () {
    SeqList L;
    InitList(&L);
    GiveValue(&L);//顺序表赋值
    ShowList(&L);
    return 0;
}

// 初始化顺序表
void InitList (SeqList *L) {
    L->length = 0;
    return;
}

// 给顺序表赋值
void GiveValue (SeqList *L) {
    int value;
    int i = 0;
    while(true)
    {
        printf("输入顺序表的值:\n");
        scanf("%d",&value);
        if (value == 0) { break; }
        L->data[i++] = value; // 输入的值存在数组中
        L->length++; // 根据输入的值让顺序表的长度自增
    }
}

// 打印顺序表
void ShowList (SeqList *L) {
    int i;
    printf("当前的顺序表为:\n");
    for(i=0; i<L->length; i++){
        printf("%d", L->data[i]);
    }
    printf("\n");
}