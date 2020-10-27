/*(if判断）输入三个实数，判断组成三角形形状。若为正三角形则输出1，为等腰三角形则输出2，为任意三角形则输出3，不能构成三角形则输出0*/
#include<stdio.h>
int main (void){
    int a,b,c;
    printf("输入三边长：\n"); scanf("%d %d %d",&a,&b,&c);
    while (a+b>c&&a+c>b&&b+c>a) 
    {  
         if (a=b=c)
         {
         printf("1");break;
         }
         else if (a==b!=c||b==c!=a||a==c!=b)
         {
           printf("2");break;
         }
         printf("3");
    }
    if (a+b<c||a+c<b||b+c<a)
    {
         printf("0");
    }
    
}