//令 Pi表示第i个素数。现任给两个正整数M≤N≤10^4，请输出P(M)到P(N)的所有素数。
#include<stdio.h>
int main ()
{
    int i,j,k,m=1,n;
    int p,q;
    int len=0;
    int a[10000];
    while (scanf("%d%d",&p,&q)!=EOF&&p!=0&&q!=0)
    {
        a[0]=2;
        for ( i = 2; i <= 10000; i++)
        {
            k=0;
           for ( j = 2; j < i; j++)
            {
                if (i%j==0)
                {
                    break;
                }
                k++;
            }
            if (k==i-2)
            {
                a[m++]=i;
            }
        }
        for ( i = p; i <= q; i++)
        {
            printf(" %d ",a[i]);
            len++;
            if (len%10==0)
            {
              putchar('\n');
            }
        }
    }
    return 0;
}