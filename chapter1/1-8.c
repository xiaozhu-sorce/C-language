#include<stdio.h>
int main (void)
{
  int n1,n2;
  puts("请输入两个整数。");
  printf("整数1:\n"); scanf("%d",&n1);
  printf("整数2:\n") ; scanf("%d",&n2);
  printf("它们的乘积是%d",n1*n2);
  return 0;
}