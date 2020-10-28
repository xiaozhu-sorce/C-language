/*青年歌手奖赛_评委员会打分,青年歌手奖状赛中，评委会给参赛选手打分。
选手规则为去掉一个最高分和一个最低分，然后计算平均得分，请编程输出某选手的比赛。*/
#include<stdio.h>
int main(void){
    int n,i,j,c;
    double num=0.00;
    int a[100];
    int temp;
    while (scanf("%d",&n)&&n!=0)
    {
        for ( i = 0; i < n; i++)
        {
            scanf("%d",&c);
            a[i]=c;
        }
        for ( i = 0; i < n-1; i++)
        {
            for ( j = n-1; j > 1; j--)
            {
               if (a[i]>a[i+1])
               {
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
               }
            }
        }
        for ( i = 2; i < n; i++)
        {
            num+=a[i];
        }
        printf("平均值：%0.2f",(double) num/(n-2.0));
    }
    return 0;
}