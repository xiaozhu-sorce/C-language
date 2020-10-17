#include<stdio.h>
int main ()
{
    int a,b,c,i;
    printf("开始数值（cm）："); scanf("%d",&a);
    printf("结束数值（cm）："); scanf("%d",&b);
    printf("间隔（cm）："); scanf("%d",&c);
    for(i=a;i<=b;i+=c)
        printf("%d cm   %.2fkg\n",i,(double)(i-100)*0.9);
    printf("\n");
    return 0;
}