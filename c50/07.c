/*求奇数的乘积*//*给你n个整数，求他们中所有奇数的乘积。*/
#include<stdio.h>
int main()
{
	int n,c,i,sum;
	while(scanf("%d",&n)&&n!=0)
	{
		sum=1;
		for(i=0;i<n;i++)
		{
			scanf("%d",&c);
			if(c%2!=0)
			{
				sum*=c;
			}
		}
		printf("%d\n",sum);
    }
	return 0;
}
