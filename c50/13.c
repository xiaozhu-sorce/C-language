//给定区间 [−2^31 ,2^31 ] 内的 3 个整数 A、B 和 C，请判断 A+B 是否大于 C。
#include<stdio.h>
int main (void){
    int i;
    for ( i = 0; i < 4; i++)
    {
        int a,b,d,c;
        scanf("%d%d%d",&a,&b,&c);
        d=a+b;
        if (d>c)
        {
            printf("Case #X: true");
        }
        else 
        {
            printf("Case #X: false");
        }
        
    }
    return 0;
}