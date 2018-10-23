#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(List C); /* 读入有序链表 */
void Print( List L ); /* 输出链表；空链表将输出NULL */

// List Merge( List L1, List L2 );

int main()
{
    List L1, L2, L,C;
    int n;
    int a[200];
    L1 = Read(C);
    //L2 = Read(C);
    //L = Merge(L1, L2);
    //Print(L);
    Print(L1);
    //Print(L2);
    return 0;
}

/* 你的代码将被嵌在这里 */
List Read(List C)
{
    struct Node *s;
    int x,n;
    C = (struct Node*)malloc(sizeof(struct Node));//给链表头结点分配空间
    C->Next = NULL;
    scanf("%d",&n);
    scanf("%d",&x);
    for(int i=1; i<n; i++)
    {
        s = (struct Node*)malloc(sizeof(struct Node));
        s->Data = x;
        s->Next = C->Next;
        C->Next = s;
        scanf("%d", &x);
    }
    return C;
}
void Print( List L )
{
    List t = L->Next;
    if(t != NULL)
    {
        printf("%d\n",t->Data);
        t = t->Next;
    }
    else
    {
        printf("NULL\n");
    }

}
