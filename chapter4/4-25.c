#include<stdio.h>
int main (void){
    int i,j,n;
    puts("让我们来画一个向下的金字塔。");
    printf("金字塔有几层：");  scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < i; j++)
        {
            putchar(' ');
        }
        for(j=0;j<2*(n-i-1)+1;j++)
        {
            printf("%d",(i+1)%10);
        }
        printf("\n");
    }
    return 0;
}