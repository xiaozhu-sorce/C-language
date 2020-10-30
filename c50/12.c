//对给定的任一不超过 1000 的正整数 n，简单地数一下，需要多少步（砍几下）才能得到 n=1
#include<stdio.h>
int main (void){
    int n,i=0;
    do
    {
        printf("请输入一个小于1000的数");
        scanf("%d",&n);
    } while (n>1000);
    
    while (n!=1)
    {
         if (n%2)
        {
            n=(3*n+1)/2;
            i++;
        }
        else
        {
            n/=2;
            i++;
        }
    }
    printf("%d",i);
}