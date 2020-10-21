#include<stdio.h>
int main (){
    int n1,n2,n3;
    puts("请输入三个整数：");
    printf("整数A："); scanf("%d",&n1);
    printf("整数B："); scanf("%d",&n2);
    printf("整数C："); scanf("%d",&n3);
    if (n1==n2&&n2==n3)
    {
        printf("三个值都相等。");
    }
    else if (n1==n2||n2==n3||n1==n3)
    {
        printf("两个值相等。");
    }
    else
    {
        printf("三个值各不相等。");
    }
    return 0;
}