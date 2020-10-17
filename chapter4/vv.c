#include <stdio.h>
int main(void)
{
    int sv,ev,gv;
    printf("开始数值（cm）：");
	scanf("%d",&sv);
	printf("结束数值（cm）：");
	scanf("%d",&ev);
	printf("间隔数值（cm）：");
	scanf("%d",&gv);
	while (sv<=ev)
	{
		printf("%dcm %.2fkg\n", sv,0.9*(sv-100));
		sv+=gv;
	}
	printf("\n");
	return 0;
}
