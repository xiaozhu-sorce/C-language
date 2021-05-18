#include<stdio.h>
void main(){
	int x,m,n,a,b,c,d,i,j;
	int num[4]={0};
	int temp;
	while(1){ //判断是否输入格式是否正确
		m=0;
		printf("请输入四位正整数：");
		scanf("%d",&x);
		n=x;
		while(n){
			n/=10;
			m++;
		}
		if (m != 4){
			printf("输入格式有误，请重新输入。\n");
		}else{
			break;
		}
	}
	for(i=0;i<4;i++){
		num[i]=x%10;
		x/=10;
	}
	printf("逆向排列为：");
	for(i=0;i<4;i++){
		printf("%d",num[i]);
	}

	printf("\n从大到小为：");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3-i; j++){
            if(num[j] > num[j+1]){
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
		printf("%d",num[3-i]);
	}
	printf("\n从小到大为：");
	for(i=0;i<4;i++){
		printf("%d",num[i]);
	}
}
