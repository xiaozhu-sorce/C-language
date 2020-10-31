#include<stdio.h>
#define max(x,y)  ((x>y)?x:y)
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("%d",max(max(a,b),max(c,d)));
    return 0;
}