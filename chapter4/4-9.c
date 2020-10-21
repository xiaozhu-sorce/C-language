#include<stdio.h>
int main (){
    int a,b=1;
    printf("正整数："); scanf("%d",&a);
    while (a>=b)
    {
        if (b%2)
        {
            putchar('+');
        }
        else
        {
            putchar('-');
        }
        b++;
        
    }
    return 0;
}