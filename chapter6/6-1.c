#include<stdio.h>
int min2(int a,int b){
    return (a<b)?a:b;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("较小值为：%d",min2(a,b));
    return 0;
}