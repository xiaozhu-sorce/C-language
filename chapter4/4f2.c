/*---输入两个数，计算出它们之间所有的整数的和---*/
 
#include <stdio.h>
 
int main(void)
{
	int a, b, sum=0, min, max;
	
	puts("请输入两个整数。");
	printf("整数a：");	scanf("%d",&a);
	
	printf("整数b：");	scanf("%d",&b); 
	
	(a>b)?(max = a)&&(min = b):(min = a)&&(max = b);
	
	do {
		sum+=min;
	} while(min++ != max);
	
	(a>b)?(max = a)&&(min = b):(min = a)&&(max = b);
	
	printf("大于等于%d小于等于%d的所有整数的和是%d",min,max,sum);
	
	return 0;
 } 
