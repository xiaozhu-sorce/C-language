/*(switch语句)输入两门课的成绩，如果两门成绩都在60分以上。则输出“it is pass.”
只要有一门低于60分就输出“it is not pass.”
如果输入的任何一门成绩不在0-100范围内则输出“it is error.”。*/
#include<stdio.h>
int main (void)
{
    int a,b;
    printf("第一门课的成绩："); scanf("%d",&a);
    printf("第二门课的成绩："); scanf("%d",&b);
    if (0<=a<=100&&0<=b<=100)
    {
     switch (a/10)
      {
      case 6 :
      case 7 :
      case 8 :
      case 9 :
      case 10:  switch (b/10)
          {
          case 6 :
          case 7 :
          case 8 :
          case 9 : 
          case 10:printf("it is pass.");
              break;
          
          default: printf("it is not pass.");
              break;
          }
      default:   printf("it is  not pass.");break; 
      }
    }
    else
    {
        printf("it is error.");
    }
    
    return 0;
}