/*绝对值排序*//*输入n（n <= 100）个整数，按照绝对值从大到小排序后输出。*/
#include<stdio.h>
#include<math.h>
int  abs(int n){
    if (n<0)
    {
        n=-n;
    }
    return n;   
}
int main (void){
    int i,k,n,temp,j;
    int c[100];

    while (scanf("%d",&n)&&n!=0)
    {
    for ( i = 0; i < n; i++)
    {
        printf("c[%d]",i); scanf("%d",&c[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
        for ( j = n-1; j > i; j--)
        {
        if (abs(c[j-1])<abs(c[j]))
        {
            temp=c[j-1];
            c[j-1]=c[j];
            c[j]=temp;
        }
        }
    
    }

    for ( i = 0; i < n; i++)
    {
        printf("%d",c[i]);
    }    
    }
}