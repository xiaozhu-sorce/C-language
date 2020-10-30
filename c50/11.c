//浙江桐乡乌镇共有n个人,请找出该镇上的前m个大富翁.
#include<stdio.h>
#define swap(a,b) int t=a;a=b;b=a;
int main (void){
    int n,m,i,j;
    int a[1000];
    while (scanf("%d%d",&n,&m)!=EOF&&n!=0&&m!=0){
        for ( i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        for ( i = 0; i < n; i++)
        {
            for ( j =n; j > 0; j--)
            {
                if (a[i]<a[i+1])
                {
                  swap(a[i],a[i+1]);  
                }   
            }
        }
        for ( i = 0; i < m; i++)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;   
}