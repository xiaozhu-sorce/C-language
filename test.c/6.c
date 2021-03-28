#include <stdio.h>
int pow(int x,int y){
    int a=1,i;
    for ( i = 0; i < y; i++)
    {
        a+=a*x;
    }
    return a;
}
int main (void)
{
	int n,x;
	int tmp = 0;
	int a = 0;
	int i;
	scanf("%d",&n);
	x = n;
	while(x){                     //数出n的位数 
		x /= 10;
		a++;
	}
	while(1){
		tmp = 0; 
		x = n;
		for( i = a ; i > 0 ; i--){              //输出n取逆的数 
			tmp += x % 10  * pow(10,i - 1);
			x /= 10;
		}  
		if( tmp == n)
			break;
		n++;
	}
	printf("%d",tmp);
	
	return 0;
}
