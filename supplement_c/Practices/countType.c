#include <stdio.h>
int main() {
    int x;
    int odd = 0   ;
    int even = 0;
    int cnt = 0;
    scanf("%d",&x);//此处要注意
    // while(x< 0 || x>100000){
    //     return -1;
    // }
    while(x != -1 && x>=0 && x<=100000) {
        scanf("%d",&x);
        if(x % 2 != 0)
        {
                odd++;
        }
        else 
        {
                even++;
        } 
}
    printf("%d %d\n",odd,even);
    return 0;
}