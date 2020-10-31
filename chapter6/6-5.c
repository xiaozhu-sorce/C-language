#include<stdio.h>
int sump(int n){
    int i,s=0;
    for ( i = 1; i < n+1; i++)
    {
        s+=i;
    }
    return s;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",sump(n));
    return 0;
}