#include<stdio.h>
int main()
{
     int a,b;
     puts("请输入两个整数.");
     printf("整数x:"); scanf("%d",&a);
     printf("整数y:"); scanf("%f",&b);
     printf("x的值是y的%f%\n",(double)a*100/b);
return 0;
}