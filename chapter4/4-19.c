#include<stdio.h>
int main ()
{
    int a,n,i;
    printf("整数值："); scanf("%d",&n);
    for(i=1;i<=n;i++){
      if(n%i==0){
       printf("%d",i); a++;}
           }        
       printf("约数有%d个。",a);
    return 0;   
}