#include<stdio.h>
int main ()
{
    int a,i,num=0;
    printf("n的值："); scanf("%d",&a);
    printf("1到%d的",a); 
    for(i=1;i<=a;i++)
    num+=i;
    printf("和为%d",num);
    return 0;
}

