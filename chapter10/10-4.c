
#include<stdio.h>
#define NUM 5
 
void set_idx(int *v, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		v[i] = i;
	}
}
int main(void)
{
	int i;
	int a[NUM];
	set_idx(a,NUM);
	for (i = 0; i < NUM; i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	return 0;
}
