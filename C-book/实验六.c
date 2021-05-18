#include<stdio.h>
void main(){
	int a[20]={12,5,7,11,0,17,3,2,15,4},b[10]={32,25,27,31,45,37,23,6,35,1};
	int i,j;
	int temp;
    int minIndex;
	/*
	printf("请先输入a数组:");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("请再输入b数组:");
	for(i=0;i<10;i++){
		scanf("%d",&b[i]);
	}*/
	//冒泡排序
    for(i = 0; i < 10; i++){
        for(j = 0; j < 9-i; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
		printf("%d ",a[9-i]);
    }
	printf("\n");
	//选择排序
    for(i = 0; i<10; i++){
        minIndex = i;
        for(j = i; j<10; j++){
            if(b[j] < b[minIndex]){
                minIndex = j;
            }
        }
		temp = b[minIndex];
        b[minIndex] = b[i];
        b[i] = temp; 
    }
	for(i=0;i<10;i++){
		printf("%d ",b[9-i]);
	}

	printf("\n");
	for(i=0;i<10;i++){
		a[10+i]=b[i];
	}
	for(i = 0; i < 20; i++){
        for(j = 0; j < 19-i; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
		printf("%d ",a[19-i]);
    }
}