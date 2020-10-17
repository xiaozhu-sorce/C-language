/*---连续显示*，总个数等于所输入的整数值。---*/

#include <stdio.h>

int main(void)
{
	int a, b = 1;
	
	printf("正整数：");
	scanf("%d",&a);
	
	while (a>=b){
		puts("*");
        b++;
	}
	
	return 0;
 } 
