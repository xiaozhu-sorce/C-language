#include<stdio.h>
int main (){
    int x=1;
    do
    {
        x=-1*x;
    } while (!x);
    printf("%d",x);
    return 0;
}