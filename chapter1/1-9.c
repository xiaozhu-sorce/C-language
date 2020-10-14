#include<stdio.h>
int main (void)
{
  int n1,n2,n3;
  puts("请输入三个整数。");
  printf("整数1:\n"); scanf("%d",&n1);
  printf("整数2:\n"); scanf("%d",&n2);
  printf("整数3:\n"); scanf("%d",&n3);
  printf("它们的和是%d。",n1+n2+n3);
  return 0;
}