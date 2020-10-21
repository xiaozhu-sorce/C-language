#include<stdio.h>
int main (){
    int n,i;
    printf("显示多少个×："); scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        if (i%5)
        {
          putchar('*');
        }
        else
        {
            puts("*");
        }
        
    }
    return 0;
}