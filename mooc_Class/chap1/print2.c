//使用递归的方法打印从1到N的数
#include <stdio.h>
void printN (int N);
int main() {
    int N;
    scanf("%d", &N);
    printN(N);
    return 0;
}
void printN (int N) {
    if(N) {
        printN(N-1);
        printf("%d\n", N);
    }
    return;
}