#include<stdio.h>
int main(){
    int m,n;
    int i,j;
    int a[100][100];
    int sum,av;
    scanf("%d%d",&m,&n);
    for ( i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for ( i = 0; i < m; i++)
    {
        int t=0;
        for (j = 0; j < n; j++)
        {
            t+=a[i][j];
        }
        printf(" %d ",t/n);
    }
    for ( i = 0; i < n; i++)
    {
        int t=0;
        for ( j = 0; j < m; j++)
        {
           t+=a[j][i];
        }
        printf(" %d ",t/m);
    }
    return 0;
}
    