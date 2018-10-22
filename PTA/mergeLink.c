#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(List C,int a[],int n); /* 读入有序链表 */
void Print( List L ); /* 输出链表；空链表将输出NULL */

// List Merge( List L1, List L2 );

int main()
{
    List L1, L2, L,C;
    int n;
    int a[200];
    L1 = Read(C,a,n);
    L2 = Read(C,a,n);
    L = Merge(L1, L2);
    Print(L);
    Print(L1);
    Print(L2);
    return 0;
}

/* 你的代码将被嵌在这里 */
List Read(List C,int a[],int n)
{
    List s,r;
    int x;
    C = (List*)malloc(sizeof(List));//给链表头结点分配空间
    C->Next = NULL;
    r = C;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&x);
        a[i] = x;
        s = (List *)malloc(sizeof(List));
        s->Data = a[i];
        r->Next = s;
        r = r->Next;
    }
    r->Next = NULL;
}
void Print( List L )
{
    List t = L->Next;
    if(t != NULL)
    {
        printf("%d\n",t->Data);
        t = t->Next;
    }

}
