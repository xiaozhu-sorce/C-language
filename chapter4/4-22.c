#include<stdio.h>
int main (void){
    int n,m,i,j,min,max;
    printf("让我们来画一个长方形。\n");
    printf("一边："); scanf("%d",&n);
    printf("另一边："); scanf("%d",&m);
    if (m>n)
    {
        min =n;max=m;
    }
    else
    {
        max=n;min=m;
    }
    for ( i = 0; i < min ; i++)
    {
        for ( j = 0; j < max ;j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
    
}