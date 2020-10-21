#include<stdio.h>
int main (){
    int no,i,j=1;
    printf("请输入一个整数："); scanf("%d",&no);
    for ( i = 1; i<=no; i++)
    {
        printf("%d",j);
        j++;
        if (j>10){
            j-=10;
    }
    }
    return 0;
}