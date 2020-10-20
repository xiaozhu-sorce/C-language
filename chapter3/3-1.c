#include<stdio.h>
int main (void){
    int x,y;
    printf("整数A："); scanf("%d",&x);
    printf("整数B："); scanf("%d",&y);
    if (x/y)
    {
        puts("B不是A的约数。");
    }
    else
    {
        puts("B是A的约数");
    }
    return 0;
    
    
}