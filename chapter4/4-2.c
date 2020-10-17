#include<stdio.h>
int main ()
{
    int sum=0;
    int a,b,min,max;
    puts("请输入两个整数。");
    printf("整数a:"); scanf("%d",&a); 
    printf("整数b:"); scanf("%d",&b);
    (a>b)?(max = a)&&(min = b):(min = a)&&(max = b);
    do
    {
        sum+=min;
        min++;
    } while (min>b&&min>a);
    (a>b)?(max = a)&&(min = b):(min = a)&&(max = b);
    printf("大于等于%d小于等于%d有整数的和是%d。",min,max,sum);
}