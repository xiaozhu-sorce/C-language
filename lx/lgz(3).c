#include<stdio.h>
int main ()
{
    int i,j,m,num;
    scanf("%d",&num);
    for ( i = 1; i <=num; i++)
    {
        m=0;
        for ( j = 1; j < i; j++)
        {
            if (i%j==0)
            {
                m+=j;
            }
        }
        if (m==i)
        {
            printf("%d\n",i);
        }
        
        
    }
    return 0;
}