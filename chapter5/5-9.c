#include <stdio.h>

#define NUMBER	80		

int main(void)
{
	int i, j;
	int num,max;				
	int tensu[NUMBER];		
	int bunpu[11] = {0};	

	printf("请输入学生人数：");

	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("\a 请输入1~%d 的数：", NUMBER);
	} while (num < 1 || num > NUMBER);

	printf("请输入%d 人的分数。\n", num);

	for (i = 0; i < num; i++) {
		printf("%2d号：", i + 1);
		do {
			scanf("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100)
				printf("\a请输入1~100 的数：");
		} while (tensu[i] < 0 || tensu[i] > 100);
		bunpu[tensu[i] / 10]++;
	}
    max=bunpu[0];
	for ( i = 0; i < 11; i++)
	{
	if (max<bunpu[i])
	 max=bunpu[i];
		
	}
	
	for (j = max; j>0 ; j--) {
		for ( i = 0; i < 11; i++)
		{
			if (bunpu[i]>=j)
			printf(" * ");
			else
			printf("   ");
		}
	
	printf("\n");
		
	}		
	printf("---------------------------------");
	printf("\n");
	for ( i = 0; i < 11; i++)
	{
		printf("%3d",i*10);
	}
	
	return 0;
}