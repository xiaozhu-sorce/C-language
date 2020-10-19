#include<stdio.h>
void alert(int n){
    while (n-->0)
    {
        printf("\a");
    }
}
int main ( )
 {
    int n;
    printf("响铃次数："); scanf("%d",&n);
    alert(n);
    return 0;
}
