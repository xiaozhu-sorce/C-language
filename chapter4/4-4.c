#include<stdio.h>
int main (){
    int no;
    printf("请输入一个正整数："); scanf("%d",&no);
    while (no>=1)
    {
        printf("%d",no--);
    }
    
    return 0;
    
}