//**请使用switch语句完成**：编写程序判断所给成绩的等级，等级划分如下： 0~59:      C   60~89:    B  90~100:  A
#include<stdio.h>
int main (void){
    int n;
    int x;
    scanf("%d",&n);
    if (n>=0&&n<=59)
    {
        x=0;
    }
    else if (n>=60&&n<=89)
    {
        x=1;
    }
    else if (n>=90&&n<=100)
    {
        x=2;
    }
    else 
    {
        puts("error");
    }
    
    
    switch (x)
    {
      case 0:puts("C"); break;
      case 1:puts("B"); break;
      case 2:puts("A"); break;
    default :puts("error");    break;
    }
    return 0;
}