//输入两个整数a, b，输出两个数的余数，并以“a % b = c”的形式利用printf和puts两种输出方式输出。
#include<stdio.h>
int main(void){
    int a,b,t;
    scanf("%d %d",&a,&b);
    t=a%b;
    printf("%d %% %d=%d\n",a,b,t);
    return 0;
}