#include<stdio.h>
int main ()
{
    int n,count=0,i,a[100];
	scanf("%d",&n);
	while(1)					
	{
		a[count]=n%10;
        if (n<10)
        {
            a[count++]=n;
            break;
        }
        n=n/10;					
		count++;
	} 	
	for(i=0;i<count;i++)		
    {
        printf("%d",a[i]);
    }
	return 0;
}