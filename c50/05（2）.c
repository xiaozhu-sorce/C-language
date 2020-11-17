//
#include<stdio.h>
int main (){
    int i,j,len=0;
    int a,r;
    scanf("%d",&a);
    for ( i = 100; i < a; i++)
    {
        r=0;
        for ( j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                break;
            }
            r++;
        }
        if (r==(i-2))
        {
            len++;
        }
        
    }
    printf("%d",len);
    return 0;
}