#include<stdio.h>
int main (){
    int m,n,x,y,i,j,t,k,max,c,d,b=0;
    int a[1000][1000],sum[10000];
    while (scanf("%d",&t)!=EOF&&t!=0){
        for (k= 0; k < t; k++){
            scanf("%d%d%d%d",&m,&n,&x,&y);
            for ( i = 0; i <  m; i++){
                for (j = 0; j < n; j++)
                {
                    scanf("%d",&a[i][j]);
                }
                
            }
            for(i=0;i<m-x+1;i++)
            {
                for(j=0;j<n-y+1;j++)
                {
                    for(c=i;c<i+x;c++)
                    {
                        for(d=j;d<j+y;d++)
                        {
                             sum[b]+=a[c][d];
                        }
                    }
                    b=b+1;
                }
            }
        }
        max=sum[0];
        for(i=0;i<b;i++)
        {
            if(sum[i]>max)
            max=sum[i];
        }
           printf("\n%d",max);
    }
    return 0;
}