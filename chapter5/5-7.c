#include<stdio.h>
#define NUMBER 100
int main ()
{
    int i,j,a;
    int X[NUMBER];
    printf("数据个数：");
    do
        {
        scanf("%2d",&a);
           if (a<1||a>NUMBER)
           {
               printf("\a请输入1-%d的数。",NUMBER);
           }
        
        } while (a<1||a>NUMBER);
    
    for ( i = 0; i < a; i++)
    {
        printf("%d号：",i+1); scanf("%d",&X[NUMBER]);
    }
    printf("{");
    for ( j = 0; j < a; j++)
    {
        if (j==a-1)
            printf("%d",X[NUMBER]);
        else
            printf("%d，",X[NUMBER]);
    }
    printf ("}");
    return 0;
}