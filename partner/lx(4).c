#include<stdio.h>
int main (){
    int a[3][3];
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j< 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        putchar('\n');
    }
    for ( i = 1; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d",a[i][j]);
        }
        putchar('\n');
    }
    for (i = 0; i < 3; i++)
    {
        printf("%d",a[0][i]);
    }
    
    return 0;
}