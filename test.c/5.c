//泰波那契序列Tn定义如下:T0=0, T1=1, T2=1, 且在 n>=0的条件下 T(n+3)=Tn+T(n+1)+T(n+2)给你整数n，请返回第 n 个泰波那契数 Tn 的值。
#include<stdio.h>
int main(){
    int a[1000];
    int i;    
    int n;
    a[0]=0;a[1]=a[2]=1;
    for ( i = 3; i < 1000; i++)
    {
        a[i]=a[i-1]+a[i-2]+a[i-3];
    }
    scanf("%d",&n);
    printf("%d",a[n]);
    return 0;
}