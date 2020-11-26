#include<stdio.h>
int main(){
    int a[3][3];
    int b[3][3];
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for ( i = 1; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            b[i-1][j]=a[i][j];
        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        b[2][i]=a[0][i];
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d",b[i][j]);
        }
    }
    return 0;
}