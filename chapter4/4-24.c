#include<stdio.h>
int main (void){
    int i,j,n;
    puts("让我们来画一个金字塔。\n");
    printf("金字塔有几层："); scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = n-i; j >0; j--)
        {
            putchar(' ');
        }
        for ( j = 0; j < (i-1)*2+1; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}