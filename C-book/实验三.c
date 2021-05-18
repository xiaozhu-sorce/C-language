#include<stdio.h>
void main(){
	int x,n;
	int s=0;
	printf("请输入一个数字：");
	scanf("%d",&n);
	x=n;
	while(x){
		s=s*10+x%10;
		x/=10;
	}
	if (s==n){
		printf("该数字是回文数。");
	}else{
		printf("该数字不是回文数。");
	}
} 
