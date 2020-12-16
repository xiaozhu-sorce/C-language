//求10个数中的最大的偶数和最小的奇数的差,实现函数，求10个数中的最大的偶数和最小的奇数的差。
#include <stdio.h>

int compute (int array[]) {
    int min=1,max=0;
    int i;
    for ( i = 0; i < 10; i++)
    {
        if (array[i]%2)   
        {
            if (array[i]<min)
            {
                min=array[i];
            }
            
        }
        else
        {
            if (array[i]>max)
            {
                max=array[i];
            }
            
        }
    }
    return max-min;
  
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int res = compute(arr);
	printf("%d",res);
	return 0;
}