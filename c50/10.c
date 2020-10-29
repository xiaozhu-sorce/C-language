/*假设一个班有n（n <= 50）个学生，每人考m（m <= 5）门课，求每个学生的平均成绩和每门课的平均成绩，并输出各科成绩均大于等于平均成绩的学生数量。*/
#include <stdio.h>
int main()
{
    int n,m; //假设2113一个班有n(n<=50)个学生，每人考5261m(m<=5)门课
    while(scanf("%d%d",&n,&m))
    {
        int a[n][m];
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }//输入每个学生的各科成绩 
         
        for(i=0;i<n;i++)// n个学生的平均成绩
        {
            double sum = 0;
            for(j=0;j<m;j++)
            {
                sum += a[i][j];
            }
            printf("%.2lf",sum/m);
            if(i<n-1)//最后一个数据后换行 
            printf(" ");
            else
            printf("\n");
        }
         
        double sub_ave[m];//各个科目的平均成绩 
         
        for(j=0;j<m;j++)//m门课的平均成绩
        {
            double sum = 0;
            for(i=0;i<n;i++)
            {
                sum += a[i][j];
            }
            sub_ave[j] = sum/n;
            printf("%.2lf",sum/n);
            if(j<m-1)//最后一个数据后换行
            printf(" ");
            else
            printf("\n");
        }
         
        int num=0;//全过及格线的人数 
         
        for(i=0;i<n;i++)
        {
            int p=0;
            for(j=0;j<m;j++)
            {
                if(a[i][j] >= sub_ave[j])
                p++;
            }
            if(p==m)
            num++; 
        }
         
        printf("%d\n\n",num);
         
    }
 }
