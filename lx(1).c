//生成小于1000的水仙花数
#include<stdio.h>
int main (){
    int i,a,b,c,d;
    for ( i = 1; i <= 999; i++)
    {
        a=i/100;
        b=(i-(a*100))/10;
        c=i-(a*100)-(10*b);
        d=(a*a*a+b*b*b+c*c*c);
        if (i==d)
        {
            printf("%d\t",i);
        }
        
    }
    return 0;
}