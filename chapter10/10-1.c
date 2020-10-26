#include<stdio.h>
void adjust_point(int *n){
    if (*n<0)
    {
        *n=0;
    }
    if (*n>100)
    {
        *n=100;
    }
    
}
int main (void){
    int i,s[10];
    for ( i = 0; i < 10; i++)
    {
        printf("输入的值："); scanf("%d",&s[i]);
        adjust_point(&s[i]);
        printf("输出的值：%d\n",s[i]); 
    }
    return 0;
}