#include<stdio.h>
int main (){
    int i,n;
    printf("整数值："); scanf("%d",&n);
    for ( i = 1; i <=n; i+=2)
    {
        printf("%d ",i);
    }
    putchar('\n');
    return 0;
}