#include<stdio.h>
int main (void){
    double r=0.07;
    double p;
    p=(1+r)*(1+r)*(1+r)*(1+r)*(1+r)*(1+r)*(1+r)*(1+r)*(1+r)*(1+r);
    printf("倍数：%lf",p);
    return 0;
}