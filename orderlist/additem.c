// 在顺序表的第i个位置插入新元素，插入失败，返回false,插入成功，表长度增加1，返回true
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>// 为了引入bool类型
#define MaxSize 100// 表长度的初始定义
typedef int ElemType;// 自定义元素类型别名
// 定义顺序表
typedef struct {
     ElemType data[MaxSize];
    int length;
} SeqList;

void InitList (SeqList *L);
void GiveValue (SeqList *L);
bool ListInsert (SeqList *L, ElemType e, int i);
void ShowList (SeqList *L);

//主函数
int main () {
    SeqList L;
    ElemType e;
    int i;
    
    InitList(&L);
    GiveValue(&L);//顺序表赋值
    ShowList(&L);

    printf("输入需要插入的元素值以及需要插入的位置:\n");
    scanf("%d %d",&e, &i);
    ListInsert(&L, e, i);//插入值
    ShowList(&L);
    return 0;
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

//插入值
bool ListInsert (SeqList *L,ElemType e,int i) {
    if (i < 1 || i > L->length+1)
        return false;//判断i的范围是否有效
    if(L->length >= MaxSize)
        return false;//判断存储空间是否已满
    //插入值
    for(int j = L->length; j >= i; j--)//将第i个元素及其之后的元素后移
        L->data[j] = L->data[j-1];
    L->data[i-1] = e;//在位置i处放入e
    L->length++;
    return true;
}

void ShowList (SeqList *L) {
    int i;
    printf("当前的顺序表为:\n");
    for(i=0; i < L->length; i++)
        printf("%d ", L->data[i]);
    printf("\n");
}