#include<stdio.h>
void main(){
	int n,sum,i,j,count;
	int flag = 0;
	scanf("%d",&n);
	for (i=1;i<n*n*n/2;i+=2){
		sum = 0;
		count = 0;
		for (j=i;sum<n*n*n;j+=2){
			sum += j;
			count++;
		}
		if (sum == n*n*n){
			flag = 1;
			break;
		}
	}
	if (flag){
		printf("n^3 = ");
		for (j=0;j<count;j++){
			printf(j==count-1?"%d\n":"%d + ",i);
			i+=2;
		}
		printf("\n");
	}
}