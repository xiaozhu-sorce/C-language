#include <stdio.h>
#define NUM 7
int main(void){
	int i;
	int x[NUM];
    for (i = 0; i < NUM; i++) {
	printf("x[%d] : ", i);	
	scanf("%d", &x[i]);
	}
	for (i = 0; i < 3; i++) {		
	int temp = x[i];		
    x[i]     = x[NUM -1 - i];		
    x[NUM - i] = temp;
	}	
    puts("倒序排列了。");	
    for (i = 0; i < NUM; i++)		
	printf("x[%d] = %d\n", i, x[i]);
	return 0;
}
