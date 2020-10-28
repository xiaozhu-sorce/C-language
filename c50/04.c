/*求两个正整数的最大公因子（欧几里德算法)*/
#include<stdio.h>
int main (void){
    int a,b;
    int r,temp;
    printf("正整数1："); scanf("%d",&a);
    printf("正整数2："); scanf("%d",&b);
    r=a%b;
    while (r)
    {
        a=b;
        b=r;
        r=a%b;
    }
    printf("最大公因子是：%d",b);
    return 0;
}