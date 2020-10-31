//对于一个给定的 N，请你寻找一个回文数 P，满足 P>N。 满足这样条件的回文数很多，你的任务是输出其中最小的一个。
#include<stdio.h>
int huiwen1(int n){
    int a,b;
    a=n%10;
    b=n/10;
    if (a==b)
    {
        return n;
    }
    else
    {
        return 0;
    }
    
}
int main(void){
    int  n,i;
    scanf("%d",&n);
    if (n>=0&&n<=10)
    {
        printf("%d",n+1);
    }
    if (n>10&&n<100)
    {
        for ( i = n+1; i < 100; i++)
        {
            if (huiwen1(i)!=0)
            {
               printf("%d",huiwen1(i)); break;
            }   
        }           
    }
    return 0;
}