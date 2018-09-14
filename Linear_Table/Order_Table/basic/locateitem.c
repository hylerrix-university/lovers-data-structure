//date:9月12
//问题:在顺序表中查找第一个元素值等于e的元素，并返回其位序
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>//为了引入bool类型
#define MaxSize 100//表长度的初始定义
typedef int ElemType;// 自定义元素类型别名
//定义顺序表
typedef struct {
    ElemType data[MaxSize];
    int length;
} SeqList;

void InitList (SeqList *L);
void GiveValue (SeqList *L);
int LocateElem (SeqList *L,ElemType e);
//主函数
int main() {
    SeqList L;
    InitList(&L);
    GiveValue(&L);//顺序表赋值
    ElemType e;
    int i;
    printf("输入需要查找的元素的值:\n");
    scanf("%d",&e);
    LocateElem(&L,e);
    return 0;   
}

//初始化顺序表
void InitList (SeqList *L) {
    L->length=0;
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
int LocateElem (SeqList *L,ElemType e) {
    int i;
    for(i=0; i<L->length; i++) 
        if(L->data[i] == e)
            return i+1;
    return 0;
} 