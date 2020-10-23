#include<stdio.h>
int main(void){
    int i,n,sum=1;
    printf("求几的阶乘："); scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        sum=i*sum;
    }
    printf("%d的阶乘是%d",n,sum);
    return 0;
}