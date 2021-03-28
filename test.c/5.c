//泰波那契序列Tn定义如下:T0=0, T1=1, T2=1, 且在 n>=0的条件下 T(n+3)=Tn+T(n+1)+T(n+2)给你整数n，请返回第 n 个泰波那契数 Tn 的值。
#include<stdio.h>
int tribonacci(int n){
    int a = 0;
    int b = 1;
    int c = 1;
    if(n == 0)
    {
        return a;        
    }else if(n == 1)
    {            
        return b;
    }else if(n == 2)
    {
        return c;
    }

    for(int i = 3; i <= n; i++)
    {
        int tmp = a+b+c;
        a = b;
        b = c;
        c = tmp;
    }

    return c;   
}

int tri(int n){
    if (n==0)
    {
        return 0;
    }else if(n==1||n==2){
        return 1;
    }
    return tri(n-1)+tri(n-2)+tri(n-3);
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",tribonacci(n));
    printf("%d\n",tri(n));
    return 0;
}