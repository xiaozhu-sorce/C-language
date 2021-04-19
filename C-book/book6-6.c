/*
 *根据泰勒公式sin(x)=```，当对应的sinx<1e-5时，求对应的sinx和累计项的项数
 */
#include <stdio.h>
void main(void)
{
    int i,j,x,num=0;
    double n=1 ,sum=0;
    scanf("%d" ,&x);
    for(i=1;n>=1e-5;i+=2){
        n=1;
        for(j=i;j>0;j--)
            n*=( double)x/j;
        if(num%2==0){
            sum+=n;num++;}
        else{
            sum-=n;num++;}
    }
printf("%lf %d",sum,num+1); 
}
