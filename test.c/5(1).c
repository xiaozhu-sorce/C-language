//泰波那契序列Tn定义如下:T0=0, T1=1, T2=1, 且在 n>=0的条件下 T(n+3)=Tn+T(n+1)+T(n+2)给你整数n，请返回第 n 个泰波那契数 Tn 的值。
#include<stdio.h>
int sum(int n){
    if (n==0)
    {
        return 0;
    }
    else if (n==1||n==2)
    {
        return 1;
    }
    else
    {
        return sum(n-1)+sum(n-2)+sum(n-3);
    }
}
int main(void){
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}