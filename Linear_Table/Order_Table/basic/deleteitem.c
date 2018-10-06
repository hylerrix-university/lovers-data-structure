//date:9月12
//删除顺序表中第1个位置的元素，成功则返回true,并将被删除的元素用引用变量e返回，否则返回false
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>//为了引入bool类型
#define MaxSize 100//表长度的初始定义
typedef int ElemType;// 自定义元素类型别名
//定义顺序表
typedef struct{
    ElemType data[MaxSize];
    int length;
} SeqList;

void InitList (SeqList *L);
void GiveValue (SeqList *L);
bool ListDelete (SeqList *L,int i);
void ShowList (SeqList *L);
//主函数
int main() {
    SeqList L;
    InitList(&L);
    GiveValue(&L);//顺序表赋值
    ElemType e;
    int i;
    printf("输入需要删除的元素的位置:\n");
    scanf("%d",&i);
    ListDelete(&L,i);
    ShowList (&L);
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
//删除指定元素
bool ListDelete (SeqList *L,int i) {
    ElemType e;
    if(i<1 || i>L->length)//判断i的范围
    return false;
    e = L->data[i-1];
    for(int j=i;j<L->length;j++) {
        L->data[j-1] = L->data[j];
    }
     L->length--;
     return true;
}
//输出顺序表
void ShowList (SeqList *L) {
    int i;
    printf("删除元素后当前的顺序表为:\n");
    for(i=0;i<L->length;i++) {
        printf("%d ",L->data[i]);
    }
    printf("\n");
}

/*问题:
1-如何单独返回被删除的元素的值
2-如何区别顺序表的位序和数组下标
* 数组下标从0开始，顺序表位序从1开始
* 待补充


*/