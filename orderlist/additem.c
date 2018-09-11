//在顺序表的第i个位置插入新元素，插入失败，返回false,插入成功，表长度增加1，返回true
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>//为了引入bool类型
#define InitSize 100//表长度的初始定义
typedef int ElemType;//自定义元素类型别名
//定义顺序表
typedef struct{
    ElemType *data;
    int MaxSize,length;
}SeqList;
//初始化顺序表
void InitList(SeqList *L){
    L->length=0;
    return;
}
bool ListInsert(SeqList *L){
    ElemType e;
    int i;
    if(i<1 || i>L.length+1)
        return false;//判断i的范围是否有效
    if(L.length >= MaxSize)
    return false;//判断存储空间是否已满
    //插入值
    for(int j=L.length;j>=i;j--)//将第i个元素及其之后的元素后移
    {
        L.data[j] = L.data[j-1];
        L.data[i-1] = e;//在位置i处放入e
        L.length++;
        return true;
    }
}
void ShowList(SeqList *L){
    int i;
    printf("当前的顺序表为:\n");
    for(i=0;i<L->length;i++){
        printf("%d",L->data[i]);
    }
}
int main(){
    SeqList L;
    InitList(&L);
    GiveValue(&L);//顺序表赋值
    ElemType e;
    int i;
    printf("输入需要插入的元素值以及需要插入的位置:\n");
    scanf("%d %d",&e&i);
    ListInsert(&L,&e,&i);//插入值
    ShowList(&L);
}