#include <stdio.h>
 
int main(void)
{
	int a, b, c,d,max;
	
	puts("请输入三个整数.");
	printf("整数a：");
	scanf("%d",&a);
	
	printf("整数b：");
	scanf("%d",&b);
	
	printf("整数c：");
	scanf("%d",&c);
	
	printf("整数d：");
	scanf("%d",&d);
	max = a;
	
	if(b > max)
		max = b;
	if(c > max)
		max = c;
	if(d > max)
        max = c;	
	printf("最大值为%d",max);
	
	return 0;
 } 
