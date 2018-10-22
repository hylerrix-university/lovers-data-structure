/*
PTA作业题1:
复杂度1 最大子列和问题
给定K个整数组成的序列{ N1,N2,...,NK},“连续子列”被定义为{ Ni,Ni+1, ..., Nj}
​​其中 1≤i≤j≤K。“最大子列和”则被定义为所有连续子列元素的和中最大者。
本题旨在测试各种不同的算法在各种数据情况下的表现。各组测试数据特点如下：

数据1：与样例等价，测试基本正确性；
数据2：102个随机整数；
数据3：103个随机整数；
数据4：104个随机整数；
数据5：105个随机整数；
*/
#include <stdio.h>
int MaxSum (int A[], int K);
int main() {
    int K;
    scanf("%d",&K);
    int A[100000];
    for(int i=0; i< K; i++) {
        scanf("%d",&A[i]);
    }
    printf("%d\n",MaxSum(A,K));
    return 0;
}

int MaxSum (int A[], int K) {
    int i;
    int ThisSum,MaxSum;
    ThisSum = MaxSum = 0;
    for(i = 0; i< K; i++) {
        ThisSum += A[i];
        if(ThisSum > MaxSum) 
            MaxSum = ThisSum;
        else if(ThisSum < 0)
            ThisSum = 0;         
    }
    return MaxSum;
}

/*
scanf("%d ")%d后面加入空格为什么会循环输入
*/