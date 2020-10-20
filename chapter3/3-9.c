#include<stdio.h>
int main (void){
    int n1,n2,n3;
    puts("请输入两个整数。");
    printf("整数1："); scanf("%d",&n1);
    printf("整数2："); scanf("%d",&n2);
    printf("整数3："); scanf("%d",&n3);

    printf("最小值为：%d",((n1<n2?n1:n2)<n3)?(n1<n2?n1:n2):n3);
    return 0;

}