/*打印出1~100以内的素数，每五个数字一行。*/
#include<stdio.h>
int main (void){
    int i,j,r,len=01;
    printf(" 2 ");
    for ( i = 2; i < 101; i++)
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
        if (r)
        {
            printf(" %d ",i); len++;
        }
        
        if (len%5==0)
        {
            putchar('\n');
        }
        
    }
    return 0;
}