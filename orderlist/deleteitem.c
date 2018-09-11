//删除顺序表中第1个位置的元素，成功则返回true,并将被删除的元素用引用变量e返回，否则返回false
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
bool ListDelete(SqList *L){
    int i;
    ElemType e;
    if(i<1 || i>L.length)//判断i的范围
    return false;
    e = L.data[i-1];
    for(int j=i;j<l.length;j++){
        L.data[j-1] = L.data[j];
        L.length--;
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
    printf("输入需要删除的元素的位置:\n");
    scanf("%d",&i);
    ListDelete(&L,&i);
    ShowList(&L);
}