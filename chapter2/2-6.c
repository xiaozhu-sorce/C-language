#include<stdio.h>
int main ()
{
    int x;
    printf("请输入您的身高:"); scanf("%d",&x);
    printf("您的标准体重是:%.1f公斤",(double)(x-100)*0.9);
    return 0;
}