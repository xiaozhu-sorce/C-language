#include<stdio.h>
int main (void){
    int n1,n2,num;
    puts("请输入两个整数。");
    printf("整数A："); scanf("%d",&n1);
    printf("整数B："); scanf("%d",&n2);
    num=n1-n2;
    if (num>=-10||num<=10)
    {
        printf("他们的差小于等于10。");
    }
    else
    {
        printf("他们的差大于等于11");
    }
    return 0;


}