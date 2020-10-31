#include<stdio.h>
int sqr(int x){
    return x*x;
}
int pow4(int x){
    return sqr(x)*sqr(x);
}
int main (){
    int n;
    scanf("%d",&n);
    printf("%d",pow4(n));
    return 0;
}