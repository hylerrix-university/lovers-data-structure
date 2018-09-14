/*
1-理解预处理:*.c文件-->*.i文件
$: gcc -o helloworld.i helloworld.c -E(-E指的是只生成helloworld.i文件)



*/
#include <stdio.h>
#define R 10
#define N(n) n*10 //宏定义扩展1
#define ADD(a,b) (a+b) //宏定义扩展2
int main() {
    int a = R;
    int b[R];
    int c = N(a);
    printf("hello,world\n");
    printf("a=%d\n",a);
    printf("%d",c);
    int d = ADD(a,b);
    printf("d=%d",d);
    int e = ADD(a,b);
    printf("e=%d",e);
    int f = (a+c) * (a+d);
    return 0;
}
