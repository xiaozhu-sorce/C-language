#include<stdio.h>
int min3(int a,int b,int c){
    return (((a<b)?a:b)<c)?((a<b)?a:b):c;
}
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("较小值为：%d",min3(a,b,c));
    return 0;
}